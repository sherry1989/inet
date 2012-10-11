# 1 "openbsd3/crypto/ecb3_enc.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/crypto/ecb3_enc.c"
# 50 "openbsd3/crypto/ecb3_enc.c"
# 1 "openbsd3/crypto/des_locl.h" 1
# 53 "openbsd3/crypto/des_locl.h"
# 1 "openbsd3/sys/cdefs.h" 1
# 41 "openbsd3/sys/cdefs.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cdefs.h" 1
# 42 "openbsd3/sys/cdefs.h" 2
# 54 "openbsd3/crypto/des_locl.h" 2
# 1 "openbsd3/sys/types.h" 1
# 44 "openbsd3/sys/types.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 1
# 41 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h"
#include "num_stacks.h"
typedef struct label_t {
 int val[6];
} label_t;


typedef unsigned long vaddr_t;
typedef unsigned long paddr_t;
typedef unsigned long vsize_t;
typedef unsigned long psize_t;






typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
typedef unsigned int uint32_t;

typedef long long int64_t;

typedef unsigned long long u_int64_t;

typedef unsigned long long uint64_t;

typedef int32_t register_t;
# 45 "openbsd3/sys/types.h" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/ansi.h" 1
# 47 "openbsd3/sys/types.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 1
# 68 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h"
# 1 "openbsd3/sys/endian.h" 1
# 152 "openbsd3/sys/endian.h"

u_int64_t htobe64(u_int64_t);
u_int32_t htobe32(u_int32_t);
u_int16_t htobe16(u_int16_t);
u_int64_t betoh64(u_int64_t);
u_int32_t betoh32(u_int32_t);
u_int16_t betoh16(u_int16_t);

u_int64_t htole64(u_int64_t);
u_int32_t htole32(u_int32_t);
u_int16_t htole16(u_int16_t);
u_int64_t letoh64(u_int64_t);
u_int32_t letoh32(u_int32_t);
u_int16_t letoh16(u_int16_t);

# 69 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 2
# 48 "openbsd3/sys/types.h" 2


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t id_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef int32_t pid_t;
typedef u_quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
typedef u_int32_t useconds_t;
typedef int32_t suseconds_t;
# 90 "openbsd3/sys/types.h"
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int8_t sa_family_t;
typedef u_int32_t socklen_t;


typedef unsigned long clock_t;




typedef unsigned int size_t;




typedef int ssize_t;




typedef int time_t;




typedef int clockid_t;




typedef int timer_t;




typedef long long off_t;
# 166 "openbsd3/sys/types.h"
typedef int32_t fd_mask;






typedef struct fd_set {
 fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 194 "openbsd3/sys/types.h"
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
# 55 "openbsd3/crypto/des_locl.h" 2
# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/queue.h" 1
# 44 "openbsd3/sys/systm.h" 2
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_1_T; extern  _GLOBAL_1_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_2_T; extern  _GLOBAL_2_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_0_A[NUM_STACKS];   
typedef  const char   _GLOBAL_3_T; extern  _GLOBAL_3_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_1_A[NUM_STACKS];   
typedef  const char   _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_2_A[NUM_STACKS];   
typedef  const char   _GLOBAL_5_T; extern  _GLOBAL_5_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_3_A[NUM_STACKS];   
typedef  const char   _GLOBAL_6_T; extern  _GLOBAL_6_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_4_A[NUM_STACKS];   
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_17_T; extern  _GLOBAL_17_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_19_T; extern  _GLOBAL_19_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_5_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_23_T  )  ( int  ) ; extern  _GLOBAL_23_T global_v_putc[NUM_STACKS];   

extern void _insque(void *, void *);
extern void _remque(void *);
# 137 "openbsd3/sys/systm.h"
int nullop(void *);
int enodev(void);
int enosys(void);
int enoioctl(void);
int enxio(void);
int eopnotsupp(void *);

int lkmenodev(void);

struct vnodeopv_desc;
void vfs_opv_init(void);
void vfs_opv_init_explicit(struct vnodeopv_desc *);
void vfs_opv_init_default(struct vnodeopv_desc *);
void vfs_op_init(void);

int seltrue(dev_t dev, int which, struct proc *);
void *hashinit(int, int, int, u_long *);
int sys_nosys(struct proc *, void *, register_t *);

void panic(const char *, ...)
    __attribute__((__noreturn__,__format__(__printf__,1,2))) ;
void __assert(const char *, const char *, int, const char *)
    __attribute__((__noreturn__)) ;
int printf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void uprintf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
int vprintf(const char *, va_list);
int vsprintf(char *, const char *, va_list);
int sprintf(char *buf, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int vsnprintf(char *, size_t, const char *, va_list);
int snprintf(char *buf, size_t, const char *, ...)
    __attribute__((__format__(__printf__,3,4))) ;
struct tty;
void ttyprintf(struct tty *, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;

void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_splassert_ctl[NUM_STACKS];   

void tablefull(const char *);

int kcopy(const void *, void *, size_t);

void bcopy(const void *, void *, size_t);
void ovbcopy(const void *, void *, size_t);
void bzero(void *, size_t);
int bcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);

int copystr(const void *, void *, size_t, size_t *);
int copyinstr(const void *, void *, size_t, size_t *);
int copyoutstr(const void *, void *, size_t, size_t *);
int copyin(const void *, void *, size_t);
int copyout(const void *, void *, size_t);

struct timeval;
int hzto(struct timeval *);
int tvtohz(struct timeval *);
void realitexpire(void *);

struct clockframe;
void hardclock(struct clockframe *);
void softclock(void);
void statclock(struct clockframe *);

void initclocks(void);
void inittodr(time_t);
void resettodr(void);
void cpu_initclocks(void);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void setstatclockrate(int);

void wdog_register(void *, int (*)(void *, int));
# 225 "openbsd3/sys/systm.h"
struct hook_desc {
 struct { struct hook_desc *tqe_next; struct hook_desc **tqe_prev; } hd_list;
 void (*hd_fn)(void *);
 void *hd_arg;
};
struct hook_desc_head { struct hook_desc *tqh_first; struct hook_desc **tqh_last; };

typedef  struct hook_desc_head   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_25_T  global_startuphook_list[NUM_STACKS];     

void *hook_establish(struct hook_desc_head *, int, void (*)(void *), void *);
void hook_disestablish(struct hook_desc_head *, void *);
void dohooks(struct hook_desc_head *, int);
# 256 "openbsd3/sys/systm.h"
void *powerhook_establish(void (*)(int, void *), void *);
void powerhook_disestablish(void *);
void dopowerhooks(int);




struct uio;
int uiomove(void *, int, struct uio *);

int setjmp(label_t *);
void longjmp(label_t *);

void consinit(void);

void cpu_startup(void);
void cpu_configure(void);
typedef  void   ( *_GLOBAL_27_T  )  ( void  ) ; extern  _GLOBAL_27_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_29_T  )  ( void  ) ; extern  _GLOBAL_29_T global_mountroot[NUM_STACKS];   

# 1 "openbsd3/lib/libkern/libkern.h" 1
# 46 "openbsd3/lib/libkern/libkern.h"
static __inline int imax(int, int);
static __inline int imin(int, int);
static __inline u_int max(u_int, u_int);
static __inline u_int min(u_int, u_int);
static __inline long lmax(long, long);
static __inline long lmin(long, long);
static __inline u_long ulmax(u_long, u_long);
static __inline u_long ulmin(u_long, u_long);
static __inline int abs(int);


static __inline int
imax(a, b)
 int a, b;
{
 return (a > b ? a : b);
}
static __inline int
imin(a, b)
 int a, b;
{
 return (a < b ? a : b);
}
static __inline long
lmax(a, b)
 long a, b;
{
 return (a > b ? a : b);
}
static __inline long
lmin(a, b)
 long a, b;
{
 return (a < b ? a : b);
}
static __inline u_int
max(a, b)
 u_int a, b;
{
 return (a > b ? a : b);
}
static __inline u_int
min(a, b)
 u_int a, b;
{
 return (a < b ? a : b);
}
static __inline u_long
ulmax(a, b)
 u_long a, b;
{
 return (a > b ? a : b);
}
static __inline u_long
ulmin(a, b)
 u_long a, b;
{
 return (a < b ? a : b);
}

static __inline int
abs(j)
 int j;
{
 return(j < 0 ? -j : j);
}
# 151 "openbsd3/lib/libkern/libkern.h"
void __assert(const char *, const char *, int, const char *)
     __attribute__ ((__noreturn__)) ;
int bcmp(const void *, const void *, size_t);
int ffs(int);
int locc(int, char *, u_int);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
u_long random(void);
void srandom(u_long);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, size_t, u_char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int strncasecmp(const char *, const char *, size_t);
int getsn(char *, int);

typedef  u_int8_t const   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_6_A[NUM_STACKS];extern  _GLOBAL_30_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_7_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 56 "openbsd3/crypto/des_locl.h" 2

# 1 "openbsd3/crypto/des.h" 1
# 58 "openbsd3/crypto/des.h"
typedef unsigned char des_cblock[8];
typedef struct des_ks_struct
 {
 union {
  des_cblock _;


  int32_t pad[2];
  } ks;


 } des_key_schedule[16];
# 110 "openbsd3/crypto/des.h"
typedef struct des_key_schedule bit_64;



typedef  int  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_des_check_key[NUM_STACKS];   
typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_des_rw_mode[NUM_STACKS];   
# 125 "openbsd3/crypto/des.h"
void des_ecb3_encrypt(des_cblock *input,des_cblock *output,
 des_key_schedule ks1,des_key_schedule ks2,
 des_key_schedule ks3, int enc);
u_int32_t des_cbc_cksum(des_cblock *input,des_cblock *output,
 long length,des_key_schedule schedule,des_cblock *ivec);
void des_cbc_encrypt(des_cblock *input,des_cblock *output,long length,
 des_key_schedule schedule,des_cblock *ivec,int enc);
void des_ncbc_encrypt(des_cblock *input,des_cblock *output,long length,
 des_key_schedule schedule,des_cblock *ivec,int enc);
void des_3cbc_encrypt(des_cblock *input,des_cblock *output,long length,
 des_key_schedule sk1,des_key_schedule sk2,
 des_cblock *ivec1,des_cblock *ivec2,int enc);
void des_cfb_encrypt(unsigned char *in,unsigned char *out,int numbits,
 long length,des_key_schedule schedule,des_cblock *ivec,int enc);
void des_ecb_encrypt(des_cblock *input,des_cblock *output,
 des_key_schedule ks,int enc);
void des_encrypt(u_int32_t *data,des_key_schedule ks, int enc);
void des_encrypt2(u_int32_t *data,des_key_schedule ks, int enc);
void des_ede3_cbc_encrypt(des_cblock *input, des_cblock *output,
 long length, des_key_schedule ks1, des_key_schedule ks2,
 des_key_schedule ks3, des_cblock *ivec, int enc);
void des_ede3_cfb64_encrypt(unsigned char *in, unsigned char *out,
 long length, des_key_schedule ks1, des_key_schedule ks2,
 des_key_schedule ks3, des_cblock *ivec, int *num, int encrypt);
void des_ede3_ofb64_encrypt(unsigned char *in, unsigned char *out,
 long length, des_key_schedule ks1, des_key_schedule ks2,
 des_key_schedule ks3, des_cblock *ivec, int *num);

int des_enc_read(int fd,char *buf,int len,des_key_schedule sched,
 des_cblock *iv);
int des_enc_write(int fd,char *buf,int len,des_key_schedule sched,
 des_cblock *iv);






char *crypt(const char *buf,const char *salt);




void des_ofb_encrypt(unsigned char *in,unsigned char *out,
 int numbits,long length,des_key_schedule schedule,des_cblock *ivec);
void des_pcbc_encrypt(des_cblock *input,des_cblock *output,long length,
 des_key_schedule schedule,des_cblock *ivec,int enc);
u_int32_t des_quad_cksum(des_cblock *input,des_cblock *output,
 long length,int out_count,des_cblock *seed);
void des_random_seed(des_cblock key);
void des_random_key(des_cblock ret);
int des_read_password(des_cblock *key,char *prompt,int verify);
int des_read_2passwords(des_cblock *key1,des_cblock *key2,
 char *prompt,int verify);
int des_read_pw_string(char *buf,int length,char *prompt,int verify);
void des_set_odd_parity(des_cblock *key);
int des_is_weak_key(des_cblock *key);
int des_set_key(des_cblock *key,des_key_schedule schedule);
int des_key_sched(des_cblock *key,des_key_schedule schedule);
void des_string_to_key(char *str,des_cblock *key);
void des_string_to_2keys(char *str,des_cblock *key1,des_cblock *key2);
void des_cfb64_encrypt(unsigned char *in, unsigned char *out, long length,
 des_key_schedule schedule, des_cblock *ivec, int *num, int enc);
void des_ofb64_encrypt(unsigned char *in, unsigned char *out, long length,
 des_key_schedule schedule, des_cblock *ivec, int *num);







int des_new_random_key(des_cblock *key);
void des_init_random_number_generator(des_cblock *key);
void des_set_random_generator_seed(des_cblock *key);
void des_set_sequence_number(des_cblock new_sequence_number);
void des_generate_random_block(des_cblock *block);
# 58 "openbsd3/crypto/des_locl.h" 2
# 51 "openbsd3/crypto/ecb3_enc.c" 2

void des_ecb3_encrypt(input, output, ks1, ks2, ks3, encrypt)
des_cblock (*input);
des_cblock (*output);
des_key_schedule ks1;
des_key_schedule ks2;
des_key_schedule ks3;
int encrypt;
 {
 register u_int32_t l0,l1;
 register unsigned char *in,*out;
 u_int32_t ll[2];

 in=(unsigned char *)input;
 out=(unsigned char *)output;
 (l0 =((u_int32_t)(*((in)++))) , l0|=((u_int32_t)(*((in)++)))<< 8L, l0|=((u_int32_t)(*((in)++)))<<16L, l0|=((u_int32_t)(*((in)++)))<<24L);
 (l1 =((u_int32_t)(*((in)++))) , l1|=((u_int32_t)(*((in)++)))<< 8L, l1|=((u_int32_t)(*((in)++)))<<16L, l1|=((u_int32_t)(*((in)++)))<<24L);
 { register u_int32_t tt; ((tt)=((((l1)>>(4))^(l0))&(0x0f0f0f0fL)), (l0)^=(tt), (l1)^=((tt)<<(4))); ((tt)=((((l0)>>(16))^(l1))&(0x0000ffffL)), (l1)^=(tt), (l0)^=((tt)<<(16))); ((tt)=((((l1)>>(2))^(l0))&(0x33333333L)), (l0)^=(tt), (l1)^=((tt)<<(2))); ((tt)=((((l0)>>(8))^(l1))&(0x00ff00ffL)), (l1)^=(tt), (l0)^=((tt)<<(8))); ((tt)=((((l1)>>(1))^(l0))&(0x55555555L)), (l0)^=(tt), (l1)^=((tt)<<(1))); };
 ll[0]=l0;
 ll[1]=l1;
 des_encrypt2(ll,ks1,encrypt);
 des_encrypt2(ll,ks2,!encrypt);
 des_encrypt2(ll,ks3,encrypt);
 l0=ll[0];
 l1=ll[1];
 { register u_int32_t tt; ((tt)=((((l1)>>(1))^(l0))&(0x55555555L)), (l0)^=(tt), (l1)^=((tt)<<(1))); ((tt)=((((l0)>>(8))^(l1))&(0x00ff00ffL)), (l1)^=(tt), (l0)^=((tt)<<(8))); ((tt)=((((l1)>>(2))^(l0))&(0x33333333L)), (l0)^=(tt), (l1)^=((tt)<<(2))); ((tt)=((((l0)>>(16))^(l1))&(0x0000ffffL)), (l1)^=(tt), (l0)^=((tt)<<(16))); ((tt)=((((l1)>>(4))^(l0))&(0x0f0f0f0fL)), (l0)^=(tt), (l1)^=((tt)<<(4))); };
 (*((out)++)=(unsigned char)(((l0) )&0xff), *((out)++)=(unsigned char)(((l0)>> 8L)&0xff), *((out)++)=(unsigned char)(((l0)>>16L)&0xff), *((out)++)=(unsigned char)(((l0)>>24L)&0xff));
 (*((out)++)=(unsigned char)(((l1) )&0xff), *((out)++)=(unsigned char)(((l1)>> 8L)&0xff), *((out)++)=(unsigned char)(((l1)>>16L)&0xff), *((out)++)=(unsigned char)(((l1)>>24L)&0xff));
 }

