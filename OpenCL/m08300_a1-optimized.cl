/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#define NEW_SIMD_CODE

#ifdef KERNEL_STATIC
#include "inc_vendor.h"
#include "inc_types.h"
#include "inc_common.cl"
#include "inc_simd.cl"
#include "inc_hash_sha1.cl"
#endif

__kernel void m08300_m04 (KERN_ATTR_BASIC ())
{
  /**
   * modifier
   */

  const u64 lid = get_local_id (0);

  /**
   * base
   */

  const u64 gid = get_global_id (0);

  if (gid >= gid_max) return;

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
   * salt
   */

  const u32 salt_iter = salt_bufs[salt_pos].salt_iter;

  u32 salt_buf0[4];
  u32 salt_buf1[4];

  salt_buf0[0] = salt_bufs[salt_pos].salt_buf[ 0];
  salt_buf0[1] = salt_bufs[salt_pos].salt_buf[ 1];
  salt_buf0[2] = salt_bufs[salt_pos].salt_buf[ 2];
  salt_buf0[3] = salt_bufs[salt_pos].salt_buf[ 3];
  salt_buf1[0] = salt_bufs[salt_pos].salt_buf[ 4];
  salt_buf1[1] = salt_bufs[salt_pos].salt_buf[ 5];
  salt_buf1[2] = salt_bufs[salt_pos].salt_buf[ 6];
  salt_buf1[3] = salt_bufs[salt_pos].salt_buf[ 7];

  const u32 salt_len = salt_bufs[salt_pos].salt_len;

  u32 domain_buf0[4];
  u32 domain_buf1[4];

  domain_buf0[0] = salt_bufs[salt_pos].salt_buf_pc[ 0];
  domain_buf0[1] = salt_bufs[salt_pos].salt_buf_pc[ 1];
  domain_buf0[2] = salt_bufs[salt_pos].salt_buf_pc[ 2];
  domain_buf0[3] = salt_bufs[salt_pos].salt_buf_pc[ 3];
  domain_buf1[0] = salt_bufs[salt_pos].salt_buf_pc[ 4];
  domain_buf1[1] = salt_bufs[salt_pos].salt_buf_pc[ 5];
  domain_buf1[2] = salt_bufs[salt_pos].salt_buf_pc[ 6];
  domain_buf1[3] = 0;

  const u32 domain_len = salt_bufs[salt_pos].salt_len_pc;

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

    /**
     * salt
     */

    u32x w0_t[4];
    u32x w1_t[4];
    u32x w2_t[4];
    u32x w3_t[4];

    w0_t[0] = w0[0];
    w0_t[1] = w0[1];
    w0_t[2] = w0[2];
    w0_t[3] = w0[3];
    w1_t[0] = w1[0];
    w1_t[1] = w1[1];
    w1_t[2] = w1[2];
    w1_t[3] = w1[3];
    w2_t[0] = w2[0];
    w2_t[1] = w2[1];
    w2_t[2] = w2[2];
    w2_t[3] = w2[3];
    w3_t[0] = w3[0];
    w3_t[1] = w3[1];
    w3_t[2] = w3[2];
    w3_t[3] = w3[3];

    switch_buffer_by_offset_le (w0_t, w1_t, w2_t, w3_t, 1);

    w0_t[0] |= pw_len & 0xff;

    u32x s0[4];
    u32x s1[4];
    u32x s2[4];
    u32x s3[4];

    s0[0] = domain_buf0[0];
    s0[1] = domain_buf0[1];
    s0[2] = domain_buf0[2];
    s0[3] = domain_buf0[3];
    s1[0] = domain_buf1[0];
    s1[1] = domain_buf1[1];
    s1[2] = domain_buf1[2];
    s1[3] = domain_buf1[3];
    s2[0] = 0;
    s2[1] = 0;
    s2[2] = 0;
    s2[3] = 0;
    s3[0] = 0;
    s3[1] = 0;
    s3[2] = 0;
    s3[3] = 0;

    switch_buffer_by_offset_le_VV (s0, s1, s2, s3, 1 + pw_len);

    w0_t[0] |= s0[0];
    w0_t[1] |= s0[1];
    w0_t[2] |= s0[2];
    w0_t[3] |= s0[3];
    w1_t[0] |= s1[0];
    w1_t[1] |= s1[1];
    w1_t[2] |= s1[2];
    w1_t[3] |= s1[3];
    w2_t[0] |= s2[0];
    w2_t[1] |= s2[1];
    w2_t[2] |= s2[2];
    w2_t[3] |= s2[3];
    w3_t[0] |= s3[0];
    w3_t[1] |= s3[1];
    w3_t[2] |= s3[2];
    w3_t[3] |= s3[3];

    s0[0] = salt_buf0[0];
    s0[1] = salt_buf0[1];
    s0[2] = salt_buf0[2];
    s0[3] = salt_buf0[3];
    s1[0] = salt_buf1[0];
    s1[1] = salt_buf1[1];
    s1[2] = salt_buf1[2];
    s1[3] = salt_buf1[3];
    s2[0] = 0;
    s2[1] = 0;
    s2[2] = 0;
    s2[3] = 0;
    s3[0] = 0;
    s3[1] = 0;
    s3[2] = 0;
    s3[3] = 0;

    switch_buffer_by_offset_le_VV (s0, s1, s2, s3, 1 + pw_len + domain_len + 1);

    w0_t[0] |= s0[0];
    w0_t[1] |= s0[1];
    w0_t[2] |= s0[2];
    w0_t[3] |= s0[3];
    w1_t[0] |= s1[0];
    w1_t[1] |= s1[1];
    w1_t[2] |= s1[2];
    w1_t[3] |= s1[3];
    w2_t[0] |= s2[0];
    w2_t[1] |= s2[1];
    w2_t[2] |= s2[2];
    w2_t[3] |= s2[3];
    w3_t[0] |= s3[0];
    w3_t[1] |= s3[1];
    w3_t[2] |= s3[2];
    w3_t[3] |= s3[3];

    /**
     * sha1
     */

    w0_t[0] = swap32 (w0_t[0]);
    w0_t[1] = swap32 (w0_t[1]);
    w0_t[2] = swap32 (w0_t[2]);
    w0_t[3] = swap32 (w0_t[3]);
    w1_t[0] = swap32 (w1_t[0]);
    w1_t[1] = swap32 (w1_t[1]);
    w1_t[2] = swap32 (w1_t[2]);
    w1_t[3] = swap32 (w1_t[3]);
    w2_t[0] = swap32 (w2_t[0]);
    w2_t[1] = swap32 (w2_t[1]);
    w2_t[2] = swap32 (w2_t[2]);
    w2_t[3] = swap32 (w2_t[3]);
    w3_t[0] = swap32 (w3_t[0]);
    w3_t[1] = swap32 (w3_t[1]);
    w3_t[2] = 0;
    w3_t[3] = (1 + pw_len + domain_len + 1 + salt_len) * 8;

    u32x digest[5];

    digest[0] = SHA1M_A;
    digest[1] = SHA1M_B;
    digest[2] = SHA1M_C;
    digest[3] = SHA1M_D;
    digest[4] = SHA1M_E;

    sha1_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);

    // iterations

    for (u32 i = 0; i < salt_iter; i++)
    {
      w0_t[0] = digest[0];
      w0_t[1] = digest[1];
      w0_t[2] = digest[2];
      w0_t[3] = digest[3];
      w1_t[0] = digest[4];
      w1_t[1] = swap32 (salt_buf0[0]);
      w1_t[2] = swap32 (salt_buf0[1]);
      w1_t[3] = swap32 (salt_buf0[2]);
      w2_t[0] = swap32 (salt_buf0[3]);
      w2_t[1] = swap32 (salt_buf1[0]);
      w2_t[2] = swap32 (salt_buf1[1]);
      w2_t[3] = swap32 (salt_buf1[2]);
      w3_t[0] = swap32 (salt_buf1[3]);
      w3_t[1] = 0;
      w3_t[2] = 0;
      w3_t[3] = (20 + salt_len) * 8;

      digest[0] = SHA1M_A;
      digest[1] = SHA1M_B;
      digest[2] = SHA1M_C;
      digest[3] = SHA1M_D;
      digest[4] = SHA1M_E;

      sha1_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);
    }

    COMPARE_M_SIMD (digest[3], digest[4], digest[2], digest[1]);
  }
}

__kernel void m08300_m08 (KERN_ATTR_BASIC ())
{
}

__kernel void m08300_m16 (KERN_ATTR_BASIC ())
{
}

__kernel void m08300_s04 (KERN_ATTR_BASIC ())
{
  /**
   * modifier
   */

  const u64 lid = get_local_id (0);

  /**
   * base
   */

  const u64 gid = get_global_id (0);

  if (gid >= gid_max) return;

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
   * salt
   */

  const u32 salt_iter = salt_bufs[salt_pos].salt_iter;

  u32 salt_buf0[4];
  u32 salt_buf1[4];

  salt_buf0[0] = salt_bufs[salt_pos].salt_buf[ 0];
  salt_buf0[1] = salt_bufs[salt_pos].salt_buf[ 1];
  salt_buf0[2] = salt_bufs[salt_pos].salt_buf[ 2];
  salt_buf0[3] = salt_bufs[salt_pos].salt_buf[ 3];
  salt_buf1[0] = salt_bufs[salt_pos].salt_buf[ 4];
  salt_buf1[1] = salt_bufs[salt_pos].salt_buf[ 5];
  salt_buf1[2] = salt_bufs[salt_pos].salt_buf[ 6];
  salt_buf1[3] = salt_bufs[salt_pos].salt_buf[ 7];

  const u32 salt_len = salt_bufs[salt_pos].salt_len;

  u32 domain_buf0[4];
  u32 domain_buf1[4];

  domain_buf0[0] = salt_bufs[salt_pos].salt_buf_pc[ 0];
  domain_buf0[1] = salt_bufs[salt_pos].salt_buf_pc[ 1];
  domain_buf0[2] = salt_bufs[salt_pos].salt_buf_pc[ 2];
  domain_buf0[3] = salt_bufs[salt_pos].salt_buf_pc[ 3];
  domain_buf1[0] = salt_bufs[salt_pos].salt_buf_pc[ 4];
  domain_buf1[1] = salt_bufs[salt_pos].salt_buf_pc[ 5];
  domain_buf1[2] = salt_bufs[salt_pos].salt_buf_pc[ 6];
  domain_buf1[3] = 0;

  const u32 domain_len = salt_bufs[salt_pos].salt_len_pc;

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

    /**
     * salt
     */

    u32x w0_t[4];
    u32x w1_t[4];
    u32x w2_t[4];
    u32x w3_t[4];

    w0_t[0] = w0[0];
    w0_t[1] = w0[1];
    w0_t[2] = w0[2];
    w0_t[3] = w0[3];
    w1_t[0] = w1[0];
    w1_t[1] = w1[1];
    w1_t[2] = w1[2];
    w1_t[3] = w1[3];
    w2_t[0] = w2[0];
    w2_t[1] = w2[1];
    w2_t[2] = w2[2];
    w2_t[3] = w2[3];
    w3_t[0] = w3[0];
    w3_t[1] = w3[1];
    w3_t[2] = w3[2];
    w3_t[3] = w3[3];

    switch_buffer_by_offset_le (w0_t, w1_t, w2_t, w3_t, 1);

    w0_t[0] |= pw_len & 0xff;

    u32x s0[4];
    u32x s1[4];
    u32x s2[4];
    u32x s3[4];

    s0[0] = domain_buf0[0];
    s0[1] = domain_buf0[1];
    s0[2] = domain_buf0[2];
    s0[3] = domain_buf0[3];
    s1[0] = domain_buf1[0];
    s1[1] = domain_buf1[1];
    s1[2] = domain_buf1[2];
    s1[3] = domain_buf1[3];
    s2[0] = 0;
    s2[1] = 0;
    s2[2] = 0;
    s2[3] = 0;
    s3[0] = 0;
    s3[1] = 0;
    s3[2] = 0;
    s3[3] = 0;

    switch_buffer_by_offset_le_VV (s0, s1, s2, s3, 1 + pw_len);

    w0_t[0] |= s0[0];
    w0_t[1] |= s0[1];
    w0_t[2] |= s0[2];
    w0_t[3] |= s0[3];
    w1_t[0] |= s1[0];
    w1_t[1] |= s1[1];
    w1_t[2] |= s1[2];
    w1_t[3] |= s1[3];
    w2_t[0] |= s2[0];
    w2_t[1] |= s2[1];
    w2_t[2] |= s2[2];
    w2_t[3] |= s2[3];
    w3_t[0] |= s3[0];
    w3_t[1] |= s3[1];
    w3_t[2] |= s3[2];
    w3_t[3] |= s3[3];

    s0[0] = salt_buf0[0];
    s0[1] = salt_buf0[1];
    s0[2] = salt_buf0[2];
    s0[3] = salt_buf0[3];
    s1[0] = salt_buf1[0];
    s1[1] = salt_buf1[1];
    s1[2] = salt_buf1[2];
    s1[3] = salt_buf1[3];
    s2[0] = 0;
    s2[1] = 0;
    s2[2] = 0;
    s2[3] = 0;
    s3[0] = 0;
    s3[1] = 0;
    s3[2] = 0;
    s3[3] = 0;

    switch_buffer_by_offset_le_VV (s0, s1, s2, s3, 1 + pw_len + domain_len + 1);

    w0_t[0] |= s0[0];
    w0_t[1] |= s0[1];
    w0_t[2] |= s0[2];
    w0_t[3] |= s0[3];
    w1_t[0] |= s1[0];
    w1_t[1] |= s1[1];
    w1_t[2] |= s1[2];
    w1_t[3] |= s1[3];
    w2_t[0] |= s2[0];
    w2_t[1] |= s2[1];
    w2_t[2] |= s2[2];
    w2_t[3] |= s2[3];
    w3_t[0] |= s3[0];
    w3_t[1] |= s3[1];
    w3_t[2] |= s3[2];
    w3_t[3] |= s3[3];

    /**
     * sha1
     */

    w0_t[0] = swap32 (w0_t[0]);
    w0_t[1] = swap32 (w0_t[1]);
    w0_t[2] = swap32 (w0_t[2]);
    w0_t[3] = swap32 (w0_t[3]);
    w1_t[0] = swap32 (w1_t[0]);
    w1_t[1] = swap32 (w1_t[1]);
    w1_t[2] = swap32 (w1_t[2]);
    w1_t[3] = swap32 (w1_t[3]);
    w2_t[0] = swap32 (w2_t[0]);
    w2_t[1] = swap32 (w2_t[1]);
    w2_t[2] = swap32 (w2_t[2]);
    w2_t[3] = swap32 (w2_t[3]);
    w3_t[0] = swap32 (w3_t[0]);
    w3_t[1] = swap32 (w3_t[1]);
    w3_t[2] = 0;
    w3_t[3] = (1 + pw_len + domain_len + 1 + salt_len) * 8;

    u32x digest[5];

    digest[0] = SHA1M_A;
    digest[1] = SHA1M_B;
    digest[2] = SHA1M_C;
    digest[3] = SHA1M_D;
    digest[4] = SHA1M_E;

    sha1_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);

    // iterations

    for (u32 i = 0; i < salt_iter; i++)
    {
      w0_t[0] = digest[0];
      w0_t[1] = digest[1];
      w0_t[2] = digest[2];
      w0_t[3] = digest[3];
      w1_t[0] = digest[4];
      w1_t[1] = swap32 (salt_buf0[0]);
      w1_t[2] = swap32 (salt_buf0[1]);
      w1_t[3] = swap32 (salt_buf0[2]);
      w2_t[0] = swap32 (salt_buf0[3]);
      w2_t[1] = swap32 (salt_buf1[0]);
      w2_t[2] = swap32 (salt_buf1[1]);
      w2_t[3] = swap32 (salt_buf1[2]);
      w3_t[0] = swap32 (salt_buf1[3]);
      w3_t[1] = 0;
      w3_t[2] = 0;
      w3_t[3] = (20 + salt_len) * 8;

      digest[0] = SHA1M_A;
      digest[1] = SHA1M_B;
      digest[2] = SHA1M_C;
      digest[3] = SHA1M_D;
      digest[4] = SHA1M_E;

      sha1_transform_vector (w0_t, w1_t, w2_t, w3_t, digest);
    }

    COMPARE_S_SIMD (digest[3], digest[4], digest[2], digest[1]);
  }
}

__kernel void m08300_s08 (KERN_ATTR_BASIC ())
{
}

__kernel void m08300_s16 (KERN_ATTR_BASIC ())
{
}
