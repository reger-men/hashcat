/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#include "common.h"
#include "types.h"
#include "memory.h"
#include "logging.h"
#include "debugfile.h"

int debugfile_init (debugfile_ctx_t *debugfile_ctx, const user_options_t *user_options)
{
  debugfile_ctx->enabled = false;

  if (user_options->benchmark   == true) return 0;
  if (user_options->keyspace    == true) return 0;
  if (user_options->left        == true) return 0;
  if (user_options->opencl_info == true) return 0;
  if (user_options->show        == true) return 0;
  if (user_options->stdout_flag == true) return 0;
  if (user_options->usage       == true) return 0;
  if (user_options->version     == true) return 0;
  if (user_options->debug_mode  == 0)    return 0;

  debugfile_ctx->enabled = true;

  debugfile_ctx->mode = user_options->debug_mode;

  if (debugfile_ctx->filename)
  {
    debugfile_ctx->filename = user_options->debug_file;

    debugfile_ctx->fp = fopen (debugfile_ctx->filename, "ab");

    if (debugfile_ctx->fp == NULL)
    {
      log_error ("ERROR: Could not open debug-file for writing");

      return -1;
    }
  }
  else
  {
    debugfile_ctx->fp = stdout;
  }

  return 0;
}

void debugfile_destroy (debugfile_ctx_t *debugfile_ctx)
{
  if (debugfile_ctx->enabled == false)
  {
    myfree (debugfile_ctx);

    return;
  }

  if (debugfile_ctx->filename)
  {
    fclose (debugfile_ctx->fp);
  }

  myfree (debugfile_ctx);
}

void debugfile_format_plain (debugfile_ctx_t *debugfile_ctx, const u8 *plain_ptr, const u32 plain_len)
{
  if (debugfile_ctx->enabled == false) return;

  int needs_hexify = 0;

  for (uint i = 0; i < plain_len; i++)
  {
    if (plain_ptr[i] < 0x20)
    {
      needs_hexify = 1;

      break;
    }

    if (plain_ptr[i] > 0x7f)
    {
      needs_hexify = 1;

      break;
    }
  }

  if (needs_hexify == 1)
  {
    fprintf (debugfile_ctx->fp, "$HEX[");

    for (uint i = 0; i < plain_len; i++)
    {
      fprintf (debugfile_ctx->fp, "%02x", plain_ptr[i]);
    }

    fprintf (debugfile_ctx->fp, "]");
  }
  else
  {
    fwrite (plain_ptr, plain_len, 1, debugfile_ctx->fp);
  }
}

void debugfile_write_append (debugfile_ctx_t *debugfile_ctx, const u8 *rule_buf, const u32 rule_len, const u8 *mod_plain_ptr, const u32 mod_plain_len, const u8 *orig_plain_ptr, const u32 orig_plain_len)
{
  if (debugfile_ctx->enabled == false) return;

  const uint debug_mode = debugfile_ctx->mode;

  if ((debug_mode == 2) || (debug_mode == 3) || (debug_mode == 4))
  {
    debugfile_format_plain (debugfile_ctx, orig_plain_ptr, orig_plain_len);

    if ((debug_mode == 3) || (debug_mode == 4)) fputc (':', debugfile_ctx->fp);
  }

  fwrite (rule_buf, rule_len, 1, debugfile_ctx->fp);

  if (debug_mode == 4)
  {
    fputc (':', debugfile_ctx->fp);

    debugfile_format_plain (debugfile_ctx, mod_plain_ptr, mod_plain_len);
  }

  fputc ('\n', debugfile_ctx->fp);
}
