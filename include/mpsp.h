/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _MPSP_H
#define _MPSP_H

#include <stdio.h>
#include <errno.h>
#include <ctype.h>

#define CHARSIZ       0x100

#define SP_HCSTAT     "hashcat.hcstat"
#define SP_PW_MIN     2
#define SP_PW_MAX     64
#define SP_ROOT_CNT   (SP_PW_MAX * CHARSIZ)
#define SP_MARKOV_CNT (SP_PW_MAX * CHARSIZ * CHARSIZ)

#define MARKOV_THRESHOLD  0
#define MARKOV_DISABLE    0
#define MARKOV_CLASSIC    0

#define HEX_CHARSET       0
#define INCR_MASKS        1000

#define INCREMENT         0
#define INCREMENT_MIN     1
#define INCREMENT_MAX     PW_MAX

void mp_css_to_uniq_tbl (uint css_cnt, cs_t *css, uint uniq_tbls[SP_PW_MAX][CHARSIZ]);
void mp_cut_at (char *mask, uint max);
uint mp_get_length (char *mask);
void mp_exec (u64 val, char *buf, cs_t *css, int css_cnt);
cs_t *mp_gen_css (char *mask_buf, size_t mask_len, cs_t *mp_sys, cs_t *mp_usr, uint *css_cnt, hashconfig_t *hashconfig);
u64  mp_get_sum (uint css_cnt, cs_t *css);
void mp_setup_sys (cs_t *mp_sys);
void mp_setup_usr (cs_t *mp_sys, cs_t *mp_usr, char *buf, uint index, hashconfig_t *hashconfig);
void mp_reset_usr (cs_t *mp_usr, uint index);
char *mp_get_truncated_mask (char *mask_buf, size_t mask_len, uint len);

u64  sp_get_sum (uint start, uint stop, cs_t *root_css_buf);
void sp_exec (u64 ctx, char *pw_buf, cs_t *root_css_buf, cs_t *markov_css_buf, uint start, uint stop);
int  sp_comp_val (const void *p1, const void *p2);
void sp_setup_tbl (const char *install_dir, char *hcstat, uint disable, uint classic, hcstat_table_t *root_table_buf, hcstat_table_t *markov_table_buf);
void sp_tbl_to_css (hcstat_table_t *root_table_buf, hcstat_table_t *markov_table_buf, cs_t *root_css_buf, cs_t *markov_css_buf, uint threshold, uint uniq_tbls[SP_PW_MAX][CHARSIZ]);
void sp_stretch_markov (hcstat_table_t *in, hcstat_table_t *out);
void sp_stretch_root (hcstat_table_t *in, hcstat_table_t *out);

#endif // _MPSP_H
