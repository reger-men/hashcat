/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

//#define NEW_SIMD_CODE

#include "inc_vendor.cl"
#include "inc_hash_constants.h"
#include "inc_hash_functions.cl"
#include "inc_types.cl"
#include "inc_common.cl"
#include "inc_rp.h"
#include "inc_rp.cl"
#include "inc_scalar.cl"
#include "inc_hash_sha512.cl"

__kernel void m01760_mxx (__global pw_t *pws, __global const kernel_rule_t *rules_buf, __global const pw_t *combs_buf, __global const bf_t *bfs_buf, __global void *tmps, __global void *hooks, __global const u32 *bitmaps_buf_s1_a, __global const u32 *bitmaps_buf_s1_b, __global const u32 *bitmaps_buf_s1_c, __global const u32 *bitmaps_buf_s1_d, __global const u32 *bitmaps_buf_s2_a, __global const u32 *bitmaps_buf_s2_b, __global const u32 *bitmaps_buf_s2_c, __global const u32 *bitmaps_buf_s2_d, __global plain_t *plains_buf, __global const digest_t *digests_buf, __global u32 *hashes_shown, __global const salt_t *salt_bufs, __global const void *esalt_bufs, __global u32 *d_return_buf, __global u32 *d_scryptV0_buf, __global u32 *d_scryptV1_buf, __global u32 *d_scryptV2_buf, __global u32 *d_scryptV3_buf, const u32 bitmap_mask, const u32 bitmap_shift1, const u32 bitmap_shift2, const u32 salt_pos, const u32 loop_pos, const u32 loop_cnt, const u32 il_cnt, const u32 digests_cnt, const u32 digests_offset, const u32 combs_mode, const u32 gid_max)
{
  /**
   * modifier
   */

  const u32 lid = get_local_id (0);
  const u32 gid = get_global_id (0);

  if (gid >= gid_max) return;

  /**
   * base
   */

  pw_t pw = pws[gid];

  const u32 salt_len = salt_bufs[salt_pos].salt_len;

  const u32 salt_lenv = ceil ((float) salt_len / 4);

  u32 s[64] = { 0 };

  for (int idx = 0; idx < salt_lenv; idx++)
  {
    s[idx] = swap32_S (salt_bufs[salt_pos].salt_buf[idx]);
  }

  sha512_hmac_ctx_t ctx0;

  sha512_hmac_init (&ctx0, s, salt_len);

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < il_cnt; il_pos++)
  {
    pw_t tmp = pw;

    tmp.pw_len = apply_rules (rules_buf[il_pos].cmds, tmp.i, tmp.pw_len);

    sha512_hmac_ctx_t ctx = ctx0;

    sha512_hmac_update_swap (&ctx, tmp.i, tmp.pw_len);

    sha512_hmac_final (&ctx);

    const u32 r0 = l32_from_64_S (ctx.opad.h[7]);
    const u32 r1 = h32_from_64_S (ctx.opad.h[7]);
    const u32 r2 = l32_from_64_S (ctx.opad.h[3]);
    const u32 r3 = h32_from_64_S (ctx.opad.h[3]);

    COMPARE_M_SCALAR (r0, r1, r2, r3);
  }
}

__kernel void m01760_sxx (__global pw_t *pws, __global const kernel_rule_t *rules_buf, __global const pw_t *combs_buf, __global const bf_t *bfs_buf, __global void *tmps, __global void *hooks, __global const u32 *bitmaps_buf_s1_a, __global const u32 *bitmaps_buf_s1_b, __global const u32 *bitmaps_buf_s1_c, __global const u32 *bitmaps_buf_s1_d, __global const u32 *bitmaps_buf_s2_a, __global const u32 *bitmaps_buf_s2_b, __global const u32 *bitmaps_buf_s2_c, __global const u32 *bitmaps_buf_s2_d, __global plain_t *plains_buf, __global const digest_t *digests_buf, __global u32 *hashes_shown, __global const salt_t *salt_bufs, __global const void *esalt_bufs, __global u32 *d_return_buf, __global u32 *d_scryptV0_buf, __global u32 *d_scryptV1_buf, __global u32 *d_scryptV2_buf, __global u32 *d_scryptV3_buf, const u32 bitmap_mask, const u32 bitmap_shift1, const u32 bitmap_shift2, const u32 salt_pos, const u32 loop_pos, const u32 loop_cnt, const u32 il_cnt, const u32 digests_cnt, const u32 digests_offset, const u32 combs_mode, const u32 gid_max)
{
  /**
   * modifier
   */

  const u32 lid = get_local_id (0);
  const u32 gid = get_global_id (0);

  if (gid >= gid_max) return;

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
   * base
   */

  pw_t pw = pws[gid];

  const u32 salt_len = salt_bufs[salt_pos].salt_len;

  const u32 salt_lenv = ceil ((float) salt_len / 4);

  u32 s[64] = { 0 };

  for (int idx = 0; idx < salt_lenv; idx++)
  {
    s[idx] = swap32_S (salt_bufs[salt_pos].salt_buf[idx]);
  }

  sha512_hmac_ctx_t ctx0;

  sha512_hmac_init (&ctx0, s, salt_len);

  /**
   * loop
   */

  for (u32 il_pos = 0; il_pos < il_cnt; il_pos++)
  {
    pw_t tmp = pw;

    tmp.pw_len = apply_rules (rules_buf[il_pos].cmds, tmp.i, tmp.pw_len);

    sha512_hmac_ctx_t ctx = ctx0;

    sha512_hmac_update_swap (&ctx, tmp.i, tmp.pw_len);

    sha512_hmac_final (&ctx);

    const u32 r0 = l32_from_64_S (ctx.opad.h[7]);
    const u32 r1 = h32_from_64_S (ctx.opad.h[7]);
    const u32 r2 = l32_from_64_S (ctx.opad.h[3]);
    const u32 r3 = h32_from_64_S (ctx.opad.h[3]);

    COMPARE_S_SCALAR (r0, r1, r2, r3);
  }
}
