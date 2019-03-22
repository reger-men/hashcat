/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

DECLSPEC void kuznyechik_linear (u32 *w)
DECLSPEC void kuznyechik_linear_inv (u32 *w)
DECLSPEC void kuznyechik_set_key (u32 *ks, const u32 *ukey)
DECLSPEC void kuznyechik_encrypt (const u32 *ks, const u32 *in, u32 *out)
DECLSPEC void kuznyechik_decrypt (const u32 *ks, const u32 *in, u32 *out)
