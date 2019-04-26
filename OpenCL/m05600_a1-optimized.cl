/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#define NEW_SIMD_CODE

#ifdef KERNEL_STATIC
#include "inc_vendor.h"
#include "inc_types.h"
#include "inc_platform.cl"
#include "inc_common.cl"
#include "inc_simd.cl"
#include "inc_hash_md4.cl"
#include "inc_hash_md5.cl"
#endif

typedef struct netntlm
{
  u32 user_len;
  u32 domain_len;
  u32 srvchall_len;
  u32 clichall_len;

  u32 userdomain_buf[64];
  u32 chall_buf[256];

} netntlm_t;

DECLSPEC void hmac_md5_pad (u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *ipad, u32x *opad)
{
  w0[0] = w0[0] ^ 0x36363636;
  w0[1] = w0[1] ^ 0x36363636;
  w0[2] = w0[2] ^ 0x36363636;
  w0[3] = w0[3] ^ 0x36363636;
  w1[0] = w1[0] ^ 0x36363636;
  w1[1] = w1[1] ^ 0x36363636;
  w1[2] = w1[2] ^ 0x36363636;
  w1[3] = w1[3] ^ 0x36363636;
  w2[0] = w2[0] ^ 0x36363636;
  w2[1] = w2[1] ^ 0x36363636;
  w2[2] = w2[2] ^ 0x36363636;
  w2[3] = w2[3] ^ 0x36363636;
  w3[0] = w3[0] ^ 0x36363636;
  w3[1] = w3[1] ^ 0x36363636;
  w3[2] = w3[2] ^ 0x36363636;
  w3[3] = w3[3] ^ 0x36363636;

  ipad[0] = MD5M_A;
  ipad[1] = MD5M_B;
  ipad[2] = MD5M_C;
  ipad[3] = MD5M_D;

  md5_transform_vector (w0, w1, w2, w3, ipad);

  w0[0] = w0[0] ^ 0x6a6a6a6a;
  w0[1] = w0[1] ^ 0x6a6a6a6a;
  w0[2] = w0[2] ^ 0x6a6a6a6a;
  w0[3] = w0[3] ^ 0x6a6a6a6a;
  w1[0] = w1[0] ^ 0x6a6a6a6a;
  w1[1] = w1[1] ^ 0x6a6a6a6a;
  w1[2] = w1[2] ^ 0x6a6a6a6a;
  w1[3] = w1[3] ^ 0x6a6a6a6a;
  w2[0] = w2[0] ^ 0x6a6a6a6a;
  w2[1] = w2[1] ^ 0x6a6a6a6a;
  w2[2] = w2[2] ^ 0x6a6a6a6a;
  w2[3] = w2[3] ^ 0x6a6a6a6a;
  w3[0] = w3[0] ^ 0x6a6a6a6a;
  w3[1] = w3[1] ^ 0x6a6a6a6a;
  w3[2] = w3[2] ^ 0x6a6a6a6a;
  w3[3] = w3[3] ^ 0x6a6a6a6a;

  opad[0] = MD5M_A;
  opad[1] = MD5M_B;
  opad[2] = MD5M_C;
  opad[3] = MD5M_D;

  md5_transform_vector (w0, w1, w2, w3, opad);
}

DECLSPEC void hmac_md5_run (u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *ipad, u32x *opad, u32x *digest)
{
  digest[0] = ipad[0];
  digest[1] = ipad[1];
  digest[2] = ipad[2];
  digest[3] = ipad[3];

  md5_transform_vector (w0, w1, w2, w3, digest);

  w0[0] = digest[0];
  w0[1] = digest[1];
  w0[2] = digest[2];
  w0[3] = digest[3];
  w1[0] = 0x80;
  w1[1] = 0;
  w1[2] = 0;
  w1[3] = 0;
  w2[0] = 0;
  w2[1] = 0;
  w2[2] = 0;
  w2[3] = 0;
  w3[0] = 0;
  w3[1] = 0;
  w3[2] = (64 + 16) * 8;
  w3[3] = 0;

  digest[0] = opad[0];
  digest[1] = opad[1];
  digest[2] = opad[2];
  digest[3] = opad[3];

  md5_transform_vector (w0, w1, w2, w3, digest);
}

KERNEL_FQ void m05600_m04 (KERN_ATTR_ESALT (netntlm_t))
{
  /**
   * modifier
   */

  const u64 gid = get_global_id (0);
  const u64 lid = get_local_id (0);
  const u64 lsz = get_local_size (0);

  /**
   * salt
   */

  LOCAL_AS u32 s_userdomain_buf[64];

  for (u32 i = lid; i < 64; i += lsz)
  {
    s_userdomain_buf[i] = esalt_bufs[digests_offset].userdomain_buf[i];
  }

  LOCAL_AS u32 s_chall_buf[256];

  for (u32 i = lid; i < 256; i += lsz)
  {
    s_chall_buf[i] = esalt_bufs[digests_offset].chall_buf[i];
  }

  SYNC_THREADS ();

  if (gid >= gid_max) return;

  const u32 userdomain_len = esalt_bufs[digests_offset].user_len
                           + esalt_bufs[digests_offset].domain_len;

  const u32 chall_len = esalt_bufs[digests_offset].srvchall_len
                      + esalt_bufs[digests_offset].clichall_len;

  /**
   * base
   */

  u32 pw_buf0[4];
  u32 pw_buf1[4];

  pw_buf0[0] = pws[gid].i[0];
  pw_buf0[1] = pws[gid].i[1];
  pw_buf0[2] = pws[gid].i[2];
  pw_buf0[3] = pws[gid].i[3];
  pw_buf1[0] = pws[gid].i[4];
  pw_buf1[1] = pws[gid].i[5];
  pw_buf1[2] = pws[gid].i[6];
  pw_buf1[3] = pws[gid].i[7];

  const u32 pw_l_len = pws[gid].pw_len & 63;

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < il_cnt; il_pos += VECT_SIZE)
  {
    const u32x pw_r_len = pwlenx_create_combt (combs_buf, il_pos) & 63;

    const u32x pw_len = (pw_l_len + pw_r_len) & 63;

    /**
     * concat password candidate
     */

    u32x wordl0[4] = { 0 };
    u32x wordl1[4] = { 0 };
    u32x wordl2[4] = { 0 };
    u32x wordl3[4] = { 0 };

    wordl0[0] = pw_buf0[0];
    wordl0[1] = pw_buf0[1];
    wordl0[2] = pw_buf0[2];
    wordl0[3] = pw_buf0[3];
    wordl1[0] = pw_buf1[0];
    wordl1[1] = pw_buf1[1];
    wordl1[2] = pw_buf1[2];
    wordl1[3] = pw_buf1[3];

    u32x wordr0[4] = { 0 };
    u32x wordr1[4] = { 0 };
    u32x wordr2[4] = { 0 };
    u32x wordr3[4] = { 0 };

    wordr0[0] = ix_create_combt (combs_buf, il_pos, 0);
    wordr0[1] = ix_create_combt (combs_buf, il_pos, 1);
    wordr0[2] = ix_create_combt (combs_buf, il_pos, 2);
    wordr0[3] = ix_create_combt (combs_buf, il_pos, 3);
    wordr1[0] = ix_create_combt (combs_buf, il_pos, 4);
    wordr1[1] = ix_create_combt (combs_buf, il_pos, 5);
    wordr1[2] = ix_create_combt (combs_buf, il_pos, 6);
    wordr1[3] = ix_create_combt (combs_buf, il_pos, 7);

    if (combs_mode == COMBINATOR_MODE_BASE_LEFT)
    {
      switch_buffer_by_offset_le_VV (wordr0, wordr1, wordr2, wordr3, pw_l_len);
    }
    else
    {
      switch_buffer_by_offset_le_VV (wordl0, wordl1, wordl2, wordl3, pw_r_len);
    }

    u32x w0[4];
    u32x w1[4];
    u32x w2[4];
    u32x w3[4];

    w0[0] = wordl0[0] | wordr0[0];
    w0[1] = wordl0[1] | wordr0[1];
    w0[2] = wordl0[2] | wordr0[2];
    w0[3] = wordl0[3] | wordr0[3];
    w1[0] = wordl1[0] | wordr1[0];
    w1[1] = wordl1[1] | wordr1[1];
    w1[2] = wordl1[2] | wordr1[2];
    w1[3] = wordl1[3] | wordr1[3];
    w2[0] = wordl2[0] | wordr2[0];
    w2[1] = wordl2[1] | wordr2[1];
    w2[2] = wordl2[2] | wordr2[2];
    w2[3] = wordl2[3] | wordr2[3];
    w3[0] = wordl3[0] | wordr3[0];
    w3[1] = wordl3[1] | wordr3[1];
    w3[2] = wordl3[2] | wordr3[2];
    w3[3] = wordl3[3] | wordr3[3];

    u32x w0_t[4];
    u32x w1_t[4];
    u32x w2_t[4];
    u32x w3_t[4];

    make_utf16le (w0, w0_t, w1_t);
    make_utf16le (w1, w2_t, w3_t);

    w3_t[2] = pw_len * 8 * 2;
    w3_t[3] = 0;

    u32x digest[4];

    digest[0] = MD4M_A;
    digest[1] = MD4M_B;
    digest[2] = MD4M_C;
    digest[3] = MD4M_D;

    md4_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);

    w0_t[0] = digest[0];
    w0_t[1] = digest[1];
    w0_t[2] = digest[2];
    w0_t[3] = digest[3];
    w1_t[0] = 0;
    w1_t[1] = 0;
    w1_t[2] = 0;
    w1_t[3] = 0;
    w2_t[0] = 0;
    w2_t[1] = 0;
    w2_t[2] = 0;
    w2_t[3] = 0;
    w3_t[0] = 0;
    w3_t[1] = 0;
    w3_t[2] = 0;
    w3_t[3] = 0;

    digest[0] = MD5M_A;
    digest[1] = MD5M_B;
    digest[2] = MD5M_C;
    digest[3] = MD5M_D;

    u32x ipad[4];
    u32x opad[4];

    hmac_md5_pad (w0_t, w1_t, w2_t, w3_t, ipad, opad);

    int left;
    int off;

    for (left = userdomain_len, off = 0; left >= 56; left -= 64, off += 16)
    {
      w0_t[0] = s_userdomain_buf[off +  0];
      w0_t[1] = s_userdomain_buf[off +  1];
      w0_t[2] = s_userdomain_buf[off +  2];
      w0_t[3] = s_userdomain_buf[off +  3];
      w1_t[0] = s_userdomain_buf[off +  4];
      w1_t[1] = s_userdomain_buf[off +  5];
      w1_t[2] = s_userdomain_buf[off +  6];
      w1_t[3] = s_userdomain_buf[off +  7];
      w2_t[0] = s_userdomain_buf[off +  8];
      w2_t[1] = s_userdomain_buf[off +  9];
      w2_t[2] = s_userdomain_buf[off + 10];
      w2_t[3] = s_userdomain_buf[off + 11];
      w3_t[0] = s_userdomain_buf[off + 12];
      w3_t[1] = s_userdomain_buf[off + 13];
      w3_t[2] = s_userdomain_buf[off + 14];
      w3_t[3] = s_userdomain_buf[off + 15];

      md5_transform_vector (w0_t, w1_t, w2_t, w3_t, ipad);
    }

    w0_t[0] = s_userdomain_buf[off +  0];
    w0_t[1] = s_userdomain_buf[off +  1];
    w0_t[2] = s_userdomain_buf[off +  2];
    w0_t[3] = s_userdomain_buf[off +  3];
    w1_t[0] = s_userdomain_buf[off +  4];
    w1_t[1] = s_userdomain_buf[off +  5];
    w1_t[2] = s_userdomain_buf[off +  6];
    w1_t[3] = s_userdomain_buf[off +  7];
    w2_t[0] = s_userdomain_buf[off +  8];
    w2_t[1] = s_userdomain_buf[off +  9];
    w2_t[2] = s_userdomain_buf[off + 10];
    w2_t[3] = s_userdomain_buf[off + 11];
    w3_t[0] = s_userdomain_buf[off + 12];
    w3_t[1] = s_userdomain_buf[off + 13];
    w3_t[2] = (64 + userdomain_len) * 8;
    w3_t[3] = 0;

    hmac_md5_run (w0_t, w1_t, w2_t, w3_t, ipad, opad, digest);

    w0_t[0] = digest[0];
    w0_t[1] = digest[1];
    w0_t[2] = digest[2];
    w0_t[3] = digest[3];
    w1_t[0] = 0;
    w1_t[1] = 0;
    w1_t[2] = 0;
    w1_t[3] = 0;
    w2_t[0] = 0;
    w2_t[1] = 0;
    w2_t[2] = 0;
    w2_t[3] = 0;
    w3_t[0] = 0;
    w3_t[1] = 0;
    w3_t[2] = 0;
    w3_t[3] = 0;

    digest[0] = MD5M_A;
    digest[1] = MD5M_B;
    digest[2] = MD5M_C;
    digest[3] = MD5M_D;

    hmac_md5_pad (w0_t, w1_t, w2_t, w3_t, ipad, opad);

    for (left = chall_len, off = 0; left >= 56; left -= 64, off += 16)
    {
      w0_t[0] = s_chall_buf[off +  0];
      w0_t[1] = s_chall_buf[off +  1];
      w0_t[2] = s_chall_buf[off +  2];
      w0_t[3] = s_chall_buf[off +  3];
      w1_t[0] = s_chall_buf[off +  4];
      w1_t[1] = s_chall_buf[off +  5];
      w1_t[2] = s_chall_buf[off +  6];
      w1_t[3] = s_chall_buf[off +  7];
      w2_t[0] = s_chall_buf[off +  8];
      w2_t[1] = s_chall_buf[off +  9];
      w2_t[2] = s_chall_buf[off + 10];
      w2_t[3] = s_chall_buf[off + 11];
      w3_t[0] = s_chall_buf[off + 12];
      w3_t[1] = s_chall_buf[off + 13];
      w3_t[2] = s_chall_buf[off + 14];
      w3_t[3] = s_chall_buf[off + 15];

      md5_transform_vector (w0_t, w1_t, w2_t, w3_t, ipad);
    }

    w0_t[0] = s_chall_buf[off +  0];
    w0_t[1] = s_chall_buf[off +  1];
    w0_t[2] = s_chall_buf[off +  2];
    w0_t[3] = s_chall_buf[off +  3];
    w1_t[0] = s_chall_buf[off +  4];
    w1_t[1] = s_chall_buf[off +  5];
    w1_t[2] = s_chall_buf[off +  6];
    w1_t[3] = s_chall_buf[off +  7];
    w2_t[0] = s_chall_buf[off +  8];
    w2_t[1] = s_chall_buf[off +  9];
    w2_t[2] = s_chall_buf[off + 10];
    w2_t[3] = s_chall_buf[off + 11];
    w3_t[0] = s_chall_buf[off + 12];
    w3_t[1] = s_chall_buf[off + 13];
    w3_t[2] = (64 + chall_len) * 8;
    w3_t[3] = 0;

    hmac_md5_run (w0_t, w1_t, w2_t, w3_t, ipad, opad, digest);

    COMPARE_M_SIMD (digest[0], digest[3], digest[2], digest[1]);
  }
}

KERNEL_FQ void m05600_m08 (KERN_ATTR_ESALT (netntlm_t))
{
}

KERNEL_FQ void m05600_m16 (KERN_ATTR_ESALT (netntlm_t))
{
}

KERNEL_FQ void m05600_s04 (KERN_ATTR_ESALT (netntlm_t))
{
  /**
   * modifier
   */

  const u64 gid = get_global_id (0);
  const u64 lid = get_local_id (0);
  const u64 lsz = get_local_size (0);

  /**
   * salt
   */

  LOCAL_AS u32 s_userdomain_buf[64];

  for (u32 i = lid; i < 64; i += lsz)
  {
    s_userdomain_buf[i] = esalt_bufs[digests_offset].userdomain_buf[i];
  }

  LOCAL_AS u32 s_chall_buf[256];

  for (u32 i = lid; i < 256; i += lsz)
  {
    s_chall_buf[i] = esalt_bufs[digests_offset].chall_buf[i];
  }

  SYNC_THREADS ();

  if (gid >= gid_max) return;

  const u32 userdomain_len = esalt_bufs[digests_offset].user_len
                           + esalt_bufs[digests_offset].domain_len;

  const u32 chall_len = esalt_bufs[digests_offset].srvchall_len
                      + esalt_bufs[digests_offset].clichall_len;

  /**
   * base
   */

  u32 pw_buf0[4];
  u32 pw_buf1[4];

  pw_buf0[0] = pws[gid].i[0];
  pw_buf0[1] = pws[gid].i[1];
  pw_buf0[2] = pws[gid].i[2];
  pw_buf0[3] = pws[gid].i[3];
  pw_buf1[0] = pws[gid].i[4];
  pw_buf1[1] = pws[gid].i[5];
  pw_buf1[2] = pws[gid].i[6];
  pw_buf1[3] = pws[gid].i[7];

  const u32 pw_l_len = pws[gid].pw_len & 63;

  /**
   * digest
   */

  const u32 search[4] =
  {
    digests_buf[digests_offset].digest_buf[DGST_R0],
    digests_buf[digests_offset].digest_buf[DGST_R1],
    digests_buf[digests_offset].digest_buf[DGST_R2],
    digests_buf[digests_offset].digest_buf[DGST_R3]
  };

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < il_cnt; il_pos += VECT_SIZE)
  {
    const u32x pw_r_len = pwlenx_create_combt (combs_buf, il_pos) & 63;

    const u32x pw_len = (pw_l_len + pw_r_len) & 63;

    /**
     * concat password candidate
     */

    u32x wordl0[4] = { 0 };
    u32x wordl1[4] = { 0 };
    u32x wordl2[4] = { 0 };
    u32x wordl3[4] = { 0 };

    wordl0[0] = pw_buf0[0];
    wordl0[1] = pw_buf0[1];
    wordl0[2] = pw_buf0[2];
    wordl0[3] = pw_buf0[3];
    wordl1[0] = pw_buf1[0];
    wordl1[1] = pw_buf1[1];
    wordl1[2] = pw_buf1[2];
    wordl1[3] = pw_buf1[3];

    u32x wordr0[4] = { 0 };
    u32x wordr1[4] = { 0 };
    u32x wordr2[4] = { 0 };
    u32x wordr3[4] = { 0 };

    wordr0[0] = ix_create_combt (combs_buf, il_pos, 0);
    wordr0[1] = ix_create_combt (combs_buf, il_pos, 1);
    wordr0[2] = ix_create_combt (combs_buf, il_pos, 2);
    wordr0[3] = ix_create_combt (combs_buf, il_pos, 3);
    wordr1[0] = ix_create_combt (combs_buf, il_pos, 4);
    wordr1[1] = ix_create_combt (combs_buf, il_pos, 5);
    wordr1[2] = ix_create_combt (combs_buf, il_pos, 6);
    wordr1[3] = ix_create_combt (combs_buf, il_pos, 7);

    if (combs_mode == COMBINATOR_MODE_BASE_LEFT)
    {
      switch_buffer_by_offset_le_VV (wordr0, wordr1, wordr2, wordr3, pw_l_len);
    }
    else
    {
      switch_buffer_by_offset_le_VV (wordl0, wordl1, wordl2, wordl3, pw_r_len);
    }

    u32x w0[4];
    u32x w1[4];
    u32x w2[4];
    u32x w3[4];

    w0[0] = wordl0[0] | wordr0[0];
    w0[1] = wordl0[1] | wordr0[1];
    w0[2] = wordl0[2] | wordr0[2];
    w0[3] = wordl0[3] | wordr0[3];
    w1[0] = wordl1[0] | wordr1[0];
    w1[1] = wordl1[1] | wordr1[1];
    w1[2] = wordl1[2] | wordr1[2];
    w1[3] = wordl1[3] | wordr1[3];
    w2[0] = wordl2[0] | wordr2[0];
    w2[1] = wordl2[1] | wordr2[1];
    w2[2] = wordl2[2] | wordr2[2];
    w2[3] = wordl2[3] | wordr2[3];
    w3[0] = wordl3[0] | wordr3[0];
    w3[1] = wordl3[1] | wordr3[1];
    w3[2] = wordl3[2] | wordr3[2];
    w3[3] = wordl3[3] | wordr3[3];

    u32x w0_t[4];
    u32x w1_t[4];
    u32x w2_t[4];
    u32x w3_t[4];

    make_utf16le (w0, w0_t, w1_t);
    make_utf16le (w1, w2_t, w3_t);

    w3_t[2] = pw_len * 8 * 2;
    w3_t[3] = 0;

    u32x digest[4];

    digest[0] = MD4M_A;
    digest[1] = MD4M_B;
    digest[2] = MD4M_C;
    digest[3] = MD4M_D;

    md4_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);

    w0_t[0] = digest[0];
    w0_t[1] = digest[1];
    w0_t[2] = digest[2];
    w0_t[3] = digest[3];
    w1_t[0] = 0;
    w1_t[1] = 0;
    w1_t[2] = 0;
    w1_t[3] = 0;
    w2_t[0] = 0;
    w2_t[1] = 0;
    w2_t[2] = 0;
    w2_t[3] = 0;
    w3_t[0] = 0;
    w3_t[1] = 0;
    w3_t[2] = 0;
    w3_t[3] = 0;

    digest[0] = MD5M_A;
    digest[1] = MD5M_B;
    digest[2] = MD5M_C;
    digest[3] = MD5M_D;

    u32x ipad[4];
    u32x opad[4];

    hmac_md5_pad (w0_t, w1_t, w2_t, w3_t, ipad, opad);

    int left;
    int off;

    for (left = userdomain_len, off = 0; left >= 56; left -= 64, off += 16)
    {
      w0_t[0] = s_userdomain_buf[off +  0];
      w0_t[1] = s_userdomain_buf[off +  1];
      w0_t[2] = s_userdomain_buf[off +  2];
      w0_t[3] = s_userdomain_buf[off +  3];
      w1_t[0] = s_userdomain_buf[off +  4];
      w1_t[1] = s_userdomain_buf[off +  5];
      w1_t[2] = s_userdomain_buf[off +  6];
      w1_t[3] = s_userdomain_buf[off +  7];
      w2_t[0] = s_userdomain_buf[off +  8];
      w2_t[1] = s_userdomain_buf[off +  9];
      w2_t[2] = s_userdomain_buf[off + 10];
      w2_t[3] = s_userdomain_buf[off + 11];
      w3_t[0] = s_userdomain_buf[off + 12];
      w3_t[1] = s_userdomain_buf[off + 13];
      w3_t[2] = s_userdomain_buf[off + 14];
      w3_t[3] = s_userdomain_buf[off + 15];

      md5_transform_vector (w0_t, w1_t, w2_t, w3_t, ipad);
    }

    w0_t[0] = s_userdomain_buf[off +  0];
    w0_t[1] = s_userdomain_buf[off +  1];
    w0_t[2] = s_userdomain_buf[off +  2];
    w0_t[3] = s_userdomain_buf[off +  3];
    w1_t[0] = s_userdomain_buf[off +  4];
    w1_t[1] = s_userdomain_buf[off +  5];
    w1_t[2] = s_userdomain_buf[off +  6];
    w1_t[3] = s_userdomain_buf[off +  7];
    w2_t[0] = s_userdomain_buf[off +  8];
    w2_t[1] = s_userdomain_buf[off +  9];
    w2_t[2] = s_userdomain_buf[off + 10];
    w2_t[3] = s_userdomain_buf[off + 11];
    w3_t[0] = s_userdomain_buf[off + 12];
    w3_t[1] = s_userdomain_buf[off + 13];
    w3_t[2] = (64 + userdomain_len) * 8;
    w3_t[3] = 0;

    hmac_md5_run (w0_t, w1_t, w2_t, w3_t, ipad, opad, digest);

    w0_t[0] = digest[0];
    w0_t[1] = digest[1];
    w0_t[2] = digest[2];
    w0_t[3] = digest[3];
    w1_t[0] = 0;
    w1_t[1] = 0;
    w1_t[2] = 0;
    w1_t[3] = 0;
    w2_t[0] = 0;
    w2_t[1] = 0;
    w2_t[2] = 0;
    w2_t[3] = 0;
    w3_t[0] = 0;
    w3_t[1] = 0;
    w3_t[2] = 0;
    w3_t[3] = 0;

    digest[0] = MD5M_A;
    digest[1] = MD5M_B;
    digest[2] = MD5M_C;
    digest[3] = MD5M_D;

    hmac_md5_pad (w0_t, w1_t, w2_t, w3_t, ipad, opad);

    for (left = chall_len, off = 0; left >= 56; left -= 64, off += 16)
    {
      w0_t[0] = s_chall_buf[off +  0];
      w0_t[1] = s_chall_buf[off +  1];
      w0_t[2] = s_chall_buf[off +  2];
      w0_t[3] = s_chall_buf[off +  3];
      w1_t[0] = s_chall_buf[off +  4];
      w1_t[1] = s_chall_buf[off +  5];
      w1_t[2] = s_chall_buf[off +  6];
      w1_t[3] = s_chall_buf[off +  7];
      w2_t[0] = s_chall_buf[off +  8];
      w2_t[1] = s_chall_buf[off +  9];
      w2_t[2] = s_chall_buf[off + 10];
      w2_t[3] = s_chall_buf[off + 11];
      w3_t[0] = s_chall_buf[off + 12];
      w3_t[1] = s_chall_buf[off + 13];
      w3_t[2] = s_chall_buf[off + 14];
      w3_t[3] = s_chall_buf[off + 15];

      md5_transform_vector (w0_t, w1_t, w2_t, w3_t, ipad);
    }

    w0_t[0] = s_chall_buf[off +  0];
    w0_t[1] = s_chall_buf[off +  1];
    w0_t[2] = s_chall_buf[off +  2];
    w0_t[3] = s_chall_buf[off +  3];
    w1_t[0] = s_chall_buf[off +  4];
    w1_t[1] = s_chall_buf[off +  5];
    w1_t[2] = s_chall_buf[off +  6];
    w1_t[3] = s_chall_buf[off +  7];
    w2_t[0] = s_chall_buf[off +  8];
    w2_t[1] = s_chall_buf[off +  9];
    w2_t[2] = s_chall_buf[off + 10];
    w2_t[3] = s_chall_buf[off + 11];
    w3_t[0] = s_chall_buf[off + 12];
    w3_t[1] = s_chall_buf[off + 13];
    w3_t[2] = (64 + chall_len) * 8;
    w3_t[3] = 0;

    hmac_md5_run (w0_t, w1_t, w2_t, w3_t, ipad, opad, digest);

    COMPARE_S_SIMD (digest[0], digest[3], digest[2], digest[1]);
  }
}

KERNEL_FQ void m05600_s08 (KERN_ATTR_ESALT (netntlm_t))
{
}

KERNEL_FQ void m05600_s16 (KERN_ATTR_ESALT (netntlm_t))
{
}
