/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#define NEW_SIMD_CODE

#define BLOCK_SIZE 16
#define KEY_LENGTH 32

#ifdef KERNEL_STATIC
#include "inc_vendor.h"
#include "inc_types.h"
#include "inc_platform.cl"
#include "inc_common.cl"
#include "inc_simd.cl"
#include "inc_cipher_aes.cl"
#include "inc_pkcs1_common.cl"
#endif  // KERNEL_STATIC

KERNEL_FQ void m24151_sxx (KERN_ATTR_VECTOR_ESALT (pkcs1_t))
{
  /**
   * base
   */

  const u64 gid = get_global_id (0);
  const u64 lid = get_local_id (0);
  const u64 lsz = get_local_size (0);

  if (gid >= gid_max) return;

  #ifdef REAL_SHM

  LOCAL_VK u32 data_len;
  data_len = esalt_bufs[digests_offset].data_len;

  LOCAL_VK u32 data[HC_PKCS1_MAX_DATA_LENGTH / 4];

  for (u32 i = lid; i <= data_len / 4; i += lsz)
  {
    data[i] = esalt_bufs[digests_offset].data[i];
  }

  LOCAL_VK u32 s_td0[256];
  LOCAL_VK u32 s_td1[256];
  LOCAL_VK u32 s_td2[256];
  LOCAL_VK u32 s_td3[256];
  LOCAL_VK u32 s_td4[256];

  LOCAL_VK u32 s_te0[256];
  LOCAL_VK u32 s_te1[256];
  LOCAL_VK u32 s_te2[256];
  LOCAL_VK u32 s_te3[256];
  LOCAL_VK u32 s_te4[256];

  for (u32 i = lid; i < 256; i += lsz)
  {
    s_td0[i] = td0[i];
    s_td1[i] = td1[i];
    s_td2[i] = td2[i];
    s_td3[i] = td3[i];
    s_td4[i] = td4[i];

    s_te0[i] = te0[i];
    s_te1[i] = te1[i];
    s_te2[i] = te2[i];
    s_te3[i] = te3[i];
    s_te4[i] = te4[i];
  }

  SYNC_THREADS ();

  #else

  const size_t data_len = esalt_bufs[digests_offset].data_len;
  u32 data[HC_PKCS1_MAX_DATA_LENGTH / 4];

  #ifdef _unroll
  #pragma unroll
  #endif
  for (u32 i = 0; i < data_len / 4; i++)
  {
    data[i] = esalt_bufs[digests_offset].data[i];
  }

  CONSTANT_AS u32a *s_td0 = td0;
  CONSTANT_AS u32a *s_td1 = td1;
  CONSTANT_AS u32a *s_td2 = td2;
  CONSTANT_AS u32a *s_td3 = td3;
  CONSTANT_AS u32a *s_td4 = td4;

  CONSTANT_AS u32a *s_te0 = te0;
  CONSTANT_AS u32a *s_te1 = te1;
  CONSTANT_AS u32a *s_te2 = te2;
  CONSTANT_AS u32a *s_te3 = te3;
  CONSTANT_AS u32a *s_te4 = te4;

  #endif  // REAL_SHM

  const u32 pw_len = pws[gid].pw_len;

  u32 salt_buf[16] = { 0 };
  u32 salt_iv[BLOCK_SIZE / 4], first_block[BLOCK_SIZE / 4];

  prep_buffers(salt_buf, salt_iv, first_block, data, &esalt_bufs[digests_offset]);

  u32x w[16] = { 0 };

  for (u32 i = 0, idx = 0; i < pw_len; i += 4, idx += 1)
  {
    w[idx] = pws[gid].i[idx];
  }

  u32x w0l = w[0];

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < il_cnt; il_pos += VECT_SIZE)
  {
    const u32x w0r = words_buf_r[il_pos / VECT_SIZE];
    const u32x w0 = w0l | w0r;

    w[0] = w0;

    u32x keys[HC_PKCS1_MAX_KEY_LENGTH / 4];

    generate_key_vector (salt_buf, w, pw_len, keys);

    for (u32 v_pos = 0; v_pos < VECT_SIZE; v_pos++)
    {
      u32 asn1_ok = 0, padding_ok = 0, plaintext_length, plaintext[BLOCK_SIZE / 4];
      u32 ciphertext[BLOCK_SIZE / 4], iv[BLOCK_SIZE / 4];
      u32 ks[60];
      u32 key[KEY_LENGTH / 4];

      for (u32 i = 0; i < KEY_LENGTH; i++)
      {
        key[i] = VECTOR_ELEMENT(keys[i], v_pos);
      }

      aes256_set_decrypt_key (ks, key, s_te0, s_te1, s_te2, s_te3, s_td0, s_td1, s_td2, s_td3);

      aes256_decrypt (ks, first_block, plaintext, s_td0, s_td1, s_td2, s_td3, s_td4);

      #ifdef _unroll
      #pragma unroll
      #endif
      for (u32 i = 0; i < BLOCK_SIZE / 4; i++)
      {
        plaintext[i] ^= salt_iv[i];
      }

      #ifdef DEBUG
      printf("First plaintext block:");
      for (u32 i = 0; i < BLOCK_SIZE / 4; i++) printf(" 0x%08x", plaintext[i]);
      printf("\n");
      #endif    // DEBUG

      if (data_len < 128)
      {
        asn1_ok = (plaintext[0] & 0x00ff80ff) == 0x00020030;
        plaintext_length = ((plaintext[0] & 0x00007f00) >> 8) + 2;
      }
      else if (data_len < 256)
      {
        asn1_ok = (plaintext[0] & 0xff00ffff) == 0x02008130;
        plaintext_length = ((plaintext[0] & 0x00ff0000) >> 16) + 3;
      }
      else if (data_len < 65536)
      {
        asn1_ok = ((plaintext[0] & 0x0000ffff) == 0x00008230) && ((plaintext[1] & 0x000000ff) == 0x00000002);
        plaintext_length = ((plaintext[0] & 0xff000000) >> 24) + ((plaintext[0] & 0x00ff0000) >> 8) + 4;
      }

      #ifdef DEBUG
      if (asn1_ok == 1) printf("Passed ASN.1 sanity check\n");
      #endif    // DEBUG

      if (asn1_ok == 0)
      {
        continue;
      }

      #ifdef _unroll
      #pragma unroll
      #endif
      for (u32 i = 0; i < BLOCK_SIZE / 4; i++)
      {
        iv[i] = first_block[i];
      }

      for (u32 i = BLOCK_SIZE / 4; i < data_len / 4; i += BLOCK_SIZE / 4)
      {
        #ifdef _unroll
        #pragma unroll
        #endif
        for (u32 j = 0; j < BLOCK_SIZE / 4; j++)
        {
          ciphertext[j] = data[i + j];
        }

        aes256_decrypt (ks, ciphertext, plaintext, s_td0, s_td1, s_td2, s_td3, s_td4);

        #ifdef _unroll
        #pragma unroll
        #endif
        for (u32 j = 0; j < BLOCK_SIZE / 4; j++)
        {
          plaintext[j] ^= iv[j];
          iv[j] = ciphertext[j];
        }

        #ifdef DEBUG
        printf("Plaintext block %u:", i / (BLOCK_SIZE / 4));
        for (u32 j = 0; j < BLOCK_SIZE / 4; j++) printf(" 0x%08x", plaintext[j]);
        printf("\n");
        #endif
      }

      u32 padding_count = (plaintext[BLOCK_SIZE / 4 - 1] & 0xff000000) >> 24;
      u8 *pt_bytes = (u8 *) plaintext;

      #ifdef DEBUG
      printf("Padding byte: 0x%02x\n", padding_count);
      #endif

      if (padding_count > BLOCK_SIZE || padding_count == 0)
      {
        // That *can't* be right
        padding_ok = 0;
      } else {
        padding_ok = 1;
      }

      for (u32 i = 0; i < padding_count; i++)
      {
        if (pt_bytes[BLOCK_SIZE - 1 - i] != padding_count)
        {
          padding_ok = 0;
          break;
        }
        plaintext_length++;
      }

      #ifdef DEBUG
      if (padding_ok == 1) printf("Padding checks out\n");
      if (plaintext_length == data_len) printf("ASN.1 sequence length checks out\n");
      #endif

      if (asn1_ok == 1 && padding_ok == 1 && plaintext_length == data_len)
      {
        if (atomic_inc (&hashes_shown[digests_offset]) == 0)
        {
          mark_hash (plains_buf, d_return_buf, salt_pos, digests_cnt, 0, digests_offset, gid, il_pos + v_pos, 0, 0);
        }
      }
    }
  }
}
