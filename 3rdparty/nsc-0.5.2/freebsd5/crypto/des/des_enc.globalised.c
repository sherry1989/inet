# 1 "freebsd5/crypto/des/des_enc.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/crypto/des/des_enc.c"
# 62 "freebsd5/crypto/des/des_enc.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 63 "freebsd5/crypto/des/des_enc.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/crypto/des/des_enc.c,v 1.2 2004/06/14 00:38:54 obrien Exp $" "\"");

# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;







typedef int  __attribute__((__mode__(__DI__))) __int64_t;
typedef unsigned int  __attribute__((__mode__(__DI__))) __uint64_t;
# 70 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
typedef unsigned long __clock_t;
typedef unsigned int __cpumask_t;
typedef __int32_t __critical_t;
typedef double __double_t;
typedef double __float_t;
typedef __int32_t __intfptr_t;
typedef __int64_t __intmax_t;
typedef __int32_t __intptr_t;
typedef __int32_t __int_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __int8_t __int_least8_t;
typedef __int16_t __int_least16_t;
typedef __int32_t __int_least32_t;
typedef __int64_t __int_least64_t;
typedef __int32_t __ptrdiff_t;
typedef __int32_t __register_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __size_t;
typedef __int32_t __ssize_t;
typedef __int32_t __time_t;
typedef __uint32_t __uintfptr_t;
typedef __uint64_t __uintmax_t;
typedef __uint32_t __uintptr_t;
typedef __uint32_t __uint_fast8_t;
typedef __uint32_t __uint_fast16_t;
typedef __uint32_t __uint_fast32_t;
typedef __uint64_t __uint_fast64_t;
typedef __uint8_t __uint_least8_t;
typedef __uint16_t __uint_least16_t;
typedef __uint32_t __uint_least32_t;
typedef __uint64_t __uint_least64_t;
typedef __uint32_t __u_register_t;
typedef __uint32_t __vm_offset_t;
typedef __int64_t __vm_ooffset_t;



typedef __uint32_t __vm_paddr_t;

typedef __uint64_t __vm_pindex_t;
typedef __uint32_t __vm_size_t;





typedef __builtin_va_list __va_list;





typedef __va_list __gnuc_va_list;
# 34 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 2




typedef __int32_t __clockid_t;
typedef __uint32_t __fflags_t;
typedef __uint64_t __fsblkcnt_t;
typedef __uint64_t __fsfilcnt_t;
typedef __uint32_t __gid_t;
typedef __int64_t __id_t;
typedef __uint32_t __ino_t;
typedef long __key_t;
typedef __int32_t __lwpid_t;
typedef __uint16_t __mode_t;
typedef int __nl_item;
typedef __uint16_t __nlink_t;
typedef __int64_t __off_t;
typedef __int32_t __pid_t;
typedef __int64_t __rlim_t;
typedef __uint8_t __sa_family_t;
typedef __uint32_t __socklen_t;
typedef long __suseconds_t;
typedef __int32_t __timer_t;
typedef __uint32_t __uid_t;
typedef unsigned int __useconds_t;
# 78 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
typedef int __ct_rune_t;
typedef __ct_rune_t __rune_t;
typedef __ct_rune_t __wchar_t;
typedef __ct_rune_t __wint_t;

typedef __uint32_t __dev_t;

typedef __uint32_t __fixpt_t;





typedef union {
 char __mbstate8[128];
 __int64_t _mbstateL;
} __mbstate_t;
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 2
# 152 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
static __inline __uint64_t
__bswap64(__uint64_t _x)
{

 return ((_x >> 56) | ((_x >> 40) & 0xff00) | ((_x >> 24) & 0xff0000) |
     ((_x >> 8) & 0xff000000) | ((_x << 8) & ((__uint64_t)0xff << 32)) |
     ((_x << 24) & ((__uint64_t)0xff << 40)) |
     ((_x << 40) & ((__uint64_t)0xff << 48)) | ((_x << 56)));
}

static __inline __uint32_t
__bswap32(__uint32_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff000000) >> 24) | (((_x) & 0x00ff0000) >> 8) | (((_x) & 0x0000ff00) << 8) | (((_x) & 0x000000ff) << 24)) : __extension__ ({ register __uint32_t __X = (_x); __asm ("bswap %0" : "+r" (__X)); __X; })));
}

static __inline __uint16_t
__bswap16(__uint16_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff00) >> 8) | (((_x) & 0x00ff) << 8)) : __extension__ ({ register __uint16_t __X = (_x); __asm ("xchgb %h0, %b0" : "+q" (__X)); __X; })));
}
# 45 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
# 62 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __int8_t int8_t;




typedef __int16_t int16_t;




typedef __int32_t int32_t;




typedef __int64_t int64_t;




typedef __uint8_t uint8_t;




typedef __uint16_t uint16_t;




typedef __uint32_t uint32_t;




typedef __uint64_t uint64_t;




typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

typedef __uint64_t u_quad_t;
typedef __int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef const char * c_caddr_t;
typedef volatile char *v_caddr_t;


typedef __clock_t clock_t;




typedef __clockid_t clockid_t;



typedef __critical_t critical_t;
typedef __int64_t daddr_t;


typedef __dev_t dev_t;




typedef __fflags_t fflags_t;



typedef __fixpt_t fixpt_t;


typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __gid_t gid_t;




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;




typedef __id_t id_t;




typedef __ino_t ino_t;




typedef __key_t key_t;




typedef __lwpid_t lwpid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __off_t off_t;




typedef __pid_t pid_t;



typedef __register_t register_t;


typedef __rlim_t rlim_t;



typedef __segsz_t segsz_t;


typedef __size_t size_t;




typedef __ssize_t ssize_t;




typedef __suseconds_t suseconds_t;




typedef __time_t time_t;




typedef __timer_t timer_t;



typedef __u_register_t u_register_t;


typedef __uid_t uid_t;




typedef __useconds_t useconds_t;



typedef __vm_offset_t vm_offset_t;
typedef __vm_ooffset_t vm_ooffset_t;
typedef __vm_paddr_t vm_paddr_t;
typedef __vm_pindex_t vm_pindex_t;
typedef __vm_size_t vm_size_t;


typedef int boolean_t;
typedef __cpumask_t cpumask_t;
typedef __intfptr_t intfptr_t;
# 271 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __uint32_t intrmask_t;

typedef __uintfptr_t uintfptr_t;
typedef __uint64_t uoff_t;
typedef struct vm_page *vm_page_t;
# 287 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/select.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/select.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h" 1
# 51 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h"
typedef struct __sigset {
 __uint32_t __bits[4];
} __sigset_t;
# 39 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h"
struct timeval {
 long tv_sec;
 suseconds_t tv_usec;
};
# 40 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/timespec.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/timespec.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 41 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2

typedef unsigned long __fd_mask;

typedef __fd_mask fd_mask;




typedef __sigset_t sigset_t;
# 71 "freebsd5/freebsd/usr/src/sys/sys/select.h"
typedef struct fd_set {
 __fd_mask __fds_bits[(((1024U) + (((sizeof(__fd_mask) * 8)) - 1)) / ((sizeof(__fd_mask) * 8)))];
} fd_set;
# 288 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2
# 66 "freebsd5/crypto/des/des_enc.c" 2
# 1 "freebsd5/crypto/des/des_locl.h" 1
# 54 "freebsd5/crypto/des/des_locl.h"
# 1 "freebsd5/crypto/des/des.h" 1
# 61 "freebsd5/crypto/des/des.h"
typedef unsigned char des_cblock[8];
typedef struct des_ks_struct
 {
 union {
 des_cblock cblock;


 u_int32_t deslong[2];
 } ks;
 int weak_key;
} des_key_schedule[16];
# 82 "freebsd5/crypto/des/des.h"
typedef  int  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_des_check_key[NUM_STACKS];   

char *des_options(void);
void des_ecb_encrypt(des_cblock *, des_cblock *, des_key_schedule, int);

void des_encrypt1(u_int32_t *, des_key_schedule, int);
void des_encrypt2(u_int32_t *, des_key_schedule, int);
void des_encrypt3(u_int32_t *, des_key_schedule, des_key_schedule,
        des_key_schedule);
void des_decrypt3(u_int32_t *, des_key_schedule, des_key_schedule,
        des_key_schedule);

void des_ecb3_encrypt(des_cblock *, des_cblock *, des_key_schedule,
     des_key_schedule, des_key_schedule, int);

void des_ncbc_encrypt(const unsigned char *, unsigned char *, long,
     des_key_schedule, des_cblock *, int);

void des_ede3_cbc_encrypt(const unsigned char *, unsigned char *, long,
     des_key_schedule, des_key_schedule,
     des_key_schedule, des_cblock *, int);

void des_set_odd_parity(des_cblock *);
void des_fixup_key_parity(des_cblock *);
int des_is_weak_key(des_cblock *);
int des_set_key(des_cblock *, des_key_schedule);
int des_key_sched(des_cblock *, des_key_schedule);
int des_set_key_checked(des_cblock *, des_key_schedule);
void des_set_key_unchecked(des_cblock *, des_key_schedule);
int des_check_key_parity(des_cblock *);
# 55 "freebsd5/crypto/des/des_locl.h" 2
# 67 "freebsd5/crypto/des/des_enc.c" 2

typedef  const u_int32_t   _GLOBAL_1_T; extern  _GLOBAL_1_T  _GLOBAL_0_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_1_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_2_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_3_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_4_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_5_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_6_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_7_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_8_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_9_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_10_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_11_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_12_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_13_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_14_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_15_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_16_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_17_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_18_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_19_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_20_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_21_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_22_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_23_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_24_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_25_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_26_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_27_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_28_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_29_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_30_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_31_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_32_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_33_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_34_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_35_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_36_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_37_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_38_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_39_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_40_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_41_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_42_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_43_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_44_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_45_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_46_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_47_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_48_des_SPtrans_I [ 8 ]  [ 64 ] ; extern  _GLOBAL_1_T  _GLOBAL_49_des_SPtrans_I [ 8 ]  [ 64 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_des_SPtrans_I) *_GLOBAL_des_SPtrans_0_A[NUM_STACKS] = { &_GLOBAL_0_des_SPtrans_I, &_GLOBAL_1_des_SPtrans_I, &_GLOBAL_2_des_SPtrans_I, &_GLOBAL_3_des_SPtrans_I, &_GLOBAL_4_des_SPtrans_I, &_GLOBAL_5_des_SPtrans_I, &_GLOBAL_6_des_SPtrans_I, &_GLOBAL_7_des_SPtrans_I, &_GLOBAL_8_des_SPtrans_I, &_GLOBAL_9_des_SPtrans_I, &_GLOBAL_10_des_SPtrans_I, &_GLOBAL_11_des_SPtrans_I, &_GLOBAL_12_des_SPtrans_I, &_GLOBAL_13_des_SPtrans_I, &_GLOBAL_14_des_SPtrans_I, &_GLOBAL_15_des_SPtrans_I, &_GLOBAL_16_des_SPtrans_I, &_GLOBAL_17_des_SPtrans_I, &_GLOBAL_18_des_SPtrans_I, &_GLOBAL_19_des_SPtrans_I, &_GLOBAL_20_des_SPtrans_I, &_GLOBAL_21_des_SPtrans_I, &_GLOBAL_22_des_SPtrans_I, &_GLOBAL_23_des_SPtrans_I, &_GLOBAL_24_des_SPtrans_I, &_GLOBAL_25_des_SPtrans_I, &_GLOBAL_26_des_SPtrans_I, &_GLOBAL_27_des_SPtrans_I, &_GLOBAL_28_des_SPtrans_I, &_GLOBAL_29_des_SPtrans_I, &_GLOBAL_30_des_SPtrans_I, &_GLOBAL_31_des_SPtrans_I, &_GLOBAL_32_des_SPtrans_I, &_GLOBAL_33_des_SPtrans_I, &_GLOBAL_34_des_SPtrans_I, &_GLOBAL_35_des_SPtrans_I, &_GLOBAL_36_des_SPtrans_I, &_GLOBAL_37_des_SPtrans_I, &_GLOBAL_38_des_SPtrans_I, &_GLOBAL_39_des_SPtrans_I, &_GLOBAL_40_des_SPtrans_I, &_GLOBAL_41_des_SPtrans_I, &_GLOBAL_42_des_SPtrans_I, &_GLOBAL_43_des_SPtrans_I, &_GLOBAL_44_des_SPtrans_I, &_GLOBAL_45_des_SPtrans_I, &_GLOBAL_46_des_SPtrans_I, &_GLOBAL_47_des_SPtrans_I, &_GLOBAL_48_des_SPtrans_I, &_GLOBAL_49_des_SPtrans_I, };   

void des_encrypt1(u_int32_t *data, des_key_schedule ks, int enc)
{
 register u_int32_t l,r,t,u;




 register int i;

 register u_int32_t *s;

 r=data[0];
 l=data[1];

 { register u_int32_t tt; ((tt)=((((l)>>(4))^(r))&(0x0f0f0f0fL)), (r)^=(tt), (l)^=((tt)<<(4))); ((tt)=((((r)>>(16))^(l))&(0x0000ffffL)), (l)^=(tt), (r)^=((tt)<<(16))); ((tt)=((((l)>>(2))^(r))&(0x33333333L)), (r)^=(tt), (l)^=((tt)<<(2))); ((tt)=((((r)>>(8))^(l))&(0x00ff00ffL)), (l)^=(tt), (r)^=((tt)<<(8))); ((tt)=((((l)>>(1))^(r))&(0x55555555L)), (r)^=(tt), (l)^=((tt)<<(1))); };
# 93 "freebsd5/crypto/des/des_enc.c"
 r=(((r)>>(29))+((r)<<(32-(29))))&0xffffffffL;
 l=(((l)>>(29))+((l)<<(32-(29))))&0xffffffffL;

 s=ks->ks.deslong;


 if (enc)
  {
# 119 "freebsd5/crypto/des/des_enc.c"
  for (i=0; i<32; i+=8)
   {
   { u=r^s[i+0 ]; t=r^s[i+0 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i+2 ]; t=l^s[i+2 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=r^s[i+4 ]; t=r^s[i+4 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i+6 ]; t=l^s[i+6 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   }

  }
 else
  {
# 148 "freebsd5/crypto/des/des_enc.c"
  for (i=30; i>0; i-=8)
   {
   { u=r^s[i-0 ]; t=r^s[i-0 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i-2 ]; t=l^s[i-2 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=r^s[i-4 ]; t=r^s[i-4 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i-6 ]; t=l^s[i-6 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   }

  }


 l=(((l)>>(3))+((l)<<(32-(3))))&0xffffffffL;
 r=(((r)>>(3))+((r)<<(32-(3))))&0xffffffffL;

 { register u_int32_t tt; ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); };
 data[0]=l;
 data[1]=r;
 l=r=t=u=0;
}

void des_encrypt2(u_int32_t *data, des_key_schedule ks, int enc)
{
 register u_int32_t l,r,t,u;




 register int i;

 register u_int32_t *s;

 r=data[0];
 l=data[1];
# 189 "freebsd5/crypto/des/des_enc.c"
 r=(((r)>>(29))+((r)<<(32-(29))))&0xffffffffL;
 l=(((l)>>(29))+((l)<<(32-(29))))&0xffffffffL;

 s=ks->ks.deslong;


 if (enc)
  {
# 215 "freebsd5/crypto/des/des_enc.c"
  for (i=0; i<32; i+=8)
   {
   { u=r^s[i+0 ]; t=r^s[i+0 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i+2 ]; t=l^s[i+2 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=r^s[i+4 ]; t=r^s[i+4 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i+6 ]; t=l^s[i+6 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   }

  }
 else
  {
# 244 "freebsd5/crypto/des/des_enc.c"
  for (i=30; i>0; i-=8)
   {
   { u=r^s[i-0 ]; t=r^s[i-0 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i-2 ]; t=l^s[i-2 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=r^s[i-4 ]; t=r^s[i-4 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); l^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   { u=l^s[i-6 ]; t=l^s[i-6 +1]; t=(((t)>>(4))+((t)<<(32-(4)))); r^= (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[0][(u>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[2][(u>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[4][(u>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[6][(u>>26L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[1][(t>> 2L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[3][(t>>10L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[5][(t>>18L)&0x3f]^ (*_GLOBAL_des_SPtrans_0_A[get_stack_id()])[7][(t>>26L)&0x3f]; };
   }

  }

 data[0]=(((l)>>(3))+((l)<<(32-(3))))&0xffffffffL;
 data[1]=(((r)>>(3))+((r)<<(32-(3))))&0xffffffffL;
 l=r=t=u=0;
}

void des_encrypt3(u_int32_t *data, des_key_schedule ks1, des_key_schedule ks2,
      des_key_schedule ks3)
{
 register u_int32_t l,r;

 l=data[0];
 r=data[1];
 { register u_int32_t tt; ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); };
 data[0]=l;
 data[1]=r;
 des_encrypt2((u_int32_t *)data,ks1,1);
 des_encrypt2((u_int32_t *)data,ks2,0);
 des_encrypt2((u_int32_t *)data,ks3,1);
 l=data[0];
 r=data[1];
 { register u_int32_t tt; ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); };
 data[0]=l;
 data[1]=r;
}

void des_decrypt3(u_int32_t *data, des_key_schedule ks1, des_key_schedule ks2,
      des_key_schedule ks3)
{
 register u_int32_t l,r;

 l=data[0];
 r=data[1];
 { register u_int32_t tt; ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); };
 data[0]=l;
 data[1]=r;
 des_encrypt2((u_int32_t *)data,ks3,0);
 des_encrypt2((u_int32_t *)data,ks2,1);
 des_encrypt2((u_int32_t *)data,ks1,0);
 l=data[0];
 r=data[1];
 { register u_int32_t tt; ((tt)=((((r)>>(1))^(l))&(0x55555555L)), (l)^=(tt), (r)^=((tt)<<(1))); ((tt)=((((l)>>(8))^(r))&(0x00ff00ffL)), (r)^=(tt), (l)^=((tt)<<(8))); ((tt)=((((r)>>(2))^(l))&(0x33333333L)), (l)^=(tt), (r)^=((tt)<<(2))); ((tt)=((((l)>>(16))^(r))&(0x0000ffffL)), (r)^=(tt), (l)^=((tt)<<(16))); ((tt)=((((r)>>(4))^(l))&(0x0f0f0f0fL)), (l)^=(tt), (r)^=((tt)<<(4))); };
 data[0]=l;
 data[1]=r;
}

