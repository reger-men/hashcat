/**
 * Authors.....: Jens Steube <jens.steube@gmail.com>
 *               Gabriele Gristina <matrix@hashcat.net>
 *
 * License.....: MIT
 */

#define _PDF17L8_

#include "inc_vendor.cl"
#include "inc_hash_constants.h"
#include "inc_hash_functions.cl"
#include "inc_types.cl"
#include "inc_common.cl"

#define COMPARE_S "inc_comp_single.cl"
#define COMPARE_M "inc_comp_multi.cl"

typedef struct
{
  union
  {
    u32 dgst32[16];
    u64 dgst64[8];
  };

  u32 dgst_len;

  union
  {
    u32 W32[32];
    u64 W64[16];
  };

  u32 W_len;

} ctx_t;

__constant u32 k_sha256[64] =
{
  SHA256C00, SHA256C01, SHA256C02, SHA256C03,
  SHA256C04, SHA256C05, SHA256C06, SHA256C07,
  SHA256C08, SHA256C09, SHA256C0a, SHA256C0b,
  SHA256C0c, SHA256C0d, SHA256C0e, SHA256C0f,
  SHA256C10, SHA256C11, SHA256C12, SHA256C13,
  SHA256C14, SHA256C15, SHA256C16, SHA256C17,
  SHA256C18, SHA256C19, SHA256C1a, SHA256C1b,
  SHA256C1c, SHA256C1d, SHA256C1e, SHA256C1f,
  SHA256C20, SHA256C21, SHA256C22, SHA256C23,
  SHA256C24, SHA256C25, SHA256C26, SHA256C27,
  SHA256C28, SHA256C29, SHA256C2a, SHA256C2b,
  SHA256C2c, SHA256C2d, SHA256C2e, SHA256C2f,
  SHA256C30, SHA256C31, SHA256C32, SHA256C33,
  SHA256C34, SHA256C35, SHA256C36, SHA256C37,
  SHA256C38, SHA256C39, SHA256C3a, SHA256C3b,
  SHA256C3c, SHA256C3d, SHA256C3e, SHA256C3f,
};

void sha256_transform (const u32 w0[4], const u32 w1[4], const u32 w2[4], const u32 w3[4], u32 digest[8])
{
  u32 a = digest[0];
  u32 b = digest[1];
  u32 c = digest[2];
  u32 d = digest[3];
  u32 e = digest[4];
  u32 f = digest[5];
  u32 g = digest[6];
  u32 h = digest[7];

  u32 w0_t = swap32 (w0[0]);
  u32 w1_t = swap32 (w0[1]);
  u32 w2_t = swap32 (w0[2]);
  u32 w3_t = swap32 (w0[3]);
  u32 w4_t = swap32 (w1[0]);
  u32 w5_t = swap32 (w1[1]);
  u32 w6_t = swap32 (w1[2]);
  u32 w7_t = swap32 (w1[3]);
  u32 w8_t = swap32 (w2[0]);
  u32 w9_t = swap32 (w2[1]);
  u32 wa_t = swap32 (w2[2]);
  u32 wb_t = swap32 (w2[3]);
  u32 wc_t = swap32 (w3[0]);
  u32 wd_t = swap32 (w3[1]);
  u32 we_t = swap32 (w3[2]);
  u32 wf_t = swap32 (w3[3]);

  #define ROUND256_EXPAND()                         \
  {                                                 \
    w0_t = SHA256_EXPAND (we_t, w9_t, w1_t, w0_t);  \
    w1_t = SHA256_EXPAND (wf_t, wa_t, w2_t, w1_t);  \
    w2_t = SHA256_EXPAND (w0_t, wb_t, w3_t, w2_t);  \
    w3_t = SHA256_EXPAND (w1_t, wc_t, w4_t, w3_t);  \
    w4_t = SHA256_EXPAND (w2_t, wd_t, w5_t, w4_t);  \
    w5_t = SHA256_EXPAND (w3_t, we_t, w6_t, w5_t);  \
    w6_t = SHA256_EXPAND (w4_t, wf_t, w7_t, w6_t);  \
    w7_t = SHA256_EXPAND (w5_t, w0_t, w8_t, w7_t);  \
    w8_t = SHA256_EXPAND (w6_t, w1_t, w9_t, w8_t);  \
    w9_t = SHA256_EXPAND (w7_t, w2_t, wa_t, w9_t);  \
    wa_t = SHA256_EXPAND (w8_t, w3_t, wb_t, wa_t);  \
    wb_t = SHA256_EXPAND (w9_t, w4_t, wc_t, wb_t);  \
    wc_t = SHA256_EXPAND (wa_t, w5_t, wd_t, wc_t);  \
    wd_t = SHA256_EXPAND (wb_t, w6_t, we_t, wd_t);  \
    we_t = SHA256_EXPAND (wc_t, w7_t, wf_t, we_t);  \
    wf_t = SHA256_EXPAND (wd_t, w8_t, w0_t, wf_t);  \
  }

  #define ROUND256_STEP(i)                                                                \
  {                                                                                       \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, a, b, c, d, e, f, g, h, w0_t, k_sha256[i +  0]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, h, a, b, c, d, e, f, g, w1_t, k_sha256[i +  1]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, g, h, a, b, c, d, e, f, w2_t, k_sha256[i +  2]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, f, g, h, a, b, c, d, e, w3_t, k_sha256[i +  3]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, e, f, g, h, a, b, c, d, w4_t, k_sha256[i +  4]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, d, e, f, g, h, a, b, c, w5_t, k_sha256[i +  5]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, c, d, e, f, g, h, a, b, w6_t, k_sha256[i +  6]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, b, c, d, e, f, g, h, a, w7_t, k_sha256[i +  7]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, a, b, c, d, e, f, g, h, w8_t, k_sha256[i +  8]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, h, a, b, c, d, e, f, g, w9_t, k_sha256[i +  9]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, g, h, a, b, c, d, e, f, wa_t, k_sha256[i + 10]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, f, g, h, a, b, c, d, e, wb_t, k_sha256[i + 11]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, e, f, g, h, a, b, c, d, wc_t, k_sha256[i + 12]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, d, e, f, g, h, a, b, c, wd_t, k_sha256[i + 13]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, c, d, e, f, g, h, a, b, we_t, k_sha256[i + 14]); \
    SHA256_STEP (SHA256_F0o, SHA256_F1o, b, c, d, e, f, g, h, a, wf_t, k_sha256[i + 15]); \
  }

  ROUND256_STEP (0);

  #ifdef _unroll
  #pragma unroll
  #endif
  for (int i = 16; i < 64; i += 16)
  {
    ROUND256_EXPAND (); ROUND256_STEP (i);
  }

  digest[0] += a;
  digest[1] += b;
  digest[2] += c;
  digest[3] += d;
  digest[4] += e;
  digest[5] += f;
  digest[6] += g;
  digest[7] += h;
}

__constant u64 k_sha384[80] =
{
  SHA384C00, SHA384C01, SHA384C02, SHA384C03,
  SHA384C04, SHA384C05, SHA384C06, SHA384C07,
  SHA384C08, SHA384C09, SHA384C0a, SHA384C0b,
  SHA384C0c, SHA384C0d, SHA384C0e, SHA384C0f,
  SHA384C10, SHA384C11, SHA384C12, SHA384C13,
  SHA384C14, SHA384C15, SHA384C16, SHA384C17,
  SHA384C18, SHA384C19, SHA384C1a, SHA384C1b,
  SHA384C1c, SHA384C1d, SHA384C1e, SHA384C1f,
  SHA384C20, SHA384C21, SHA384C22, SHA384C23,
  SHA384C24, SHA384C25, SHA384C26, SHA384C27,
  SHA384C28, SHA384C29, SHA384C2a, SHA384C2b,
  SHA384C2c, SHA384C2d, SHA384C2e, SHA384C2f,
  SHA384C30, SHA384C31, SHA384C32, SHA384C33,
  SHA384C34, SHA384C35, SHA384C36, SHA384C37,
  SHA384C38, SHA384C39, SHA384C3a, SHA384C3b,
  SHA384C3c, SHA384C3d, SHA384C3e, SHA384C3f,
  SHA384C40, SHA384C41, SHA384C42, SHA384C43,
  SHA384C44, SHA384C45, SHA384C46, SHA384C47,
  SHA384C48, SHA384C49, SHA384C4a, SHA384C4b,
  SHA384C4c, SHA384C4d, SHA384C4e, SHA384C4f,
};

void sha384_transform (const u64 w0[4], const u64 w1[4], const u64 w2[4], const u64 w3[4], u64 digest[8])
{
  u64 a = digest[0];
  u64 b = digest[1];
  u64 c = digest[2];
  u64 d = digest[3];
  u64 e = digest[4];
  u64 f = digest[5];
  u64 g = digest[6];
  u64 h = digest[7];

  u64 w0_t = swap64 (w0[0]);
  u64 w1_t = swap64 (w0[1]);
  u64 w2_t = swap64 (w0[2]);
  u64 w3_t = swap64 (w0[3]);
  u64 w4_t = swap64 (w1[0]);
  u64 w5_t = swap64 (w1[1]);
  u64 w6_t = swap64 (w1[2]);
  u64 w7_t = swap64 (w1[3]);
  u64 w8_t = swap64 (w2[0]);
  u64 w9_t = swap64 (w2[1]);
  u64 wa_t = swap64 (w2[2]);
  u64 wb_t = swap64 (w2[3]);
  u64 wc_t = swap64 (w3[0]);
  u64 wd_t = swap64 (w3[1]);
  u64 we_t = swap64 (w3[2]);
  u64 wf_t = swap64 (w3[3]);

  #define ROUND384_EXPAND()                         \
  {                                                 \
    w0_t = SHA384_EXPAND (we_t, w9_t, w1_t, w0_t);  \
    w1_t = SHA384_EXPAND (wf_t, wa_t, w2_t, w1_t);  \
    w2_t = SHA384_EXPAND (w0_t, wb_t, w3_t, w2_t);  \
    w3_t = SHA384_EXPAND (w1_t, wc_t, w4_t, w3_t);  \
    w4_t = SHA384_EXPAND (w2_t, wd_t, w5_t, w4_t);  \
    w5_t = SHA384_EXPAND (w3_t, we_t, w6_t, w5_t);  \
    w6_t = SHA384_EXPAND (w4_t, wf_t, w7_t, w6_t);  \
    w7_t = SHA384_EXPAND (w5_t, w0_t, w8_t, w7_t);  \
    w8_t = SHA384_EXPAND (w6_t, w1_t, w9_t, w8_t);  \
    w9_t = SHA384_EXPAND (w7_t, w2_t, wa_t, w9_t);  \
    wa_t = SHA384_EXPAND (w8_t, w3_t, wb_t, wa_t);  \
    wb_t = SHA384_EXPAND (w9_t, w4_t, wc_t, wb_t);  \
    wc_t = SHA384_EXPAND (wa_t, w5_t, wd_t, wc_t);  \
    wd_t = SHA384_EXPAND (wb_t, w6_t, we_t, wd_t);  \
    we_t = SHA384_EXPAND (wc_t, w7_t, wf_t, we_t);  \
    wf_t = SHA384_EXPAND (wd_t, w8_t, w0_t, wf_t);  \
  }

  #define ROUND384_STEP(i)                                                                \
  {                                                                                       \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, a, b, c, d, e, f, g, h, w0_t, k_sha384[i +  0]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, h, a, b, c, d, e, f, g, w1_t, k_sha384[i +  1]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, g, h, a, b, c, d, e, f, w2_t, k_sha384[i +  2]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, f, g, h, a, b, c, d, e, w3_t, k_sha384[i +  3]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, e, f, g, h, a, b, c, d, w4_t, k_sha384[i +  4]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, d, e, f, g, h, a, b, c, w5_t, k_sha384[i +  5]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, c, d, e, f, g, h, a, b, w6_t, k_sha384[i +  6]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, b, c, d, e, f, g, h, a, w7_t, k_sha384[i +  7]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, a, b, c, d, e, f, g, h, w8_t, k_sha384[i +  8]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, h, a, b, c, d, e, f, g, w9_t, k_sha384[i +  9]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, g, h, a, b, c, d, e, f, wa_t, k_sha384[i + 10]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, f, g, h, a, b, c, d, e, wb_t, k_sha384[i + 11]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, e, f, g, h, a, b, c, d, wc_t, k_sha384[i + 12]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, d, e, f, g, h, a, b, c, wd_t, k_sha384[i + 13]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, c, d, e, f, g, h, a, b, we_t, k_sha384[i + 14]); \
    SHA384_STEP (SHA384_F0o, SHA384_F1o, b, c, d, e, f, g, h, a, wf_t, k_sha384[i + 15]); \
  }

  ROUND384_STEP (0);

  #ifdef _unroll
  #pragma unroll
  #endif
  for (int i = 16; i < 80; i += 16)
  {
    ROUND384_EXPAND (); ROUND384_STEP (i);
  }

  digest[0] += a;
  digest[1] += b;
  digest[2] += c;
  digest[3] += d;
  digest[4] += e;
  digest[5] += f;
  digest[6] += g;
  digest[7] += h;
}

__constant u64 k_sha512[80] =
{
  SHA384C00, SHA384C01, SHA384C02, SHA384C03,
  SHA384C04, SHA384C05, SHA384C06, SHA384C07,
  SHA384C08, SHA384C09, SHA384C0a, SHA384C0b,
  SHA384C0c, SHA384C0d, SHA384C0e, SHA384C0f,
  SHA384C10, SHA384C11, SHA384C12, SHA384C13,
  SHA384C14, SHA384C15, SHA384C16, SHA384C17,
  SHA384C18, SHA384C19, SHA384C1a, SHA384C1b,
  SHA384C1c, SHA384C1d, SHA384C1e, SHA384C1f,
  SHA384C20, SHA384C21, SHA384C22, SHA384C23,
  SHA384C24, SHA384C25, SHA384C26, SHA384C27,
  SHA384C28, SHA384C29, SHA384C2a, SHA384C2b,
  SHA384C2c, SHA384C2d, SHA384C2e, SHA384C2f,
  SHA384C30, SHA384C31, SHA384C32, SHA384C33,
  SHA384C34, SHA384C35, SHA384C36, SHA384C37,
  SHA384C38, SHA384C39, SHA384C3a, SHA384C3b,
  SHA384C3c, SHA384C3d, SHA384C3e, SHA384C3f,
  SHA384C40, SHA384C41, SHA384C42, SHA384C43,
  SHA384C44, SHA384C45, SHA384C46, SHA384C47,
  SHA384C48, SHA384C49, SHA384C4a, SHA384C4b,
  SHA384C4c, SHA384C4d, SHA384C4e, SHA384C4f,
};

void sha512_transform (const u64 w0[4], const u64 w1[4], const u64 w2[4], const u64 w3[4], u64 digest[8])
{
  u64 a = digest[0];
  u64 b = digest[1];
  u64 c = digest[2];
  u64 d = digest[3];
  u64 e = digest[4];
  u64 f = digest[5];
  u64 g = digest[6];
  u64 h = digest[7];

  u64 w0_t = swap64 (w0[0]);
  u64 w1_t = swap64 (w0[1]);
  u64 w2_t = swap64 (w0[2]);
  u64 w3_t = swap64 (w0[3]);
  u64 w4_t = swap64 (w1[0]);
  u64 w5_t = swap64 (w1[1]);
  u64 w6_t = swap64 (w1[2]);
  u64 w7_t = swap64 (w1[3]);
  u64 w8_t = swap64 (w2[0]);
  u64 w9_t = swap64 (w2[1]);
  u64 wa_t = swap64 (w2[2]);
  u64 wb_t = swap64 (w2[3]);
  u64 wc_t = swap64 (w3[0]);
  u64 wd_t = swap64 (w3[1]);
  u64 we_t = swap64 (w3[2]);
  u64 wf_t = swap64 (w3[3]);

  #define ROUND512_EXPAND()                         \
  {                                                 \
    w0_t = SHA512_EXPAND (we_t, w9_t, w1_t, w0_t);  \
    w1_t = SHA512_EXPAND (wf_t, wa_t, w2_t, w1_t);  \
    w2_t = SHA512_EXPAND (w0_t, wb_t, w3_t, w2_t);  \
    w3_t = SHA512_EXPAND (w1_t, wc_t, w4_t, w3_t);  \
    w4_t = SHA512_EXPAND (w2_t, wd_t, w5_t, w4_t);  \
    w5_t = SHA512_EXPAND (w3_t, we_t, w6_t, w5_t);  \
    w6_t = SHA512_EXPAND (w4_t, wf_t, w7_t, w6_t);  \
    w7_t = SHA512_EXPAND (w5_t, w0_t, w8_t, w7_t);  \
    w8_t = SHA512_EXPAND (w6_t, w1_t, w9_t, w8_t);  \
    w9_t = SHA512_EXPAND (w7_t, w2_t, wa_t, w9_t);  \
    wa_t = SHA512_EXPAND (w8_t, w3_t, wb_t, wa_t);  \
    wb_t = SHA512_EXPAND (w9_t, w4_t, wc_t, wb_t);  \
    wc_t = SHA512_EXPAND (wa_t, w5_t, wd_t, wc_t);  \
    wd_t = SHA512_EXPAND (wb_t, w6_t, we_t, wd_t);  \
    we_t = SHA512_EXPAND (wc_t, w7_t, wf_t, we_t);  \
    wf_t = SHA512_EXPAND (wd_t, w8_t, w0_t, wf_t);  \
  }

  #define ROUND512_STEP(i)                                                                \
  {                                                                                       \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, a, b, c, d, e, f, g, h, w0_t, k_sha512[i +  0]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, h, a, b, c, d, e, f, g, w1_t, k_sha512[i +  1]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, g, h, a, b, c, d, e, f, w2_t, k_sha512[i +  2]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, f, g, h, a, b, c, d, e, w3_t, k_sha512[i +  3]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, e, f, g, h, a, b, c, d, w4_t, k_sha512[i +  4]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, d, e, f, g, h, a, b, c, w5_t, k_sha512[i +  5]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, c, d, e, f, g, h, a, b, w6_t, k_sha512[i +  6]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, b, c, d, e, f, g, h, a, w7_t, k_sha512[i +  7]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, a, b, c, d, e, f, g, h, w8_t, k_sha512[i +  8]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, h, a, b, c, d, e, f, g, w9_t, k_sha512[i +  9]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, g, h, a, b, c, d, e, f, wa_t, k_sha512[i + 10]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, f, g, h, a, b, c, d, e, wb_t, k_sha512[i + 11]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, e, f, g, h, a, b, c, d, wc_t, k_sha512[i + 12]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, d, e, f, g, h, a, b, c, wd_t, k_sha512[i + 13]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, c, d, e, f, g, h, a, b, we_t, k_sha512[i + 14]); \
    SHA512_STEP (SHA512_F0o, SHA512_F1o, b, c, d, e, f, g, h, a, wf_t, k_sha512[i + 15]); \
  }

  ROUND512_STEP (0);

  #ifdef _unroll
  #pragma unroll
  #endif
  for (int i = 16; i < 80; i += 16)
  {
    ROUND512_EXPAND (); ROUND512_STEP (i);
  }

  digest[0] += a;
  digest[1] += b;
  digest[2] += c;
  digest[3] += d;
  digest[4] += e;
  digest[5] += f;
  digest[6] += g;
  digest[7] += h;
}

__constant u32 te0[256] =
{
  0xc66363a5, 0xf87c7c84, 0xee777799, 0xf67b7b8d,
  0xfff2f20d, 0xd66b6bbd, 0xde6f6fb1, 0x91c5c554,
  0x60303050, 0x02010103, 0xce6767a9, 0x562b2b7d,
  0xe7fefe19, 0xb5d7d762, 0x4dababe6, 0xec76769a,
  0x8fcaca45, 0x1f82829d, 0x89c9c940, 0xfa7d7d87,
  0xeffafa15, 0xb25959eb, 0x8e4747c9, 0xfbf0f00b,
  0x41adadec, 0xb3d4d467, 0x5fa2a2fd, 0x45afafea,
  0x239c9cbf, 0x53a4a4f7, 0xe4727296, 0x9bc0c05b,
  0x75b7b7c2, 0xe1fdfd1c, 0x3d9393ae, 0x4c26266a,
  0x6c36365a, 0x7e3f3f41, 0xf5f7f702, 0x83cccc4f,
  0x6834345c, 0x51a5a5f4, 0xd1e5e534, 0xf9f1f108,
  0xe2717193, 0xabd8d873, 0x62313153, 0x2a15153f,
  0x0804040c, 0x95c7c752, 0x46232365, 0x9dc3c35e,
  0x30181828, 0x379696a1, 0x0a05050f, 0x2f9a9ab5,
  0x0e070709, 0x24121236, 0x1b80809b, 0xdfe2e23d,
  0xcdebeb26, 0x4e272769, 0x7fb2b2cd, 0xea75759f,
  0x1209091b, 0x1d83839e, 0x582c2c74, 0x341a1a2e,
  0x361b1b2d, 0xdc6e6eb2, 0xb45a5aee, 0x5ba0a0fb,
  0xa45252f6, 0x763b3b4d, 0xb7d6d661, 0x7db3b3ce,
  0x5229297b, 0xdde3e33e, 0x5e2f2f71, 0x13848497,
  0xa65353f5, 0xb9d1d168, 0x00000000, 0xc1eded2c,
  0x40202060, 0xe3fcfc1f, 0x79b1b1c8, 0xb65b5bed,
  0xd46a6abe, 0x8dcbcb46, 0x67bebed9, 0x7239394b,
  0x944a4ade, 0x984c4cd4, 0xb05858e8, 0x85cfcf4a,
  0xbbd0d06b, 0xc5efef2a, 0x4faaaae5, 0xedfbfb16,
  0x864343c5, 0x9a4d4dd7, 0x66333355, 0x11858594,
  0x8a4545cf, 0xe9f9f910, 0x04020206, 0xfe7f7f81,
  0xa05050f0, 0x783c3c44, 0x259f9fba, 0x4ba8a8e3,
  0xa25151f3, 0x5da3a3fe, 0x804040c0, 0x058f8f8a,
  0x3f9292ad, 0x219d9dbc, 0x70383848, 0xf1f5f504,
  0x63bcbcdf, 0x77b6b6c1, 0xafdada75, 0x42212163,
  0x20101030, 0xe5ffff1a, 0xfdf3f30e, 0xbfd2d26d,
  0x81cdcd4c, 0x180c0c14, 0x26131335, 0xc3ecec2f,
  0xbe5f5fe1, 0x359797a2, 0x884444cc, 0x2e171739,
  0x93c4c457, 0x55a7a7f2, 0xfc7e7e82, 0x7a3d3d47,
  0xc86464ac, 0xba5d5de7, 0x3219192b, 0xe6737395,
  0xc06060a0, 0x19818198, 0x9e4f4fd1, 0xa3dcdc7f,
  0x44222266, 0x542a2a7e, 0x3b9090ab, 0x0b888883,
  0x8c4646ca, 0xc7eeee29, 0x6bb8b8d3, 0x2814143c,
  0xa7dede79, 0xbc5e5ee2, 0x160b0b1d, 0xaddbdb76,
  0xdbe0e03b, 0x64323256, 0x743a3a4e, 0x140a0a1e,
  0x924949db, 0x0c06060a, 0x4824246c, 0xb85c5ce4,
  0x9fc2c25d, 0xbdd3d36e, 0x43acacef, 0xc46262a6,
  0x399191a8, 0x319595a4, 0xd3e4e437, 0xf279798b,
  0xd5e7e732, 0x8bc8c843, 0x6e373759, 0xda6d6db7,
  0x018d8d8c, 0xb1d5d564, 0x9c4e4ed2, 0x49a9a9e0,
  0xd86c6cb4, 0xac5656fa, 0xf3f4f407, 0xcfeaea25,
  0xca6565af, 0xf47a7a8e, 0x47aeaee9, 0x10080818,
  0x6fbabad5, 0xf0787888, 0x4a25256f, 0x5c2e2e72,
  0x381c1c24, 0x57a6a6f1, 0x73b4b4c7, 0x97c6c651,
  0xcbe8e823, 0xa1dddd7c, 0xe874749c, 0x3e1f1f21,
  0x964b4bdd, 0x61bdbddc, 0x0d8b8b86, 0x0f8a8a85,
  0xe0707090, 0x7c3e3e42, 0x71b5b5c4, 0xcc6666aa,
  0x904848d8, 0x06030305, 0xf7f6f601, 0x1c0e0e12,
  0xc26161a3, 0x6a35355f, 0xae5757f9, 0x69b9b9d0,
  0x17868691, 0x99c1c158, 0x3a1d1d27, 0x279e9eb9,
  0xd9e1e138, 0xebf8f813, 0x2b9898b3, 0x22111133,
  0xd26969bb, 0xa9d9d970, 0x078e8e89, 0x339494a7,
  0x2d9b9bb6, 0x3c1e1e22, 0x15878792, 0xc9e9e920,
  0x87cece49, 0xaa5555ff, 0x50282878, 0xa5dfdf7a,
  0x038c8c8f, 0x59a1a1f8, 0x09898980, 0x1a0d0d17,
  0x65bfbfda, 0xd7e6e631, 0x844242c6, 0xd06868b8,
  0x824141c3, 0x299999b0, 0x5a2d2d77, 0x1e0f0f11,
  0x7bb0b0cb, 0xa85454fc, 0x6dbbbbd6, 0x2c16163a,
};

__constant u32 te1[256] =
{
  0xa5c66363, 0x84f87c7c, 0x99ee7777, 0x8df67b7b,
  0x0dfff2f2, 0xbdd66b6b, 0xb1de6f6f, 0x5491c5c5,
  0x50603030, 0x03020101, 0xa9ce6767, 0x7d562b2b,
  0x19e7fefe, 0x62b5d7d7, 0xe64dabab, 0x9aec7676,
  0x458fcaca, 0x9d1f8282, 0x4089c9c9, 0x87fa7d7d,
  0x15effafa, 0xebb25959, 0xc98e4747, 0x0bfbf0f0,
  0xec41adad, 0x67b3d4d4, 0xfd5fa2a2, 0xea45afaf,
  0xbf239c9c, 0xf753a4a4, 0x96e47272, 0x5b9bc0c0,
  0xc275b7b7, 0x1ce1fdfd, 0xae3d9393, 0x6a4c2626,
  0x5a6c3636, 0x417e3f3f, 0x02f5f7f7, 0x4f83cccc,
  0x5c683434, 0xf451a5a5, 0x34d1e5e5, 0x08f9f1f1,
  0x93e27171, 0x73abd8d8, 0x53623131, 0x3f2a1515,
  0x0c080404, 0x5295c7c7, 0x65462323, 0x5e9dc3c3,
  0x28301818, 0xa1379696, 0x0f0a0505, 0xb52f9a9a,
  0x090e0707, 0x36241212, 0x9b1b8080, 0x3ddfe2e2,
  0x26cdebeb, 0x694e2727, 0xcd7fb2b2, 0x9fea7575,
  0x1b120909, 0x9e1d8383, 0x74582c2c, 0x2e341a1a,
  0x2d361b1b, 0xb2dc6e6e, 0xeeb45a5a, 0xfb5ba0a0,
  0xf6a45252, 0x4d763b3b, 0x61b7d6d6, 0xce7db3b3,
  0x7b522929, 0x3edde3e3, 0x715e2f2f, 0x97138484,
  0xf5a65353, 0x68b9d1d1, 0x00000000, 0x2cc1eded,
  0x60402020, 0x1fe3fcfc, 0xc879b1b1, 0xedb65b5b,
  0xbed46a6a, 0x468dcbcb, 0xd967bebe, 0x4b723939,
  0xde944a4a, 0xd4984c4c, 0xe8b05858, 0x4a85cfcf,
  0x6bbbd0d0, 0x2ac5efef, 0xe54faaaa, 0x16edfbfb,
  0xc5864343, 0xd79a4d4d, 0x55663333, 0x94118585,
  0xcf8a4545, 0x10e9f9f9, 0x06040202, 0x81fe7f7f,
  0xf0a05050, 0x44783c3c, 0xba259f9f, 0xe34ba8a8,
  0xf3a25151, 0xfe5da3a3, 0xc0804040, 0x8a058f8f,
  0xad3f9292, 0xbc219d9d, 0x48703838, 0x04f1f5f5,
  0xdf63bcbc, 0xc177b6b6, 0x75afdada, 0x63422121,
  0x30201010, 0x1ae5ffff, 0x0efdf3f3, 0x6dbfd2d2,
  0x4c81cdcd, 0x14180c0c, 0x35261313, 0x2fc3ecec,
  0xe1be5f5f, 0xa2359797, 0xcc884444, 0x392e1717,
  0x5793c4c4, 0xf255a7a7, 0x82fc7e7e, 0x477a3d3d,
  0xacc86464, 0xe7ba5d5d, 0x2b321919, 0x95e67373,
  0xa0c06060, 0x98198181, 0xd19e4f4f, 0x7fa3dcdc,
  0x66442222, 0x7e542a2a, 0xab3b9090, 0x830b8888,
  0xca8c4646, 0x29c7eeee, 0xd36bb8b8, 0x3c281414,
  0x79a7dede, 0xe2bc5e5e, 0x1d160b0b, 0x76addbdb,
  0x3bdbe0e0, 0x56643232, 0x4e743a3a, 0x1e140a0a,
  0xdb924949, 0x0a0c0606, 0x6c482424, 0xe4b85c5c,
  0x5d9fc2c2, 0x6ebdd3d3, 0xef43acac, 0xa6c46262,
  0xa8399191, 0xa4319595, 0x37d3e4e4, 0x8bf27979,
  0x32d5e7e7, 0x438bc8c8, 0x596e3737, 0xb7da6d6d,
  0x8c018d8d, 0x64b1d5d5, 0xd29c4e4e, 0xe049a9a9,
  0xb4d86c6c, 0xfaac5656, 0x07f3f4f4, 0x25cfeaea,
  0xafca6565, 0x8ef47a7a, 0xe947aeae, 0x18100808,
  0xd56fbaba, 0x88f07878, 0x6f4a2525, 0x725c2e2e,
  0x24381c1c, 0xf157a6a6, 0xc773b4b4, 0x5197c6c6,
  0x23cbe8e8, 0x7ca1dddd, 0x9ce87474, 0x213e1f1f,
  0xdd964b4b, 0xdc61bdbd, 0x860d8b8b, 0x850f8a8a,
  0x90e07070, 0x427c3e3e, 0xc471b5b5, 0xaacc6666,
  0xd8904848, 0x05060303, 0x01f7f6f6, 0x121c0e0e,
  0xa3c26161, 0x5f6a3535, 0xf9ae5757, 0xd069b9b9,
  0x91178686, 0x5899c1c1, 0x273a1d1d, 0xb9279e9e,
  0x38d9e1e1, 0x13ebf8f8, 0xb32b9898, 0x33221111,
  0xbbd26969, 0x70a9d9d9, 0x89078e8e, 0xa7339494,
  0xb62d9b9b, 0x223c1e1e, 0x92158787, 0x20c9e9e9,
  0x4987cece, 0xffaa5555, 0x78502828, 0x7aa5dfdf,
  0x8f038c8c, 0xf859a1a1, 0x80098989, 0x171a0d0d,
  0xda65bfbf, 0x31d7e6e6, 0xc6844242, 0xb8d06868,
  0xc3824141, 0xb0299999, 0x775a2d2d, 0x111e0f0f,
  0xcb7bb0b0, 0xfca85454, 0xd66dbbbb, 0x3a2c1616,
};

__constant u32 te2[256] =
{
  0x63a5c663, 0x7c84f87c, 0x7799ee77, 0x7b8df67b,
  0xf20dfff2, 0x6bbdd66b, 0x6fb1de6f, 0xc55491c5,
  0x30506030, 0x01030201, 0x67a9ce67, 0x2b7d562b,
  0xfe19e7fe, 0xd762b5d7, 0xabe64dab, 0x769aec76,
  0xca458fca, 0x829d1f82, 0xc94089c9, 0x7d87fa7d,
  0xfa15effa, 0x59ebb259, 0x47c98e47, 0xf00bfbf0,
  0xadec41ad, 0xd467b3d4, 0xa2fd5fa2, 0xafea45af,
  0x9cbf239c, 0xa4f753a4, 0x7296e472, 0xc05b9bc0,
  0xb7c275b7, 0xfd1ce1fd, 0x93ae3d93, 0x266a4c26,
  0x365a6c36, 0x3f417e3f, 0xf702f5f7, 0xcc4f83cc,
  0x345c6834, 0xa5f451a5, 0xe534d1e5, 0xf108f9f1,
  0x7193e271, 0xd873abd8, 0x31536231, 0x153f2a15,
  0x040c0804, 0xc75295c7, 0x23654623, 0xc35e9dc3,
  0x18283018, 0x96a13796, 0x050f0a05, 0x9ab52f9a,
  0x07090e07, 0x12362412, 0x809b1b80, 0xe23ddfe2,
  0xeb26cdeb, 0x27694e27, 0xb2cd7fb2, 0x759fea75,
  0x091b1209, 0x839e1d83, 0x2c74582c, 0x1a2e341a,
  0x1b2d361b, 0x6eb2dc6e, 0x5aeeb45a, 0xa0fb5ba0,
  0x52f6a452, 0x3b4d763b, 0xd661b7d6, 0xb3ce7db3,
  0x297b5229, 0xe33edde3, 0x2f715e2f, 0x84971384,
  0x53f5a653, 0xd168b9d1, 0x00000000, 0xed2cc1ed,
  0x20604020, 0xfc1fe3fc, 0xb1c879b1, 0x5bedb65b,
  0x6abed46a, 0xcb468dcb, 0xbed967be, 0x394b7239,
  0x4ade944a, 0x4cd4984c, 0x58e8b058, 0xcf4a85cf,
  0xd06bbbd0, 0xef2ac5ef, 0xaae54faa, 0xfb16edfb,
  0x43c58643, 0x4dd79a4d, 0x33556633, 0x85941185,
  0x45cf8a45, 0xf910e9f9, 0x02060402, 0x7f81fe7f,
  0x50f0a050, 0x3c44783c, 0x9fba259f, 0xa8e34ba8,
  0x51f3a251, 0xa3fe5da3, 0x40c08040, 0x8f8a058f,
  0x92ad3f92, 0x9dbc219d, 0x38487038, 0xf504f1f5,
  0xbcdf63bc, 0xb6c177b6, 0xda75afda, 0x21634221,
  0x10302010, 0xff1ae5ff, 0xf30efdf3, 0xd26dbfd2,
  0xcd4c81cd, 0x0c14180c, 0x13352613, 0xec2fc3ec,
  0x5fe1be5f, 0x97a23597, 0x44cc8844, 0x17392e17,
  0xc45793c4, 0xa7f255a7, 0x7e82fc7e, 0x3d477a3d,
  0x64acc864, 0x5de7ba5d, 0x192b3219, 0x7395e673,
  0x60a0c060, 0x81981981, 0x4fd19e4f, 0xdc7fa3dc,
  0x22664422, 0x2a7e542a, 0x90ab3b90, 0x88830b88,
  0x46ca8c46, 0xee29c7ee, 0xb8d36bb8, 0x143c2814,
  0xde79a7de, 0x5ee2bc5e, 0x0b1d160b, 0xdb76addb,
  0xe03bdbe0, 0x32566432, 0x3a4e743a, 0x0a1e140a,
  0x49db9249, 0x060a0c06, 0x246c4824, 0x5ce4b85c,
  0xc25d9fc2, 0xd36ebdd3, 0xacef43ac, 0x62a6c462,
  0x91a83991, 0x95a43195, 0xe437d3e4, 0x798bf279,
  0xe732d5e7, 0xc8438bc8, 0x37596e37, 0x6db7da6d,
  0x8d8c018d, 0xd564b1d5, 0x4ed29c4e, 0xa9e049a9,
  0x6cb4d86c, 0x56faac56, 0xf407f3f4, 0xea25cfea,
  0x65afca65, 0x7a8ef47a, 0xaee947ae, 0x08181008,
  0xbad56fba, 0x7888f078, 0x256f4a25, 0x2e725c2e,
  0x1c24381c, 0xa6f157a6, 0xb4c773b4, 0xc65197c6,
  0xe823cbe8, 0xdd7ca1dd, 0x749ce874, 0x1f213e1f,
  0x4bdd964b, 0xbddc61bd, 0x8b860d8b, 0x8a850f8a,
  0x7090e070, 0x3e427c3e, 0xb5c471b5, 0x66aacc66,
  0x48d89048, 0x03050603, 0xf601f7f6, 0x0e121c0e,
  0x61a3c261, 0x355f6a35, 0x57f9ae57, 0xb9d069b9,
  0x86911786, 0xc15899c1, 0x1d273a1d, 0x9eb9279e,
  0xe138d9e1, 0xf813ebf8, 0x98b32b98, 0x11332211,
  0x69bbd269, 0xd970a9d9, 0x8e89078e, 0x94a73394,
  0x9bb62d9b, 0x1e223c1e, 0x87921587, 0xe920c9e9,
  0xce4987ce, 0x55ffaa55, 0x28785028, 0xdf7aa5df,
  0x8c8f038c, 0xa1f859a1, 0x89800989, 0x0d171a0d,
  0xbfda65bf, 0xe631d7e6, 0x42c68442, 0x68b8d068,
  0x41c38241, 0x99b02999, 0x2d775a2d, 0x0f111e0f,
  0xb0cb7bb0, 0x54fca854, 0xbbd66dbb, 0x163a2c16,
};

__constant u32 te3[256] =
{
  0x6363a5c6, 0x7c7c84f8, 0x777799ee, 0x7b7b8df6,
  0xf2f20dff, 0x6b6bbdd6, 0x6f6fb1de, 0xc5c55491,
  0x30305060, 0x01010302, 0x6767a9ce, 0x2b2b7d56,
  0xfefe19e7, 0xd7d762b5, 0xababe64d, 0x76769aec,
  0xcaca458f, 0x82829d1f, 0xc9c94089, 0x7d7d87fa,
  0xfafa15ef, 0x5959ebb2, 0x4747c98e, 0xf0f00bfb,
  0xadadec41, 0xd4d467b3, 0xa2a2fd5f, 0xafafea45,
  0x9c9cbf23, 0xa4a4f753, 0x727296e4, 0xc0c05b9b,
  0xb7b7c275, 0xfdfd1ce1, 0x9393ae3d, 0x26266a4c,
  0x36365a6c, 0x3f3f417e, 0xf7f702f5, 0xcccc4f83,
  0x34345c68, 0xa5a5f451, 0xe5e534d1, 0xf1f108f9,
  0x717193e2, 0xd8d873ab, 0x31315362, 0x15153f2a,
  0x04040c08, 0xc7c75295, 0x23236546, 0xc3c35e9d,
  0x18182830, 0x9696a137, 0x05050f0a, 0x9a9ab52f,
  0x0707090e, 0x12123624, 0x80809b1b, 0xe2e23ddf,
  0xebeb26cd, 0x2727694e, 0xb2b2cd7f, 0x75759fea,
  0x09091b12, 0x83839e1d, 0x2c2c7458, 0x1a1a2e34,
  0x1b1b2d36, 0x6e6eb2dc, 0x5a5aeeb4, 0xa0a0fb5b,
  0x5252f6a4, 0x3b3b4d76, 0xd6d661b7, 0xb3b3ce7d,
  0x29297b52, 0xe3e33edd, 0x2f2f715e, 0x84849713,
  0x5353f5a6, 0xd1d168b9, 0x00000000, 0xeded2cc1,
  0x20206040, 0xfcfc1fe3, 0xb1b1c879, 0x5b5bedb6,
  0x6a6abed4, 0xcbcb468d, 0xbebed967, 0x39394b72,
  0x4a4ade94, 0x4c4cd498, 0x5858e8b0, 0xcfcf4a85,
  0xd0d06bbb, 0xefef2ac5, 0xaaaae54f, 0xfbfb16ed,
  0x4343c586, 0x4d4dd79a, 0x33335566, 0x85859411,
  0x4545cf8a, 0xf9f910e9, 0x02020604, 0x7f7f81fe,
  0x5050f0a0, 0x3c3c4478, 0x9f9fba25, 0xa8a8e34b,
  0x5151f3a2, 0xa3a3fe5d, 0x4040c080, 0x8f8f8a05,
  0x9292ad3f, 0x9d9dbc21, 0x38384870, 0xf5f504f1,
  0xbcbcdf63, 0xb6b6c177, 0xdada75af, 0x21216342,
  0x10103020, 0xffff1ae5, 0xf3f30efd, 0xd2d26dbf,
  0xcdcd4c81, 0x0c0c1418, 0x13133526, 0xecec2fc3,
  0x5f5fe1be, 0x9797a235, 0x4444cc88, 0x1717392e,
  0xc4c45793, 0xa7a7f255, 0x7e7e82fc, 0x3d3d477a,
  0x6464acc8, 0x5d5de7ba, 0x19192b32, 0x737395e6,
  0x6060a0c0, 0x81819819, 0x4f4fd19e, 0xdcdc7fa3,
  0x22226644, 0x2a2a7e54, 0x9090ab3b, 0x8888830b,
  0x4646ca8c, 0xeeee29c7, 0xb8b8d36b, 0x14143c28,
  0xdede79a7, 0x5e5ee2bc, 0x0b0b1d16, 0xdbdb76ad,
  0xe0e03bdb, 0x32325664, 0x3a3a4e74, 0x0a0a1e14,
  0x4949db92, 0x06060a0c, 0x24246c48, 0x5c5ce4b8,
  0xc2c25d9f, 0xd3d36ebd, 0xacacef43, 0x6262a6c4,
  0x9191a839, 0x9595a431, 0xe4e437d3, 0x79798bf2,
  0xe7e732d5, 0xc8c8438b, 0x3737596e, 0x6d6db7da,
  0x8d8d8c01, 0xd5d564b1, 0x4e4ed29c, 0xa9a9e049,
  0x6c6cb4d8, 0x5656faac, 0xf4f407f3, 0xeaea25cf,
  0x6565afca, 0x7a7a8ef4, 0xaeaee947, 0x08081810,
  0xbabad56f, 0x787888f0, 0x25256f4a, 0x2e2e725c,
  0x1c1c2438, 0xa6a6f157, 0xb4b4c773, 0xc6c65197,
  0xe8e823cb, 0xdddd7ca1, 0x74749ce8, 0x1f1f213e,
  0x4b4bdd96, 0xbdbddc61, 0x8b8b860d, 0x8a8a850f,
  0x707090e0, 0x3e3e427c, 0xb5b5c471, 0x6666aacc,
  0x4848d890, 0x03030506, 0xf6f601f7, 0x0e0e121c,
  0x6161a3c2, 0x35355f6a, 0x5757f9ae, 0xb9b9d069,
  0x86869117, 0xc1c15899, 0x1d1d273a, 0x9e9eb927,
  0xe1e138d9, 0xf8f813eb, 0x9898b32b, 0x11113322,
  0x6969bbd2, 0xd9d970a9, 0x8e8e8907, 0x9494a733,
  0x9b9bb62d, 0x1e1e223c, 0x87879215, 0xe9e920c9,
  0xcece4987, 0x5555ffaa, 0x28287850, 0xdfdf7aa5,
  0x8c8c8f03, 0xa1a1f859, 0x89898009, 0x0d0d171a,
  0xbfbfda65, 0xe6e631d7, 0x4242c684, 0x6868b8d0,
  0x4141c382, 0x9999b029, 0x2d2d775a, 0x0f0f111e,
  0xb0b0cb7b, 0x5454fca8, 0xbbbbd66d, 0x16163a2c,
};

__constant u32 te4[256] =
{
  0x63636363, 0x7c7c7c7c, 0x77777777, 0x7b7b7b7b,
  0xf2f2f2f2, 0x6b6b6b6b, 0x6f6f6f6f, 0xc5c5c5c5,
  0x30303030, 0x01010101, 0x67676767, 0x2b2b2b2b,
  0xfefefefe, 0xd7d7d7d7, 0xabababab, 0x76767676,
  0xcacacaca, 0x82828282, 0xc9c9c9c9, 0x7d7d7d7d,
  0xfafafafa, 0x59595959, 0x47474747, 0xf0f0f0f0,
  0xadadadad, 0xd4d4d4d4, 0xa2a2a2a2, 0xafafafaf,
  0x9c9c9c9c, 0xa4a4a4a4, 0x72727272, 0xc0c0c0c0,
  0xb7b7b7b7, 0xfdfdfdfd, 0x93939393, 0x26262626,
  0x36363636, 0x3f3f3f3f, 0xf7f7f7f7, 0xcccccccc,
  0x34343434, 0xa5a5a5a5, 0xe5e5e5e5, 0xf1f1f1f1,
  0x71717171, 0xd8d8d8d8, 0x31313131, 0x15151515,
  0x04040404, 0xc7c7c7c7, 0x23232323, 0xc3c3c3c3,
  0x18181818, 0x96969696, 0x05050505, 0x9a9a9a9a,
  0x07070707, 0x12121212, 0x80808080, 0xe2e2e2e2,
  0xebebebeb, 0x27272727, 0xb2b2b2b2, 0x75757575,
  0x09090909, 0x83838383, 0x2c2c2c2c, 0x1a1a1a1a,
  0x1b1b1b1b, 0x6e6e6e6e, 0x5a5a5a5a, 0xa0a0a0a0,
  0x52525252, 0x3b3b3b3b, 0xd6d6d6d6, 0xb3b3b3b3,
  0x29292929, 0xe3e3e3e3, 0x2f2f2f2f, 0x84848484,
  0x53535353, 0xd1d1d1d1, 0x00000000, 0xedededed,
  0x20202020, 0xfcfcfcfc, 0xb1b1b1b1, 0x5b5b5b5b,
  0x6a6a6a6a, 0xcbcbcbcb, 0xbebebebe, 0x39393939,
  0x4a4a4a4a, 0x4c4c4c4c, 0x58585858, 0xcfcfcfcf,
  0xd0d0d0d0, 0xefefefef, 0xaaaaaaaa, 0xfbfbfbfb,
  0x43434343, 0x4d4d4d4d, 0x33333333, 0x85858585,
  0x45454545, 0xf9f9f9f9, 0x02020202, 0x7f7f7f7f,
  0x50505050, 0x3c3c3c3c, 0x9f9f9f9f, 0xa8a8a8a8,
  0x51515151, 0xa3a3a3a3, 0x40404040, 0x8f8f8f8f,
  0x92929292, 0x9d9d9d9d, 0x38383838, 0xf5f5f5f5,
  0xbcbcbcbc, 0xb6b6b6b6, 0xdadadada, 0x21212121,
  0x10101010, 0xffffffff, 0xf3f3f3f3, 0xd2d2d2d2,
  0xcdcdcdcd, 0x0c0c0c0c, 0x13131313, 0xecececec,
  0x5f5f5f5f, 0x97979797, 0x44444444, 0x17171717,
  0xc4c4c4c4, 0xa7a7a7a7, 0x7e7e7e7e, 0x3d3d3d3d,
  0x64646464, 0x5d5d5d5d, 0x19191919, 0x73737373,
  0x60606060, 0x81818181, 0x4f4f4f4f, 0xdcdcdcdc,
  0x22222222, 0x2a2a2a2a, 0x90909090, 0x88888888,
  0x46464646, 0xeeeeeeee, 0xb8b8b8b8, 0x14141414,
  0xdededede, 0x5e5e5e5e, 0x0b0b0b0b, 0xdbdbdbdb,
  0xe0e0e0e0, 0x32323232, 0x3a3a3a3a, 0x0a0a0a0a,
  0x49494949, 0x06060606, 0x24242424, 0x5c5c5c5c,
  0xc2c2c2c2, 0xd3d3d3d3, 0xacacacac, 0x62626262,
  0x91919191, 0x95959595, 0xe4e4e4e4, 0x79797979,
  0xe7e7e7e7, 0xc8c8c8c8, 0x37373737, 0x6d6d6d6d,
  0x8d8d8d8d, 0xd5d5d5d5, 0x4e4e4e4e, 0xa9a9a9a9,
  0x6c6c6c6c, 0x56565656, 0xf4f4f4f4, 0xeaeaeaea,
  0x65656565, 0x7a7a7a7a, 0xaeaeaeae, 0x08080808,
  0xbabababa, 0x78787878, 0x25252525, 0x2e2e2e2e,
  0x1c1c1c1c, 0xa6a6a6a6, 0xb4b4b4b4, 0xc6c6c6c6,
  0xe8e8e8e8, 0xdddddddd, 0x74747474, 0x1f1f1f1f,
  0x4b4b4b4b, 0xbdbdbdbd, 0x8b8b8b8b, 0x8a8a8a8a,
  0x70707070, 0x3e3e3e3e, 0xb5b5b5b5, 0x66666666,
  0x48484848, 0x03030303, 0xf6f6f6f6, 0x0e0e0e0e,
  0x61616161, 0x35353535, 0x57575757, 0xb9b9b9b9,
  0x86868686, 0xc1c1c1c1, 0x1d1d1d1d, 0x9e9e9e9e,
  0xe1e1e1e1, 0xf8f8f8f8, 0x98989898, 0x11111111,
  0x69696969, 0xd9d9d9d9, 0x8e8e8e8e, 0x94949494,
  0x9b9b9b9b, 0x1e1e1e1e, 0x87878787, 0xe9e9e9e9,
  0xcececece, 0x55555555, 0x28282828, 0xdfdfdfdf,
  0x8c8c8c8c, 0xa1a1a1a1, 0x89898989, 0x0d0d0d0d,
  0xbfbfbfbf, 0xe6e6e6e6, 0x42424242, 0x68686868,
  0x41414141, 0x99999999, 0x2d2d2d2d, 0x0f0f0f0f,
  0xb0b0b0b0, 0x54545454, 0xbbbbbbbb, 0x16161616,
};

__constant u32 rcon[] =
{
  0x01000000, 0x02000000, 0x04000000, 0x08000000,
  0x10000000, 0x20000000, 0x40000000, 0x80000000,
  0x1b000000, 0x36000000,
};

void AES128_ExpandKey (u32 *userkey, u32 *rek, __local u32 *s_te0, __local u32 *s_te1, __local u32 *s_te2, __local u32 *s_te3, __local u32 *s_te4)
{
  rek[0] = swap32 (userkey[0]);
  rek[1] = swap32 (userkey[1]);
  rek[2] = swap32 (userkey[2]);
  rek[3] = swap32 (userkey[3]);

  for (u32 i = 0, j = 0; i < 10; i += 1, j += 4)
  {
    u32 temp = rek[j + 3];

    temp = (s_te2[(temp >> 16) & 0xff] & 0xff000000)
         ^ (s_te3[(temp >>  8) & 0xff] & 0x00ff0000)
         ^ (s_te0[(temp >>  0) & 0xff] & 0x0000ff00)
         ^ (s_te1[(temp >> 24) & 0xff] & 0x000000ff);

    rek[j + 4] = rek[j + 0]
               ^ temp
               ^ rcon[i];

    rek[j + 5] = rek[j + 1] ^ rek[j + 4];
    rek[j + 6] = rek[j + 2] ^ rek[j + 5];
    rek[j + 7] = rek[j + 3] ^ rek[j + 6];
  }
}

void AES128_encrypt (const u32 *in, u32 *out, const u32 *rek, __local u32 *s_te0, __local u32 *s_te1, __local u32 *s_te2, __local u32 *s_te3, __local u32 *s_te4)
{
  u32 in_swap[4];

  in_swap[0] = swap32 (in[0]);
  in_swap[1] = swap32 (in[1]);
  in_swap[2] = swap32 (in[2]);
  in_swap[3] = swap32 (in[3]);

  u32 s0 = in_swap[0] ^ rek[0];
  u32 s1 = in_swap[1] ^ rek[1];
  u32 s2 = in_swap[2] ^ rek[2];
  u32 s3 = in_swap[3] ^ rek[3];

  u32 t0;
  u32 t1;
  u32 t2;
  u32 t3;

  t0 = s_te0[s0 >> 24] ^ s_te1[(s1 >> 16) & 0xff] ^ s_te2[(s2 >>  8) & 0xff] ^ s_te3[s3 & 0xff] ^ rek[ 4];
  t1 = s_te0[s1 >> 24] ^ s_te1[(s2 >> 16) & 0xff] ^ s_te2[(s3 >>  8) & 0xff] ^ s_te3[s0 & 0xff] ^ rek[ 5];
  t2 = s_te0[s2 >> 24] ^ s_te1[(s3 >> 16) & 0xff] ^ s_te2[(s0 >>  8) & 0xff] ^ s_te3[s1 & 0xff] ^ rek[ 6];
  t3 = s_te0[s3 >> 24] ^ s_te1[(s0 >> 16) & 0xff] ^ s_te2[(s1 >>  8) & 0xff] ^ s_te3[s2 & 0xff] ^ rek[ 7];
  s0 = s_te0[t0 >> 24] ^ s_te1[(t1 >> 16) & 0xff] ^ s_te2[(t2 >>  8) & 0xff] ^ s_te3[t3 & 0xff] ^ rek[ 8];
  s1 = s_te0[t1 >> 24] ^ s_te1[(t2 >> 16) & 0xff] ^ s_te2[(t3 >>  8) & 0xff] ^ s_te3[t0 & 0xff] ^ rek[ 9];
  s2 = s_te0[t2 >> 24] ^ s_te1[(t3 >> 16) & 0xff] ^ s_te2[(t0 >>  8) & 0xff] ^ s_te3[t1 & 0xff] ^ rek[10];
  s3 = s_te0[t3 >> 24] ^ s_te1[(t0 >> 16) & 0xff] ^ s_te2[(t1 >>  8) & 0xff] ^ s_te3[t2 & 0xff] ^ rek[11];
  t0 = s_te0[s0 >> 24] ^ s_te1[(s1 >> 16) & 0xff] ^ s_te2[(s2 >>  8) & 0xff] ^ s_te3[s3 & 0xff] ^ rek[12];
  t1 = s_te0[s1 >> 24] ^ s_te1[(s2 >> 16) & 0xff] ^ s_te2[(s3 >>  8) & 0xff] ^ s_te3[s0 & 0xff] ^ rek[13];
  t2 = s_te0[s2 >> 24] ^ s_te1[(s3 >> 16) & 0xff] ^ s_te2[(s0 >>  8) & 0xff] ^ s_te3[s1 & 0xff] ^ rek[14];
  t3 = s_te0[s3 >> 24] ^ s_te1[(s0 >> 16) & 0xff] ^ s_te2[(s1 >>  8) & 0xff] ^ s_te3[s2 & 0xff] ^ rek[15];
  s0 = s_te0[t0 >> 24] ^ s_te1[(t1 >> 16) & 0xff] ^ s_te2[(t2 >>  8) & 0xff] ^ s_te3[t3 & 0xff] ^ rek[16];
  s1 = s_te0[t1 >> 24] ^ s_te1[(t2 >> 16) & 0xff] ^ s_te2[(t3 >>  8) & 0xff] ^ s_te3[t0 & 0xff] ^ rek[17];
  s2 = s_te0[t2 >> 24] ^ s_te1[(t3 >> 16) & 0xff] ^ s_te2[(t0 >>  8) & 0xff] ^ s_te3[t1 & 0xff] ^ rek[18];
  s3 = s_te0[t3 >> 24] ^ s_te1[(t0 >> 16) & 0xff] ^ s_te2[(t1 >>  8) & 0xff] ^ s_te3[t2 & 0xff] ^ rek[19];
  t0 = s_te0[s0 >> 24] ^ s_te1[(s1 >> 16) & 0xff] ^ s_te2[(s2 >>  8) & 0xff] ^ s_te3[s3 & 0xff] ^ rek[20];
  t1 = s_te0[s1 >> 24] ^ s_te1[(s2 >> 16) & 0xff] ^ s_te2[(s3 >>  8) & 0xff] ^ s_te3[s0 & 0xff] ^ rek[21];
  t2 = s_te0[s2 >> 24] ^ s_te1[(s3 >> 16) & 0xff] ^ s_te2[(s0 >>  8) & 0xff] ^ s_te3[s1 & 0xff] ^ rek[22];
  t3 = s_te0[s3 >> 24] ^ s_te1[(s0 >> 16) & 0xff] ^ s_te2[(s1 >>  8) & 0xff] ^ s_te3[s2 & 0xff] ^ rek[23];
  s0 = s_te0[t0 >> 24] ^ s_te1[(t1 >> 16) & 0xff] ^ s_te2[(t2 >>  8) & 0xff] ^ s_te3[t3 & 0xff] ^ rek[24];
  s1 = s_te0[t1 >> 24] ^ s_te1[(t2 >> 16) & 0xff] ^ s_te2[(t3 >>  8) & 0xff] ^ s_te3[t0 & 0xff] ^ rek[25];
  s2 = s_te0[t2 >> 24] ^ s_te1[(t3 >> 16) & 0xff] ^ s_te2[(t0 >>  8) & 0xff] ^ s_te3[t1 & 0xff] ^ rek[26];
  s3 = s_te0[t3 >> 24] ^ s_te1[(t0 >> 16) & 0xff] ^ s_te2[(t1 >>  8) & 0xff] ^ s_te3[t2 & 0xff] ^ rek[27];
  t0 = s_te0[s0 >> 24] ^ s_te1[(s1 >> 16) & 0xff] ^ s_te2[(s2 >>  8) & 0xff] ^ s_te3[s3 & 0xff] ^ rek[28];
  t1 = s_te0[s1 >> 24] ^ s_te1[(s2 >> 16) & 0xff] ^ s_te2[(s3 >>  8) & 0xff] ^ s_te3[s0 & 0xff] ^ rek[29];
  t2 = s_te0[s2 >> 24] ^ s_te1[(s3 >> 16) & 0xff] ^ s_te2[(s0 >>  8) & 0xff] ^ s_te3[s1 & 0xff] ^ rek[30];
  t3 = s_te0[s3 >> 24] ^ s_te1[(s0 >> 16) & 0xff] ^ s_te2[(s1 >>  8) & 0xff] ^ s_te3[s2 & 0xff] ^ rek[31];
  s0 = s_te0[t0 >> 24] ^ s_te1[(t1 >> 16) & 0xff] ^ s_te2[(t2 >>  8) & 0xff] ^ s_te3[t3 & 0xff] ^ rek[32];
  s1 = s_te0[t1 >> 24] ^ s_te1[(t2 >> 16) & 0xff] ^ s_te2[(t3 >>  8) & 0xff] ^ s_te3[t0 & 0xff] ^ rek[33];
  s2 = s_te0[t2 >> 24] ^ s_te1[(t3 >> 16) & 0xff] ^ s_te2[(t0 >>  8) & 0xff] ^ s_te3[t1 & 0xff] ^ rek[34];
  s3 = s_te0[t3 >> 24] ^ s_te1[(t0 >> 16) & 0xff] ^ s_te2[(t1 >>  8) & 0xff] ^ s_te3[t2 & 0xff] ^ rek[35];
  t0 = s_te0[s0 >> 24] ^ s_te1[(s1 >> 16) & 0xff] ^ s_te2[(s2 >>  8) & 0xff] ^ s_te3[s3 & 0xff] ^ rek[36];
  t1 = s_te0[s1 >> 24] ^ s_te1[(s2 >> 16) & 0xff] ^ s_te2[(s3 >>  8) & 0xff] ^ s_te3[s0 & 0xff] ^ rek[37];
  t2 = s_te0[s2 >> 24] ^ s_te1[(s3 >> 16) & 0xff] ^ s_te2[(s0 >>  8) & 0xff] ^ s_te3[s1 & 0xff] ^ rek[38];
  t3 = s_te0[s3 >> 24] ^ s_te1[(s0 >> 16) & 0xff] ^ s_te2[(s1 >>  8) & 0xff] ^ s_te3[s2 & 0xff] ^ rek[39];

  out[0] = (s_te4[(t0 >> 24) & 0xff] & 0xff000000)
         ^ (s_te4[(t1 >> 16) & 0xff] & 0x00ff0000)
         ^ (s_te4[(t2 >>  8) & 0xff] & 0x0000ff00)
         ^ (s_te4[(t3 >>  0) & 0xff] & 0x000000ff)
         ^ rek[40];

  out[1] = (s_te4[(t1 >> 24) & 0xff] & 0xff000000)
         ^ (s_te4[(t2 >> 16) & 0xff] & 0x00ff0000)
         ^ (s_te4[(t3 >>  8) & 0xff] & 0x0000ff00)
         ^ (s_te4[(t0 >>  0) & 0xff] & 0x000000ff)
         ^ rek[41];

  out[2] = (s_te4[(t2 >> 24) & 0xff] & 0xff000000)
         ^ (s_te4[(t3 >> 16) & 0xff] & 0x00ff0000)
         ^ (s_te4[(t0 >>  8) & 0xff] & 0x0000ff00)
         ^ (s_te4[(t1 >>  0) & 0xff] & 0x000000ff)
         ^ rek[42];

  out[3] = (s_te4[(t3 >> 24) & 0xff] & 0xff000000)
         ^ (s_te4[(t0 >> 16) & 0xff] & 0x00ff0000)
         ^ (s_te4[(t1 >>  8) & 0xff] & 0x0000ff00)
         ^ (s_te4[(t2 >>  0) & 0xff] & 0x000000ff)
         ^ rek[43];

  out[0] = swap32 (out[0]);
  out[1] = swap32 (out[1]);
  out[2] = swap32 (out[2]);
  out[3] = swap32 (out[3]);
}

void memcat8 (u32 block0[4], u32 block1[4], u32 block2[4], u32 block3[4], const u32 block_len, const u32 append[2])
{
  switch (block_len)
  {
    case 0:
      block0[0] = append[0];
      block0[1] = append[1];
      break;

    case 1:
      block0[0] = block0[0]       | append[0] <<  8;
      block0[1] = append[0] >> 24 | append[1] <<  8;
      block0[2] = append[1] >> 24;
      break;

    case 2:
      block0[0] = block0[0]       | append[0] << 16;
      block0[1] = append[0] >> 16 | append[1] << 16;
      block0[2] = append[1] >> 16;
      break;

    case 3:
      block0[0] = block0[0]       | append[0] << 24;
      block0[1] = append[0] >>  8 | append[1] << 24;
      block0[2] = append[1] >>  8;
      break;

    case 4:
      block0[1] = append[0];
      block0[2] = append[1];
      break;

    case 5:
      block0[1] = block0[1]       | append[0] <<  8;
      block0[2] = append[0] >> 24 | append[1] <<  8;
      block0[3] = append[1] >> 24;
      break;

    case 6:
      block0[1] = block0[1]       | append[0] << 16;
      block0[2] = append[0] >> 16 | append[1] << 16;
      block0[3] = append[1] >> 16;
      break;

    case 7:
      block0[1] = block0[1]       | append[0] << 24;
      block0[2] = append[0] >>  8 | append[1] << 24;
      block0[3] = append[1] >>  8;
      break;

    case 8:
      block0[2] = append[0];
      block0[3] = append[1];
      break;

    case 9:
      block0[2] = block0[2]       | append[0] <<  8;
      block0[3] = append[0] >> 24 | append[1] <<  8;
      block1[0] = append[1] >> 24;
      break;

    case 10:
      block0[2] = block0[2]       | append[0] << 16;
      block0[3] = append[0] >> 16 | append[1] << 16;
      block1[0] = append[1] >> 16;
      break;

    case 11:
      block0[2] = block0[2]       | append[0] << 24;
      block0[3] = append[0] >>  8 | append[1] << 24;
      block1[0] = append[1] >>  8;
      break;

    case 12:
      block0[3] = append[0];
      block1[0] = append[1];
      break;

    case 13:
      block0[3] = block0[3]       | append[0] <<  8;
      block1[0] = append[0] >> 24 | append[1] <<  8;
      block1[1] = append[1] >> 24;
      break;

    case 14:
      block0[3] = block0[3]       | append[0] << 16;
      block1[0] = append[0] >> 16 | append[1] << 16;
      block1[1] = append[1] >> 16;
      break;

    case 15:
      block0[3] = block0[3]       | append[0] << 24;
      block1[0] = append[0] >>  8 | append[1] << 24;
      block1[1] = append[1] >>  8;
      break;

    case 16:
      block1[0] = append[0];
      block1[1] = append[1];
      break;

    case 17:
      block1[0] = block1[0]       | append[0] <<  8;
      block1[1] = append[0] >> 24 | append[1] <<  8;
      block1[2] = append[1] >> 24;
      break;

    case 18:
      block1[0] = block1[0]       | append[0] << 16;
      block1[1] = append[0] >> 16 | append[1] << 16;
      block1[2] = append[1] >> 16;
      break;

    case 19:
      block1[0] = block1[0]       | append[0] << 24;
      block1[1] = append[0] >>  8 | append[1] << 24;
      block1[2] = append[1] >>  8;
      break;

    case 20:
      block1[1] = append[0];
      block1[2] = append[1];
      break;

    case 21:
      block1[1] = block1[1]       | append[0] <<  8;
      block1[2] = append[0] >> 24 | append[1] <<  8;
      block1[3] = append[1] >> 24;
      break;

    case 22:
      block1[1] = block1[1]       | append[0] << 16;
      block1[2] = append[0] >> 16 | append[1] << 16;
      block1[3] = append[1] >> 16;
      break;

    case 23:
      block1[1] = block1[1]       | append[0] << 24;
      block1[2] = append[0] >>  8 | append[1] << 24;
      block1[3] = append[1] >>  8;
      break;

    case 24:
      block1[2] = append[0];
      block1[3] = append[1];
      break;

    case 25:
      block1[2] = block1[2]       | append[0] <<  8;
      block1[3] = append[0] >> 24 | append[1] <<  8;
      block2[0] = append[1] >> 24;
      break;

    case 26:
      block1[2] = block1[2]       | append[0] << 16;
      block1[3] = append[0] >> 16 | append[1] << 16;
      block2[0] = append[1] >> 16;
      break;

    case 27:
      block1[2] = block1[2]       | append[0] << 24;
      block1[3] = append[0] >>  8 | append[1] << 24;
      block2[0] = append[1] >>  8;
      break;

    case 28:
      block1[3] = append[0];
      block2[0] = append[1];
      break;

    case 29:
      block1[3] = block1[3]       | append[0] <<  8;
      block2[0] = append[0] >> 24 | append[1] <<  8;
      block2[1] = append[1] >> 24;
      break;

    case 30:
      block1[3] = block1[3]       | append[0] << 16;
      block2[0] = append[0] >> 16 | append[1] << 16;
      block2[1] = append[1] >> 16;
      break;

    case 31:
      block1[3] = block1[3]       | append[0] << 24;
      block2[0] = append[0] >>  8 | append[1] << 24;
      block2[1] = append[1] >>  8;
      break;

    case 32:
      block2[0] = append[0];
      block2[1] = append[1];
      break;

    case 33:
      block2[0] = block2[0]       | append[0] <<  8;
      block2[1] = append[0] >> 24 | append[1] <<  8;
      block2[2] = append[1] >> 24;
      break;

    case 34:
      block2[0] = block2[0]       | append[0] << 16;
      block2[1] = append[0] >> 16 | append[1] << 16;
      block2[2] = append[1] >> 16;
      break;

    case 35:
      block2[0] = block2[0]       | append[0] << 24;
      block2[1] = append[0] >>  8 | append[1] << 24;
      block2[2] = append[1] >>  8;
      break;

    case 36:
      block2[1] = append[0];
      block2[2] = append[1];
      break;

    case 37:
      block2[1] = block2[1]       | append[0] <<  8;
      block2[2] = append[0] >> 24 | append[1] <<  8;
      block2[3] = append[1] >> 24;
      break;

    case 38:
      block2[1] = block2[1]       | append[0] << 16;
      block2[2] = append[0] >> 16 | append[1] << 16;
      block2[3] = append[1] >> 16;
      break;

    case 39:
      block2[1] = block2[1]       | append[0] << 24;
      block2[2] = append[0] >>  8 | append[1] << 24;
      block2[3] = append[1] >>  8;
      break;

    case 40:
      block2[2] = append[0];
      block2[3] = append[1];
      break;

    case 41:
      block2[2] = block2[2]       | append[0] <<  8;
      block2[3] = append[0] >> 24 | append[1] <<  8;
      block3[0] = append[1] >> 24;
      break;

    case 42:
      block2[2] = block2[2]       | append[0] << 16;
      block2[3] = append[0] >> 16 | append[1] << 16;
      block3[0] = append[1] >> 16;
      break;

    case 43:
      block2[2] = block2[2]       | append[0] << 24;
      block2[3] = append[0] >>  8 | append[1] << 24;
      block3[0] = append[1] >>  8;
      break;

    case 44:
      block2[3] = append[0];
      block3[0] = append[1];
      break;

    case 45:
      block2[3] = block2[3]       | append[0] <<  8;
      block3[0] = append[0] >> 24 | append[1] <<  8;
      block3[1] = append[1] >> 24;
      break;

    case 46:
      block2[3] = block2[3]       | append[0] << 16;
      block3[0] = append[0] >> 16 | append[1] << 16;
      block3[1] = append[1] >> 16;
      break;

    case 47:
      block2[3] = block2[3]       | append[0] << 24;
      block3[0] = append[0] >>  8 | append[1] << 24;
      block3[1] = append[1] >>  8;
      break;

    case 48:
      block3[0] = append[0];
      block3[1] = append[1];
      break;

    case 49:
      block3[0] = block3[0]       | append[0] <<  8;
      block3[1] = append[0] >> 24 | append[1] <<  8;
      block3[2] = append[1] >> 24;
      break;

    case 50:
      block3[0] = block3[0]       | append[0] << 16;
      block3[1] = append[0] >> 16 | append[1] << 16;
      block3[2] = append[1] >> 16;
      break;

    case 51:
      block3[0] = block3[0]       | append[0] << 24;
      block3[1] = append[0] >>  8 | append[1] << 24;
      block3[2] = append[1] >>  8;
      break;

    case 52:
      block3[1] = append[0];
      block3[2] = append[1];
      break;

    case 53:
      block3[1] = block3[1]       | append[0] <<  8;
      block3[2] = append[0] >> 24 | append[1] <<  8;
      block3[3] = append[1] >> 24;
      break;

    case 54:
      block3[1] = block3[1]       | append[0] << 16;
      block3[2] = append[0] >> 16 | append[1] << 16;
      block3[3] = append[1] >> 16;
      break;

    case 55:
      block3[1] = block3[1]       | append[0] << 24;
      block3[2] = append[0] >>  8 | append[1] << 24;
      block3[3] = append[1] >>  8;
      break;

    case 56:
      block3[2] = append[0];
      block3[3] = append[1];
      break;
  }
}

#define AESSZ       16        // AES_BLOCK_SIZE

#define BLSZ256     32
#define BLSZ384     48
#define BLSZ512     64

#define WORDSZ256   64
#define WORDSZ384   128
#define WORDSZ512   128

#define PWMAXSZ     32        // hashcat password length limit
#define BLMAXSZ     BLSZ512
#define WORDMAXSZ   WORDSZ512

#define PWMAXSZ4    (PWMAXSZ    / 4)
#define BLMAXSZ4    (BLMAXSZ    / 4)
#define WORDMAXSZ4  (WORDMAXSZ  / 4)
#define AESSZ4      (AESSZ      / 4)

void make_sc (u32 *sc, const u32 *pw, const u32 pw_len, const u32 *bl, const u32 bl_len)
{
  const u32 bd = bl_len / 4;

  const u32 pm = pw_len % 4;
  const u32 pd = pw_len / 4;

  u32 idx = 0;

  if (pm == 0)
  {
    for (u32 i = 0; i < pd; i++) sc[idx++] = pw[i];
    for (u32 i = 0; i < bd; i++) sc[idx++] = bl[i];
    for (u32 i = 0; i <  4; i++) sc[idx++] = sc[i];
  }
  else
  {
    u32 pm4 = 4 - pm;

    u32 i;

    #if defined IS_AMD || defined IS_GENERIC
    for (i = 0; i < pd; i++) sc[idx++] = pw[i];
                             sc[idx++] = pw[i]
                                       | amd_bytealign (bl[0],         0, pm4);
    for (i = 1; i < bd; i++) sc[idx++] = amd_bytealign (bl[i], bl[i - 1], pm4);
                             sc[idx++] = amd_bytealign (sc[0], bl[i - 1], pm4);
    for (i = 1; i <  4; i++) sc[idx++] = amd_bytealign (sc[i], sc[i - 1], pm4);
                             sc[idx++] = amd_bytealign (    0, sc[i - 1], pm4);
    #endif

    #ifdef IS_NV
    int selector = (0x76543210 >> (pm4 * 4)) & 0xffff;

    for (i = 0; i < pd; i++) sc[idx++] = pw[i];
                             sc[idx++] = pw[i]
                                       | __byte_perm (        0, bl[0], selector);
    for (i = 1; i < bd; i++) sc[idx++] = __byte_perm (bl[i - 1], bl[i], selector);
                             sc[idx++] = __byte_perm (bl[i - 1], sc[0], selector);
    for (i = 1; i <  4; i++) sc[idx++] = __byte_perm (sc[i - 1], sc[i], selector);
                             sc[idx++] = __byte_perm (sc[i - 1],     0, selector);
    #endif
  }
}

void make_pt_with_offset (u32 *pt, const u32 offset, const u32 *sc, const u32 pwbl_len)
{
  const u32 m = offset % pwbl_len;

  const u32 om = m % 4;
  const u32 od = m / 4;

  #if defined IS_AMD || defined IS_GENERIC
  pt[0] = amd_bytealign (sc[od + 1], sc[od + 0], om);
  pt[1] = amd_bytealign (sc[od + 2], sc[od + 1], om);
  pt[2] = amd_bytealign (sc[od + 3], sc[od + 2], om);
  pt[3] = amd_bytealign (sc[od + 4], sc[od + 3], om);
  #endif

  #ifdef IS_NV
  int selector = (0x76543210 >> (om * 4)) & 0xffff;

  pt[0] = __byte_perm (sc[od + 0], sc[od + 1], selector);
  pt[1] = __byte_perm (sc[od + 1], sc[od + 2], selector);
  pt[2] = __byte_perm (sc[od + 2], sc[od + 3], selector);
  pt[3] = __byte_perm (sc[od + 3], sc[od + 4], selector);
  #endif
}

void make_w_with_offset (ctx_t *ctx, const u32 W_len, const u32 offset, const u32 *sc, const u32 pwbl_len, u32 *iv, const u32 *rek, __local u32 *s_te0, __local u32 *s_te1, __local u32 *s_te2, __local u32 *s_te3, __local u32 *s_te4)
{
  for (u32 k = 0, wk = 0; k < W_len; k += AESSZ, wk += AESSZ4)
  {
    u32 pt[AESSZ4];

    make_pt_with_offset (pt, offset + k, sc, pwbl_len);

    pt[0] ^= iv[0];
    pt[1] ^= iv[1];
    pt[2] ^= iv[2];
    pt[3] ^= iv[3];

    AES128_encrypt (pt, iv, rek, s_te0, s_te1, s_te2, s_te3, s_te4);

    ctx->W32[wk + 0] = iv[0];
    ctx->W32[wk + 1] = iv[1];
    ctx->W32[wk + 2] = iv[2];
    ctx->W32[wk + 3] = iv[3];
  }
}

u32 do_round (const u32 *pw, const u32 pw_len, ctx_t *ctx, __local u32 *s_te0, __local u32 *s_te1, __local u32 *s_te2, __local u32 *s_te3, __local u32 *s_te4)
{
  // make scratch buffer

  u32 sc[PWMAXSZ4 + BLMAXSZ4 + AESSZ4];

  make_sc (sc, pw, pw_len, ctx->dgst32, ctx->dgst_len);

  // make sure pwbl_len is calculcated before it gets changed

  const u32 pwbl_len = pw_len + ctx->dgst_len;

  // init iv

  u32 iv[AESSZ4];

  iv[0] = ctx->dgst32[4];
  iv[1] = ctx->dgst32[5];
  iv[2] = ctx->dgst32[6];
  iv[3] = ctx->dgst32[7];

  // init aes

  u32 rek[60];

  AES128_ExpandKey (ctx->dgst32, rek, s_te0, s_te1, s_te2, s_te3, s_te4);

  // first call is special as the hash depends on the result of it
  // but since we do not know about the outcome at this time
  // we must use the max

  make_w_with_offset (ctx, WORDMAXSZ, 0, sc, pwbl_len, iv, rek, s_te0, s_te1, s_te2, s_te3, s_te4);

  // now we can find out hash to use

  u32 sum = 0;

  for (u32 i = 0; i < 4; i++)
  {
    sum += (ctx->W32[i] >> 24) & 0xff;
    sum += (ctx->W32[i] >> 16) & 0xff;
    sum += (ctx->W32[i] >>  8) & 0xff;
    sum += (ctx->W32[i] >>  0) & 0xff;
  }

  // init hash

  switch (sum % 3)
  {
    case 0: ctx->dgst32[0] = SHA256M_A;
            ctx->dgst32[1] = SHA256M_B;
            ctx->dgst32[2] = SHA256M_C;
            ctx->dgst32[3] = SHA256M_D;
            ctx->dgst32[4] = SHA256M_E;
            ctx->dgst32[5] = SHA256M_F;
            ctx->dgst32[6] = SHA256M_G;
            ctx->dgst32[7] = SHA256M_H;
            ctx->dgst_len  = BLSZ256;
            ctx->W_len     = WORDSZ256;
            sha256_transform (&ctx->W32[ 0], &ctx->W32[ 4], &ctx->W32[ 8], &ctx->W32[12], ctx->dgst32);
            sha256_transform (&ctx->W32[16], &ctx->W32[20], &ctx->W32[24], &ctx->W32[28], ctx->dgst32);
            break;
    case 1: ctx->dgst64[0] = SHA384M_A;
            ctx->dgst64[1] = SHA384M_B;
            ctx->dgst64[2] = SHA384M_C;
            ctx->dgst64[3] = SHA384M_D;
            ctx->dgst64[4] = SHA384M_E;
            ctx->dgst64[5] = SHA384M_F;
            ctx->dgst64[6] = SHA384M_G;
            ctx->dgst64[7] = SHA384M_H;
            ctx->dgst_len  = BLSZ384;
            ctx->W_len     = WORDSZ384;
            sha384_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
            break;
    case 2: ctx->dgst64[0] = SHA512M_A;
            ctx->dgst64[1] = SHA512M_B;
            ctx->dgst64[2] = SHA512M_C;
            ctx->dgst64[3] = SHA512M_D;
            ctx->dgst64[4] = SHA512M_E;
            ctx->dgst64[5] = SHA512M_F;
            ctx->dgst64[6] = SHA512M_G;
            ctx->dgst64[7] = SHA512M_H;
            ctx->dgst_len  = BLSZ512;
            ctx->W_len     = WORDSZ512;
            sha512_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
            break;
  }

  // main loop

  const u32 final_len = pwbl_len * 64;

  const u32 iter_max = ctx->W_len - (ctx->W_len / 8);

  u32 offset;
  u32 left;

  for (offset = WORDMAXSZ, left = final_len - offset; left >= iter_max; offset += ctx->W_len, left -= ctx->W_len)
  {
    make_w_with_offset (ctx, ctx->W_len, offset, sc, pwbl_len, iv, rek, s_te0, s_te1, s_te2, s_te3, s_te4);

    switch (ctx->dgst_len)
    {
      case BLSZ256: sha256_transform (&ctx->W32[ 0], &ctx->W32[ 4], &ctx->W32[ 8], &ctx->W32[12], ctx->dgst32);
                    break;
      case BLSZ384: sha384_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
                    break;
      case BLSZ512: sha512_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
                    break;
    }
  }

  u32 ex = 0;

  if (left)
  {
    switch (ctx->dgst_len)
    {
      case BLSZ384: make_w_with_offset (ctx, 64, offset, sc, pwbl_len, iv, rek, s_te0, s_te1, s_te2, s_te3, s_te4);
                    ctx->W64[ 8] = 0x80;
                    ctx->W64[ 9] = 0;
                    ctx->W64[10] = 0;
                    ctx->W64[11] = 0;
                    ctx->W64[12] = 0;
                    ctx->W64[13] = 0;
                    ctx->W64[14] = 0;
                    ctx->W64[15] = swap64 ((u64) (final_len * 8));
                    ex = ctx->W64[7] >> 56;
                    break;
      case BLSZ512: make_w_with_offset (ctx, 64, offset, sc, pwbl_len, iv, rek, s_te0, s_te1, s_te2, s_te3, s_te4);
                    ctx->W64[ 8] = 0x80;
                    ctx->W64[ 9] = 0;
                    ctx->W64[10] = 0;
                    ctx->W64[11] = 0;
                    ctx->W64[12] = 0;
                    ctx->W64[13] = 0;
                    ctx->W64[14] = 0;
                    ctx->W64[15] = swap64 ((u64) (final_len * 8));
                    ex = ctx->W64[7] >> 56;
                    break;
    }
  }
  else
  {
    switch (ctx->dgst_len)
    {
      case BLSZ256: ex = ctx->W32[15] >> 24;
                    ctx->W32[ 0] = 0x80;
                    ctx->W32[ 1] = 0;
                    ctx->W32[ 2] = 0;
                    ctx->W32[ 3] = 0;
                    ctx->W32[ 4] = 0;
                    ctx->W32[ 5] = 0;
                    ctx->W32[ 6] = 0;
                    ctx->W32[ 7] = 0;
                    ctx->W32[ 8] = 0;
                    ctx->W32[ 9] = 0;
                    ctx->W32[10] = 0;
                    ctx->W32[11] = 0;
                    ctx->W32[12] = 0;
                    ctx->W32[13] = 0;
                    ctx->W32[14] = 0;
                    ctx->W32[15] = swap32 (final_len * 8);
                    break;
      case BLSZ384: ex = ctx->W64[15] >> 56;
                    ctx->W64[ 0] = 0x80;
                    ctx->W64[ 1] = 0;
                    ctx->W64[ 2] = 0;
                    ctx->W64[ 3] = 0;
                    ctx->W64[ 4] = 0;
                    ctx->W64[ 5] = 0;
                    ctx->W64[ 6] = 0;
                    ctx->W64[ 7] = 0;
                    ctx->W64[ 8] = 0;
                    ctx->W64[ 9] = 0;
                    ctx->W64[10] = 0;
                    ctx->W64[11] = 0;
                    ctx->W64[12] = 0;
                    ctx->W64[13] = 0;
                    ctx->W64[14] = 0;
                    ctx->W64[15] = swap64 ((u64) (final_len * 8));
                    break;
      case BLSZ512: ex = ctx->W64[15] >> 56;
                    ctx->W64[ 0] = 0x80;
                    ctx->W64[ 1] = 0;
                    ctx->W64[ 2] = 0;
                    ctx->W64[ 3] = 0;
                    ctx->W64[ 4] = 0;
                    ctx->W64[ 5] = 0;
                    ctx->W64[ 6] = 0;
                    ctx->W64[ 7] = 0;
                    ctx->W64[ 8] = 0;
                    ctx->W64[ 9] = 0;
                    ctx->W64[10] = 0;
                    ctx->W64[11] = 0;
                    ctx->W64[12] = 0;
                    ctx->W64[13] = 0;
                    ctx->W64[14] = 0;
                    ctx->W64[15] = swap64 ((u64) (final_len * 8));
                    break;
    }
  }

  switch (ctx->dgst_len)
  {
    case BLSZ256: sha256_transform (&ctx->W32[ 0], &ctx->W32[ 4], &ctx->W32[ 8], &ctx->W32[12], ctx->dgst32);
                  ctx->dgst32[ 0] = swap32 (ctx->dgst32[0]);
                  ctx->dgst32[ 1] = swap32 (ctx->dgst32[1]);
                  ctx->dgst32[ 2] = swap32 (ctx->dgst32[2]);
                  ctx->dgst32[ 3] = swap32 (ctx->dgst32[3]);
                  ctx->dgst32[ 4] = swap32 (ctx->dgst32[4]);
                  ctx->dgst32[ 5] = swap32 (ctx->dgst32[5]);
                  ctx->dgst32[ 6] = swap32 (ctx->dgst32[6]);
                  ctx->dgst32[ 7] = swap32 (ctx->dgst32[7]);
                  ctx->dgst32[ 8] = 0;
                  ctx->dgst32[ 9] = 0;
                  ctx->dgst32[10] = 0;
                  ctx->dgst32[11] = 0;
                  ctx->dgst32[12] = 0;
                  ctx->dgst32[13] = 0;
                  ctx->dgst32[14] = 0;
                  ctx->dgst32[15] = 0;
                  break;
    case BLSZ384: sha384_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
                  ctx->dgst64[0] = swap64 (ctx->dgst64[0]);
                  ctx->dgst64[1] = swap64 (ctx->dgst64[1]);
                  ctx->dgst64[2] = swap64 (ctx->dgst64[2]);
                  ctx->dgst64[3] = swap64 (ctx->dgst64[3]);
                  ctx->dgst64[4] = swap64 (ctx->dgst64[4]);
                  ctx->dgst64[5] = swap64 (ctx->dgst64[5]);
                  ctx->dgst64[6] = 0;
                  ctx->dgst64[7] = 0;
                  break;
    case BLSZ512: sha512_transform (&ctx->W64[ 0], &ctx->W64[ 4], &ctx->W64[ 8], &ctx->W64[12], ctx->dgst64);
                  ctx->dgst64[0] = swap64 (ctx->dgst64[0]);
                  ctx->dgst64[1] = swap64 (ctx->dgst64[1]);
                  ctx->dgst64[2] = swap64 (ctx->dgst64[2]);
                  ctx->dgst64[3] = swap64 (ctx->dgst64[3]);
                  ctx->dgst64[4] = swap64 (ctx->dgst64[4]);
                  ctx->dgst64[5] = swap64 (ctx->dgst64[5]);
                  ctx->dgst64[6] = swap64 (ctx->dgst64[6]);
                  ctx->dgst64[7] = swap64 (ctx->dgst64[7]);
                  break;
  }

  return ex;
}

__kernel void m10700_init (__global pw_t *pws, __global kernel_rule_t *rules_buf, __global comb_t *combs_buf, __global bf_t *bfs_buf, __global pdf17l8_tmp_t *tmps, __global void *hooks, __global u32 *bitmaps_buf_s1_a, __global u32 *bitmaps_buf_s1_b, __global u32 *bitmaps_buf_s1_c, __global u32 *bitmaps_buf_s1_d, __global u32 *bitmaps_buf_s2_a, __global u32 *bitmaps_buf_s2_b, __global u32 *bitmaps_buf_s2_c, __global u32 *bitmaps_buf_s2_d, __global plain_t *plains_buf, __global digest_t *digests_buf, __global u32 *hashes_shown, __global salt_t *salt_bufs, __global pdf_t *pdf_bufs, __global u32 *d_return_buf, __global u32 *d_scryptV_buf, const u32 bitmap_mask, const u32 bitmap_shift1, const u32 bitmap_shift2, const u32 salt_pos, const u32 loop_pos, const u32 loop_cnt, const u32 il_cnt, const u32 digests_cnt, const u32 digests_offset, const u32 combs_mode, const u32 gid_max)
{
  /**
   * base
   */

  const u32 gid = get_global_id (0);

  if (gid >= gid_max) return;

  u32 w0[4];

  w0[0] = pws[gid].i[0];
  w0[1] = pws[gid].i[1];
  w0[2] = pws[gid].i[2];
  w0[3] = pws[gid].i[3];

  const u32 pw_len = pws[gid].pw_len;

  /**
   * salt
   */

  u32 salt_buf[2];

  salt_buf[0] = salt_bufs[salt_pos].salt_buf[0];
  salt_buf[1] = salt_bufs[salt_pos].salt_buf[1];

  const u32 salt_len = salt_bufs[salt_pos].salt_len;

  /**
   * init
   */

  u32 block_len = pw_len;

  u32 block0[4];

  block0[0] = w0[0];
  block0[1] = w0[1];
  block0[2] = w0[2];
  block0[3] = w0[3];

  u32 block1[4];

  block1[0] = 0;
  block1[1] = 0;
  block1[2] = 0;
  block1[3] = 0;

  u32 block2[4];

  block2[0] = 0;
  block2[1] = 0;
  block2[2] = 0;
  block2[3] = 0;

  u32 block3[4];

  block3[0] = 0;
  block3[1] = 0;
  block3[2] = 0;
  block3[3] = 0;

  memcat8 (block0, block1, block2, block3, block_len, salt_buf);

  block_len += salt_len;

  append_0x80_2x4 (block0, block1, block_len);

  block3[3] = swap32 (block_len * 8);

  u32 digest[8];

  digest[0] = SHA256M_A;
  digest[1] = SHA256M_B;
  digest[2] = SHA256M_C;
  digest[3] = SHA256M_D;
  digest[4] = SHA256M_E;
  digest[5] = SHA256M_F;
  digest[6] = SHA256M_G;
  digest[7] = SHA256M_H;

  sha256_transform (block0, block1, block2, block3, digest);

  digest[0] = swap32 (digest[0]);
  digest[1] = swap32 (digest[1]);
  digest[2] = swap32 (digest[2]);
  digest[3] = swap32 (digest[3]);
  digest[4] = swap32 (digest[4]);
  digest[5] = swap32 (digest[5]);
  digest[6] = swap32 (digest[6]);
  digest[7] = swap32 (digest[7]);

  tmps[gid].dgst32[0] = digest[0];
  tmps[gid].dgst32[1] = digest[1];
  tmps[gid].dgst32[2] = digest[2];
  tmps[gid].dgst32[3] = digest[3];
  tmps[gid].dgst32[4] = digest[4];
  tmps[gid].dgst32[5] = digest[5];
  tmps[gid].dgst32[6] = digest[6];
  tmps[gid].dgst32[7] = digest[7];
  tmps[gid].dgst_len  = BLSZ256;
  tmps[gid].W_len     = WORDSZ256;
}

__kernel void m10700_loop (__global pw_t *pws, __global kernel_rule_t *rules_buf, __global comb_t *combs_buf, __global bf_t *bfs_buf, __global pdf17l8_tmp_t *tmps, __global void *hooks, __global u32 *bitmaps_buf_s1_a, __global u32 *bitmaps_buf_s1_b, __global u32 *bitmaps_buf_s1_c, __global u32 *bitmaps_buf_s1_d, __global u32 *bitmaps_buf_s2_a, __global u32 *bitmaps_buf_s2_b, __global u32 *bitmaps_buf_s2_c, __global u32 *bitmaps_buf_s2_d, __global plain_t *plains_buf, __global digest_t *digests_buf, __global u32 *hashes_shown, __global salt_t *salt_bufs, __global pdf_t *pdf_bufs, __global u32 *d_return_buf, __global u32 *d_scryptV_buf, const u32 bitmap_mask, const u32 bitmap_shift1, const u32 bitmap_shift2, const u32 salt_pos, const u32 loop_pos, const u32 loop_cnt, const u32 il_cnt, const u32 digests_cnt, const u32 digests_offset, const u32 combs_mode, const u32 gid_max)
{
  /**
   * base
   */

  const u32 gid = get_global_id (0);
  const u32 lid = get_local_id (0);
  const u32 lsz = get_local_size (0);

  /**
   * aes shared
   */

  __local u32 s_te0[256];
  __local u32 s_te1[256];
  __local u32 s_te2[256];
  __local u32 s_te3[256];
  __local u32 s_te4[256];

  for (u32 i = lid; i < 256; i += lsz)
  {
    s_te0[i] = te0[i];
    s_te1[i] = te1[i];
    s_te2[i] = te2[i];
    s_te3[i] = te3[i];
    s_te4[i] = te4[i];
  }

  barrier (CLK_LOCAL_MEM_FENCE);

  if (gid >= gid_max) return;

  /**
   * base
   */

  u32 w0[4];

  w0[0] = pws[gid].i[0];
  w0[1] = pws[gid].i[1];
  w0[2] = pws[gid].i[2];
  w0[3] = pws[gid].i[3];

  const u32 pw_len = pws[gid].pw_len;

  if (pw_len == 0) return;

  /**
   * digest
   */

  ctx_t ctx;

  ctx.dgst64[0] = tmps[gid].dgst64[0];
  ctx.dgst64[1] = tmps[gid].dgst64[1];
  ctx.dgst64[2] = tmps[gid].dgst64[2];
  ctx.dgst64[3] = tmps[gid].dgst64[3];
  ctx.dgst64[4] = tmps[gid].dgst64[4];
  ctx.dgst64[5] = tmps[gid].dgst64[5];
  ctx.dgst64[6] = tmps[gid].dgst64[6];
  ctx.dgst64[7] = tmps[gid].dgst64[7];
  ctx.dgst_len  = tmps[gid].dgst_len;
  ctx.W_len     = tmps[gid].W_len;

  u32 ex = 0;

  for (u32 i = 0, j = loop_pos; i < loop_cnt; i++, j++)
  {
    ex = do_round (w0, pw_len, &ctx, s_te0, s_te1, s_te2, s_te3, s_te4);
  }

  if ((loop_pos + loop_cnt) == 64)
  {
    for (u32 i = 64; i < ex + 32; i++)
    {
      ex = do_round (w0, pw_len, &ctx, s_te0, s_te1, s_te2, s_te3, s_te4);
    }
  }

  tmps[gid].dgst64[0] = ctx.dgst64[0];
  tmps[gid].dgst64[1] = ctx.dgst64[1];
  tmps[gid].dgst64[2] = ctx.dgst64[2];
  tmps[gid].dgst64[3] = ctx.dgst64[3];
  tmps[gid].dgst64[4] = ctx.dgst64[4];
  tmps[gid].dgst64[5] = ctx.dgst64[5];
  tmps[gid].dgst64[6] = ctx.dgst64[6];
  tmps[gid].dgst64[7] = ctx.dgst64[7];
  tmps[gid].dgst_len  = ctx.dgst_len;
  tmps[gid].W_len     = ctx.W_len;
}

__kernel void m10700_comp (__global pw_t *pws, __global kernel_rule_t *rules_buf, __global comb_t *combs_buf, __global bf_t *bfs_buf, __global pdf17l8_tmp_t *tmps, __global void *hooks, __global u32 *bitmaps_buf_s1_a, __global u32 *bitmaps_buf_s1_b, __global u32 *bitmaps_buf_s1_c, __global u32 *bitmaps_buf_s1_d, __global u32 *bitmaps_buf_s2_a, __global u32 *bitmaps_buf_s2_b, __global u32 *bitmaps_buf_s2_c, __global u32 *bitmaps_buf_s2_d, __global plain_t *plains_buf, __global digest_t *digests_buf, __global u32 *hashes_shown, __global salt_t *salt_bufs, __global pdf_t *pdf_bufs, __global u32 *d_return_buf, __global u32 *d_scryptV_buf, const u32 bitmap_mask, const u32 bitmap_shift1, const u32 bitmap_shift2, const u32 salt_pos, const u32 loop_pos, const u32 loop_cnt, const u32 il_cnt, const u32 digests_cnt, const u32 digests_offset, const u32 combs_mode, const u32 gid_max)
{
  /**
   * modifier
   */

  const u32 gid = get_global_id (0);

  if (gid >= gid_max) return;

  const u32 lid = get_local_id (0);

  /**
   * digest
   */

  const u32 r0 = swap32 (tmps[gid].dgst32[DGST_R0]);
  const u32 r1 = swap32 (tmps[gid].dgst32[DGST_R1]);
  const u32 r2 = swap32 (tmps[gid].dgst32[DGST_R2]);
  const u32 r3 = swap32 (tmps[gid].dgst32[DGST_R3]);

  #define il_pos 0

  #include COMPARE_M
}
