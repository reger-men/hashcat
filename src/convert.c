/**
 * Author......: Jens Steube <jens.steube@gmail.com>
 * License.....: MIT
 */

#include "common.h"
#include "types_int.h"
#include "convert.h"

int is_valid_hex_char (const u8 c)
{
  if ((c >= '0') && (c <= '9')) return 1;
  if ((c >= 'A') && (c <= 'F')) return 1;
  if ((c >= 'a') && (c <= 'f')) return 1;

  return 0;
}

u8 hex_convert (const u8 c)
{
  return (c & 15) + (c >> 6) * 9;
}

u8 hex_to_u8 (const u8 hex[2])
{
  u8 v = 0;

  v |= (hex_convert (hex[1]) <<  0);
  v |= (hex_convert (hex[0]) <<  4);

  return (v);
}

u32 hex_to_u32 (const u8 hex[8])
{
  u32 v = 0;

  v |= ((u32) hex_convert (hex[7])) <<  0;
  v |= ((u32) hex_convert (hex[6])) <<  4;
  v |= ((u32) hex_convert (hex[5])) <<  8;
  v |= ((u32) hex_convert (hex[4])) << 12;
  v |= ((u32) hex_convert (hex[3])) << 16;
  v |= ((u32) hex_convert (hex[2])) << 20;
  v |= ((u32) hex_convert (hex[1])) << 24;
  v |= ((u32) hex_convert (hex[0])) << 28;

  return (v);
}

u64 hex_to_u64 (const u8 hex[16])
{
  u64 v = 0;

  v |= ((u64) hex_convert (hex[15]) <<  0);
  v |= ((u64) hex_convert (hex[14]) <<  4);
  v |= ((u64) hex_convert (hex[13]) <<  8);
  v |= ((u64) hex_convert (hex[12]) << 12);
  v |= ((u64) hex_convert (hex[11]) << 16);
  v |= ((u64) hex_convert (hex[10]) << 20);
  v |= ((u64) hex_convert (hex[ 9]) << 24);
  v |= ((u64) hex_convert (hex[ 8]) << 28);
  v |= ((u64) hex_convert (hex[ 7]) << 32);
  v |= ((u64) hex_convert (hex[ 6]) << 36);
  v |= ((u64) hex_convert (hex[ 5]) << 40);
  v |= ((u64) hex_convert (hex[ 4]) << 44);
  v |= ((u64) hex_convert (hex[ 3]) << 48);
  v |= ((u64) hex_convert (hex[ 2]) << 52);
  v |= ((u64) hex_convert (hex[ 1]) << 56);
  v |= ((u64) hex_convert (hex[ 0]) << 60);

  return (v);
}

void bin_to_hex_lower (const u32 v, u8 hex[8])
{
  hex[0] = v >> 28 & 15;
  hex[1] = v >> 24 & 15;
  hex[2] = v >> 20 & 15;
  hex[3] = v >> 16 & 15;
  hex[4] = v >> 12 & 15;
  hex[5] = v >>  8 & 15;
  hex[6] = v >>  4 & 15;
  hex[7] = v >>  0 & 15;

  u32 add;

  hex[0] += 6; add = ((hex[0] & 0x10) >> 4) * 39; hex[0] += 42 + add;
  hex[1] += 6; add = ((hex[1] & 0x10) >> 4) * 39; hex[1] += 42 + add;
  hex[2] += 6; add = ((hex[2] & 0x10) >> 4) * 39; hex[2] += 42 + add;
  hex[3] += 6; add = ((hex[3] & 0x10) >> 4) * 39; hex[3] += 42 + add;
  hex[4] += 6; add = ((hex[4] & 0x10) >> 4) * 39; hex[4] += 42 + add;
  hex[5] += 6; add = ((hex[5] & 0x10) >> 4) * 39; hex[5] += 42 + add;
  hex[6] += 6; add = ((hex[6] & 0x10) >> 4) * 39; hex[6] += 42 + add;
  hex[7] += 6; add = ((hex[7] & 0x10) >> 4) * 39; hex[7] += 42 + add;
}

u8 int_to_base32 (const u8 c)
{
  const u8 tbl[0x20] =
  {
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50,
    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
  };

  return tbl[c];
}

u8 base32_to_int (const u8 c)
{
       if ((c >= 'A') && (c <= 'Z')) return c - 'A';
  else if ((c >= '2') && (c <= '7')) return c - '2' + 26;

  return 0;
}

u8 int_to_itoa32 (const u8 c)
{
  const u8 tbl[0x20] =
  {
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66,
    0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76,
  };

  return tbl[c];
}

u8 itoa32_to_int (const u8 c)
{
       if ((c >= '0') && (c <= '9')) return c - '0';
  else if ((c >= 'a') && (c <= 'v')) return c - 'a' + 10;

  return 0;
}

u8 int_to_itoa64 (const u8 c)
{
  const u8 tbl[0x40] =
  {
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x41, 0x42, 0x43, 0x44,
    0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54,
    0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a,
    0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a,
  };

  return tbl[c];
}

u8 itoa64_to_int (const u8 c)
{
  const u8 tbl[0x100] =
  {
    0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21,
    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31,
    0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x01,
    0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
    0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a,
    0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x20, 0x21, 0x22, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34,
    0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x01, 0x02, 0x03, 0x04,
    0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34,
    0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x01, 0x02, 0x03, 0x04,
    0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34,
    0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x01, 0x02, 0x03, 0x04,
  };

  return tbl[c];
}

u8 int_to_base64 (const u8 c)
{
  const u8 tbl[0x40] =
  {
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50,
    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66,
    0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76,
    0x77, 0x78, 0x79, 0x7a, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x2b, 0x2f,
  };

  return tbl[c];
}

u8 base64_to_int (const u8 c)
{
  const u8 tbl[0x100] =
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3f,
    0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e,
    0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28,
    0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };

  return tbl[c];
}

u8 int_to_bf64 (const u8 c)
{
  const u8 tbl[0x40] =
  {
    0x2e, 0x2f, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e,
    0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x61, 0x62, 0x63, 0x64,
    0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74,
    0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
  };

  return tbl[c];
}

u8 bf64_to_int (const u8 c)
{
  const u8 tbl[0x100] =
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
    0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a,
    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };

  return tbl[c];
}

u8 int_to_lotus64 (const u8 c)
{
       if (c  < 10) return '0' + c;
  else if (c  < 36) return 'A' + c - 10;
  else if (c  < 62) return 'a' + c - 36;
  else if (c == 62) return '+';
  else if (c == 63) return '/';

  return 0;
}

u8 lotus64_to_int (const u8 c)
{
       if ((c >= '0') && (c <= '9')) return c - '0';
  else if ((c >= 'A') && (c <= 'Z')) return c - 'A' + 10;
  else if ((c >= 'a') && (c <= 'z')) return c - 'a' + 36;
  else if (c == '+') return 62;
  else if (c == '/') return 63;
  else

  return 0;
}

int base32_decode (u8 (*f) (const u8), const u8 *in_buf, int in_len, u8 *out_buf)
{
  const u8 *in_ptr = in_buf;

  u8 *out_ptr = out_buf;

  for (int i = 0; i < in_len; i += 8)
  {
    const u8 out_val0 = f (in_ptr[0] & 0x7f);
    const u8 out_val1 = f (in_ptr[1] & 0x7f);
    const u8 out_val2 = f (in_ptr[2] & 0x7f);
    const u8 out_val3 = f (in_ptr[3] & 0x7f);
    const u8 out_val4 = f (in_ptr[4] & 0x7f);
    const u8 out_val5 = f (in_ptr[5] & 0x7f);
    const u8 out_val6 = f (in_ptr[6] & 0x7f);
    const u8 out_val7 = f (in_ptr[7] & 0x7f);

    out_ptr[0] =                            ((out_val0 << 3) & 0xf8) | ((out_val1 >> 2) & 0x07);
    out_ptr[1] = ((out_val1 << 6) & 0xc0) | ((out_val2 << 1) & 0x3e) | ((out_val3 >> 4) & 0x01);
    out_ptr[2] =                            ((out_val3 << 4) & 0xf0) | ((out_val4 >> 1) & 0x0f);
    out_ptr[3] = ((out_val4 << 7) & 0x80) | ((out_val5 << 2) & 0x7c) | ((out_val6 >> 3) & 0x03);
    out_ptr[4] =                            ((out_val6 << 5) & 0xe0) | ((out_val7 >> 0) & 0x1f);

    in_ptr  += 8;
    out_ptr += 5;
  }

  for (int i = 0; i < in_len; i++)
  {
    if (in_buf[i] != '=') continue;

    in_len = i;
  }

  int out_len = (in_len * 5) / 8;

  return out_len;
}

int base32_encode (u8 (*f) (const u8), const u8 *in_buf, int in_len, u8 *out_buf)
{
  const u8 *in_ptr = in_buf;

  u8 *out_ptr = out_buf;

  for (int i = 0; i < in_len; i += 5)
  {
    const u8 out_val0 = f (                            ((in_ptr[0] >> 3) & 0x1f));
    const u8 out_val1 = f (((in_ptr[0] << 2) & 0x1c) | ((in_ptr[1] >> 6) & 0x03));
    const u8 out_val2 = f (                            ((in_ptr[1] >> 1) & 0x1f));
    const u8 out_val3 = f (((in_ptr[1] << 4) & 0x10) | ((in_ptr[2] >> 4) & 0x0f));
    const u8 out_val4 = f (((in_ptr[2] << 1) & 0x1e) | ((in_ptr[3] >> 7) & 0x01));
    const u8 out_val5 = f (                            ((in_ptr[3] >> 2) & 0x1f));
    const u8 out_val6 = f (((in_ptr[3] << 3) & 0x18) | ((in_ptr[4] >> 5) & 0x07));
    const u8 out_val7 = f (                            ((in_ptr[4] >> 0) & 0x1f));

    out_ptr[0] = out_val0 & 0x7f;
    out_ptr[1] = out_val1 & 0x7f;
    out_ptr[2] = out_val2 & 0x7f;
    out_ptr[3] = out_val3 & 0x7f;
    out_ptr[4] = out_val4 & 0x7f;
    out_ptr[5] = out_val5 & 0x7f;
    out_ptr[6] = out_val6 & 0x7f;
    out_ptr[7] = out_val7 & 0x7f;

    in_ptr  += 5;
    out_ptr += 8;
  }

  int out_len = (int) (((0.5 + (double) in_len) * 8) / 5); // ceil (in_len * 8 / 5)

  while (out_len % 8)
  {
    out_buf[out_len] = '=';

    out_len++;
  }

  return out_len;
}

int base64_decode (u8 (*f) (const u8), const u8 *in_buf, int in_len, u8 *out_buf)
{
  const u8 *in_ptr = in_buf;

  u8 *out_ptr = out_buf;

  for (int i = 0; i < in_len; i += 4)
  {
    const u8 out_val0 = f (in_ptr[0] & 0x7f);
    const u8 out_val1 = f (in_ptr[1] & 0x7f);
    const u8 out_val2 = f (in_ptr[2] & 0x7f);
    const u8 out_val3 = f (in_ptr[3] & 0x7f);

    out_ptr[0] = ((out_val0 << 2) & 0xfc) | ((out_val1 >> 4) & 0x03);
    out_ptr[1] = ((out_val1 << 4) & 0xf0) | ((out_val2 >> 2) & 0x0f);
    out_ptr[2] = ((out_val2 << 6) & 0xc0) | ((out_val3 >> 0) & 0x3f);

    in_ptr  += 4;
    out_ptr += 3;
  }

  for (int i = 0; i < in_len; i++)
  {
    if (in_buf[i] != '=') continue;

    in_len = i;
  }

  int out_len = (in_len * 6) / 8;

  return out_len;
}

int base64_encode (u8 (*f) (const u8), const u8 *in_buf, int in_len, u8 *out_buf)
{
  const u8 *in_ptr = in_buf;

  u8 *out_ptr = out_buf;

  for (int i = 0; i < in_len; i += 3)
  {
    const u8 out_val0 = f (                            ((in_ptr[0] >> 2) & 0x3f));
    const u8 out_val1 = f (((in_ptr[0] << 4) & 0x30) | ((in_ptr[1] >> 4) & 0x0f));
    const u8 out_val2 = f (((in_ptr[1] << 2) & 0x3c) | ((in_ptr[2] >> 6) & 0x03));
    const u8 out_val3 = f (                            ((in_ptr[2] >> 0) & 0x3f));

    out_ptr[0] = out_val0 & 0x7f;
    out_ptr[1] = out_val1 & 0x7f;
    out_ptr[2] = out_val2 & 0x7f;
    out_ptr[3] = out_val3 & 0x7f;

    in_ptr  += 3;
    out_ptr += 4;
  }

  int out_len = (int) (((0.5 + (double) in_len) * 8) / 6); // ceil (in_len * 8 / 6)

  while (out_len % 4)
  {
    out_buf[out_len] = '=';

    out_len++;
  }

  return out_len;
}

void lowercase (u8 *buf, int len)
{
  for (int i = 0; i < len; i++) buf[i] = tolower (buf[i]);
}

void uppercase (u8 *buf, int len)
{
  for (int i = 0; i < len; i++) buf[i] = toupper (buf[i]);
}
