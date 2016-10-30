/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#include "common.h"
#include "types.h"
#include "convert.h"
#include "memory.h"
#include "event.h"
#include "interface.h"
#include "filehandling.h"
#include "outfile.h"
#include "potfile.h"

#if defined (_WIN)
#define __WINDOWS__
#endif
#include "sort_r.h"
#if defined (_WIN)
#undef __WINDOWS__
#endif

// get rid of this later
int sort_by_hash         (const void *v1, const void *v2, void *v3);
int sort_by_hash_no_salt (const void *v1, const void *v2, void *v3);
// get rid of this later

int sort_by_pot (const void *v1, const void *v2, MAYBE_UNUSED void *v3)
{
  const pot_t *p1 = (const pot_t *) v1;
  const pot_t *p2 = (const pot_t *) v2;

  const hash_t *h1 = &p1->hash;
  const hash_t *h2 = &p2->hash;

  return sort_by_hash (h1, h2, v3);
}

int sort_by_salt_buf (const void *v1, const void *v2, MAYBE_UNUSED void *v3)
{
  const pot_t *p1 = (const pot_t *) v1;
  const pot_t *p2 = (const pot_t *) v2;

  const hash_t *h1 = &p1->hash;
  const hash_t *h2 = &p2->hash;

  const salt_t *s1 = h1->salt;
  const salt_t *s2 = h2->salt;

  u32 n = 16;

  while (n--)
  {
    if (s1->salt_buf[n] > s2->salt_buf[n]) return  1;
    if (s1->salt_buf[n] < s2->salt_buf[n]) return -1;
  }

  return 0;
}

int sort_by_hash_t_salt (const void *v1, const void *v2)
{
  const hash_t *h1 = (const hash_t *) v1;
  const hash_t *h2 = (const hash_t *) v2;

  const salt_t *s1 = h1->salt;
  const salt_t *s2 = h2->salt;

  // testphase: this should work
  u32 n = 16;

  while (n--)
  {
    if (s1->salt_buf[n] > s2->salt_buf[n]) return ( 1);
    if (s1->salt_buf[n] < s2->salt_buf[n]) return -1;
  }

  /* original code, seems buggy since salt_len can be very big (had a case with 131 len)
     also it thinks salt_buf[x] is a char but its a u32 so salt_len should be / 4
  if (s1->salt_len > s2->salt_len) return ( 1);
  if (s1->salt_len < s2->salt_len) return -1;

  u32 n = s1->salt_len;

  while (n--)
  {
    if (s1->salt_buf[n] > s2->salt_buf[n]) return ( 1);
    if (s1->salt_buf[n] < s2->salt_buf[n]) return -1;
  }
  */

  return 0;
}

int sort_by_hash_t_salt_hccap (const void *v1, const void *v2)
{
  const hash_t *h1 = (const hash_t *) v1;
  const hash_t *h2 = (const hash_t *) v2;

  const salt_t *s1 = h1->salt;
  const salt_t *s2 = h2->salt;

  // last 2: salt_buf[10] and salt_buf[11] contain the digest (skip them)

  u32 n = 9; // 9 * 4 = 36 bytes (max length of ESSID)

  while (n--)
  {
    if (s1->salt_buf[n] > s2->salt_buf[n]) return ( 1);
    if (s1->salt_buf[n] < s2->salt_buf[n]) return -1;
  }

  return 0;
}

void hc_qsort_r (void *base, size_t nmemb, size_t size, int (*compar) (const void *, const void *, void *), void *arg)
{
  sort_r (base, nmemb, size, compar, arg);
}

void *hc_bsearch_r (const void *key, const void *base, size_t nmemb, size_t size, int (*compar) (const void *, const void *, void *), void *arg)
{
  for (size_t l = 0, r = nmemb; r; r >>= 1)
  {
    const size_t m = r >> 1;

    const size_t c = l + m;

    const void *next = base + (c * size);

    const int cmp = (*compar) (key, next, arg);

    if (cmp > 0)
    {
      l += m + 1;

      r--;
    }

    if (cmp == 0) return ((void *) next);
  }

  return (NULL);
}

int potfile_init (hashcat_ctx_t *hashcat_ctx)
{
  folder_config_t *folder_config = hashcat_ctx->folder_config;
  potfile_ctx_t   *potfile_ctx   = hashcat_ctx->potfile_ctx;
  user_options_t  *user_options  = hashcat_ctx->user_options;

  potfile_ctx->enabled = false;

  if (user_options->benchmark       == true) return 0;
  if (user_options->keyspace        == true) return 0;
  if (user_options->opencl_info     == true) return 0;
  if (user_options->stdout_flag     == true) return 0;
  if (user_options->speed_only      == true) return 0;
  if (user_options->usage           == true) return 0;
  if (user_options->version         == true) return 0;
  if (user_options->potfile_disable == true) return 0;

  potfile_ctx->enabled = true;

  if (user_options->potfile_path == NULL)
  {
    potfile_ctx->filename = (char *) hcmalloc (hashcat_ctx, HCBUFSIZ_TINY); VERIFY_PTR (potfile_ctx->filename);
    potfile_ctx->fp       = NULL;

    snprintf (potfile_ctx->filename, HCBUFSIZ_TINY - 1, "%s/hashcat.potfile", folder_config->profile_dir);
  }
  else
  {
    potfile_ctx->filename = hcstrdup (hashcat_ctx, user_options->potfile_path); VERIFY_PTR (potfile_ctx->filename);
    potfile_ctx->fp       = NULL;
  }

  const int rc = potfile_write_open (hashcat_ctx);

  if (rc == -1) return -1;

  potfile_write_close (hashcat_ctx);

  return 0;
}

void potfile_destroy (hashcat_ctx_t *hashcat_ctx)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return;

  memset (potfile_ctx, 0, sizeof (potfile_ctx_t));
}

int potfile_read_open (hashcat_ctx_t *hashcat_ctx)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return 0;

  potfile_ctx->fp = fopen (potfile_ctx->filename, "rb");

  if (potfile_ctx->fp == NULL)
  {
    event_log_error (hashcat_ctx, "%s: %s", potfile_ctx->filename, strerror (errno));

    return -1;
  }

  return 0;
}

void potfile_read_close (hashcat_ctx_t *hashcat_ctx)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return;

  if (potfile_ctx->fp == NULL) return;

  fclose (potfile_ctx->fp);
}

int potfile_write_open (hashcat_ctx_t *hashcat_ctx)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return 0;

  potfile_ctx->fp = fopen (potfile_ctx->filename, "ab");

  if (potfile_ctx->fp == NULL)
  {
    event_log_error (hashcat_ctx, "%s: %s", potfile_ctx->filename, strerror (errno));

    return -1;
  }

  return 0;
}

void potfile_write_close (hashcat_ctx_t *hashcat_ctx)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return;

  fclose (potfile_ctx->fp);
}

void potfile_write_append (hashcat_ctx_t *hashcat_ctx, const char *out_buf, u8 *plain_ptr, unsigned int plain_len)
{
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return;

  char tmp_buf[HCBUFSIZ_LARGE];

  int tmp_len = 0;

  if (1)
  {
    const size_t out_len = strlen (out_buf);

    memcpy (tmp_buf + tmp_len, out_buf, out_len);

    tmp_len += out_len;

    tmp_buf[tmp_len] = ':';

    tmp_len += 1;
  }

  if (1)
  {
    if (need_hexify (plain_ptr, plain_len) == true)
    {
      tmp_buf[tmp_len++] = '$';
      tmp_buf[tmp_len++] = 'H';
      tmp_buf[tmp_len++] = 'E';
      tmp_buf[tmp_len++] = 'X';
      tmp_buf[tmp_len++] = '[';

      exec_hexify ((const u8 *) plain_ptr, plain_len, (u8 *) tmp_buf + tmp_len);

      tmp_len += plain_len * 2;

      tmp_buf[tmp_len++] = ']';
    }
    else
    {
      memcpy (tmp_buf + tmp_len, plain_ptr, plain_len);

      tmp_len += plain_len;
    }
  }

  tmp_buf[tmp_len] = 0;

  fprintf (potfile_ctx->fp, "%s" EOL, tmp_buf);
}

int potfile_remove_parse (hashcat_ctx_t *hashcat_ctx)
{
  hashconfig_t  *hashconfig  = hashcat_ctx->hashconfig;
  hashes_t      *hashes      = hashcat_ctx->hashes;
  potfile_ctx_t *potfile_ctx = hashcat_ctx->potfile_ctx;

  if (potfile_ctx->enabled == false) return 0;

  hash_t *hashes_buf = hashes->hashes_buf;
  u32     hashes_cnt = hashes->hashes_cnt;

  // no solution for these special hash types (for instane because they use hashfile in output etc)

  if  (hashconfig->hash_mode ==  5200)  return 0;
  if ((hashconfig->hash_mode >=  6200)
   && (hashconfig->hash_mode <=  6299)) return 0;
  if  (hashconfig->hash_mode ==  9000)  return 0;
  if ((hashconfig->hash_mode >= 13700)
   && (hashconfig->hash_mode <= 13799)) return 0;

  hash_t hash_buf;

  hash_buf.digest    = hcmalloc (hashcat_ctx, hashconfig->dgst_size); VERIFY_PTR (hash_buf.digest);
  hash_buf.salt      = NULL;
  hash_buf.esalt     = NULL;
  hash_buf.hash_info = NULL;
  hash_buf.cracked   = 0;

  if (hashconfig->is_salted)
  {
    hash_buf.salt = (salt_t *) hcmalloc (hashcat_ctx, sizeof (salt_t)); VERIFY_PTR (hash_buf.salt);
  }

  if (hashconfig->esalt_size)
  {
    hash_buf.esalt = hcmalloc (hashcat_ctx, hashconfig->esalt_size); VERIFY_PTR (hash_buf.esalt);
  }

  const int rc = potfile_read_open (hashcat_ctx);

  if (rc == -1) return -1;

  char *line_buf = (char *) hcmalloc (hashcat_ctx, HCBUFSIZ_LARGE); VERIFY_PTR (line_buf);

  // to be safe work with a copy (because of line_len loop, i etc)
  // moved up here because it's easier to handle continue case
  // it's just 64kb

  char *line_buf_cpy = (char *) hcmalloc (hashcat_ctx, HCBUFSIZ_LARGE); VERIFY_PTR (line_buf_cpy);

  while (!feof (potfile_ctx->fp))
  {
    int line_len = fgetl (potfile_ctx->fp, line_buf);

    if (line_len == 0) continue;

    const int line_len_orig = line_len;

    int iter = MAX_CUT_TRIES;

    for (int i = line_len - 1; i && iter; i--, line_len--)
    {
      if (line_buf[i] != ':') continue;

      if (hashconfig->is_salted)
      {
        memset (hash_buf.salt, 0, sizeof (salt_t));
      }

      if (hashconfig->esalt_size)
      {
        memset (hash_buf.esalt, 0, hashconfig->esalt_size);
      }

      hash_t *found = NULL;

      if (hashconfig->hash_mode == 6800)
      {
        if (i < 64) // 64 = 16 * u32 in salt_buf[]
        {
          // manipulate salt_buf
          memcpy (hash_buf.salt->salt_buf, line_buf, i);

          hash_buf.salt->salt_len = i;

          found = (hash_t *) bsearch (&hash_buf, hashes_buf, hashes_cnt, sizeof (hash_t), sort_by_hash_t_salt);
        }
      }
      else if (hashconfig->hash_mode == 2500)
      {
        if (i < 64) // 64 = 16 * u32 in salt_buf[]
        {
          // here we have in line_buf: ESSID:MAC1:MAC2   (without the plain)
          // manipulate salt_buf

          memset (line_buf_cpy, 0, HCBUFSIZ_LARGE);
          memcpy (line_buf_cpy, line_buf, i);

          char *mac2_pos = strrchr (line_buf_cpy, ':');

          if (mac2_pos == NULL) continue;

          mac2_pos[0] = 0;
          mac2_pos++;

          if (strlen (mac2_pos) != 12) continue;

          char *mac1_pos = strrchr (line_buf_cpy, ':');

          if (mac1_pos == NULL) continue;

          mac1_pos[0] = 0;
          mac1_pos++;

          if (strlen (mac1_pos) != 12) continue;

          u32 essid_length = mac1_pos - line_buf_cpy - 1;

          // here we need the ESSID
          memcpy (hash_buf.salt->salt_buf, line_buf_cpy, essid_length);

          hash_buf.salt->salt_len = essid_length;

          found = (hash_t *) bsearch (&hash_buf, hashes_buf, hashes_cnt, sizeof (hash_t), sort_by_hash_t_salt_hccap);

          if (found)
          {
            wpa_t *wpa = (wpa_t *) found->esalt;

            // compare hex string(s) vs binary MAC address(es)

            for (u32 mac_idx = 0, orig_mac_idx = 0; mac_idx < 6; mac_idx += 1, orig_mac_idx += 2)
            {
              if (wpa->orig_mac1[mac_idx] != hex_to_u8 ((const u8 *) &mac1_pos[orig_mac_idx]))
              {
                found = NULL;

                break;
              }
            }

            // early skip ;)
            if (!found) continue;

            for (u32 mac_idx = 0, orig_mac_idx = 0; mac_idx < 6; mac_idx += 1, orig_mac_idx += 2)
            {
              if (wpa->orig_mac2[mac_idx] != hex_to_u8 ((const u8 *) &mac2_pos[orig_mac_idx]))
              {
                found = NULL;

                break;
              }
            }
          }
        }
      }
      else
      {
        int parser_status = hashconfig->parse_func (line_buf, line_len - 1, &hash_buf, hashconfig);

        if (parser_status == PARSER_OK)
        {
          if (hashconfig->is_salted)
          {
            found = (hash_t *) hc_bsearch_r (&hash_buf, hashes_buf, hashes_cnt, sizeof (hash_t), sort_by_hash, (void *) hashconfig);
          }
          else
          {
            found = (hash_t *) hc_bsearch_r (&hash_buf, hashes_buf, hashes_cnt, sizeof (hash_t), sort_by_hash_no_salt, (void *) hashconfig);
          }
        }
      }

      if (found == NULL) continue;

      char *pw_buf = line_buf + line_len;
      int   pw_len = line_len_orig - line_len;

      found->pw_buf = (char *) hcmalloc (hashcat_ctx, pw_len + 1); VERIFY_PTR (found->pw_buf);
      found->pw_len = pw_len;

      memcpy (found->pw_buf, pw_buf, pw_len);

      found->pw_buf[found->pw_len] = 0;

      found->cracked = 1;

      if (found) break;

      iter--;
    }
  }

  hcfree (line_buf_cpy);

  hcfree (line_buf);

  potfile_read_close (hashcat_ctx);

  if (hashconfig->esalt_size)
  {
    hcfree (hash_buf.esalt);
  }

  if (hashconfig->is_salted)
  {
    hcfree (hash_buf.salt);
  }

  hcfree (hash_buf.digest);

  return 0;
}

int potfile_handle_show (hashcat_ctx_t *hashcat_ctx)
{
  hashes_t *hashes = hashcat_ctx->hashes;

  hash_t *hashes_buf = hashes->hashes_buf;

  u32     salts_cnt = hashes->salts_cnt;
  salt_t *salts_buf = hashes->salts_buf;

  for (u32 salt_idx = 0; salt_idx < salts_cnt; salt_idx++)
  {
    salt_t *salt_buf = salts_buf + salt_idx;

    u32 digests_cnt = salt_buf->digests_cnt;

    for (u32 digest_idx = 0; digest_idx < digests_cnt; digest_idx++)
    {
      const u32 hashes_idx = salt_buf->digests_offset + digest_idx;

      u32 *digests_shown = hashes->digests_shown;

      if (digests_shown[hashes_idx] == 0) continue;

      char out_buf[HCBUFSIZ_LARGE]; // scratch buffer

      out_buf[0] = 0;

      ascii_digest (hashcat_ctx, out_buf, salt_idx, digest_idx);

      char tmp_buf[HCBUFSIZ_LARGE]; // scratch buffer

      hash_t *hash = &hashes_buf[hashes_idx];

      // user
      unsigned char *username = NULL;

      u32 user_len = 0;

      if (hash->hash_info != NULL)
      {
        user_t *user = hash->hash_info->user;

        if (user)
        {
          username = (unsigned char *) (user->user_name);

          user_len = user->user_len;

          username[user_len] = 0;
        }
      }

      const int tmp_len = outfile_write (hashcat_ctx, out_buf, (unsigned char *) hash->pw_buf, hash->pw_len, 0, username, user_len, tmp_buf);

      EVENT_DATA (EVENT_POTFILE_HASH_SHOW, tmp_buf, tmp_len);
    }
  }

  return 0;
}

int potfile_handle_left (hashcat_ctx_t *hashcat_ctx)
{
  hashes_t *hashes = hashcat_ctx->hashes;

  hash_t *hashes_buf = hashes->hashes_buf;

  u32     salts_cnt = hashes->salts_cnt;
  salt_t *salts_buf = hashes->salts_buf;

  for (u32 salt_idx = 0; salt_idx < salts_cnt; salt_idx++)
  {
    salt_t *salt_buf = salts_buf + salt_idx;

    u32 digests_cnt = salt_buf->digests_cnt;

    for (u32 digest_idx = 0; digest_idx < digests_cnt; digest_idx++)
    {
      const u32 hashes_idx = salt_buf->digests_offset + digest_idx;

      u32 *digests_shown = hashes->digests_shown;

      if (digests_shown[hashes_idx] == 1) continue;

      char out_buf[HCBUFSIZ_LARGE]; // scratch buffer

      out_buf[0] = 0;

      ascii_digest (hashcat_ctx, out_buf, salt_idx, digest_idx);

      hash_t *hash = &hashes_buf[hashes_idx];

      // user
      unsigned char *username = NULL;

      u32 user_len = 0;

      if (hash->hash_info != NULL)
      {
        user_t *user = hash->hash_info->user;

        if (user)
        {
          username = (unsigned char *) (user->user_name);

          user_len = user->user_len;

          username[user_len] = 0;
        }
      }

      char tmp_buf[HCBUFSIZ_LARGE]; // scratch buffer

      const int tmp_len = outfile_write (hashcat_ctx, out_buf, NULL, 0, 0, username, user_len, tmp_buf);

      EVENT_DATA (EVENT_POTFILE_HASH_LEFT, tmp_buf, tmp_len);
    }
  }

  return 0;
}
