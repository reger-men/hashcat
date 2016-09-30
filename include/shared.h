/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _SHARED_H
#define _SHARED_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h>

bool is_power_of_2 (const u32 v);

u32 get_random_num (const u32 min, const u32 max);

u32 mydivc32 (const u32 dividend, const u32 divisor);
u64 mydivc64 (const u64 dividend, const u64 divisor);

char *filename_from_filepath (char *filepath);

void naive_replace (char *s, const char key_char, const char replace_char);
void naive_escape (char *s, size_t s_max, const char key_char, const char escape_char);

void hc_sleep_ms (const u32 msec);
void hc_sleep    (const u32 sec);

void setup_environment_variables ();
void setup_umask ();
void setup_seeding (const bool rp_gen_seed_chgd, const u32 rp_gen_seed);

#endif // _SHARED_H
