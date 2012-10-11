# 1 "freebsd5/crypto/blowfish/bf_enc.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/crypto/blowfish/bf_enc.c"
# 61 "freebsd5/crypto/blowfish/bf_enc.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 62 "freebsd5/crypto/blowfish/bf_enc.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/crypto/blowfish/bf_enc.c,v 1.6 2003/06/10 21:38:38 obrien Exp $" "\"");

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
# 65 "freebsd5/crypto/blowfish/bf_enc.c" 2
# 1 "freebsd5/crypto/blowfish/blowfish.h" 1
# 78 "freebsd5/crypto/blowfish/blowfish.h"
typedef struct bf_key_st {
 u_int32_t P[16 +2];
 u_int32_t S[4*256];
} BF_KEY;

void BF_set_key(BF_KEY *, int, unsigned char *);
void BF_encrypt(u_int32_t *, BF_KEY *);
void BF_decrypt(u_int32_t *, BF_KEY *);
void BF_ecb_encrypt(const unsigned char *, unsigned char *,
      BF_KEY *, int);
# 66 "freebsd5/crypto/blowfish/bf_enc.c" 2
# 1 "freebsd5/crypto/blowfish/bf_locl.h" 1
# 67 "freebsd5/crypto/blowfish/bf_enc.c" 2
# 79 "freebsd5/crypto/blowfish/bf_enc.c"
void
BF_encrypt(data, key)
 u_int32_t *data;
 BF_KEY *key;
{
 register u_int32_t l, r, *p, *s;

 p = key->P;
 s= &key->S[0];
 l = data[0];
 r = data[1];

 l^=p[0];
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 1]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 2]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 3]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 4]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 5]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 6]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 7]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 8]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 9]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[10]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[11]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[12]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[13]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[14]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[15]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[16]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };






 r ^= p[16 + 1];

 data[1] = l & 0xffffffff;
 data[0] = r & 0xffffffff;
}


void
BF_decrypt(data, key)
 u_int32_t *data;
 BF_KEY *key;
{
 register u_int32_t l, r, *p, *s;

 p = key->P;
 s= &key->S[0];
 l = data[0];
 r = data[1];

 l ^= p[16 + 1];






 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[16]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[15]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[14]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[13]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[12]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[11]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[10]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 9]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 8]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 7]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 6]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 5]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 4]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 3]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 { u_int32_t t,u,v; u=l>>22L; v=l>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=l>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=l<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); r^=p[ 2]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); r^=t; };
 { u_int32_t t,u,v; u=r>>22L; v=r>>14L; u&=0x3fc; v&=0x3fc; t= *(u_int32_t *)((unsigned char *)&(s[ 0])+u); u=r>>6L; t+= *(u_int32_t *)((unsigned char *)&(s[256])+v); v=r<<2L; u&=0x3fc; v&=0x3fc; t^= *(u_int32_t *)((unsigned char *)&(s[512])+u); l^=p[ 1]; t+= *(u_int32_t *)((unsigned char *)&(s[768])+v); l^=t; };
 r ^= p[0];

 data[1] = l & 0xffffffff;
 data[0] = r & 0xffffffff;
}

