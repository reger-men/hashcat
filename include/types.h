/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _TYPES_H
#define _TYPES_H

#include "common.h"

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <unistd.h>

#if defined (_WIN)
#define WINICONV_CONST
#endif

#include <iconv.h>

#if defined (_WIN)
#include <windows.h>
#if defined (_BASETSD_H)
#else
typedef UINT8  uint8_t;
typedef UINT16 uint16_t;
typedef UINT32 uint32_t;
typedef UINT64 uint64_t;
typedef INT8   int8_t;
typedef INT16  int16_t;
typedef INT32  int32_t;
typedef INT64  int64_t;
#endif
#endif // _WIN

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

// timer

#if defined (_WIN)
typedef LARGE_INTEGER     hc_timer_t;
#elif defined(__APPLE__) && defined(MISSING_CLOCK_GETTIME)
typedef struct timeval    hc_timer_t;
#else
typedef struct timespec   hc_timer_t;
#endif

// thread

#if defined (_POSIX)
#include <pthread.h>
#include <semaphore.h>
#endif

#if defined (_WIN)
typedef HANDLE              hc_thread_t;
typedef HANDLE              hc_thread_mutex_t;
typedef HANDLE              hc_thread_semaphore_t;
#else
typedef pthread_t           hc_thread_t;
typedef pthread_mutex_t     hc_thread_mutex_t;
typedef sem_t               hc_thread_semaphore_t;
#endif

// enums

typedef enum loglevel
{
  LOGLEVEL_INFO    = 0,
  LOGLEVEL_WARNING = 1,
  LOGLEVEL_ERROR   = 2,
  LOGLEVEL_ADVICE  = 3,

} loglevel_t;

typedef enum event_identifier
{
  EVENT_AUTOTUNE_FINISHED         = 0x00000000,
  EVENT_AUTOTUNE_STARTING         = 0x00000001,
  EVENT_BITMAP_INIT_POST          = 0x00000010,
  EVENT_BITMAP_INIT_PRE           = 0x00000011,
  EVENT_BITMAP_FINAL_OVERFLOW     = 0x00000012,
  EVENT_CALCULATED_WORDS_BASE     = 0x00000020,
  EVENT_CRACKER_FINISHED          = 0x00000030,
  EVENT_CRACKER_HASH_CRACKED      = 0x00000031,
  EVENT_CRACKER_STARTING          = 0x00000032,
  EVENT_HASHLIST_COUNT_LINES_POST = 0x00000040,
  EVENT_HASHLIST_COUNT_LINES_PRE  = 0x00000041,
  EVENT_HASHLIST_PARSE_HASH       = 0x00000042,
  EVENT_HASHLIST_SORT_HASH_POST   = 0x00000043,
  EVENT_HASHLIST_SORT_HASH_PRE    = 0x00000044,
  EVENT_HASHLIST_SORT_SALT_POST   = 0x00000045,
  EVENT_HASHLIST_SORT_SALT_PRE    = 0x00000046,
  EVENT_HASHLIST_UNIQUE_HASH_POST = 0x00000047,
  EVENT_HASHLIST_UNIQUE_HASH_PRE  = 0x00000048,
  EVENT_INNERLOOP1_FINISHED       = 0x00000050,
  EVENT_INNERLOOP1_STARTING       = 0x00000051,
  EVENT_INNERLOOP2_FINISHED       = 0x00000060,
  EVENT_INNERLOOP2_STARTING       = 0x00000061,
  EVENT_LOG_ERROR                 = 0x00000070,
  EVENT_LOG_INFO                  = 0x00000071,
  EVENT_LOG_WARNING               = 0x00000072,
  EVENT_LOG_ADVICE                = 0x00000073,
  EVENT_MONITOR_RUNTIME_LIMIT     = 0x00000080,
  EVENT_MONITOR_STATUS_REFRESH    = 0x00000081,
  EVENT_MONITOR_TEMP_ABORT        = 0x00000082,
  EVENT_MONITOR_THROTTLE1         = 0x00000083,
  EVENT_MONITOR_THROTTLE2         = 0x00000084,
  EVENT_MONITOR_THROTTLE3         = 0x00000085,
  EVENT_MONITOR_PERFORMANCE_HINT  = 0x00000086,
  EVENT_MONITOR_NOINPUT_HINT      = 0x00000087,
  EVENT_MONITOR_NOINPUT_ABORT     = 0x00000088,
  EVENT_OPENCL_SESSION_POST       = 0x00000090,
  EVENT_OPENCL_SESSION_PRE        = 0x00000091,
  EVENT_OPENCL_DEVICE_INIT_POST   = 0x00000092,
  EVENT_OPENCL_DEVICE_INIT_PRE    = 0x00000093,
  EVENT_OUTERLOOP_FINISHED        = 0x000000a0,
  EVENT_OUTERLOOP_MAINSCREEN      = 0x000000a1,
  EVENT_OUTERLOOP_STARTING        = 0x000000a2,
  EVENT_POTFILE_ALL_CRACKED       = 0x000000b0,
  EVENT_POTFILE_HASH_LEFT         = 0x000000b1,
  EVENT_POTFILE_HASH_SHOW         = 0x000000b2,
  EVENT_POTFILE_NUM_CRACKED       = 0x000000b3,
  EVENT_POTFILE_REMOVE_PARSE_POST = 0x000000b4,
  EVENT_POTFILE_REMOVE_PARSE_PRE  = 0x000000b5,
  EVENT_SELFTEST_FINISHED         = 0x000000c0,
  EVENT_SELFTEST_STARTING         = 0x000000c1,
  EVENT_SET_KERNEL_POWER_FINAL    = 0x000000d0,
  EVENT_WORDLIST_CACHE_GENERATE   = 0x000000e0,
  EVENT_WORDLIST_CACHE_HIT        = 0x000000e1,

  // there will be much more event types soon

} event_identifier_t;

typedef enum amplifier_count
{
  KERNEL_BFS                        = 1024,
  KERNEL_COMBS                      = 1024,
  KERNEL_RULES                      = 256,

} amplifier_count_t;

typedef enum vendor_id
{
  VENDOR_ID_AMD           = (1 << 0),
  VENDOR_ID_APPLE         = (1 << 1),
  VENDOR_ID_INTEL_BEIGNET = (1 << 2),
  VENDOR_ID_INTEL_SDK     = (1 << 3),
  VENDOR_ID_MESA          = (1 << 4),
  VENDOR_ID_NV            = (1 << 5),
  VENDOR_ID_POCL          = (1 << 6),
  VENDOR_ID_AMD_USE_INTEL = (1 << 7),
  VENDOR_ID_GENERIC       = (1 << 31)

} vendor_id_t;

typedef enum st_status_rc
{
  ST_STATUS_PASSED        = 0,
  ST_STATUS_FAILED        = 1,
  ST_STATUS_IGNORED       = 2,

} st_status_t;

typedef enum status_rc
{
  STATUS_INIT               = 0,
  STATUS_AUTOTUNE           = 1,
  STATUS_SELFTEST           = 2,
  STATUS_RUNNING            = 3,
  STATUS_PAUSED             = 4,
  STATUS_EXHAUSTED          = 5,
  STATUS_CRACKED            = 6,
  STATUS_ABORTED            = 7,
  STATUS_QUIT               = 8,
  STATUS_BYPASS             = 9,
  STATUS_ABORTED_CHECKPOINT = 10,
  STATUS_ABORTED_RUNTIME    = 11,
  STATUS_ERROR              = 13,

} status_rc_t;

typedef enum wl_mode
{
  WL_MODE_NONE  = 0,
  WL_MODE_STDIN = 1,
  WL_MODE_FILE  = 2,
  WL_MODE_MASK  = 3

} wl_mode_t;

typedef enum hl_mode
{
  HL_MODE_FILE  = 4,
  HL_MODE_ARG   = 5

} hl_mode_t;

typedef enum attack_mode
{
  ATTACK_MODE_STRAIGHT  = 0,
  ATTACK_MODE_COMBI     = 1,
  ATTACK_MODE_TOGGLE    = 2,
  ATTACK_MODE_BF        = 3,
  ATTACK_MODE_PERM      = 4,
  ATTACK_MODE_TABLE     = 5,
  ATTACK_MODE_HYBRID1   = 6,
  ATTACK_MODE_HYBRID2   = 7,
  ATTACK_MODE_NONE      = 100

} attack_mode_t;

typedef enum attack_kern
{
  ATTACK_KERN_STRAIGHT  = 0,
  ATTACK_KERN_COMBI     = 1,
  ATTACK_KERN_BF        = 3,
  ATTACK_KERN_NONE      = 100

} attack_kern_t;

typedef enum combinator_mode
{
  COMBINATOR_MODE_BASE_LEFT  = 10001,
  COMBINATOR_MODE_BASE_RIGHT = 10002

} combinator_mode_t;

typedef enum kern_run
{
  KERN_RUN_1      = 1000,
  KERN_RUN_12     = 1500,
  KERN_RUN_2      = 2000,
  KERN_RUN_23     = 2500,
  KERN_RUN_3      = 3000,
  KERN_RUN_4      = 4000,
  KERN_RUN_INIT2  = 5000,
  KERN_RUN_LOOP2  = 6000,
  KERN_RUN_AUX1   = 7001,
  KERN_RUN_AUX2   = 7002,
  KERN_RUN_AUX3   = 7003,
  KERN_RUN_AUX4   = 7004,

} kern_run_t;

typedef enum kern_run_mp
{
  KERN_RUN_MP   = 101,
  KERN_RUN_MP_L = 102,
  KERN_RUN_MP_R = 103

} kern_run_mp_t;

typedef enum rule_functions
{
  RULE_OP_MANGLE_NOOP            = ':',
  RULE_OP_MANGLE_LREST           = 'l',
  RULE_OP_MANGLE_UREST           = 'u',
  RULE_OP_MANGLE_LREST_UFIRST    = 'c',
  RULE_OP_MANGLE_UREST_LFIRST    = 'C',
  RULE_OP_MANGLE_TREST           = 't',
  RULE_OP_MANGLE_TOGGLE_AT       = 'T',
  RULE_OP_MANGLE_REVERSE         = 'r',
  RULE_OP_MANGLE_DUPEWORD        = 'd',
  RULE_OP_MANGLE_DUPEWORD_TIMES  = 'p',
  RULE_OP_MANGLE_REFLECT         = 'f',
  RULE_OP_MANGLE_ROTATE_LEFT     = '{',
  RULE_OP_MANGLE_ROTATE_RIGHT    = '}',
  RULE_OP_MANGLE_APPEND          = '$',
  RULE_OP_MANGLE_PREPEND         = '^',
  RULE_OP_MANGLE_DELETE_FIRST    = '[',
  RULE_OP_MANGLE_DELETE_LAST     = ']',
  RULE_OP_MANGLE_DELETE_AT       = 'D',
  RULE_OP_MANGLE_EXTRACT         = 'x',
  RULE_OP_MANGLE_OMIT            = 'O',
  RULE_OP_MANGLE_INSERT          = 'i',
  RULE_OP_MANGLE_OVERSTRIKE      = 'o',
  RULE_OP_MANGLE_TRUNCATE_AT     = '\'',
  RULE_OP_MANGLE_REPLACE         = 's',
  RULE_OP_MANGLE_PURGECHAR       = '@',
  RULE_OP_MANGLE_TOGGLECASE_REC  = 'a',
  RULE_OP_MANGLE_DUPECHAR_FIRST  = 'z',
  RULE_OP_MANGLE_DUPECHAR_LAST   = 'Z',
  RULE_OP_MANGLE_DUPECHAR_ALL    = 'q',
  RULE_OP_MANGLE_EXTRACT_MEMORY  = 'X',
  RULE_OP_MANGLE_APPEND_MEMORY   = '4',
  RULE_OP_MANGLE_PREPEND_MEMORY  = '6',
  RULE_OP_MANGLE_TITLE_SEP       = 'e',

  RULE_OP_MEMORIZE_WORD          = 'M',

  RULE_OP_REJECT_LESS            = '<',
  RULE_OP_REJECT_GREATER         = '>',
  RULE_OP_REJECT_EQUAL           = '_',
  RULE_OP_REJECT_CONTAIN         = '!',
  RULE_OP_REJECT_NOT_CONTAIN     = '/',
  RULE_OP_REJECT_EQUAL_FIRST     = '(',
  RULE_OP_REJECT_EQUAL_LAST      = ')',
  RULE_OP_REJECT_EQUAL_AT        = '=',
  RULE_OP_REJECT_CONTAINS        = '%',
  RULE_OP_REJECT_MEMORY          = 'Q',
  RULE_LAST_REJECTED_SAVED_POS   = 'p',

  RULE_OP_MANGLE_SWITCH_FIRST    = 'k',
  RULE_OP_MANGLE_SWITCH_LAST     = 'K',
  RULE_OP_MANGLE_SWITCH_AT       = '*',
  RULE_OP_MANGLE_CHR_SHIFTL      = 'L',
  RULE_OP_MANGLE_CHR_SHIFTR      = 'R',
  RULE_OP_MANGLE_CHR_INCR        = '+',
  RULE_OP_MANGLE_CHR_DECR        = '-',
  RULE_OP_MANGLE_REPLACE_NP1     = '.',
  RULE_OP_MANGLE_REPLACE_NM1     = ',',
  RULE_OP_MANGLE_DUPEBLOCK_FIRST = 'y',
  RULE_OP_MANGLE_DUPEBLOCK_LAST  = 'Y',
  RULE_OP_MANGLE_TITLE           = 'E',

} rule_functions_t;

typedef enum salt_type
{
  SALT_TYPE_NONE     = 1,
  SALT_TYPE_EMBEDDED = 2,
  SALT_TYPE_GENERIC  = 3,
  SALT_TYPE_VIRTUAL  = 5

} salt_type_t;

typedef enum opti_type
{
  OPTI_TYPE_OPTIMIZED_KERNEL    = (1 <<  0),
  OPTI_TYPE_ZERO_BYTE           = (1 <<  1),
  OPTI_TYPE_PRECOMPUTE_INIT     = (1 <<  2),
  OPTI_TYPE_PRECOMPUTE_MERKLE   = (1 <<  3),
  OPTI_TYPE_PRECOMPUTE_PERMUT   = (1 <<  4),
  OPTI_TYPE_MEET_IN_MIDDLE      = (1 <<  5),
  OPTI_TYPE_EARLY_SKIP          = (1 <<  6),
  OPTI_TYPE_NOT_SALTED          = (1 <<  7),
  OPTI_TYPE_NOT_ITERATED        = (1 <<  8),
  OPTI_TYPE_PREPENDED_SALT      = (1 <<  9),
  OPTI_TYPE_APPENDED_SALT       = (1 << 10),
  OPTI_TYPE_SINGLE_HASH         = (1 << 11),
  OPTI_TYPE_SINGLE_SALT         = (1 << 12),
  OPTI_TYPE_BRUTE_FORCE         = (1 << 13),
  OPTI_TYPE_RAW_HASH            = (1 << 14),
  OPTI_TYPE_SLOW_HASH_SIMD_INIT = (1 << 15),
  OPTI_TYPE_SLOW_HASH_SIMD_LOOP = (1 << 16),
  OPTI_TYPE_SLOW_HASH_SIMD_COMP = (1 << 17),
  OPTI_TYPE_USES_BITS_8         = (1 << 18),
  OPTI_TYPE_USES_BITS_16        = (1 << 19),
  OPTI_TYPE_USES_BITS_32        = (1 << 20),
  OPTI_TYPE_USES_BITS_64        = (1 << 21)

} opti_type_t;

typedef enum opts_type
{
  OPTS_TYPE_PT_UTF16LE        = (1ULL <<  0),
  OPTS_TYPE_PT_UTF16BE        = (1ULL <<  1),
  OPTS_TYPE_PT_UPPER          = (1ULL <<  2),
  OPTS_TYPE_PT_LOWER          = (1ULL <<  3),
  OPTS_TYPE_PT_ADD01          = (1ULL <<  4),
  OPTS_TYPE_PT_ADD02          = (1ULL <<  5),
  OPTS_TYPE_PT_ADD80          = (1ULL <<  6),
  OPTS_TYPE_PT_ADDBITS14      = (1ULL <<  7),
  OPTS_TYPE_PT_ADDBITS15      = (1ULL <<  8),
  OPTS_TYPE_PT_GENERATE_LE    = (1ULL <<  9),
  OPTS_TYPE_PT_GENERATE_BE    = (1ULL << 10),
  OPTS_TYPE_PT_NEVERCRACK     = (1ULL << 11), // if we want all possible results
  OPTS_TYPE_PT_BITSLICE       = (1ULL << 12),
  OPTS_TYPE_PT_ALWAYS_ASCII   = (1ULL << 13),
  OPTS_TYPE_PT_ALWAYS_HEXIFY  = (1ULL << 14),
  OPTS_TYPE_PT_LM             = (1ULL << 15), // special handling: all lower, 7 max, ...
  OPTS_TYPE_ST_UTF16LE        = (1ULL << 16),
  OPTS_TYPE_ST_UTF16BE        = (1ULL << 17),
  OPTS_TYPE_ST_UPPER          = (1ULL << 18),
  OPTS_TYPE_ST_LOWER          = (1ULL << 19),
  OPTS_TYPE_ST_ADD01          = (1ULL << 20),
  OPTS_TYPE_ST_ADD02          = (1ULL << 21),
  OPTS_TYPE_ST_ADD80          = (1ULL << 22),
  OPTS_TYPE_ST_ADDBITS14      = (1ULL << 23),
  OPTS_TYPE_ST_ADDBITS15      = (1ULL << 24),
  OPTS_TYPE_ST_GENERATE_LE    = (1ULL << 25),
  OPTS_TYPE_ST_GENERATE_BE    = (1ULL << 26),
  OPTS_TYPE_ST_HEX            = (1ULL << 27),
  OPTS_TYPE_ST_BASE64         = (1ULL << 28),
  OPTS_TYPE_ST_HASH_MD5       = (1ULL << 29),
  OPTS_TYPE_HASH_COPY         = (1ULL << 30),
  OPTS_TYPE_HASH_SPLIT        = (1ULL << 31),
  OPTS_TYPE_HOOK12            = (1ULL << 32),
  OPTS_TYPE_HOOK23            = (1ULL << 33),
  OPTS_TYPE_INIT2             = (1ULL << 34),
  OPTS_TYPE_LOOP2             = (1ULL << 35),
  OPTS_TYPE_AUX1              = (1ULL << 36),
  OPTS_TYPE_AUX2              = (1ULL << 37),
  OPTS_TYPE_AUX3              = (1ULL << 38),
  OPTS_TYPE_AUX4              = (1ULL << 39),
  OPTS_TYPE_BINARY_HASHFILE   = (1ULL << 40),
  OPTS_TYPE_PREFERED_THREAD   = (1ULL << 41), // some algorithms (complicated ones with many branches) benefit from this
  OPTS_TYPE_PT_ADD06          = (1ULL << 42),
  OPTS_TYPE_KEYBOARD_MAPPING  = (1ULL << 43),
  OPTS_TYPE_STATE_BUFFER_LE   = (1ULL << 44),
  OPTS_TYPE_STATE_BUFFER_BE   = (1ULL << 45),
  OPTS_TYPE_DEEP_COMP_KERNEL  = (1ULL << 46), // if we have to iterate through each hash inside the comp kernel, for example if each hash has to be decrypted separately

} opts_type_t;

typedef enum dgst_size
{
  DGST_SIZE_4_2  = (2  * sizeof (u32)), // 8
  DGST_SIZE_4_4  = (4  * sizeof (u32)), // 16
  DGST_SIZE_4_5  = (5  * sizeof (u32)), // 20
  DGST_SIZE_4_6  = (6  * sizeof (u32)), // 24
  DGST_SIZE_4_7  = (7  * sizeof (u32)), // 28
  DGST_SIZE_4_8  = (8  * sizeof (u32)), // 32
  DGST_SIZE_4_16 = (16 * sizeof (u32)), // 64 !!!
  DGST_SIZE_4_32 = (32 * sizeof (u32)), // 128 !!!
  DGST_SIZE_4_64 = (64 * sizeof (u32)), // 256
  DGST_SIZE_8_8  = (8  * sizeof (u64)), // 64 !!!
  DGST_SIZE_8_16 = (16 * sizeof (u64)), // 128 !!!
  DGST_SIZE_8_25 = (25 * sizeof (u64))  // 200

} dgst_size_t;

typedef enum attack_exec
{
  ATTACK_EXEC_OUTSIDE_KERNEL = 10,
  ATTACK_EXEC_INSIDE_KERNEL  = 11

} attack_exec_t;

typedef enum hlfmt_name
{
  HLFMT_HASHCAT  = 0,
  HLFMT_PWDUMP   = 1,
  HLFMT_PASSWD   = 2,
  HLFMT_SHADOW   = 3,
  HLFMT_DCC      = 4,
  HLFMT_DCC2     = 5,
  HLFMT_NETNTLM1 = 7,
  HLFMT_NETNTLM2 = 8,
  HLFMT_NSLDAP   = 9,
  HLFMT_NSLDAPS  = 10

} hlfmt_name_t;

typedef enum pwdump_column
{
  PWDUMP_COLUMN_INVALID   = -1,
  PWDUMP_COLUMN_USERNAME  = 0,
  PWDUMP_COLUMN_UID       = 1,
  PWDUMP_COLUMN_LM_HASH   = 2,
  PWDUMP_COLUMN_NTLM_HASH = 3,
  PWDUMP_COLUMN_COMMENT   = 4,
  PWDUMP_COLUMN_HOMEDIR   = 5,

} pwdump_column_t;

typedef enum outfile_fmt
{
  OUTFILE_FMT_HASH      = (1 << 0),
  OUTFILE_FMT_PLAIN     = (1 << 1),
  OUTFILE_FMT_HEXPLAIN  = (1 << 2),
  OUTFILE_FMT_CRACKPOS  = (1 << 3)

} outfile_fmt_t;

typedef enum parser_rc
{
  PARSER_OK                   = 0,
  PARSER_COMMENT              = -1,
  PARSER_GLOBAL_ZERO          = -2,
  PARSER_GLOBAL_LENGTH        = -3,
  PARSER_HASH_LENGTH          = -4,
  PARSER_HASH_VALUE           = -5,
  PARSER_SALT_LENGTH          = -6,
  PARSER_SALT_VALUE           = -7,
  PARSER_SALT_ITERATION       = -8,
  PARSER_SEPARATOR_UNMATCHED  = -9,
  PARSER_SIGNATURE_UNMATCHED  = -10,
  PARSER_HCCAPX_FILE_SIZE     = -11,
  PARSER_HCCAPX_EAPOL_LEN     = -12,
  PARSER_PSAFE2_FILE_SIZE     = -13,
  PARSER_PSAFE3_FILE_SIZE     = -14,
  PARSER_TC_FILE_SIZE         = -15,
  PARSER_VC_FILE_SIZE         = -16,
  PARSER_SIP_AUTH_DIRECTIVE   = -17,
  PARSER_HASH_FILE            = -18,
  PARSER_HASH_ENCODING        = -19,
  PARSER_SALT_ENCODING        = -20,
  PARSER_LUKS_FILE_SIZE       = -21,
  PARSER_LUKS_MAGIC           = -22,
  PARSER_LUKS_VERSION         = -23,
  PARSER_LUKS_CIPHER_TYPE     = -24,
  PARSER_LUKS_CIPHER_MODE     = -25,
  PARSER_LUKS_HASH_TYPE       = -26,
  PARSER_LUKS_KEY_SIZE        = -27,
  PARSER_LUKS_KEY_DISABLED    = -28,
  PARSER_LUKS_KEY_STRIPES     = -29,
  PARSER_LUKS_HASH_CIPHER     = -30,
  PARSER_HCCAPX_SIGNATURE     = -31,
  PARSER_HCCAPX_VERSION       = -32,
  PARSER_HCCAPX_MESSAGE_PAIR  = -33,
  PARSER_TOKEN_ENCODING       = -34,
  PARSER_TOKEN_LENGTH         = -35,
  PARSER_INSUFFICIENT_ENTROPY = -36,
  PARSER_UNKNOWN_ERROR        = -255

} parser_rc_t;

typedef enum guess_mode
{
  GUESS_MODE_NONE                       = 0,
  GUESS_MODE_STRAIGHT_FILE              = 1,
  GUESS_MODE_STRAIGHT_FILE_RULES_FILE   = 2,
  GUESS_MODE_STRAIGHT_FILE_RULES_GEN    = 3,
  GUESS_MODE_STRAIGHT_STDIN             = 4,
  GUESS_MODE_STRAIGHT_STDIN_RULES_FILE  = 5,
  GUESS_MODE_STRAIGHT_STDIN_RULES_GEN   = 6,
  GUESS_MODE_COMBINATOR_BASE_LEFT       = 7,
  GUESS_MODE_COMBINATOR_BASE_RIGHT      = 8,
  GUESS_MODE_MASK                       = 9,
  GUESS_MODE_MASK_CS                    = 10,
  GUESS_MODE_HYBRID1                    = 11,
  GUESS_MODE_HYBRID1_CS                 = 12,
  GUESS_MODE_HYBRID2                    = 13,
  GUESS_MODE_HYBRID2_CS                 = 14,

} guess_mode_t;

typedef enum progress_mode
{
  PROGRESS_MODE_NONE              = 0,
  PROGRESS_MODE_KEYSPACE_KNOWN    = 1,
  PROGRESS_MODE_KEYSPACE_UNKNOWN  = 2,

} progress_mode_t;

typedef enum user_options_defaults
{
  ADVICE_DISABLE           = false,
  ATTACK_MODE              = ATTACK_MODE_STRAIGHT,
  BENCHMARK_ALL            = false,
  BENCHMARK                = false,
  BITMAP_MAX               = 18,
  BITMAP_MIN               = 16,
  #ifdef WITH_BRAIN
  BRAIN_CLIENT             = false,
  BRAIN_CLIENT_FEATURES    = 2,
  BRAIN_PORT               = 6863,
  BRAIN_SERVER             = false,
  BRAIN_SESSION            = 0,
  #endif
  DEBUG_MODE               = 0,
  EXAMPLE_HASHES           = false,
  FORCE                    = false,
  HWMON_DISABLE            = false,
  HWMON_TEMP_ABORT         = 90,
  HASH_MODE                = 0,
  HCCAPX_MESSAGE_PAIR      = 0,
  HEX_CHARSET              = false,
  HEX_SALT                 = false,
  HEX_WORDLIST             = false,
  INCREMENT                = false,
  INCREMENT_MAX            = PW_MAX,
  INCREMENT_MIN            = 1,
  KEEP_GUESSING            = false,
  KERNEL_ACCEL             = 0,
  KERNEL_LOOPS             = 0,
  KERNEL_THREADS           = 0,
  KEYSPACE                 = false,
  LEFT                     = false,
  LIMIT                    = 0,
  LOGFILE_DISABLE          = false,
  LOOPBACK                 = false,
  MACHINE_READABLE         = false,
  MARKOV_CLASSIC           = false,
  MARKOV_DISABLE           = false,
  MARKOV_THRESHOLD         = 0,
  NONCE_ERROR_CORRECTIONS  = 8,
  OPENCL_INFO              = false,
  OPENCL_VECTOR_WIDTH      = 0,
  OPTIMIZED_KERNEL_ENABLE  = false,
  OUTFILE_AUTOHEX          = true,
  OUTFILE_CHECK_TIMER      = 5,
  OUTFILE_FORMAT           = 3,
  POTFILE_DISABLE          = false,
  PROGRESS_ONLY            = false,
  QUIET                    = false,
  REMOVE                   = false,
  REMOVE_TIMER             = 60,
  RESTORE_DISABLE          = false,
  RESTORE                  = false,
  RESTORE_TIMER            = 60,
  RP_GEN                   = 0,
  RP_GEN_FUNC_MAX          = 4,
  RP_GEN_FUNC_MIN          = 1,
  RP_GEN_SEED              = 0,
  RUNTIME                  = 0,
  SCRYPT_TMTO              = 0,
  SEGMENT_SIZE             = 33554432,
  SELF_TEST_DISABLE        = false,
  SEPARATOR                = ':',
  SHOW                     = false,
  SKIP                     = 0,
  SLOW_CANDIDATES          = false,
  SPEED_ONLY               = false,
  SPIN_DAMP                = 8,
  STATUS                   = false,
  STATUS_TIMER             = 10,
  STDIN_TIMEOUT_ABORT      = 120,
  STDOUT_FLAG              = false,
  USAGE                    = false,
  USERNAME                 = false,
  VERSION                  = false,
  WORDLIST_AUTOHEX_DISABLE = false,
  WORKLOAD_PROFILE         = 2,

} user_options_defaults_t;

typedef enum user_options_map
{
  IDX_ADVICE_DISABLE            = 0xff00,
  IDX_ATTACK_MODE               = 'a',
  IDX_BENCHMARK_ALL             = 0xff01,
  IDX_BENCHMARK                 = 'b',
  IDX_BITMAP_MAX                = 0xff02,
  IDX_BITMAP_MIN                = 0xff03,
  #ifdef WITH_BRAIN
  IDX_BRAIN_CLIENT              = 'z',
  IDX_BRAIN_CLIENT_FEATURES     = 0xff04,
  IDX_BRAIN_HOST                = 0xff05,
  IDX_BRAIN_PASSWORD            = 0xff06,
  IDX_BRAIN_PORT                = 0xff07,
  IDX_BRAIN_SERVER              = 0xff08,
  IDX_BRAIN_SESSION             = 0xff09,
  IDX_BRAIN_SESSION_WHITELIST   = 0xff0a,
  #endif
  IDX_CPU_AFFINITY              = 0xff0b,
  IDX_CUSTOM_CHARSET_1          = '1',
  IDX_CUSTOM_CHARSET_2          = '2',
  IDX_CUSTOM_CHARSET_3          = '3',
  IDX_CUSTOM_CHARSET_4          = '4',
  IDX_DEBUG_FILE                = 0xff0c,
  IDX_DEBUG_MODE                = 0xff0d,
  IDX_ENCODING_FROM             = 0xff0e,
  IDX_ENCODING_TO               = 0xff0f,
  IDX_EXAMPLE_HASHES            = 0xff10,
  IDX_FORCE                     = 0xff11,
  IDX_HWMON_DISABLE             = 0xff12,
  IDX_HWMON_TEMP_ABORT          = 0xff13,
  IDX_HASH_MODE                 = 'm',
  IDX_HCCAPX_MESSAGE_PAIR       = 0xff14,
  IDX_HELP                      = 'h',
  IDX_HEX_CHARSET               = 0xff15,
  IDX_HEX_SALT                  = 0xff16,
  IDX_HEX_WORDLIST              = 0xff17,
  IDX_INCREMENT                 = 'i',
  IDX_INCREMENT_MAX             = 0xff18,
  IDX_INCREMENT_MIN             = 0xff19,
  IDX_INDUCTION_DIR             = 0xff1a,
  IDX_KEEP_GUESSING             = 0xff1b,
  IDX_KERNEL_ACCEL              = 'n',
  IDX_KERNEL_LOOPS              = 'u',
  IDX_KERNEL_THREADS            = 'T',
  IDX_KEYBOARD_LAYOUT_MAPPING   = 0xff1c,
  IDX_KEYSPACE                  = 0xff1d,
  IDX_LEFT                      = 0xff1e,
  IDX_LIMIT                     = 'l',
  IDX_LOGFILE_DISABLE           = 0xff1f,
  IDX_LOOPBACK                  = 0xff20,
  IDX_MACHINE_READABLE          = 0xff21,
  IDX_MARKOV_CLASSIC            = 0xff22,
  IDX_MARKOV_DISABLE            = 0xff23,
  IDX_MARKOV_HCSTAT2            = 0xff24,
  IDX_MARKOV_THRESHOLD          = 't',
  IDX_NONCE_ERROR_CORRECTIONS   = 0xff25,
  IDX_OPENCL_DEVICES            = 'd',
  IDX_OPENCL_DEVICE_TYPES       = 'D',
  IDX_OPENCL_INFO               = 'I',
  IDX_OPENCL_PLATFORMS          = 0xff26,
  IDX_OPENCL_VECTOR_WIDTH       = 0xff27,
  IDX_OPTIMIZED_KERNEL_ENABLE   = 'O',
  IDX_OUTFILE_AUTOHEX_DISABLE   = 0xff28,
  IDX_OUTFILE_CHECK_DIR         = 0xff29,
  IDX_OUTFILE_CHECK_TIMER       = 0xff2a,
  IDX_OUTFILE_FORMAT            = 0xff2b,
  IDX_OUTFILE                   = 'o',
  IDX_POTFILE_DISABLE           = 0xff2c,
  IDX_POTFILE_PATH              = 0xff2d,
  IDX_PROGRESS_ONLY             = 0xff2e,
  IDX_QUIET                     = 0xff2f,
  IDX_REMOVE                    = 0xff30,
  IDX_REMOVE_TIMER              = 0xff31,
  IDX_RESTORE                   = 0xff32,
  IDX_RESTORE_DISABLE           = 0xff33,
  IDX_RESTORE_FILE_PATH         = 0xff34,
  IDX_RP_FILE                   = 'r',
  IDX_RP_GEN_FUNC_MAX           = 0xff35,
  IDX_RP_GEN_FUNC_MIN           = 0xff36,
  IDX_RP_GEN                    = 'g',
  IDX_RP_GEN_SEED               = 0xff37,
  IDX_RULE_BUF_L                = 'j',
  IDX_RULE_BUF_R                = 'k',
  IDX_RUNTIME                   = 0xff38,
  IDX_SCRYPT_TMTO               = 0xff39,
  IDX_SEGMENT_SIZE              = 'c',
  IDX_SELF_TEST_DISABLE         = 0xff3a,
  IDX_SEPARATOR                 = 'p',
  IDX_SESSION                   = 0xff3b,
  IDX_SHOW                      = 0xff3c,
  IDX_SKIP                      = 's',
  IDX_SLOW_CANDIDATES           = 'S',
  IDX_SPEED_ONLY                = 0xff3d,
  IDX_SPIN_DAMP                 = 0xff3e,
  IDX_STATUS                    = 0xff3f,
  IDX_STATUS_TIMER              = 0xff40,
  IDX_STDOUT_FLAG               = 0xff41,
  IDX_STDIN_TIMEOUT_ABORT       = 0xff42,
  IDX_TRUECRYPT_KEYFILES        = 0xff43,
  IDX_USERNAME                  = 0xff44,
  IDX_VERACRYPT_KEYFILES        = 0xff46,
  IDX_VERACRYPT_PIM             = 0xff47,
  IDX_VERSION_LOWER             = 'v',
  IDX_VERSION                   = 'V',
  IDX_WORDLIST_AUTOHEX_DISABLE  = 0xff48,
  IDX_WORKLOAD_PROFILE          = 'w',

} user_options_map_t;

typedef enum token_attr
{
  TOKEN_ATTR_FIXED_LENGTH       = 1 << 0,
  TOKEN_ATTR_OPTIONAL_ROUNDS    = 1 << 1,
  TOKEN_ATTR_VERIFY_SIGNATURE   = 1 << 2,
  TOKEN_ATTR_VERIFY_LENGTH      = 1 << 3,
  TOKEN_ATTR_VERIFY_DIGIT       = 1 << 4,
  TOKEN_ATTR_VERIFY_HEX         = 1 << 5,
  TOKEN_ATTR_VERIFY_BASE64A     = 1 << 6,
  TOKEN_ATTR_VERIFY_BASE64B     = 1 << 7,
  TOKEN_ATTR_VERIFY_BASE64C     = 1 << 8

} token_attr_t;

#ifdef WITH_BRAIN
typedef enum brain_link_status
{
  BRAIN_LINK_STATUS_CONNECTED   = 1 << 0,
  BRAIN_LINK_STATUS_RECEIVING   = 1 << 1,
  BRAIN_LINK_STATUS_SENDING     = 1 << 2,

} brain_link_status_t;
#endif

/**
 * structs
 */

typedef struct salt
{
  u32 salt_buf[64];
  u32 salt_buf_pc[64];

  u32 salt_len;
  u32 salt_len_pc;
  u32 salt_iter;
  u32 salt_iter2;
  u32 salt_sign[2];

  u32 digests_cnt;
  u32 digests_done;

  u32 digests_offset;

  u32 scrypt_N;
  u32 scrypt_r;
  u32 scrypt_p;

} salt_t;

typedef struct user
{
  char *user_name;
  u32   user_len;

} user_t;

typedef enum split_origin
{
  SPLIT_ORIGIN_NONE   = 0,
  SPLIT_ORIGIN_LEFT   = 1,
  SPLIT_ORIGIN_RIGHT  = 2,

} split_origin_t;

typedef struct split
{
  // some hashes, like lm, are split. this id point to the other hash of the group

  int split_group;
  int split_neighbor;
  int split_origin;

} split_t;

typedef struct hashinfo
{
  user_t  *user;
  char    *orighash;
  split_t *split;

} hashinfo_t;

typedef struct hash
{
  void       *digest;
  salt_t     *salt;
  void       *esalt;
  void       *hook_salt; // additional salt info only used by the hook (host)
  int         cracked;
  hashinfo_t *hash_info;
  char       *pw_buf;
  int         pw_len;

} hash_t;

typedef struct outfile_data
{
  char      *file_name;
  off_t      seek;
  time_t     ctime;

} outfile_data_t;

typedef struct logfile_ctx
{
  bool  enabled;

  char *logfile;
  char *topid;
  char *subid;

} logfile_ctx_t;

typedef struct hashes
{
  const char  *hashfile;
  char        *hashfile_hcdmp;

  u32          hashlist_mode;
  u32          hashlist_format;

  u32          digests_cnt;
  u32          digests_done;
  u32          digests_saved;

  void        *digests_buf;
  u32         *digests_shown;
  u32         *digests_shown_tmp;

  u32          salts_cnt;
  u32          salts_done;

  salt_t      *salts_buf;
  u32         *salts_shown;

  void        *esalts_buf;

  void        *hook_salts_buf;

  u32          hashes_cnt_orig;
  u32          hashes_cnt;
  hash_t      *hashes_buf;

  hashinfo_t **hash_info;

  u8          *out_buf; // allocates [HCBUFSIZ_LARGE];
  u8          *tmp_buf; // allocates [HCBUFSIZ_LARGE];

  // selftest buffers

  void        *st_digests_buf;
  salt_t      *st_salts_buf;
  void        *st_esalts_buf;
  void        *st_hook_salts_buf;

} hashes_t;

struct hashconfig
{
  char  separator;

  u32   hash_mode;
  u32   hash_type;
  u32   salt_type;
  u32   attack_exec;
  u32   kern_type;
  u32   dgst_size;
  u32   opti_type;
  u64   opts_type;
  u32   dgst_pos0;
  u32   dgst_pos1;
  u32   dgst_pos2;
  u32   dgst_pos3;

  bool  is_salted;

  bool  has_pure_kernel;
  bool  has_optimized_kernel;

  // sizes have to be size_t

  u64   esalt_size;
  u64   hook_salt_size;
  u64   tmp_size;
  u64   hook_size;

  // password length limit

  u32   pw_min;
  u32   pw_max;

  // salt length limit (generic hashes)

  u32   salt_min;
  u32   salt_max;

  //  int (*parse_func) (u8 *, u32, hash_t *, struct hashconfig *);

  const char *st_hash;
  const char *st_pass;

  const char *hash_name;

  const char *benchmark_mask;
  u32         benchmark_salt_len;
  u32         benchmark_salt_iter;

  salt_t *benchmark_salt;
  void   *benchmark_esalt;
  void   *benchmark_hook_salt;

  u32 kernel_accel_min;
  u32 kernel_accel_max;
  u32 kernel_loops_min;
  u32 kernel_loops_max;
  u32 kernel_threads_min;
  u32 kernel_threads_max;

  u32 forced_outfile_format;

  bool dictstat_disable;
  bool hlfmt_disable;
  bool warmup_disable;
  bool unstable_warning;
  bool outfile_check_disable;
  bool outfile_check_nocomp;
  bool potfile_disable;
  bool potfile_keep_all_hashes;
  bool forced_jit_compile;

  u32 pwdump_column;
};

typedef struct hashconfig hashconfig_t;

typedef struct pw
{
  u32 i[64];

  u32 pw_len;

} pw_t;

typedef struct pw_pre
{
  u32 pw_buf[64];
  u32 pw_len;

  u32 base_buf[64];
  u32 base_len;

  u32 rule_idx;

} pw_pre_t;

typedef struct pw_idx
{
  u32 off;
  u32 cnt;
  u32 len;

} pw_idx_t;

typedef struct bf
{
  u32  i;

} bf_t;

typedef struct bs_word
{
  u32  b[32];

} bs_word_t;

typedef struct cpt
{
  u32       cracked;
  time_t    timestamp;

} cpt_t;

typedef struct plain
{
  u64  gidvid;
  u32  il_pos;
  u32  salt_pos;
  u32  digest_pos;
  u32  hash_pos;

} plain_t;

#define LINK_SPEED_COUNT 10000

typedef struct link_speed
{
  hc_timer_t timer[LINK_SPEED_COUNT];
  ssize_t    bytes[LINK_SPEED_COUNT];
  int        pos;

} link_speed_t;

#include "ext_OpenCL.h"

typedef struct hc_device_param
{
  cl_device_id    device;
  cl_device_type  device_type;

  u32     device_id;
  u32     platform_devices_id;   // for mapping with hms devices

  bool    skipped;
  bool    unstable_warning;

  st_status_t st_status;

  u32     sm_major;
  u32     sm_minor;
  u32     kernel_exec_timeout;

  u8      pcie_bus;
  u8      pcie_device;
  u8      pcie_function;

  u32     device_processors;
  u64     device_maxmem_alloc;
  u64     device_global_mem;
  u64     device_available_mem;
  u32     device_maxclock_frequency;
  size_t  device_maxworkgroup_size;
  u64     device_local_mem_size;
  cl_device_local_mem_type device_local_mem_type;

  u32     vector_width;

  u32     kernel_wgs1;
  u32     kernel_wgs12;
  u32     kernel_wgs2;
  u32     kernel_wgs23;
  u32     kernel_wgs3;
  u32     kernel_wgs4;
  u32     kernel_wgs_init2;
  u32     kernel_wgs_loop2;
  u32     kernel_wgs_mp;
  u32     kernel_wgs_mp_l;
  u32     kernel_wgs_mp_r;
  u32     kernel_wgs_amp;
  u32     kernel_wgs_tm;
  u32     kernel_wgs_memset;
  u32     kernel_wgs_atinit;
  u32     kernel_wgs_decompress;
  u32     kernel_wgs_aux1;
  u32     kernel_wgs_aux2;
  u32     kernel_wgs_aux3;
  u32     kernel_wgs_aux4;

  u32     kernel_preferred_wgs_multiple1;
  u32     kernel_preferred_wgs_multiple12;
  u32     kernel_preferred_wgs_multiple2;
  u32     kernel_preferred_wgs_multiple23;
  u32     kernel_preferred_wgs_multiple3;
  u32     kernel_preferred_wgs_multiple4;
  u32     kernel_preferred_wgs_multiple_init2;
  u32     kernel_preferred_wgs_multiple_loop2;
  u32     kernel_preferred_wgs_multiple_mp;
  u32     kernel_preferred_wgs_multiple_mp_l;
  u32     kernel_preferred_wgs_multiple_mp_r;
  u32     kernel_preferred_wgs_multiple_amp;
  u32     kernel_preferred_wgs_multiple_tm;
  u32     kernel_preferred_wgs_multiple_memset;
  u32     kernel_preferred_wgs_multiple_atinit;
  u32     kernel_preferred_wgs_multiple_decompress;
  u32     kernel_preferred_wgs_multiple_aux1;
  u32     kernel_preferred_wgs_multiple_aux2;
  u32     kernel_preferred_wgs_multiple_aux3;
  u32     kernel_preferred_wgs_multiple_aux4;

  u64     kernel_local_mem_size1;
  u64     kernel_local_mem_size12;
  u64     kernel_local_mem_size2;
  u64     kernel_local_mem_size23;
  u64     kernel_local_mem_size3;
  u64     kernel_local_mem_size4;
  u64     kernel_local_mem_size_init2;
  u64     kernel_local_mem_size_loop2;
  u64     kernel_local_mem_size_mp;
  u64     kernel_local_mem_size_mp_l;
  u64     kernel_local_mem_size_mp_r;
  u64     kernel_local_mem_size_amp;
  u64     kernel_local_mem_size_tm;
  u64     kernel_local_mem_size_memset;
  u64     kernel_local_mem_size_atinit;
  u64     kernel_local_mem_size_decompress;
  u64     kernel_local_mem_size_aux1;
  u64     kernel_local_mem_size_aux2;
  u64     kernel_local_mem_size_aux3;
  u64     kernel_local_mem_size_aux4;

  u32     kernel_accel;
  u32     kernel_accel_prev;
  u32     kernel_accel_min;
  u32     kernel_accel_max;
  u32     kernel_loops;
  u32     kernel_loops_prev;
  u32     kernel_loops_min;
  u32     kernel_loops_max;
  u32     kernel_loops_min_sav; // the _sav are required because each -i iteration
  u32     kernel_loops_max_sav; // needs to recalculate the kernel_loops_min/max based on the current amplifier count
  u32     kernel_threads;
  u32     kernel_threads_min;
  u32     kernel_threads_max;

  u64     kernel_power;
  u64     hardware_power;

  u64  size_pws;
  u64  size_pws_amp;
  u64  size_pws_comp;
  u64  size_pws_idx;
  u64  size_pws_pre;
  u64  size_pws_base;
  u64  size_tmps;
  u64  size_hooks;
  u64  size_bfs;
  u64  size_combs;
  u64  size_rules;
  u64  size_rules_c;
  u64  size_root_css;
  u64  size_markov_css;
  u64  size_digests;
  u64  size_salts;
  u64  size_shown;
  u64  size_results;
  u64  size_plains;
  u64  size_st_digests;
  u64  size_st_salts;
  u64  size_st_esalts;

  #ifdef WITH_BRAIN
  u64  size_brain_link_in;
  u64  size_brain_link_out;

  int           brain_link_client_fd;
  link_speed_t  brain_link_recv_speed;
  link_speed_t  brain_link_send_speed;
  bool          brain_link_recv_active;
  bool          brain_link_send_active;
  u64           brain_link_recv_bytes;
  u64           brain_link_send_bytes;
  u8           *brain_link_in_buf;
  u32          *brain_link_out_buf;
  #endif

  char   *scratch_buf;

  FILE   *combs_fp;
  pw_t   *combs_buf;

  void   *hooks_buf;

  pw_idx_t *pws_idx;
  u32      *pws_comp;
  u64       pws_cnt;

  pw_pre_t *pws_pre_buf;  // for slow candidates
  u64       pws_pre_cnt;

  pw_pre_t *pws_base_buf; // for debug mode
  u64       pws_base_cnt;

  u64     words_off;
  u64     words_done;

  u64     outerloop_pos;
  u64     outerloop_left;
  double  outerloop_msec;
  double  outerloop_multi;

  u32     innerloop_pos;
  u32     innerloop_left;

  u32     exec_pos;
  double  exec_msec[EXEC_CACHE];

  // workaround cpu spinning

  double  exec_us_prev1[EXPECTED_ITERATIONS];
  double  exec_us_prev2[EXPECTED_ITERATIONS];
  double  exec_us_prev3[EXPECTED_ITERATIONS];
  double  exec_us_prev4[EXPECTED_ITERATIONS];
  double  exec_us_prev_init2[EXPECTED_ITERATIONS];
  double  exec_us_prev_loop2[EXPECTED_ITERATIONS];
  double  exec_us_prev_aux1[EXPECTED_ITERATIONS];
  double  exec_us_prev_aux2[EXPECTED_ITERATIONS];
  double  exec_us_prev_aux3[EXPECTED_ITERATIONS];
  double  exec_us_prev_aux4[EXPECTED_ITERATIONS];

  // this is "current" speed

  u32     speed_pos;
  u64     speed_cnt[SPEED_CACHE];
  double  speed_msec[SPEED_CACHE];
  bool    speed_only_finish;

  hc_timer_t timer_speed;

  // device specific attributes starting

  char   *device_name;
  char   *device_vendor;
  char   *device_version;
  char   *driver_version;
  char   *device_opencl_version;

  bool    is_rocm;

  double  spin_damp;

  cl_platform_id platform;

  cl_uint  device_vendor_id;
  cl_uint  platform_vendor_id;

  cl_kernel  kernel1;
  cl_kernel  kernel12;
  cl_kernel  kernel2;
  cl_kernel  kernel23;
  cl_kernel  kernel3;
  cl_kernel  kernel4;
  cl_kernel  kernel_init2;
  cl_kernel  kernel_loop2;
  cl_kernel  kernel_mp;
  cl_kernel  kernel_mp_l;
  cl_kernel  kernel_mp_r;
  cl_kernel  kernel_amp;
  cl_kernel  kernel_tm;
  cl_kernel  kernel_memset;
  cl_kernel  kernel_atinit;
  cl_kernel  kernel_decompress;
  cl_kernel  kernel_aux1;
  cl_kernel  kernel_aux2;
  cl_kernel  kernel_aux3;
  cl_kernel  kernel_aux4;

  cl_context context;

  cl_program program;
  cl_program program_mp;
  cl_program program_amp;

  cl_command_queue command_queue;

  cl_mem  d_pws_buf;
  cl_mem  d_pws_amp_buf;
  cl_mem  d_pws_comp_buf;
  cl_mem  d_pws_idx;
  cl_mem  d_words_buf_l;
  cl_mem  d_words_buf_r;
  cl_mem  d_rules;
  cl_mem  d_rules_c;
  cl_mem  d_combs;
  cl_mem  d_combs_c;
  cl_mem  d_bfs;
  cl_mem  d_bfs_c;
  cl_mem  d_tm_c;
  cl_mem  d_bitmap_s1_a;
  cl_mem  d_bitmap_s1_b;
  cl_mem  d_bitmap_s1_c;
  cl_mem  d_bitmap_s1_d;
  cl_mem  d_bitmap_s2_a;
  cl_mem  d_bitmap_s2_b;
  cl_mem  d_bitmap_s2_c;
  cl_mem  d_bitmap_s2_d;
  cl_mem  d_plain_bufs;
  cl_mem  d_digests_buf;
  cl_mem  d_digests_shown;
  cl_mem  d_salt_bufs;
  cl_mem  d_esalt_bufs;
  cl_mem  d_tmps;
  cl_mem  d_hooks;
  cl_mem  d_result;
  cl_mem  d_extra0_buf;
  cl_mem  d_extra1_buf;
  cl_mem  d_extra2_buf;
  cl_mem  d_extra3_buf;
  cl_mem  d_root_css_buf;
  cl_mem  d_markov_css_buf;
  cl_mem  d_st_digests_buf;
  cl_mem  d_st_salts_buf;
  cl_mem  d_st_esalts_buf;

  void   *kernel_params[PARAMCNT];
  void   *kernel_params_mp[PARAMCNT];
  void   *kernel_params_mp_r[PARAMCNT];
  void   *kernel_params_mp_l[PARAMCNT];
  void   *kernel_params_amp[PARAMCNT];
  void   *kernel_params_tm[PARAMCNT];
  void   *kernel_params_memset[PARAMCNT];
  void   *kernel_params_atinit[PARAMCNT];
  void   *kernel_params_decompress[PARAMCNT];

  u32     kernel_params_buf32[PARAMCNT];
  u64     kernel_params_buf64[PARAMCNT];

  u32     kernel_params_mp_buf32[PARAMCNT];
  u64     kernel_params_mp_buf64[PARAMCNT];

  u32     kernel_params_mp_r_buf32[PARAMCNT];
  u64     kernel_params_mp_r_buf64[PARAMCNT];

  u32     kernel_params_mp_l_buf32[PARAMCNT];
  u64     kernel_params_mp_l_buf64[PARAMCNT];

  u32     kernel_params_amp_buf32[PARAMCNT];
  u64     kernel_params_amp_buf64[PARAMCNT];

  u32     kernel_params_memset_buf32[PARAMCNT];
  u64     kernel_params_memset_buf64[PARAMCNT];

  u32     kernel_params_atinit_buf32[PARAMCNT];
  u64     kernel_params_atinit_buf64[PARAMCNT];

  u32     kernel_params_decompress_buf32[PARAMCNT];
  u64     kernel_params_decompress_buf64[PARAMCNT];

} hc_device_param_t;

typedef struct opencl_ctx
{
  bool                enabled;

  void               *ocl;

  cl_uint             platforms_cnt;
  cl_platform_id     *platforms;
  char              **platforms_vendor;
  char              **platforms_name;
  char              **platforms_version;
  bool               *platforms_skipped;

  cl_uint             platform_devices_cnt;
  cl_device_id       *platform_devices;

  u32                 devices_cnt;
  u32                 devices_active;

  hc_device_param_t  *devices_param;

  u32                 hardware_power_all;

  u64                 kernel_power_all;
  u64                 kernel_power_final; // we save that so that all divisions are done from the same base

  u64                 opencl_platforms_filter;
  u64                 devices_filter;
  cl_device_type      device_types_filter;

  double              target_msec;

  bool                need_adl;
  bool                need_nvml;
  bool                need_nvapi;
  bool                need_sysfs;

  int                 comptime;

  int                 force_jit_compilation;

} opencl_ctx_t;

#include "ext_ADL.h"
#include "ext_nvapi.h"
#include "ext_nvml.h"
#include "ext_sysfs.h"

typedef struct hm_attrs
{
  HM_ADAPTER_ADL     adl;
  HM_ADAPTER_NVML    nvml;
  HM_ADAPTER_NVAPI   nvapi;
  HM_ADAPTER_SYSFS   sysfs;

  int od_version;

  bool buslanes_get_supported;
  bool corespeed_get_supported;
  bool fanspeed_get_supported;
  bool fanpolicy_get_supported;
  bool memoryspeed_get_supported;
  bool temperature_get_supported;
  bool threshold_shutdown_get_supported;
  bool threshold_slowdown_get_supported;
  bool throttle_get_supported;
  bool utilization_get_supported;

} hm_attrs_t;

typedef struct hwmon_ctx
{
  bool  enabled;

  void *hm_adl;
  void *hm_nvml;
  void *hm_nvapi;
  void *hm_sysfs;

  hm_attrs_t *hm_device;

  ADLOD6MemClockState *od_clock_mem_status;

} hwmon_ctx_t;

#if defined (__APPLE__)
typedef struct cpu_set
{
  u32 count;

} cpu_set_t;
#endif

/* AES context.  */
typedef struct aes_context
{
  int bits;

  u32 rek[60];
  u32 rdk[60];

} aes_context_t;

typedef aes_context_t aes_ctx;

typedef struct debugfile_ctx
{
  bool enabled;

  FILE *fp;
  char *filename;
  u32   mode;

} debugfile_ctx_t;

typedef struct dictstat
{
  u64 cnt;

  struct stat stat;

  char encoding_from[64];
  char encoding_to[64];

} dictstat_t;

typedef struct hashdump
{
  int version;

  hashes_t hashes;

} hashdump_t;

typedef struct dictstat_ctx
{
  bool enabled;

  char *filename;

  dictstat_t *base;

  #if defined (_WIN)
  u32    cnt;
  #else
  size_t cnt;
  #endif

} dictstat_ctx_t;

typedef struct loopback_ctx
{
  bool enabled;
  bool unused;

  FILE *fp;
  char *filename;

} loopback_ctx_t;

typedef struct cs
{
  u32  cs_buf[0x100];
  u32  cs_len;

} cs_t;

typedef struct mf
{
  char mf_buf[0x100];
  int  mf_len;

} mf_t;

typedef struct hcstat_table
{
  u32  key;
  u64  val;

} hcstat_table_t;

typedef struct outfile_ctx
{
  char *filename;

  FILE *fp;

  u32   outfile_format;
  bool  outfile_autohex;

} outfile_ctx_t;

typedef struct pot
{
  char     plain_buf[HCBUFSIZ_TINY];
  int      plain_len;

  hash_t   hash;

} pot_t;

typedef struct potfile_ctx
{
  bool     enabled;

  FILE    *fp;
  char    *filename;

  u8      *out_buf; // allocates [HCBUFSIZ_LARGE];
  u8      *tmp_buf; // allocates [HCBUFSIZ_LARGE];

} potfile_ctx_t;

// this is a linked list structure of all the hashes with the same "key" (hash or hash + salt)

typedef struct pot_hash_node
{
  hash_t *hash_buf;

  struct pot_hash_node *next;

} pot_hash_node_t;

// Attention: this is only used when --show and --username are used together
// there could be multiple entries for each identical hash+salt combination
// (e.g. same hashes, but different user names... we want to print all of them!)
// that is why we use a linked list here

typedef struct pot_tree_entry
{
  pot_hash_node_t *nodes; // head of the linked list (under the field "hash_buf" it contains the sorting keys)

  // the hashconfig is required to distinguish between salted and non-salted hashes and to make sure
  // we compare the correct dgst_pos0...dgst_pos3

  hashconfig_t *hashconfig;

} pot_tree_entry_t;

typedef struct restore_data
{
  int  version;
  char cwd[256];

  u32  dicts_pos;
  u32  masks_pos;

  u64  words_cur;

  u32  argc;
  char **argv;

} restore_data_t;

typedef struct pidfile_data
{
  u32 pid;

} pidfile_data_t;

typedef struct restore_ctx
{
  bool    enabled;

  int     argc;
  char  **argv;

  char   *eff_restore_file;
  char   *new_restore_file;

  restore_data_t *rd;

} restore_ctx_t;

typedef struct pidfile_ctx
{
  u32   pid;
  char *filename;

  pidfile_data_t *pd;

  bool  pidfile_written;

} pidfile_ctx_t;

typedef struct kernel_rule
{
  u32  cmds[32];

} kernel_rule_t;

typedef struct out
{
  FILE *fp;

  char  buf[HCBUFSIZ_TINY];
  int   len;

} out_t;

typedef struct tuning_db_alias
{
  char *device_name;
  char *alias_name;

} tuning_db_alias_t;

typedef struct tuning_db_entry
{
  const char *device_name;
  int         attack_mode;
  int         hash_type;
  int         workload_profile;
  int         vector_width;
  int         kernel_accel;
  int         kernel_loops;

} tuning_db_entry_t;

typedef struct tuning_db
{
  bool enabled;

  tuning_db_alias_t *alias_buf;
  int                alias_cnt;

  tuning_db_entry_t *entry_buf;
  int                entry_cnt;

} tuning_db_t;

typedef struct wl_data
{
  bool enabled;

  char *buf;
  u64  incr;
  u64  avail;
  u64  cnt;
  u64  pos;

  bool    iconv_enabled;
  iconv_t iconv_ctx;
  char   *iconv_tmp;

  void (*func) (char *, u64, u64 *, u64 *);

} wl_data_t;

typedef struct user_options
{
  const char  *hc_bin;

  int          hc_argc;
  char       **hc_argv;

  bool         attack_mode_chgd;
  #ifdef WITH_BRAIN
  bool         brain_host_chgd;
  bool         brain_port_chgd;
  bool         brain_password_chgd;
  #endif
  bool         hash_mode_chgd;
  bool         hccapx_message_pair_chgd;
  bool         increment_max_chgd;
  bool         increment_min_chgd;
  bool         kernel_accel_chgd;
  bool         kernel_loops_chgd;
  bool         kernel_threads_chgd;
  bool         nonce_error_corrections_chgd;
  bool         spin_damp_chgd;
  bool         opencl_vector_width_chgd;
  bool         outfile_format_chgd;
  bool         remove_timer_chgd;
  bool         rp_gen_seed_chgd;
  bool         runtime_chgd;
  bool         segment_size_chgd;
  bool         workload_profile_chgd;
  bool         skip_chgd;
  bool         limit_chgd;

  bool         advice_disable;
  bool         benchmark;
  bool         benchmark_all;
  #ifdef WITH_BRAIN
  bool         brain_client;
  bool         brain_server;
  #endif
  bool         example_hashes;
  bool         force;
  bool         hwmon_disable;
  bool         hex_charset;
  bool         hex_salt;
  bool         hex_wordlist;
  bool         increment;
  bool         keep_guessing;
  bool         keyspace;
  bool         left;
  bool         logfile_disable;
  bool         loopback;
  bool         machine_readable;
  bool         markov_classic;
  bool         markov_disable;
  bool         opencl_info;
  bool         optimized_kernel_enable;
  bool         outfile_autohex;
  bool         potfile_disable;
  bool         progress_only;
  bool         quiet;
  bool         remove;
  bool         restore;
  bool         restore_disable;
  bool         self_test_disable;
  bool         show;
  bool         slow_candidates;
  bool         speed_only;
  bool         status;
  bool         stdout_flag;
  bool         stdin_timeout_abort_chgd;
  bool         usage;
  bool         username;
  bool         version;
  bool         wordlist_autohex_disable;
  #ifdef WITH_BRAIN
  char        *brain_host;
  char        *brain_password;
  char        *brain_session_whitelist;
  #endif
  char        *cpu_affinity;
  char        *custom_charset_4;
  char        *debug_file;
  char        *induction_dir;
  char        *keyboard_layout_mapping;
  char        *markov_hcstat2;
  char        *opencl_devices;
  char        *opencl_device_types;
  char        *opencl_platforms;
  char        *outfile;
  char        *outfile_check_dir;
  char        *potfile_path;
  char        *restore_file_path;
  char       **rp_files;
  char         separator;
  char        *truecrypt_keyfiles;
  char        *veracrypt_keyfiles;
  const char  *custom_charset_1;
  const char  *custom_charset_2;
  const char  *custom_charset_3;
  const char  *encoding_from;
  const char  *encoding_to;
  const char  *rule_buf_l;
  const char  *rule_buf_r;
  const char  *session;
  u32          attack_mode;
  u32          bitmap_max;
  u32          bitmap_min;
  #ifdef WITH_BRAIN
  u32          brain_client_features;
  u32          brain_port;
  u32          brain_session;
  u32          brain_attack;
  #endif
  u32          debug_mode;
  u32          hwmon_temp_abort;
  u32          hash_mode;
  u32          hccapx_message_pair;
  u32          increment_max;
  u32          increment_min;
  u32          kernel_accel;
  u32          kernel_loops;
  u32          kernel_threads;
  u32          markov_threshold;
  u32          nonce_error_corrections;
  u32          spin_damp;
  u32          opencl_vector_width;
  u32          outfile_check_timer;
  u32          outfile_format;
  u32          remove_timer;
  u32          restore_timer;
  u32          rp_files_cnt;
  u32          rp_gen;
  u32          rp_gen_func_max;
  u32          rp_gen_func_min;
  u32          rp_gen_seed;
  u32          runtime;
  u32          scrypt_tmto;
  u32          segment_size;
  u32          status_timer;
  u32          stdin_timeout_abort;
  u32          veracrypt_pim;
  u32          workload_profile;
  u64          limit;
  u64          skip;

} user_options_t;

typedef struct user_options_extra
{
  u32 attack_kern;

  u32 rule_len_r;
  u32 rule_len_l;

  u32 wordlist_mode;

  char  *hc_hash;   // can be filename or string

  int    hc_workc;  // can be 0 in bf-mode = default mask
  char **hc_workv;

} user_options_extra_t;

typedef struct bitmap_ctx
{
  bool enabled;

  u32   bitmap_bits;
  u32   bitmap_nums;
  u32   bitmap_size;
  u32   bitmap_mask;
  u32   bitmap_shift1;
  u32   bitmap_shift2;

  u32  *bitmap_s1_a;
  u32  *bitmap_s1_b;
  u32  *bitmap_s1_c;
  u32  *bitmap_s1_d;
  u32  *bitmap_s2_a;
  u32  *bitmap_s2_b;
  u32  *bitmap_s2_c;
  u32  *bitmap_s2_d;

} bitmap_ctx_t;

typedef struct folder_config
{
  char *cwd;
  char *install_dir;
  char *profile_dir;
  char *session_dir;
  char *shared_dir;
  char *cpath_real;

} folder_config_t;

typedef struct induct_ctx
{
  bool enabled;

  char *root_directory;

  char **induction_dictionaries;
  int    induction_dictionaries_cnt;
  int    induction_dictionaries_pos;

} induct_ctx_t;

typedef struct outcheck_ctx
{
  bool enabled;

  char *root_directory;

} outcheck_ctx_t;

typedef struct straight_ctx
{
  bool enabled;

  u32             kernel_rules_cnt;
  kernel_rule_t  *kernel_rules_buf;

  char **dicts;
  u32    dicts_pos;
  u32    dicts_cnt;
  u32    dicts_avail;

  char *dict;

} straight_ctx_t;

typedef struct combinator_ctx
{
  bool enabled;

  char *dict1;
  char *dict2;

  u32 combs_mode;
  u64 combs_cnt;

} combinator_ctx_t;

typedef struct mask_ctx
{
  bool   enabled;

  cs_t   mp_sys[8];
  cs_t   mp_usr[4];

  u64    bfs_cnt;

  cs_t  *css_buf;
  u32    css_cnt;

  hcstat_table_t *root_table_buf;
  hcstat_table_t *markov_table_buf;

  cs_t  *root_css_buf;
  cs_t  *markov_css_buf;

  bool   mask_from_file;

  char **masks;
  u32    masks_pos;
  u32    masks_cnt;
  u32    masks_avail;

  char *mask;

  mf_t  *mfs;

} mask_ctx_t;

typedef struct cpt_ctx
{
  bool enabled;

  cpt_t     *cpt_buf;
  int        cpt_pos;
  time_t     cpt_start;
  u64        cpt_total;

} cpt_ctx_t;

typedef struct device_info
{
  bool    skipped_dev;
  double  hashes_msec_dev;
  double  hashes_msec_dev_benchmark;
  double  exec_msec_dev;
  char   *speed_sec_dev;
  char   *guess_candidates_dev;
  char   *hwmon_dev;
  int     corespeed_dev;
  int     memoryspeed_dev;
  double  runtime_msec_dev;
  u64     progress_dev;
  int     kernel_accel_dev;
  int     kernel_loops_dev;
  int     kernel_threads_dev;
  int     vector_width_dev;
  int     salt_pos_dev;
  int     innerloop_pos_dev;
  int     innerloop_left_dev;
  int     iteration_pos_dev;
  int     iteration_left_dev;
  #ifdef WITH_BRAIN
  int     brain_link_client_id_dev;
  int     brain_link_status_dev;
  char   *brain_link_recv_bytes_dev;
  char   *brain_link_send_bytes_dev;
  char   *brain_link_recv_bytes_sec_dev;
  char   *brain_link_send_bytes_sec_dev;
  double  brain_link_time_recv_dev;
  double  brain_link_time_send_dev;
  #endif

} device_info_t;

typedef struct hashcat_status
{
  const char *hash_target;
  const char *hash_type;
  int         guess_mode;
  char       *guess_base;
  int         guess_base_offset;
  int         guess_base_count;
  double      guess_base_percent;
  char       *guess_mod;
  int         guess_mod_offset;
  int         guess_mod_count;
  double      guess_mod_percent;
  char       *guess_charset;
  int         guess_mask_length;
  char       *session;
  #ifdef WITH_BRAIN
  int         brain_session;
  int         brain_attack;
  #endif
  const char *status_string;
  int         status_number;
  char       *time_estimated_absolute;
  char       *time_estimated_relative;
  char       *time_started_absolute;
  char       *time_started_relative;
  double      msec_paused;
  double      msec_running;
  double      msec_real;
  int         digests_cnt;
  int         digests_done;
  double      digests_percent;
  int         salts_cnt;
  int         salts_done;
  double      salts_percent;
  int         progress_mode;
  double      progress_finished_percent;
  u64         progress_cur;
  u64         progress_cur_relative_skip;
  u64         progress_done;
  u64         progress_end;
  u64         progress_end_relative_skip;
  u64         progress_ignore;
  u64         progress_rejected;
  double      progress_rejected_percent;
  u64         progress_restored;
  u64         progress_skip;
  u64         restore_point;
  u64         restore_total;
  double      restore_percent;
  int         cpt_cur_min;
  int         cpt_cur_hour;
  int         cpt_cur_day;
  double      cpt_avg_min;
  double      cpt_avg_hour;
  double      cpt_avg_day;
  char       *cpt;

  device_info_t device_info_buf[DEVICES_MAX];
  int           device_info_cnt;
  int           device_info_active;

  double  hashes_msec_all;
  double  exec_msec_all;
  char   *speed_sec_all;

} hashcat_status_t;

typedef struct status_ctx
{
  /**
   * main status
   */

  bool accessible;

  u32  devices_status;

  /**
   * full (final) status snapshot
   */

  hashcat_status_t *hashcat_status_final;

  /**
   * thread control
   */

  bool run_main_level1;
  bool run_main_level2;
  bool run_main_level3;
  bool run_thread_level1;
  bool run_thread_level2;

  bool shutdown_inner;
  bool shutdown_outer;

  bool checkpoint_shutdown;

  hc_thread_mutex_t mux_dispatcher;
  hc_thread_mutex_t mux_counter;
  hc_thread_mutex_t mux_hwmon;
  hc_thread_mutex_t mux_display;

  /**
   * workload
   */

  u64  words_off;               // used by dispatcher; get_work () as offset; attention: needs to be redone on in restore case!
  u64  words_cur;               // used by dispatcher; the different to words_cur_next is that this counter guarantees that the work from zero to this counter has been actually computed
                                // has been finished actually, can be used for restore point therefore
  u64  words_base;              // the unamplified max keyspace
  u64  words_cnt;               // the amplified max keyspace

  /**
   * progress
   */

  u64 *words_progress_done;     // progress number of words done     per salt
  u64 *words_progress_rejected; // progress number of words rejected per salt
  u64 *words_progress_restored; // progress number of words restored per salt

  /**
   * timer
   */

  time_t runtime_start;
  time_t runtime_stop;

  hc_timer_t timer_running;     // timer on current dict
  hc_timer_t timer_paused;      // timer on current dict

  double  msec_paused;          // timer on current dict

  /**
   * read timeouts
   */

  u32  stdin_read_timeout_cnt;

} status_ctx_t;

typedef struct hashcat_user
{
  // use this for context specific data
  // see main.c as how this example is used

  int          outer_threads_cnt;
  hc_thread_t *outer_threads;

} hashcat_user_t;

typedef struct cache_hit
{
  const char *dictfile;

  struct stat stat;

  u64 cached_cnt;
  u64 keyspace;

} cache_hit_t;

typedef struct cache_generate
{
  const char *dictfile;

  double percent;

  u64 comp;
  u64 cnt;
  u64 cnt2;

  time_t runtime;

} cache_generate_t;

typedef struct hashlist_parse
{
  u64 hashes_cnt;
  u64 hashes_avail;

} hashlist_parse_t;

#define MAX_OLD_EVENTS 10

typedef struct event_ctx
{
  char   old_buf[MAX_OLD_EVENTS][HCBUFSIZ_TINY];
  size_t old_len[MAX_OLD_EVENTS];
  int    old_cnt;

  char   msg_buf[HCBUFSIZ_TINY];
  size_t msg_len;
  bool   msg_newline;

  size_t prev_len;

  hc_thread_mutex_t mux_event;

} event_ctx_t;

typedef struct module_ctx
{
  void       *module_handle;
  u32         module_version_current;

  void        (*module_init)                    (struct module_ctx *);

  u32         (*module_attack_exec)             (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  void       *(*module_benchmark_esalt)         (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  void       *(*module_benchmark_hook_salt)     (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  const char *(*module_benchmark_mask)          (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  salt_t     *(*module_benchmark_salt)          (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_dictstat_disable)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_dgst_pos0)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_dgst_pos1)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_dgst_pos2)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_dgst_pos3)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_dgst_size)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_esalt_size)              (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_forced_outfile_format)   (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  const char *(*module_hash_name)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_hash_mode)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_hash_type)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_hlfmt_disable)           (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_hook_salt_size)          (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_hook_size)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_accel_min)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_accel_max)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_loops_min)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_loops_max)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_threads_min)      (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_kernel_threads_max)      (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_kern_type)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_opti_type)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_opts_type)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_outfile_check_disable)   (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_outfile_check_nocomp)    (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_potfile_disable)         (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_potfile_keep_all_hashes) (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_pwdump_column)           (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_pw_min)                  (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_pw_max)                  (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_salt_min)                (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_salt_max)                (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u32         (*module_salt_type)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  char        (*module_separator)               (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  const char *(*module_st_hash)                 (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  const char *(*module_st_pass)                 (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  u64         (*module_tmp_size)                (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_unstable_warning)        (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);
  bool        (*module_warmup_disable)          (const hashconfig_t *, const user_options_t *, const user_options_extra_t *);

  int         (*module_hash_decode_outfile)     (const hashconfig_t *,       void *,       salt_t *,       void *, const char *, const int);
  int         (*module_hash_decode_zero_hash)   (const hashconfig_t *,       void *,       salt_t *,       void *);
  int         (*module_hash_decode)             (const hashconfig_t *,       void *,       salt_t *,       void *, const char *, const int);
  int         (*module_hash_encode)             (const hashconfig_t *, const void *, const salt_t *, const void *,       char *,       int);

  u64         (*module_extra_buffer_size)       (const hashconfig_t *, const user_options_t *, const user_options_extra_t *, const hashes_t *, const hc_device_param_t *);
  char       *(*module_jit_build_options)       (const hashconfig_t *, const user_options_t *, const user_options_extra_t *, const hashes_t *, const hc_device_param_t *);

  u32         (*module_deep_comp_kernel)        (const hashes_t *, const u32, const u32);

  void        (*module_hook12)                  (hc_device_param_t *, const void *, const u32, const u64);
  void        (*module_hook23)                  (hc_device_param_t *, const void *, const u32, const u64);

  int         (*module_build_plain_postprocess) (const u32 *, const size_t, const int, u32 *, const size_t);

} module_ctx_t;

typedef struct hashcat_ctx
{
  bitmap_ctx_t          *bitmap_ctx;
  combinator_ctx_t      *combinator_ctx;
  cpt_ctx_t             *cpt_ctx;
  debugfile_ctx_t       *debugfile_ctx;
  dictstat_ctx_t        *dictstat_ctx;
  event_ctx_t           *event_ctx;
  folder_config_t       *folder_config;
  hashcat_user_t        *hashcat_user;
  hashconfig_t          *hashconfig;
  hashes_t              *hashes;
  hwmon_ctx_t           *hwmon_ctx;
  induct_ctx_t          *induct_ctx;
  logfile_ctx_t         *logfile_ctx;
  loopback_ctx_t        *loopback_ctx;
  mask_ctx_t            *mask_ctx;
  module_ctx_t          *module_ctx;
  opencl_ctx_t          *opencl_ctx;
  outcheck_ctx_t        *outcheck_ctx;
  outfile_ctx_t         *outfile_ctx;
  pidfile_ctx_t         *pidfile_ctx;
  potfile_ctx_t         *potfile_ctx;
  restore_ctx_t         *restore_ctx;
  status_ctx_t          *status_ctx;
  straight_ctx_t        *straight_ctx;
  tuning_db_t           *tuning_db;
  user_options_extra_t  *user_options_extra;
  user_options_t        *user_options;
  wl_data_t             *wl_data;

  void (*event) (const u32, struct hashcat_ctx *, const void *, const size_t);

} hashcat_ctx_t;

typedef struct thread_param
{
  u32 tid;

  hashcat_ctx_t *hashcat_ctx;

} thread_param_t;

#define MAX_TOKENS     128
#define MAX_SIGNATURES 16

typedef struct token
{
  int token_cnt;

  int signatures_cnt;
  const char *signatures_buf[MAX_SIGNATURES];

  int sep[MAX_TOKENS];

  const u8 *buf[MAX_TOKENS];
  int len[MAX_TOKENS];

  int len_min[MAX_TOKENS];
  int len_max[MAX_TOKENS];

  int attr[MAX_TOKENS];

  const u8 *opt_buf;
  int opt_len;

} token_t;

#endif // _TYPES_H

/**
 * migrate stuff
 */

typedef enum hash_type
{
  HASH_TYPE_MD4                 = 1,
  HASH_TYPE_MD5                 = 2,
  HASH_TYPE_MD5H                = 3,
  HASH_TYPE_SHA1                = 4,
  HASH_TYPE_SHA224              = 5,
  HASH_TYPE_SHA256              = 6,
  HASH_TYPE_SHA384              = 7,
  HASH_TYPE_SHA512              = 8,
  HASH_TYPE_DCC2                = 9,
  HASH_TYPE_WPA_EAPOL           = 10,
  HASH_TYPE_LM                  = 11,
  HASH_TYPE_DESCRYPT            = 12,
  HASH_TYPE_ORACLEH             = 13,
  HASH_TYPE_DESRACF             = 14,
  HASH_TYPE_BCRYPT              = 15,
  HASH_TYPE_NETNTLM             = 17,
  HASH_TYPE_RIPEMD160           = 18,
  HASH_TYPE_WHIRLPOOL           = 19,
  HASH_TYPE_AES                 = 20,
  HASH_TYPE_GOST                = 21,
  HASH_TYPE_KRB5PA              = 22,
  HASH_TYPE_SAPB                = 23,
  HASH_TYPE_SAPG                = 24,
  HASH_TYPE_MYSQL               = 25,
  HASH_TYPE_LOTUS5              = 26,
  HASH_TYPE_LOTUS6              = 27,
  HASH_TYPE_ANDROIDFDE          = 28,
  HASH_TYPE_SCRYPT              = 29,
  HASH_TYPE_LOTUS8              = 30,
  HASH_TYPE_OFFICE2007          = 31,
  HASH_TYPE_OFFICE2010          = 32,
  HASH_TYPE_OFFICE2013          = 33,
  HASH_TYPE_OLDOFFICE01         = 34,
  HASH_TYPE_OLDOFFICE34         = 35,
  HASH_TYPE_SIPHASH             = 36,
  HASH_TYPE_PDFU16              = 37,
  HASH_TYPE_PDFU32              = 38,
  HASH_TYPE_PBKDF2_SHA256       = 39,
  HASH_TYPE_BITCOIN_WALLET      = 40,
  HASH_TYPE_CRC32               = 41,
  HASH_TYPE_STREEBOG_256        = 42,
  HASH_TYPE_STREEBOG_512        = 43,
  HASH_TYPE_PBKDF2_MD5          = 44,
  HASH_TYPE_PBKDF2_SHA1         = 45,
  HASH_TYPE_PBKDF2_SHA512       = 46,
  HASH_TYPE_ECRYPTFS            = 47,
  HASH_TYPE_ORACLET             = 48,
  HASH_TYPE_BSDICRYPT           = 49,
  HASH_TYPE_RAR3HP              = 50,
  HASH_TYPE_KRB5TGS             = 51,
  HASH_TYPE_STDOUT              = 52,
  HASH_TYPE_DES                 = 53,
  HASH_TYPE_PLAINTEXT           = 54,
  HASH_TYPE_LUKS                = 55,
  HASH_TYPE_ITUNES_BACKUP_9     = 56,
  HASH_TYPE_ITUNES_BACKUP_10    = 57,
  HASH_TYPE_SKIP32              = 58,
  HASH_TYPE_BLAKE2B             = 59,
  HASH_TYPE_CHACHA20            = 60,
  HASH_TYPE_DPAPIMK             = 61,
  HASH_TYPE_JKS_SHA1            = 62,
  HASH_TYPE_TACACS_PLUS         = 63,
  HASH_TYPE_APPLE_SECURE_NOTES  = 64,
  HASH_TYPE_CRAM_MD5_DOVECOT    = 65,
  HASH_TYPE_JWT                 = 66,
  HASH_TYPE_ELECTRUM_WALLET     = 67,
  HASH_TYPE_WPA_PMKID_PBKDF2    = 68,
  HASH_TYPE_WPA_PMKID_PMK       = 69,
  HASH_TYPE_ANSIBLE_VAULT       = 70,
  HASH_TYPE_KRB5ASREP           = 71,
  HASH_TYPE_ODF12               = 72,
  HASH_TYPE_ODF11               = 73,

} hash_type_t;
