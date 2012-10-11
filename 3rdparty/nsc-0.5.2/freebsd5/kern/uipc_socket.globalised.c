# 1 "freebsd5/kern/uipc_socket.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/uipc_socket.c"
# 34 "freebsd5/kern/uipc_socket.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 35 "freebsd5/kern/uipc_socket.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/uipc_socket.c,v 1.208.2.6 2004/11/16 08:15:07 glebius Exp $" "\"");

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 38 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 39 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_zero.h" 1
# 40 "freebsd5/kern/uipc_socket.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
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
# 62 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslimits.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 91 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/errno.h" 1
# 92 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/time.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 53 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *bt, uint64_t x)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += x;
 if (u > bt->frac)
  bt->sec++;
}

static __inline void
bintime_add(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += bt2->frac;
 if (u > bt->frac)
  bt->sec++;
 bt->sec += bt2->sec;
}

static __inline void
bintime_sub(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac -= bt2->frac;
 if (u < bt->frac)
  bt->sec--;
 bt->sec -= bt2->sec;
}
# 107 "freebsd5/freebsd/usr/src/sys/sys/time.h"
static __inline void
bintime2timespec(const struct bintime *bt, struct timespec *ts)
{

 ts->tv_sec = bt->sec;
 ts->tv_nsec = ((uint64_t)1000000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *ts, struct bintime *bt)
{

 bt->sec = ts->tv_sec;

 bt->frac = ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *bt, struct timeval *tv)
{

 tv->tv_sec = bt->sec;
 tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *tv, struct bintime *bt)
{

 bt->sec = tv->tv_sec;

 bt->frac = tv->tv_usec * (uint64_t)18446744073709LL;
}
# 219 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int spare;
 int stathz;
 int profhz;
};
# 250 "freebsd5/freebsd/usr/src/sys/sys/time.h"
typedef  time_t  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_time_second[NUM_STACKS];   
typedef  time_t  _GLOBAL_1_T; extern  _GLOBAL_1_T  global_time_uptime[NUM_STACKS];   
typedef  struct timeval   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_boottime[NUM_STACKS];    
# 276 "freebsd5/freebsd/usr/src/sys/sys/time.h"
void binuptime(struct bintime *bt);
void nanouptime(struct timespec *tsp);
void microuptime(struct timeval *tvp);

void bintime(struct bintime *bt);
void nanotime(struct timespec *tsp);
void microtime(struct timeval *tvp);

void getbinuptime(struct bintime *bt);
void getnanouptime(struct timespec *tsp);
void getmicrouptime(struct timeval *tvp);

void getbintime(struct bintime *bt);
void getnanotime(struct timespec *tsp);
void getmicrotime(struct timeval *tvp);


int itimerdecr(struct itimerval *itp, int usec);
int itimerfix(struct timeval *tv);
int ppsratecheck(struct timeval *, int *, int);
int ratecheck(struct timeval *, const struct timeval *);
void timevaladd(struct timeval *t1, const struct timeval *t2);
void timevalsub(struct timeval *t1, const struct timeval *t2);
int tvtohz(struct timeval *tv);
# 93 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/priority.h" 1
# 123 "freebsd5/freebsd/usr/src/sys/sys/priority.h"
struct priority {
 u_char pri_class;
 u_char pri_level;
 u_char pri_native;
 u_char pri_user;
};
# 94 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 105 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 106 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 261 "freebsd5/freebsd/usr/src/sys/sys/param.h"

__uint32_t htonl(__uint32_t);
__uint16_t htons(__uint16_t);
__uint32_t ntohl(__uint32_t);
__uint16_t ntohs(__uint16_t);

# 42 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h" 1
# 149 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_int(volatile u_int *dst, u_int exp, u_int src)
{
 int res = exp;

 __asm volatile (
 "	" "" "	"
 "	cmpxchgl %1,%2 ;	"
 "       setz	%%al ;		"
 "	movzbl	%%al,%0 ;	"
 "1:				"
 "# atomic_cmpset_int"
 : "+a" (res)
 : "r" (src),
   "m" (*(dst))
 : "memory");

 return (res);
}
# 241 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_char(volatile u_char *p, u_char v){ __asm volatile("" "orb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_clear_char(volatile u_char *p, u_char v){ __asm volatile("" "andb %b1,%0" : "+m" (*p) : "iq" (~v)); } struct __hack;
static __inline void atomic_add_char(volatile u_char *p, u_char v){ __asm volatile("" "addb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_subtract_char(volatile u_char *p, u_char v){ __asm volatile("" "subb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;

static __inline void atomic_set_short(volatile u_short *p, u_short v){ __asm volatile("" "orw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_short(volatile u_short *p, u_short v){ __asm volatile("" "andw %w1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_short(volatile u_short *p, u_short v){ __asm volatile("" "addw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_short(volatile u_short *p, u_short v){ __asm volatile("" "subw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_int(volatile u_int *p, u_int v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_int(volatile u_int *p, u_int v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_int(volatile u_int *p, u_int v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_int(volatile u_int *p, u_int v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_long(volatile u_long *p, u_long v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_long(volatile u_long *p, u_long v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_long(volatile u_long *p, u_long v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_long(volatile u_long *p, u_long v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline u_char atomic_load_acq_char(volatile u_char *p) { return (*p); } static __inline void atomic_store_rel_char(volatile u_char *p, u_char v){ *p = v; } struct __hack;
static __inline u_short atomic_load_acq_short(volatile u_short *p) { return (*p); } static __inline void atomic_store_rel_short(volatile u_short *p, u_short v){ *p = v; } struct __hack;
static __inline u_int atomic_load_acq_int(volatile u_int *p) { return (*p); } static __inline void atomic_store_rel_int(volatile u_int *p, u_int v){ *p = v; } struct __hack;
static __inline u_long atomic_load_acq_long(volatile u_long *p) { return (*p); } static __inline void atomic_store_rel_long(volatile u_long *p, u_long v){ *p = v; } struct __hack;
# 363 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_ptr(volatile void *dst, void *exp, void *src)
{

 return (atomic_cmpset_int((volatile u_int *)dst, (u_int)exp,
     (u_int)src));
}

static __inline void *
atomic_load_acq_ptr(volatile void *p)
{




 return ((void *)(intptr_t)atomic_load_acq_int((volatile u_int *)p));
}

static __inline void
atomic_store_rel_ptr(volatile void *p, void *v)
{
 atomic_store_rel_int((volatile u_int *)p, (u_int)v);
}
# 406 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v); } static __inline void atomic_set_acq_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);} static __inline void atomic_set_rel_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);}
static __inline void atomic_clear_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v); } static __inline void atomic_clear_acq_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);} static __inline void atomic_clear_rel_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);}
static __inline void atomic_add_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v); } static __inline void atomic_add_acq_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);} static __inline void atomic_add_rel_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);}
static __inline void atomic_subtract_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v); } static __inline void atomic_subtract_acq_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);} static __inline void atomic_subtract_rel_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);}





static __inline u_int
atomic_readandclear_int(volatile u_int *addr)
{
 u_int result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}

static __inline u_long
atomic_readandclear_long(volatile u_long *addr)
{
 u_long result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h" 1
# 41 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
struct region_descriptor;
# 53 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}

static __inline u_int
bsfl(u_int mask)
{
 u_int result;

 __asm volatile("bsfl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline u_int
bsrl(u_int mask)
{
 u_int result;

 __asm volatile("bsrl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline void
disable_intr(void)
{
 __asm volatile("cli" : : : "memory");
}

static __inline void
do_cpuid(u_int ax, u_int *p)
{
 __asm volatile("cpuid"
    : "=a" (p[0]), "=b" (p[1]), "=c" (p[2]), "=d" (p[3])
    : "0" (ax));
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}





static __inline int
ffs(int mask)
{






  return (mask == 0 ? mask : (int)bsfl((u_int)mask) + 1);
}



static __inline int
fls(int mask)
{
 return (mask == 0 ? mask : (int)bsrl((u_int)mask) + 1);
}



static __inline void
halt(void)
{
 __asm volatile("hlt");
}
# 166 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline u_char
inbc(u_int port)
{
 u_char data;

 __asm volatile("inb %1,%0" : "=a" (data) : "id" ((u_short)(port)));
 return (data);
}

static __inline void
outbc(u_int port, u_char data)
{
 __asm volatile("outb %0,%1" : : "a" (data), "id" ((u_short)(port)));
}



static __inline u_char
inbv(u_int port)
{
 u_char data;





 __asm volatile("inb %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline u_int
inl(u_int port)
{
 u_int data;

 __asm volatile("inl %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
insb(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insb"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insw(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insw"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insl(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insl"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
invd(void)
{
 __asm volatile("invd");
}

static __inline u_short
inw(u_int port)
{
 u_short data;

 __asm volatile("inw %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
outbv(u_int port, u_char data)
{
 u_char al;






 al = data;
 __asm volatile("outb %0,%%dx" : : "a" (al), "d" (port));
}

static __inline void
outl(u_int port, u_int data)
{





 __asm volatile("outl %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
outsb(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsb"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsw(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsw"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsl(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsl"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outw(u_int port, u_short data)
{
 __asm volatile("outw %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
ia32_pause(void)
{
 __asm volatile("pause");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline u_int64_t
rdmsr(u_int msr)
{
 u_int64_t rv;

 __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
 return (rv);
}

static __inline u_int64_t
rdpmc(u_int pmc)
{
 u_int64_t rv;

 __asm volatile("rdpmc" : "=A" (rv) : "c" (pmc));
 return (rv);
}

static __inline u_int64_t
rdtsc(void)
{
 u_int64_t rv;

 __asm volatile("rdtsc" : "=A" (rv));
 return (rv);
}

static __inline void
wbinvd(void)
{
 __asm volatile("wbinvd");
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
 __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline void
load_cr0(u_int data)
{

 __asm volatile("movl %0,%%cr0" : : "r" (data));
}

static __inline u_int
rcr0(void)
{
 u_int data;

 __asm volatile("movl %%cr0,%0" : "=r" (data));
 return (data);
}

static __inline u_int
rcr2(void)
{
 u_int data;

 __asm volatile("movl %%cr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr3(u_int data)
{

 __asm volatile("movl %0,%%cr3" : : "r" (data) : "memory");
}

static __inline u_int
rcr3(void)
{
 u_int data;

 __asm volatile("movl %%cr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr4(u_int data)
{
 __asm volatile("movl %0,%%cr4" : : "r" (data));
}

static __inline u_int
rcr4(void)
{
 u_int data;

 __asm volatile("movl %%cr4,%0" : "=r" (data));
 return (data);
}




static __inline void
invltlb(void)
{

 load_cr3(rcr3());
}





static __inline void
invlpg(u_int addr)
{

 __asm volatile("invlpg %0" : : "m" (*(char *)addr) : "memory");
}

static __inline u_int
rfs(void)
{
 u_int sel;
 __asm volatile("movl %%fs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rgs(void)
{
 u_int sel;
 __asm volatile("movl %%gs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rss(void)
{
 u_int sel;
 __asm volatile("movl %%ss,%0" : "=rm" (sel));
 return (sel);
}

static __inline void
load_fs(u_int sel)
{
 __asm volatile("movl %0,%%fs" : : "rm" (sel));
}

static __inline void
load_gs(u_int sel)
{
 __asm volatile("movl %0,%%gs" : : "rm" (sel));
}

static __inline void
lidt(struct region_descriptor *addr)
{
 __asm volatile("lidt (%0)" : : "r" (addr));
}

static __inline void
lldt(u_short sel)
{
 __asm volatile("lldt %0" : : "r" (sel));
}

static __inline void
ltr(u_short sel)
{
 __asm volatile("ltr %0" : : "r" (sel));
}

static __inline u_int
rdr0(void)
{
 u_int data;
 __asm volatile("movl %%dr0,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr0(u_int dr0)
{
 __asm volatile("movl %0,%%dr0" : : "r" (dr0));
}

static __inline u_int
rdr1(void)
{
 u_int data;
 __asm volatile("movl %%dr1,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr1(u_int dr1)
{
 __asm volatile("movl %0,%%dr1" : : "r" (dr1));
}

static __inline u_int
rdr2(void)
{
 u_int data;
 __asm volatile("movl %%dr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr2(u_int dr2)
{
 __asm volatile("movl %0,%%dr2" : : "r" (dr2));
}

static __inline u_int
rdr3(void)
{
 u_int data;
 __asm volatile("movl %%dr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr3(u_int dr3)
{
 __asm volatile("movl %0,%%dr3" : : "r" (dr3));
}

static __inline u_int
rdr4(void)
{
 u_int data;
 __asm volatile("movl %%dr4,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr4(u_int dr4)
{
 __asm volatile("movl %0,%%dr4" : : "r" (dr4));
}

static __inline u_int
rdr5(void)
{
 u_int data;
 __asm volatile("movl %%dr5,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr5(u_int dr5)
{
 __asm volatile("movl %0,%%dr5" : : "r" (dr5));
}

static __inline u_int
rdr6(void)
{
 u_int data;
 __asm volatile("movl %%dr6,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr6(u_int dr6)
{
 __asm volatile("movl %0,%%dr6" : : "r" (dr6));
}

static __inline u_int
rdr7(void)
{
 u_int data;
 __asm volatile("movl %%dr7,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr7(u_int dr7)
{
 __asm volatile("movl %0,%%dr7" : : "r" (dr7));
}

static __inline register_t
intr_disable(void)
{
 register_t eflags;

 eflags = read_eflags();
 disable_intr();
 return (eflags);
}

static __inline void
intr_restore(register_t eflags)
{
 write_eflags(eflags);
}
# 688 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
void reset_dbregs(void);
# 43 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/queue.h" 1
# 515 "freebsd5/freebsd/usr/src/sys/sys/queue.h"
struct quehead {
 struct quehead *qh_link;
 struct quehead *qh_rlink;
};



static __inline void
insque(void *a, void *b)
{
 struct quehead *element = (struct quehead *)a,
   *head = (struct quehead *)b;

 element->qh_link = head->qh_link;
 element->qh_rlink = head;
 head->qh_link = element;
 element->qh_link->qh_rlink = element;
}

static __inline void
remque(void *a)
{
 struct quehead *element = (struct quehead *)a;

 element->qh_link->qh_rlink = element->qh_rlink;
 element->qh_rlink->qh_link = element->qh_link;
 element->qh_rlink = 0;
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 2

struct callout_list { struct callout *slh_first; };
struct callout_tailq { struct callout *tqh_first; struct callout **tqh_last; };

struct callout {
 union {
  struct { struct callout *sle_next; } sle;
  struct { struct callout *tqe_next; struct callout **tqe_prev; } tqe;
 } c_links;
 int c_time;
 void *c_arg;
 void (*c_func)(void *);
 int c_flags;
};






struct callout_handle {
 struct callout *callout;
};


typedef  struct callout_list   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_4_T; extern  _GLOBAL_4_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_6_T; extern  _GLOBAL_6_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_7_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_0_A[NUM_STACKS];   




void callout_init(struct callout *, int);

void callout_reset(struct callout *, int, void (*)(void *), void *);

int _callout_stop_safe(struct callout *, int);
# 44 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


# 1 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_stdint.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 2
# 77 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;

typedef __int_fast8_t int_fast8_t;
typedef __int_fast16_t int_fast16_t;
typedef __int_fast32_t int_fast32_t;
typedef __int_fast64_t int_fast64_t;

typedef __uint_fast8_t uint_fast8_t;
typedef __uint_fast16_t uint_fast16_t;
typedef __uint_fast32_t uint_fast32_t;
typedef __uint_fast64_t uint_fast64_t;

typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 47 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2

typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_12_T; extern  _GLOBAL_12_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_1_A[NUM_STACKS];  
typedef  char  _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_2_A[NUM_STACKS];  
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_18_T; extern  _GLOBAL_18_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_3_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_4_A[NUM_STACKS];   

typedef  long  _GLOBAL_20_T; extern  _GLOBAL_20_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_23_T; extern  _GLOBAL_23_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_5_A[NUM_STACKS];  

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_6_A[NUM_STACKS];   
typedef  char  _GLOBAL_31_T; extern  _GLOBAL_31_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_7_A[NUM_STACKS];  
typedef  char  _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_8_A[NUM_STACKS];  

typedef  char  _GLOBAL_34_T; extern  _GLOBAL_34_T  * *  global_kenvp[NUM_STACKS];   





struct clockframe;
struct malloc_type;
struct mtx;
struct proc;
struct kse;
struct socket;
struct thread;
struct tty;
struct ucred;
struct uio;
struct _jmp_buf;

int setjmp(struct _jmp_buf *);
void longjmp(struct _jmp_buf *, int) __attribute__((__noreturn__)) ;
int dumpstatus(vm_offset_t addr, off_t count);
int nullop(void);
int eopnotsupp(void);
int ureadc(int, struct uio *);
void hashdestroy(void *, struct malloc_type *, u_long);
void *hashinit(int count, struct malloc_type *type, u_long *hashmask);
void *phashinit(int count, struct malloc_type *type, u_long *nentries);
void g_waitidle(void);




void panic(const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 1, 2))) ;


void cpu_boot(int);
void cpu_rootconf(void);
typedef  uint32_t  _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_9_A[NUM_STACKS];  
uint32_t crc32(const void *buf, size_t size);
void critical_enter(void);
void critical_exit(void);
void init_param1(void);
void init_param2(long physpages);
void init_param3(long kmempages);
void tablefull(const char *);
int kvprintf(char const *, void (*)(int, void*), void *, int,
     __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
void nsc_log(int, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void log_console(struct uio *);
int nsc_printf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int snprintf(char *, size_t, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
int sprintf(char *buf, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int uprintf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int vprintf(const char *, __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
int vsnprintf(char *, size_t, const char *, __va_list) __attribute__((__format__ (__printf__, 3, 0))) ;
int vsnrprintf(char *, size_t, int, const char *, __va_list) __attribute__((__format__ (__printf__, 4, 0))) ;
int vsprintf(char *buf, const char *, __va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
int ttyprintf(struct tty *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char *, char const *, ...)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int vsscanf(const char *, char const *, __va_list)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
long strtol(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_long strtoul(const char *, char **, int) __attribute__((__nonnull__(1))) ;
quad_t strtoq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_quad_t strtouq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
void tprintf(struct proc *p, int pri, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
void hexdump(void *ptr, int length, const char *hdr, int flags);







void bcopy(const void *from, void *to, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
void bzero(void *buf, size_t len) __attribute__((__nonnull__(1))) ;

void *memcpy(void *to, const void *from, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int copystr(const void * restrict kfaddr, void * restrict kdaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyinstr(const void * restrict udaddr, void * restrict kaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyin(const void * restrict udaddr, void * restrict kaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyout(const void * restrict kaddr, void * restrict udaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int fubyte(const void *base);
long fuword(const void *base);
int fuword16(void *base);
int32_t fuword32(const void *base);
int64_t fuword64(const void *base);
int subyte(void *base, int byte);
int suword(void *base, long word);
int suword16(void *base, int word);
int suword32(void *base, int32_t word);
int suword64(void *base, int64_t word);
intptr_t casuptr(intptr_t *p, intptr_t old, intptr_t new);

void realitexpire(void *);

void hardclock(struct clockframe *frame);
void hardclock_process(struct clockframe *frame);
void softclock(void *);
void statclock(struct clockframe *frame);
void profclock(struct clockframe *frame);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void cpu_startprofclock(void);
void cpu_stopprofclock(void);





int suser(struct thread *td);
int suser_cred(struct ucred *cred, int flag);
int cr_cansee(struct ucred *u1, struct ucred *u2);
int cr_canseesocket(struct ucred *cred, struct socket *so);

char *getenv(const char *name);
void freeenv(char *env);
int getenv_int(const char *name, int *data);
long getenv_long(const char *name, long *data);
unsigned long getenv_ulong(const char *name, unsigned long *data);
int getenv_string(const char *name, char *data, int size);
int getenv_quad(const char *name, quad_t *data);
int setenv(const char *name, const char *value);
int unsetenv(const char *name);
int testenv(const char *name);






# 1 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/libkern.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 2



typedef  u_char const   _GLOBAL_36_T; extern  _GLOBAL_36_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_10_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_11_A[NUM_STACKS];   
typedef  char const   _GLOBAL_38_T; extern  _GLOBAL_38_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_12_A[NUM_STACKS];   





static __inline int imax(int a, int b) { return (a > b ? a : b); }
static __inline int imin(int a, int b) { return (a < b ? a : b); }
static __inline long lmax(long a, long b) { return (a > b ? a : b); }
static __inline long lmin(long a, long b) { return (a < b ? a : b); }
static __inline u_int max(u_int a, u_int b) { return (a > b ? a : b); }
static __inline u_int min(u_int a, u_int b) { return (a < b ? a : b); }
static __inline quad_t qmax(quad_t a, quad_t b) { return (a > b ? a : b); }
static __inline quad_t qmin(quad_t a, quad_t b) { return (a < b ? a : b); }
static __inline u_long ulmax(u_long a, u_long b) { return (a > b ? a : b); }
static __inline u_long ulmin(u_long a, u_long b) { return (a < b ? a : b); }

static __inline int abs(int a) { return (a < 0 ? -a : a); }
static __inline long labs(long a) { return (a < 0 ? -a : a); }
static __inline quad_t qabs(quad_t a) { return (a < 0 ? -a : a); }


struct malloc_type;
uint32_t arc4random(void);
void arc4rand(void *ptr, u_int len, int reseed);
int bcmp(const void *, const void *, size_t);
void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));




int ffsl(long);





int flsl(long);

int fnmatch(const char *, const char *, int);
int locc(int, char *, u_int);
void qsort(void *base, size_t nmemb, size_t size,
     int (*compar)(const void *, const void *));
void qsort_r(void *base, size_t nmemb, size_t size, void *thunk,
     int (*compar)(void *, const void *, const void *));
u_long random(void);
char *index(const char *, int);
char *rindex(const char *, int);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, int, char *);
void srandom(u_long);
char *strcat(char * restrict, const char * restrict);
int strcmp(const char *, const char *);
char *strcpy(char * restrict, const char * restrict);
char *strdup(const char *restrict, struct malloc_type *);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlen(const char *);
int strncmp(const char *, const char *, size_t);
char *strncpy(char * restrict, const char * restrict, size_t);
char *strsep(char **, const char *delim);
int strvalid(const char *, size_t);


static __inline int
memcmp(const void *b1, const void *b2, size_t len)
{
 return (bcmp(b1, b2, len));
}

static __inline void *
memset(void *b, int c, size_t len)
{
 char *bb;

 if (c == 0)
  bzero(b, len);
 else
  for (bb = (char *)b; len--; )
   *bb++ = c;
 return (b);
}
# 243 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


void consinit(void);
void cpu_initclocks(void);
void usrinfoinit(void);


void shutdown_nice(int);




void inittodr(time_t base);
void resettodr(void);
void startrtclock(void);


typedef void timeout_t(void *);



void callout_handle_init(struct callout_handle *);
struct callout_handle timeout(timeout_t *, void *, int);
void untimeout(timeout_t *, void *, struct callout_handle);
caddr_t kern_timeout_callwheel_alloc(caddr_t v);
void kern_timeout_callwheel_init(void);


static __inline void spl0(void) { return; }
static __inline intrmask_t splbio(void) { return 0; }
static __inline intrmask_t splcam(void) { return 0; }
static __inline intrmask_t splclock(void) { return 0; }
static __inline intrmask_t splhigh(void) { return 0; }
static __inline intrmask_t splimp(void) { return 0; }
static __inline intrmask_t splnet(void) { return 0; }
static __inline intrmask_t splsoftcam(void) { return 0; }
static __inline intrmask_t splsoftclock(void) { return 0; }
static __inline intrmask_t splsofttty(void) { return 0; }
static __inline intrmask_t splsoftvm(void) { return 0; }
static __inline intrmask_t splsofttq(void) { return 0; }
static __inline intrmask_t splstatclock(void) { return 0; }
static __inline intrmask_t spltty(void) { return 0; }
static __inline intrmask_t splvm(void) { return 0; }
static __inline void splx(intrmask_t ipl __attribute__((__unused__)) ) { return; }
# 299 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef void (*watchdog_tickle_fn)(void);

typedef  watchdog_tickle_fn  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_wdog_tickler[NUM_STACKS];   





int msleep(void *chan, struct mtx *mtx, int pri, const char *wmesg,
     int timo);

void wakeup(void *chan) __attribute__((__nonnull__(1))) ;
void wakeup_one(void *chan) __attribute__((__nonnull__(1))) ;





int major(struct cdev *x);
int minor(struct cdev *x);
dev_t dev2udev(struct cdev *x);
struct cdev *findcdev(dev_t x);
int uminor(dev_t dev);
int umajor(dev_t dev);


void DELAY(int usec);
# 43 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/fcntl.h" 1
# 197 "freebsd5/freebsd/usr/src/sys/sys/fcntl.h"
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 44 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/limits.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/limits.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_limits.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/limits.h" 2
# 45 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_lock.h" 1
# 34 "freebsd5/freebsd/usr/src/sys/sys/_lock.h"
struct lock_object {
 struct lock_class *lo_class;
 const char *lo_name;
 const char *lo_type;
 u_int lo_flags;
 struct { struct lock_object *tqe_next; struct lock_object **tqe_prev; } lo_list;
 struct witness *lo_witness;
};
# 37 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 2

struct thread;
# 50 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_class {
 const char *lc_name;
 u_int lc_flags;
};
# 97 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_instance {
 struct lock_object *li_lock;
 const char *li_file;
 int li_line;
 u_int li_flags;
};
# 116 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_list_entry {
 struct lock_list_entry *ll_next;
 struct lock_instance ll_children[3];
 u_int ll_count;
};
# 195 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
typedef  struct lock_class   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_41_T; extern  _GLOBAL_41_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_lock_class_sx[NUM_STACKS];    

void witness_init(struct lock_object *);
void witness_destroy(struct lock_object *);
int witness_defineorder(struct lock_object *, struct lock_object *);
void witness_checkorder(struct lock_object *, int, const char *, int);
void witness_lock(struct lock_object *, int, const char *, int);
void witness_upgrade(struct lock_object *, int, const char *, int);
void witness_downgrade(struct lock_object *, int, const char *, int);
void witness_unlock(struct lock_object *, int, const char *, int);
void witness_save(struct lock_object *, const char **, int *);
void witness_restore(struct lock_object *, const char *, int);
int witness_list_locks(struct lock_list_entry **);
int witness_warn(int, struct lock_object *, const char *, ...);
void witness_assert(struct lock_object *, int, const char *, int);
void witness_display_spinlock(struct lock_object *, struct thread *);
int witness_line(struct lock_object *);
const char *witness_file(struct lock_object *);
# 46 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_label.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/_label.h"
struct label {
 int l_flags;
 union {
  void *l_ptr;
  long l_long;
 } l_perpolicy[4];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2
# 59 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct mac {
 size_t m_buflen;
 char *m_string;
};

typedef struct mac *mac_t;
# 108 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct bpf_d;
struct cdev;
struct componentname;
struct devfs_dirent;
struct ifnet;
struct ifreq;
struct inpcb;
struct image_params;
struct inpcb;
struct ipq;
struct m_tag;
struct mbuf;
struct mount;
struct proc;
struct sockaddr;
struct socket;
struct sysctl_oid;
struct sysctl_req;
struct pipepair;
struct thread;
struct timespec;
struct ucred;
struct uio;
struct vattr;
struct vnode;

# 1 "freebsd5/freebsd/usr/src/sys/sys/acl.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
typedef int acl_type_t;
typedef int acl_tag_t;
typedef mode_t acl_perm_t;
typedef mode_t *acl_permset_t;

struct acl_entry {
 acl_tag_t ae_tag;
 uid_t ae_id;
 acl_perm_t ae_perm;
};
typedef struct acl_entry *acl_entry_t;


struct acl {
 int acl_cnt;
 struct acl_entry acl_entry[32];
};


struct acl_t_struct {
 struct acl ats_acl;
 int ats_cur_entry;
};
typedef struct acl_t_struct *acl_t;
# 139 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
acl_perm_t acl_posix1e_mode_to_perm(acl_tag_t tag, mode_t mode);
struct acl_entry acl_posix1e_mode_to_entry(acl_tag_t tag, uid_t uid,
       gid_t gid, mode_t mode);
mode_t acl_posix1e_perms_to_mode(
       struct acl_entry *acl_user_obj_entry,
       struct acl_entry *acl_group_obj_entry,
       struct acl_entry *acl_other_entry);
mode_t acl_posix1e_acl_to_mode(struct acl *acl);
mode_t acl_posix1e_newfilemode(mode_t cmode,
       struct acl *dacl);




int acl_posix1e_check(struct acl *acl);
# 135 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2

struct vop_setlabel_args;




void mac_init_bpfdesc(struct bpf_d *);
void mac_init_cred(struct ucred *);
void mac_init_devfsdirent(struct devfs_dirent *);
void mac_init_ifnet(struct ifnet *);
int mac_init_inpcb(struct inpcb *, int flag);
int mac_init_ipq(struct ipq *, int flag);
int mac_init_socket(struct socket *, int flag);
void mac_init_pipe(struct pipepair *);
int mac_init_mbuf(struct mbuf *mbuf, int flag);
int mac_init_mbuf_tag(struct m_tag *, int flag);
void mac_init_mount(struct mount *);
void mac_init_proc(struct proc *);
void mac_init_vnode(struct vnode *);
void mac_copy_mbuf_tag(struct m_tag *, struct m_tag *);
void mac_copy_vnode_label(struct label *, struct label *label);
void mac_destroy_bpfdesc(struct bpf_d *);
void mac_destroy_cred(struct ucred *);
void mac_destroy_devfsdirent(struct devfs_dirent *);
void mac_destroy_ifnet(struct ifnet *);
void mac_destroy_inpcb(struct inpcb *);
void mac_destroy_ipq(struct ipq *);
void mac_destroy_socket(struct socket *);
void mac_destroy_pipe(struct pipepair *);
void mac_destroy_proc(struct proc *);
void mac_destroy_mbuf_tag(struct m_tag *);
void mac_destroy_mount(struct mount *);
void mac_destroy_vnode(struct vnode *);

struct label *mac_cred_label_alloc(void);
void mac_cred_label_free(struct label *label);
struct label *mac_vnode_label_alloc(void);
void mac_vnode_label_free(struct label *label);





void mac_associate_vnode_devfs(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);
int mac_associate_vnode_extattr(struct mount *mp, struct vnode *vp);
void mac_associate_vnode_singlelabel(struct mount *mp, struct vnode *vp);
void mac_create_devfs_device(struct mount *mp, struct cdev *dev,
     struct devfs_dirent *de);
void mac_create_devfs_directory(struct mount *mp, char *dirname,
     int dirnamelen, struct devfs_dirent *de);
void mac_create_devfs_symlink(struct ucred *cred, struct mount *mp,
     struct devfs_dirent *dd, struct devfs_dirent *de);
int mac_create_vnode_extattr(struct ucred *cred, struct mount *mp,
     struct vnode *dvp, struct vnode *vp, struct componentname *cnp);
void mac_create_mount(struct ucred *cred, struct mount *mp);
void mac_create_root_mount(struct ucred *cred, struct mount *mp);
void mac_relabel_vnode(struct ucred *cred, struct vnode *vp,
     struct label *newlabel);
void mac_update_devfsdirent(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);




void mac_create_mbuf_from_socket(struct socket *so, struct mbuf *m);
void mac_create_socket(struct ucred *cred, struct socket *socket);
void mac_create_socket_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_set_socket_peer_from_mbuf(struct mbuf *mbuf,
     struct socket *socket);
void mac_set_socket_peer_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_create_pipe(struct ucred *cred, struct pipepair *pp);




void mac_create_bpfdesc(struct ucred *cred, struct bpf_d *bpf_d);
void mac_create_ifnet(struct ifnet *ifp);
void mac_create_inpcb_from_socket(struct socket *so, struct inpcb *inp);
void mac_create_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_create_datagram_from_ipq(struct ipq *ipq, struct mbuf *datagram);
void mac_create_fragment(struct mbuf *datagram, struct mbuf *fragment);
void mac_create_mbuf_from_inpcb(struct inpcb *inp, struct mbuf *m);
void mac_create_mbuf_from_mbuf(struct mbuf *oldmbuf, struct mbuf *newmbuf);
void mac_create_mbuf_linklayer(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_from_bpfdesc(struct bpf_d *bpf_d, struct mbuf *m);
void mac_create_mbuf_from_ifnet(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_multicast_encap(struct mbuf *oldmbuf,
     struct ifnet *ifnet, struct mbuf *newmbuf);
void mac_create_mbuf_netlayer(struct mbuf *oldmbuf, struct mbuf *newmbuf);
int mac_fragment_match(struct mbuf *fragment, struct ipq *ipq);
void mac_reflect_mbuf_icmp(struct mbuf *m);
void mac_reflect_mbuf_tcp(struct mbuf *m);
void mac_update_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_inpcb_sosetlabel(struct socket *so, struct inpcb *inp);




void mac_copy_cred(struct ucred *cr1, struct ucred *cr2);
int mac_execve_enter(struct image_params *imgp, struct mac *mac_p);
void mac_execve_exit(struct image_params *imgp);
void mac_execve_transition(struct ucred *old, struct ucred *new,
     struct vnode *vp, struct label *interpvnodelabel,
     struct image_params *imgp);
int mac_execve_will_transition(struct ucred *old, struct vnode *vp,
     struct label *interpvnodelabel, struct image_params *imgp);
void mac_create_proc0(struct ucred *cred);
void mac_create_proc1(struct ucred *cred);
void mac_thread_userret(struct thread *td);


int mac_check_bpfdesc_receive(struct bpf_d *bpf_d, struct ifnet *ifnet);
int mac_check_cred_visible(struct ucred *u1, struct ucred *u2);
int mac_check_ifnet_transmit(struct ifnet *ifnet, struct mbuf *m);
int mac_check_inpcb_deliver(struct inpcb *inp, struct mbuf *m);
int mac_check_kenv_dump(struct ucred *cred);
int mac_check_kenv_get(struct ucred *cred, char *name);
int mac_check_kenv_set(struct ucred *cred, char *name, char *value);
int mac_check_kenv_unset(struct ucred *cred, char *name);
int mac_check_kld_load(struct ucred *cred, struct vnode *vp);
int mac_check_kld_stat(struct ucred *cred);
int mac_check_kld_unload(struct ucred *cred);
int mac_check_mount_stat(struct ucred *cred, struct mount *mp);
int mac_check_pipe_ioctl(struct ucred *cred, struct pipepair *pp,
     unsigned long cmd, void *data);
int mac_check_pipe_poll(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_read(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_stat(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_write(struct ucred *cred, struct pipepair *pp);
int mac_check_proc_debug(struct ucred *cred, struct proc *proc);
int mac_check_proc_sched(struct ucred *cred, struct proc *proc);
int mac_check_proc_signal(struct ucred *cred, struct proc *proc,
     int signum);
int mac_check_socket_bind(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_connect(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_deliver(struct socket *so, struct mbuf *m);
int mac_check_socket_listen(struct ucred *cred, struct socket *so);
int mac_check_socket_receive(struct ucred *cred, struct socket *so);
int mac_check_socket_send(struct ucred *cred, struct socket *so);
int mac_check_socket_visible(struct ucred *cred, struct socket *so);
int mac_check_sysarch_ioperm(struct ucred *cred);
int mac_check_system_acct(struct ucred *cred, struct vnode *vp);
int mac_check_system_nfsd(struct ucred *cred);
int mac_check_system_reboot(struct ucred *cred, int howto);
int mac_check_system_settime(struct ucred *cred);
int mac_check_system_swapon(struct ucred *cred, struct vnode *vp);
int mac_check_system_swapoff(struct ucred *cred, struct vnode *vp);
int mac_check_system_sysctl(struct ucred *cred, struct sysctl_oid *oidp,
     void *arg1, int arg2, struct sysctl_req *req);
int mac_check_vnode_access(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_chdir(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_chroot(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_create(struct ucred *cred, struct vnode *dvp,
     struct componentname *cnp, struct vattr *vap);
int mac_check_vnode_delete(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_deleteacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_deleteextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name);
int mac_check_vnode_exec(struct ucred *cred, struct vnode *vp,
     struct image_params *imgp);
int mac_check_vnode_getacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_getextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_link(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_listextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace);
int mac_check_vnode_lookup(struct ucred *cred, struct vnode *dvp,
      struct componentname *cnp);
int mac_check_vnode_mmap(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_mprotect(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_open(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_poll(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_read(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_readdir(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_readlink(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_rename_from(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_rename_to(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, int samedir, struct componentname *cnp);
int mac_check_vnode_revoke(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_setacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type, struct acl *acl);
int mac_check_vnode_setextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_setflags(struct ucred *cred, struct vnode *vp,
     u_long flags);
int mac_check_vnode_setmode(struct ucred *cred, struct vnode *vp,
     mode_t mode);
int mac_check_vnode_setowner(struct ucred *cred, struct vnode *vp,
     uid_t uid, gid_t gid);
int mac_check_vnode_setutimes(struct ucred *cred, struct vnode *vp,
     struct timespec atime, struct timespec mtime);
int mac_check_vnode_stat(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_write(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_getsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_getsockopt_peerlabel(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_ioctl_ifnet_get(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_ioctl_ifnet_set(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_setsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_pipe_label_set(struct ucred *cred, struct pipepair *pp,
     struct label *label);
void mac_cred_mmapped_drop_perms(struct thread *td, struct ucred *cred);





int vop_stdsetlabel_ea(struct vop_setlabel_args *ap);
# 47 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
struct malloc_type {
 struct malloc_type *ks_next;
 u_long ks_memuse;
 u_long ks_size;
 u_long ks_inuse;
 uint64_t ks_calls;
 u_long ks_maxused;
 u_long ks_magic;
 const char *ks_shortdesc;
 struct mtx ks_mtx;
};
# 76 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_13_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_14_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_15_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };   

typedef  struct malloc_type   _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_46_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_47_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_17_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_48_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_18_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_49_T; extern  _GLOBAL_49_T  global_malloc_mtx[NUM_STACKS];    


void contigfree(void *addr, unsigned long size, struct malloc_type *type);
void *contigmalloc(unsigned long size, struct malloc_type *type, int flags,
     vm_paddr_t low, vm_paddr_t high, unsigned long alignment,
     unsigned long boundary);
void nsc_free(void *addr, struct malloc_type *type);
void *nsc_malloc(unsigned long size, struct malloc_type *type, int flags);
void malloc_init(void *);
int malloc_last_fail(void);
void malloc_type_allocated(struct malloc_type *type, unsigned long size);
void malloc_type_freed(struct malloc_type *type, unsigned long size);
void malloc_uninit(void *);
void *nsc_realloc(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
void *reallocf(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
# 48 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
struct uma_zone;

typedef struct uma_zone * uma_zone_t;
# 67 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_ctor)(void *mem, int size, void *arg, int flags);
# 85 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_dtor)(void *mem, int size, void *arg);
# 103 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_init)(void *mem, int size, int flags);
# 120 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_fini)(void *mem, int size);
# 164 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zcreate(char *name, size_t size, uma_ctor ctor, uma_dtor dtor,
   uma_init uminit, uma_fini fini, int align,
   u_int16_t flags);
# 200 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zsecond_create(char *name, uma_ctor ctor, uma_dtor dtor,
      uma_init zinit, uma_fini zfini, uma_zone_t master);
# 245 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zdestroy(uma_zone_t zone);
# 261 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void *uma_zalloc_arg(uma_zone_t zone, void *arg, int flags);







static __inline void *uma_zalloc(uma_zone_t zone, int flags);

static __inline void *
uma_zalloc(uma_zone_t zone, int flags)
{
 return uma_zalloc_arg(zone, ((void *)0), flags);
}
# 289 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zfree_arg(uma_zone_t zone, void *item, void *arg);







static __inline void uma_zfree(uma_zone_t zone, void *item);

static __inline void
uma_zfree(uma_zone_t zone, void *item)
{
 uma_zfree_arg(zone, item, ((void *)0));
}
# 323 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void *(*uma_alloc)(uma_zone_t zone, int size, u_int8_t *pflag, int wait);
# 336 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_free)(void *item, int size, u_int8_t pflag);
# 356 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup(void *bootmem);
# 372 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup2(void);
# 385 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_reclaim(void);
# 404 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
struct vm_object;
int uma_zone_set_obj(uma_zone_t zone, struct vm_object *obj, int size);
# 416 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_max(uma_zone_t zone, int nitems);
# 426 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_init(uma_zone_t zone, uma_init uminit);
void uma_zone_set_fini(uma_zone_t zone, uma_fini fini);
# 437 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_zinit(uma_zone_t zone, uma_init zinit);
void uma_zone_set_zfini(uma_zone_t zone, uma_fini zfini);
# 456 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_allocf(uma_zone_t zone, uma_alloc allocf);
# 469 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_freef(uma_zone_t zone, uma_free freef);
# 493 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_prealloc(uma_zone_t zone, int itemcnt);
# 508 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
u_int32_t *uma_find_refcnt(uma_zone_t zone, void *item);
# 41 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
# 73 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mb_args {
 int flags;
 short type;
};





struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 int mh_len;
 int mh_flags;
 short mh_type;
};




struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
 u_int32_t m_tag_cookie;
 void (*m_tag_free)(struct m_tag *);
};




struct pkthdr {
 struct ifnet *rcvif;
 int len;

 void *header;

 int csum_flags;
 int csum_data;
 struct packet_tags { struct m_tag *slh_first; } tags;
};




struct m_ext {
 caddr_t ext_buf;
 void (*ext_free)
      (void *, void *);
 void *ext_args;
 u_int ext_size;
 volatile u_int *ref_cnt;
 int ext_type;
};





struct mbuf {
 struct m_hdr m_hdr;
 union {
  struct {
   struct pkthdr MH_pkthdr;
   union {
    struct m_ext MH_ext;
    char MH_databuf[((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))];
   } MH_dat;
  } MH;
  char M_databuf[(256 - sizeof(struct m_hdr))];
 } M_dat;
};
# 246 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mbstat {
 u_long m_mbufs;
 u_long m_mclusts;

 u_long m_drain;
 u_long m_mcfail;
 u_long m_mpfail;
 u_long m_msize;
 u_long m_mclbytes;
 u_long m_minclsize;
 u_long m_mlen;
 u_long m_mhlen;


 short m_numtypes;


 u_long sf_iocnt;
 u_long sf_allocfail;
 u_long sf_allocwait;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  uma_zone_t  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_zone_pack[NUM_STACKS];   

static __inline struct mbuf *m_get(int how, short type);
static __inline struct mbuf *m_gethdr(int how, short type);
static __inline struct mbuf *m_getcl(int how, short type, int flags);
static __inline struct mbuf *m_getclr(int how, short type);
static __inline struct mbuf *m_free(struct mbuf *m);
static __inline void m_clget(struct mbuf *m, int how);
static __inline void m_chtype(struct mbuf *m, short new_type);
void mb_free_ext(struct mbuf *);

static __inline
struct mbuf *
m_get(int how, short type)
{
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}


static __inline
struct mbuf *
m_getclr(int how, short type)
{
 struct mbuf *m;
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 m = uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how);
 if (m != ((void *)0))
  bzero(m->m_hdr.mh_data, (256 - sizeof(struct m_hdr)));
 return m;
}

static __inline
struct mbuf *
m_gethdr(int how, short type)
{
 struct mb_args args;

 args.flags = 0x0002;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_getcl(int how, short type, int flags)
{
 struct mb_args args;

 args.flags = flags;
 args.type = type;
 return (uma_zalloc_arg(global_zone_pack[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_free(struct mbuf *m)
{
 struct mbuf *n = m->m_hdr.mh_next;




 if (m->m_hdr.mh_flags & 0x0001)
  mb_free_ext(m);
 else
  uma_zfree(global_zone_mbuf[get_stack_id()], m);
 return n;
}

static __inline
void
m_clget(struct mbuf *m, int how)
{

 m->M_dat.MH.MH_dat.MH_ext.ext_buf = ((void *)0);
 uma_zalloc_arg(global_zone_clust[get_stack_id()], m, how);
}

static __inline
void
m_chtype(struct mbuf *m, short new_type)
{
 m->m_hdr.mh_type = new_type;
}
# 544 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_nmbclusters[NUM_STACKS];   

struct uio;

void m_adj(struct mbuf *, int);
int m_apply(struct mbuf *, int, int,
      int (*)(void *, void *, u_int), void *);
void m_cat(struct mbuf *, struct mbuf *);
void m_extadd(struct mbuf *, caddr_t, u_int,
      void (*)(void *, void *), void *, int, int);
void m_copyback(struct mbuf *, int, int, c_caddr_t);
void m_copydata(const struct mbuf *, int, int, caddr_t);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_copypacket(struct mbuf *, int);
void m_copy_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_defrag(struct mbuf *, int);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
      void (*)(char *, caddr_t, u_int));
struct mbuf *m_dup(struct mbuf *, int);
int m_dup_pkthdr(struct mbuf *, struct mbuf *, int);
u_int m_fixhdr(struct mbuf *);
struct mbuf *m_fragment(struct mbuf *, int, int);
void m_freem(struct mbuf *);
struct mbuf *m_getm(struct mbuf *, int, int, short);
struct mbuf *m_getptr(struct mbuf *, int, int *);
u_int m_length(struct mbuf *, struct mbuf **);
void m_move_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_prepend(struct mbuf *, int, int);
void m_print(const struct mbuf *, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_uiotombuf(struct uio *, int, int);
# 667 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct m_tag *m_tag_alloc(u_int32_t, int, int, int);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_locate(struct mbuf *, u_int32_t, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *, int);
int m_tag_copy_chain(struct mbuf *, struct mbuf *, int);
void m_tag_delete_nonpersistent(struct mbuf *);




static __inline void
m_tag_init(struct mbuf *m)
{
 do { (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = ((void *)0); } while (0);
}
# 691 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
static __inline void
m_tag_setup(struct m_tag *t, u_int32_t cookie, int type, int len)
{
 t->m_tag_id = type;
 t->m_tag_len = len;
 t->m_tag_cookie = cookie;
}




static __inline void
m_tag_free(struct m_tag *t)
{
 (*t->m_tag_free)(t);
}




static __inline struct m_tag *
m_tag_first(struct mbuf *m)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first));
}




static __inline struct m_tag *
m_tag_next(struct mbuf *m, struct m_tag *t)
{
 return (((t)->m_tag_link.sle_next));
}




static __inline void
m_tag_prepend(struct mbuf *m, struct m_tag *t)
{
 do { (((t))->m_tag_link.sle_next) = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = (t); } while (0);
}




static __inline void
m_tag_unlink(struct mbuf *m, struct m_tag *t)
{
 do { if ((((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) == (t)) { do { ((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first) = ((((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first))->m_tag_link.sle_next); } while (0); } else { struct m_tag *curelm = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); while (((curelm)->m_tag_link.sle_next) != (t)) curelm = ((curelm)->m_tag_link.sle_next); ((curelm)->m_tag_link.sle_next) = ((((curelm)->m_tag_link.sle_next))->m_tag_link.sle_next); } } while (0);
}




static __inline struct m_tag *
m_tag_get(int type, int length, int wait)
{
 return (m_tag_alloc(0, type, length, wait));
}

static __inline struct m_tag *
m_tag_find(struct mbuf *m, int type, struct m_tag *start)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first == ((void *)0)) ?
     ((void *)0) : m_tag_locate(m, 0, type, start));
}
# 49 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/override/sys/pcpu.h" 1
# 45 "freebsd5/override/sys/pcpu.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
struct vmmeter {



 u_int v_swtch;
 u_int v_trap;
 u_int v_syscall;
 u_int v_intr;
 u_int v_soft;



 u_int v_vm_faults;
 u_int v_cow_faults;
 u_int v_cow_optim;
 u_int v_zfod;
 u_int v_ozfod;
 u_int v_swapin;
 u_int v_swapout;
 u_int v_swappgsin;
 u_int v_swappgsout;
 u_int v_vnodein;
 u_int v_vnodeout;
 u_int v_vnodepgsin;
 u_int v_vnodepgsout;
 u_int v_intrans;
 u_int v_reactivated;
 u_int v_pdwakeups;
 u_int v_pdpages;

 u_int v_dfree;
 u_int v_pfree;
 u_int v_tfree;



 u_int v_page_size;
 u_int v_page_count;
 u_int v_free_reserved;
 u_int v_free_target;
 u_int v_free_min;
 u_int v_free_count;
 u_int v_wire_count;
 u_int v_active_count;
 u_int v_inactive_target;
 u_int v_inactive_count;
 u_int v_cache_count;
 u_int v_cache_min;
 u_int v_cache_max;
 u_int v_pageout_free_min;
 u_int v_interrupt_free_min;
 u_int v_free_severe;



 u_int v_forks;
 u_int v_vforks;
 u_int v_rforks;
 u_int v_kthreads;
 u_int v_forkpages;
 u_int v_vforkpages;
 u_int v_rforkpages;
 u_int v_kthreadpages;
};


typedef  struct vmmeter   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_cnt[NUM_STACKS];    





static __inline
int
vm_page_count_reserved(void)
{
    return (global_cnt[get_stack_id()].v_free_reserved > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 125 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_severe(void)
{
    return (global_cnt[get_stack_id()].v_free_severe > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 142 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_min(void)
{
    return (global_cnt[get_stack_id()].v_free_min > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_page_count_target(void)
{
    return (global_cnt[get_stack_id()].v_free_target > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_paging_target(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_target + global_cnt[get_stack_id()].v_cache_min) -
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}





static __inline
int
vm_paging_needed(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_reserved + global_cnt[get_stack_id()].v_cache_min) >
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}




struct vmtotal {
 int16_t t_rq;
 int16_t t_dw;
 int16_t t_pw;
 int16_t t_sl;
 int16_t t_sw;
 int32_t t_vm;
 int32_t t_avm;
 int32_t t_rm;
 int32_t t_arm;
 int32_t t_vmshr;
 int32_t t_avmshr;
 int32_t t_rmshr;
 int32_t t_armshr;
 int32_t t_free;
};
# 46 "freebsd5/override/sys/pcpu.h" 2
# 1 "freebsd5/override/machine/pcpu.h" 1
# 1 "freebsd5/freebsd/usr/include/machine/pcpu.h" 1
# 34 "freebsd5/freebsd/usr/include/machine/pcpu.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h" 1
# 61 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16 ;
 unsigned sd_lobase:24 __attribute__((__packed__)) ;
 unsigned sd_type:5 ;
 unsigned sd_dpl:2 ;
 unsigned sd_p:1 ;
 unsigned sd_hilimit:4 ;
 unsigned sd_xx:2 ;
 unsigned sd_def32:1 ;
 unsigned sd_gran:1 ;
 unsigned sd_hibase:8 ;
} ;




struct gate_descriptor {
 unsigned gd_looffset:16 ;
 unsigned gd_selector:16 ;
 unsigned gd_stkcpy:5 ;
 unsigned gd_xx:3 ;
 unsigned gd_type:5 ;
 unsigned gd_dpl:2 ;
 unsigned gd_p:1 ;
 unsigned gd_hioffset:16 ;
} ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
};
# 138 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct soft_segment_descriptor {
 unsigned ssd_base ;
 unsigned ssd_limit ;
 unsigned ssd_type:5 ;
 unsigned ssd_dpl:2 ;
 unsigned ssd_p:1 ;
 unsigned ssd_xx:4 ;
 unsigned ssd_xx1:2 ;
 unsigned ssd_def32:1 ;
 unsigned ssd_gran:1 ;
};




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32 __attribute__((__packed__)) ;
};
# 236 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_19_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_20_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_63_T; extern  _GLOBAL_63_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_21_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_65_T  global_r_idt[NUM_STACKS];     

void lgdt(struct region_descriptor *rdp);
void sdtossd(struct segment_descriptor *sdp,
     struct soft_segment_descriptor *ssdp);
void ssdtosd(struct soft_segment_descriptor *ssdp,
     struct segment_descriptor *sdp);
# 35 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h"
struct i386tss {
 int tss_link;
 int tss_esp0;
 int tss_ss0;
 int tss_esp1;
 int tss_ss1;
 int tss_esp2;
 int tss_ss2;
 int tss_cr3;
 int tss_eip;
 int tss_eflags;
 int tss_eax;
 int tss_ecx;
 int tss_edx;
 int tss_ebx;
 int tss_esp;
 int tss_ebp;
 int tss_esi;
 int tss_edi;
 int tss_es;
 int tss_cs;
 int tss_ss;
 int tss_ds;
 int tss_fs;
 int tss_gs;
 int tss_ldt;
 int tss_ioopt;

};
# 36 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 154 "freebsd5/freebsd/usr/include/machine/pcpu.h"
static __inline struct thread *
__curthread(void)
{
 struct thread *td;

 __asm volatile("movl %%fs:0,%0" : "=r" (td));
 return (td);
}
# 2 "freebsd5/override/machine/pcpu.h" 2
# 47 "freebsd5/override/sys/pcpu.h" 2

struct pcb;
struct thread;







struct pcpu {
 struct thread *pc_curthread;
 struct thread *pc_idlethread;
 struct thread *pc_fpcurthread;
 struct thread *pc_deadthread;
 struct pcb *pc_curpcb;
 struct bintime pc_switchtime;
 int pc_switchticks;
 u_int pc_cpuid;
 u_int pc_cpumask;
 u_int pc_other_cpus;
 struct { struct pcpu *sle_next; } pc_allcpu;
 struct lock_list_entry *pc_spinlocks;




 struct pcpu *pc_prvspace; struct pmap *pc_curpmap; struct i386tss pc_common_tss; struct segment_descriptor pc_common_tssd; struct segment_descriptor *pc_tss_gdt; int pc_currentldt; u_int pc_acpi_id; u_int pc_apic_id;
 struct vmmeter pc_cnt;
};

struct cpuhead { struct pcpu *slh_first; };

typedef  struct cpuhead   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_67_T; extern  _GLOBAL_67_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_clock_lock[NUM_STACKS];    
# 48 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
# 99 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
void mtx_init(struct mtx *m, const char *name, const char *type, int opts);
void mtx_destroy(struct mtx *m);
void mtx_sysinit(void *arg);
void mutex_init(void);
void _mtx_lock_sleep(struct mtx *m, struct thread *td, int opts,
     const char *file, int line);
void _mtx_unlock_sleep(struct mtx *m, int opts, const char *file, int line);




void _mtx_unlock_spin(struct mtx *m, int opts, const char *file, int line);
int _mtx_trylock(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_unlock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
void _mtx_unlock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
# 271 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_pool;

struct mtx_pool *mtx_pool_create(const char *mtx_name, int pool_size, int opts);
void mtx_pool_destroy(struct mtx_pool **poolp);
struct mtx *mtx_pool_find(struct mtx_pool *pool, void *ptr);
struct mtx *mtx_pool_alloc(struct mtx_pool *pool);
# 292 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx_pool   _GLOBAL_69_T; extern  _GLOBAL_69_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_70_T; extern  _GLOBAL_70_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 50 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/domain.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)
  (void);
 int (*dom_externalize)
  (struct mbuf *, struct mbuf **);
 void (*dom_dispose)
  (struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;
 int (*dom_rtattach)
  (void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 51 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/file.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/file.h"
struct stat;
struct thread;
struct uio;
struct knote;
struct vnode;
struct socket;
# 64 "freebsd5/freebsd/usr/src/sys/sys/file.h"
struct file;
struct ucred;

typedef int fo_rdwr_t(struct file *fp, struct uio *uio,
      struct ucred *active_cred, int flags,
      struct thread *td);

typedef int fo_ioctl_t(struct file *fp, u_long com, void *data,
      struct ucred *active_cred, struct thread *td);
typedef int fo_poll_t(struct file *fp, int events,
      struct ucred *active_cred, struct thread *td);
typedef int fo_kqfilter_t(struct file *fp, struct knote *kn);
typedef int fo_stat_t(struct file *fp, struct stat *sb,
      struct ucred *active_cred, struct thread *td);
typedef int fo_close_t(struct file *fp, struct thread *td);
typedef int fo_flags_t;

struct fileops {
 fo_rdwr_t *fo_read;
 fo_rdwr_t *fo_write;
 fo_ioctl_t *fo_ioctl;
 fo_poll_t *fo_poll;
 fo_kqfilter_t *fo_kqfilter;
 fo_stat_t *fo_stat;
 fo_close_t *fo_close;
 fo_flags_t fo_flags;
};
# 106 "freebsd5/freebsd/usr/src/sys/sys/file.h"
struct file {
 struct { struct file *le_next; struct file **le_prev; } f_list;
 short f_type;
 void *f_data;
 u_int f_flag;
 struct mtx *f_mtxp;
 struct fileops *f_ops;
 struct ucred *f_cred;
 int f_count;
 struct vnode *f_vnode;


 off_t f_offset;


 short f_gcflag;


 int f_msgcount;


 int f_seqcount;



 off_t f_nextoff;


};






struct xfile {
 size_t xf_size;
 pid_t xf_pid;
 uid_t xf_uid;
 int xf_fd;
 void *xf_file;
 short xf_type;
 int xf_count;
 int xf_msgcount;
 off_t xf_offset;
 void *xf_data;
 void *xf_vnode;
 u_int xf_flag;
};




typedef  struct malloc_type   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_1_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_2_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_3_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_4_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_5_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_6_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_7_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_8_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_9_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_10_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_11_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_12_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_13_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_14_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_15_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_16_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_17_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_18_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_19_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_20_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_21_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_22_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_23_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_24_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_25_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_26_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_27_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_28_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_29_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_30_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_31_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_32_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_33_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_34_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_35_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_36_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_37_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_38_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_39_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_40_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_41_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_42_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_43_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_44_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_45_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_46_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_47_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_48_M_FILE_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_49_M_FILE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_FILE_I) *_GLOBAL_M_FILE_22_A[NUM_STACKS];   


struct filelist { struct file *lh_first; };
typedef  struct filelist   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_filehead[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_vnops[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_badfileops[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_socketops[NUM_STACKS];    
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_maxfilesperproc[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_nfiles[NUM_STACKS];   
typedef  struct sx   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_1_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_2_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_3_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_4_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_5_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_6_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_7_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_8_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_9_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_10_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_11_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_12_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_13_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_14_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_15_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_16_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_17_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_18_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_19_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_20_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_21_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_22_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_23_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_24_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_25_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_26_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_27_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_28_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_29_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_30_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_31_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_32_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_33_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_34_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_35_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_36_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_37_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_38_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_39_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_40_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_41_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_42_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_43_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_44_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_45_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_46_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_47_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_48_filelist_lock_I; extern  _GLOBAL_84_T  _GLOBAL_49_filelist_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_filelist_lock_I) *_GLOBAL_filelist_lock_23_A[NUM_STACKS];   

int fget(struct thread *td, int fd, struct file **fpp);
int fget_read(struct thread *td, int fd, struct file **fpp);
int fget_write(struct thread *td, int fd, struct file **fpp);
int fdrop(struct file *fp, struct thread *td);






typedef  fo_rdwr_t _GLOBAL_85_T;  _GLOBAL_85_T  soo_read;  
typedef  fo_rdwr_t _GLOBAL_86_T;  _GLOBAL_86_T  soo_write;  
typedef  fo_ioctl_t _GLOBAL_87_T;  _GLOBAL_87_T  soo_ioctl;  
typedef  fo_poll_t _GLOBAL_88_T;  _GLOBAL_88_T  soo_poll;  
typedef  fo_kqfilter_t _GLOBAL_89_T;  _GLOBAL_89_T  soo_kqfilter;  
typedef  fo_stat_t _GLOBAL_90_T;  _GLOBAL_90_T  soo_stat;  
typedef  fo_close_t _GLOBAL_91_T;  _GLOBAL_91_T  soo_close;  







int fgetvp(struct thread *td, int fd, struct vnode **vpp);
int fgetvp_read(struct thread *td, int fd, struct vnode **vpp);
int fgetvp_write(struct thread *td, int fd, struct vnode **vpp);

int fgetsock(struct thread *td, int fd, struct socket **spp, u_int *fflagp);
void fputsock(struct socket *sp);
# 216 "freebsd5/freebsd/usr/src/sys/sys/file.h"
typedef  fo_rdwr_t   _GLOBAL_92_T; static __inline__  _GLOBAL_92_T  fo_read;    
typedef  fo_rdwr_t   _GLOBAL_93_T; static __inline__  _GLOBAL_93_T  fo_write;    
typedef  fo_ioctl_t   _GLOBAL_94_T; static __inline__  _GLOBAL_94_T  fo_ioctl;    
typedef  fo_poll_t   _GLOBAL_95_T; static __inline__  _GLOBAL_95_T  fo_poll;    
typedef  fo_kqfilter_t   _GLOBAL_96_T; static __inline__  _GLOBAL_96_T  fo_kqfilter;    
typedef  fo_stat_t   _GLOBAL_97_T; static __inline__  _GLOBAL_97_T  fo_stat;    
typedef  fo_close_t   _GLOBAL_98_T; static __inline__  _GLOBAL_98_T  fo_close;    

static __inline int
fo_read(fp, uio, active_cred, flags, td)
 struct file *fp;
 struct uio *uio;
 struct ucred *active_cred;
 int flags;
 struct thread *td;
{

 return ((*fp->f_ops->fo_read)(fp, uio, active_cred, flags, td));
}

static __inline int
fo_write(fp, uio, active_cred, flags, td)
 struct file *fp;
 struct uio *uio;
 struct ucred *active_cred;
 int flags;
 struct thread *td;
{

 return ((*fp->f_ops->fo_write)(fp, uio, active_cred, flags, td));
}

static __inline int
fo_ioctl(fp, com, data, active_cred, td)
 struct file *fp;
 u_long com;
 void *data;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_ioctl)(fp, com, data, active_cred, td));
}

static __inline int
fo_poll(fp, events, active_cred, td)
 struct file *fp;
 int events;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_poll)(fp, events, active_cred, td));
}

static __inline int
fo_stat(fp, sb, active_cred, td)
 struct file *fp;
 struct stat *sb;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_stat)(fp, sb, active_cred, td));
}

static __inline int
fo_close(fp, td)
 struct file *fp;
 struct thread *td;
{

 return ((*fp->f_ops->fo_close)(fp, td));
}

static __inline int
fo_kqfilter(fp, kn)
 struct file *fp;
 struct knote *kn;
{

 return ((*fp->f_ops->fo_kqfilter)(fp, kn));
}
# 52 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_100_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_24_A[NUM_STACKS];  
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_102_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_25_A[NUM_STACKS];  
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_104_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_26_A[NUM_STACKS];  

typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_tz_dsttime[NUM_STACKS];   
# 103 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
enum sysinit_sub_id {
 SI_SUB_DUMMY = 0x0000000,
 SI_SUB_DONE = 0x0000001,
 SI_SUB_TUNABLES = 0x0700000,
 SI_SUB_CONSOLE = 0x0800000,
 SI_SUB_COPYRIGHT = 0x0800001,
 SI_SUB_SETTINGS = 0x0880000,
 SI_SUB_MTX_POOL_STATIC = 0x0900000,
 SI_SUB_LOCKMGR = 0x0980000,
 SI_SUB_VM = 0x1000000,
 SI_SUB_KMEM = 0x1800000,
 SI_SUB_KVM_RSRC = 0x1A00000,
 SI_SUB_WITNESS = 0x1A80000,
 SI_SUB_MTX_POOL_DYNAMIC = 0x1AC0000,
 SI_SUB_LOCK = 0x1B00000,
 SI_SUB_EVENTHANDLER = 0x1C00000,
 SI_SUB_KLD = 0x2000000,
 SI_SUB_CPU = 0x2100000,
 SI_SUB_MAC = 0x2180000,
 SI_SUB_MAC_POLICY = 0x21C0000,
 SI_SUB_MAC_LATE = 0x21D0000,
 SI_SUB_INTRINSIC = 0x2200000,
 SI_SUB_VM_CONF = 0x2300000,
 SI_SUB_RUN_QUEUE = 0x2400000,
 SI_SUB_KTRACE = 0x2480000,
 SI_SUB_CREATE_INIT = 0x2500000,
 SI_SUB_SCHED_IDLE = 0x2600000,
 SI_SUB_MBUF = 0x2700000,
 SI_SUB_INTR = 0x2800000,
 SI_SUB_SOFTINTR = 0x2800001,
 SI_SUB_DEVFS = 0x2F00000,
 SI_SUB_INIT_IF = 0x3000000,
 SI_SUB_NETGRAPH = 0x3010000,
 SI_SUB_DRIVERS = 0x3100000,
 SI_SUB_CONFIGURE = 0x3800000,
 SI_SUB_VFS = 0x4000000,
 SI_SUB_CLOCKS = 0x4800000,
 SI_SUB_CLIST = 0x5800000,
 SI_SUB_SYSV_SHM = 0x6400000,
 SI_SUB_SYSV_SEM = 0x6800000,
 SI_SUB_SYSV_MSG = 0x6C00000,
 SI_SUB_P1003_1B = 0x6E00000,
 SI_SUB_PSEUDO = 0x7000000,
 SI_SUB_EXEC = 0x7400000,
 SI_SUB_PROTO_BEGIN = 0x8000000,
 SI_SUB_PROTO_IF = 0x8400000,
 SI_SUB_PROTO_DOMAIN = 0x8800000,
 SI_SUB_PROTO_IFATTACHDOMAIN = 0x8800001,
 SI_SUB_PROTO_END = 0x8ffffff,
 SI_SUB_KPROF = 0x9000000,
 SI_SUB_KICK_SCHEDULER = 0xa000000,
 SI_SUB_INT_CONFIG_HOOKS = 0xa800000,
 SI_SUB_ROOT_CONF = 0xb000000,
 SI_SUB_DUMP_CONF = 0xb200000,
 SI_SUB_RAID = 0xb380000,
 SI_SUB_MOUNT_ROOT = 0xb400000,
 SI_SUB_SWAP = 0xc000000,
 SI_SUB_INTRINSIC_POST = 0xd000000,
 SI_SUB_KTHREAD_INIT = 0xe000000,
 SI_SUB_KTHREAD_PAGE = 0xe400000,
 SI_SUB_KTHREAD_VM = 0xe800000,
 SI_SUB_KTHREAD_BUF = 0xea00000,
 SI_SUB_KTHREAD_UPDATE = 0xec00000,
 SI_SUB_KTHREAD_IDLE = 0xee00000,
 SI_SUB_SMP = 0xf000000,
 SI_SUB_RUN_SCHEDULER = 0xfffffff
};





enum sysinit_elem_order {
 SI_ORDER_FIRST = 0x0000000,
 SI_ORDER_SECOND = 0x0000001,
 SI_ORDER_THIRD = 0x0000002,
 SI_ORDER_MIDDLE = 0x1000000,
 SI_ORDER_ANY = 0xfffffff
};
# 207 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef void (*sysinit_nfunc_t)(void *);
typedef void (*sysinit_cfunc_t)(const void *);

struct sysinit {
 enum sysinit_sub_id subsystem;
 enum sysinit_elem_order order;
 sysinit_cfunc_t func;
 const void *udata;
};
# 258 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void sysinit_add(struct sysinit **set, struct sysinit **set_end);
# 273 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_int_init(void *);
struct tunable_int {
 const char *path;
 int *var;
};
# 296 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_long_init(void *);
struct tunable_long {
 const char *path;
 long *var;
};
# 319 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_ulong_init(void *);
struct tunable_ulong {
 const char *path;
 unsigned long *var;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_quad_init(void *);
struct tunable_quad {
 const char *path;
 quad_t *var;
};
# 363 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_str_init(void *);
struct tunable_str {
 const char *path;
 char *var;
 int size;
};
# 386 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void net_warn_not_mpsafe(const char *component);




struct intr_config_hook {
 struct { struct intr_config_hook *tqe_next; struct intr_config_hook **tqe_prev; } ich_links;
 void (*ich_func)(void *arg);
 void *ich_arg;
};

int config_intrhook_establish(struct intr_config_hook *hook);
void config_intrhook_disestablish(struct intr_config_hook *hook);
# 53 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/event.h" 1
# 54 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct kevent {
 uintptr_t ident;
 short filter;
 u_short flags;
 u_int fflags;
 intptr_t data;
 void *udata;
};
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};





typedef  struct malloc_type   _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_27_A[NUM_STACKS];   
# 150 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};







struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct knlist *kn_knlist;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
# 179 "freebsd5/freebsd/usr/src/sys/sys/event.h"
 int kn_sfflags;
 intptr_t kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 struct filterops *kn_fop;
 void *kn_hook;







};

struct thread;
struct proc;
struct knlist;

extern void knote(struct knlist *list, long hint, int islocked);
extern void knlist_add(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove_inevent(struct knlist *knl, struct knote *kn);
extern int knlist_empty(struct knlist *knl);
extern void knlist_init(struct knlist *knl, struct mtx *mtx);
extern void knlist_destroy(struct knlist *knl);
extern void knlist_cleardel(struct knlist *knl, struct thread *td,
 int islocked, int killkn);




extern void knote_fdclose(struct thread *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct thread *p, int waitok);
extern int kqueue_add_filteropts(int filt, struct filterops *filtops);
extern int kqueue_del_filteropts(int filt);
# 54 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/poll.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/poll.h"
typedef unsigned int nfds_t;




struct pollfd {
 int fd;
 short events;
 short revents;
};
# 55 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 50 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h"
struct rtprio {
 u_short type;
 u_short prio;
};


struct ksegrp;
int rtp_to_pri(struct rtprio *, struct ksegrp *);
void pri_to_rtp(struct ksegrp *, struct rtprio *);
# 51 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h" 1
# 44 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h"
typedef u_int32_t rqb_word_t;
# 33 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 2

struct kse;
# 46 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
struct rqhead { struct kse *tqh_first; struct kse **tqh_last; };





struct rqbits {
 rqb_word_t rqb_bits[(2)];
};





struct runq {
 struct rqbits rq_status;
 struct rqhead rq_queues[(64)];
};

void runq_add(struct runq *, struct kse *, int flags);
int runq_check(struct runq *);
struct kse *runq_choose(struct runq *);
void runq_init(struct runq *);
void runq_remove(struct runq *, struct kse *);
# 52 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sigio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/sigio.h"
struct sigio {
 union {
  struct proc *siu_proc;
  struct pgrp *siu_pgrp;
 } sio_u;
 struct { struct sigio *sle_next; } sio_pgsigio;
 struct sigio **sio_myref;

 struct ucred *sio_ucred;
 pid_t sio_pgid;
};



struct sigiolst { struct sigio *slh_first; };

pid_t fgetown(struct sigio **sigiop);
int fsetown(pid_t pgid, struct sigio **sigiop);
void funsetown(struct sigio **sigiop);
void funsetownlst(struct sigiolst *sigiolst);
# 53 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
typedef int sig_atomic_t;
# 54 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/trap.h" 1
# 55 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 2
# 96 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
struct sigcontext {
 struct __sigset sc_mask;
 int sc_onstack;
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_isp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;
 int sc_trapno;
 int sc_err;
 int sc_eip;
 int sc_cs;
 int sc_efl;
 int sc_esp;
 int sc_ss;
 int sc_len;




 int sc_fpformat;
 int sc_ownedfp;
 int sc_spare1[1];
 int sc_fpstate[128] __attribute__((__aligned__(16))) ;
 int sc_spare2[8];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 2
# 140 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef void __sighandler_t(int);
# 150 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
union sigval {

 int sigval_int;
 void *sigval_ptr;
};



struct sigevent {
 int sigev_notify;
 union {
  int __sigev_signo;
  int __sigev_notify_kqueue;
 } __sigev_u;
 union sigval sigev_value;



};
# 185 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef struct __siginfo {
 int si_signo;
 int si_errno;






 int si_code;
 __pid_t si_pid;
 __uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 int __spare__[7];
} siginfo_t;



struct __siginfo;




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, struct __siginfo *, void *);
 } __sigaction_u;
 int sa_flags;
 sigset_t sa_mask;
};
# 257 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef __sighandler_t *sig_t;
typedef void __siginfohandler_t(int, struct __siginfo *, void *);







typedef struct sigaltstack {



 char *ss_sp;
 __size_t ss_size;
 int ss_flags;
} stack_t;
# 285 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigvec {
 __sighandler_t *sv_handler;
 int sv_mask;
 int sv_flags;
};
# 312 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigstack {

 char *ss_sp;
 int ss_onstack;
};
# 344 "freebsd5/freebsd/usr/src/sys/sys/signal.h"

__sighandler_t *signal(int, __sighandler_t *);

# 54 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2





# 1 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h" 1
# 34 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h"
typedef struct __mcontext {





 int mc_onstack;
 int mc_gs;
 int mc_fs;
 int mc_es;
 int mc_ds;
 int mc_edi;
 int mc_esi;
 int mc_ebp;
 int mc_isp;
 int mc_ebx;
 int mc_edx;
 int mc_ecx;
 int mc_eax;
 int mc_trapno;
 int mc_err;
 int mc_eip;
 int mc_cs;
 int mc_eflags;
 int mc_esp;
 int mc_ss;

 int mc_len;



 int mc_fpformat;



 int mc_ownedfp;
 int mc_spare1[1];



 int mc_fpstate[128] __attribute__((__aligned__(16))) ;
 int mc_spare2[8];
} mcontext_t;
# 36 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 2

typedef struct __ucontext {
# 46 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
 sigset_t uc_sigmask;
 mcontext_t uc_mcontext;

 struct __ucontext *uc_link;
 stack_t uc_stack;
 int uc_flags;

 int __spare__[4];
} ucontext_t;
# 84 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
struct thread;
# 94 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
int get_mcontext(struct thread *, mcontext_t *, int);
int set_mcontext(struct thread *, const mcontext_t *);
# 60 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ucred.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/ucred.h"
struct ucred {
 u_int cr_ref;

 uid_t cr_uid;
 uid_t cr_ruid;
 uid_t cr_svuid;
 short cr_ngroups;
 gid_t cr_groups[16];
 gid_t cr_rgid;
 gid_t cr_svgid;
 struct uidinfo *cr_uidinfo;
 struct uidinfo *cr_ruidinfo;
 struct prison *cr_prison;

 struct label *cr_label;
 struct mtx *cr_mtxp;
};







struct xucred {
 u_int cr_version;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
 void *_cr_unused1;
};






struct thread;

void change_egid(struct ucred *newcred, gid_t egid);
void change_euid(struct ucred *newcred, struct uidinfo *euip);
void change_rgid(struct ucred *newcred, gid_t rgid);
void change_ruid(struct ucred *newcred, struct uidinfo *ruip);
void change_svgid(struct ucred *newcred, gid_t svgid);
void change_svuid(struct ucred *newcred, uid_t svuid);
void crcopy(struct ucred *dest, struct ucred *src);
struct ucred *crdup(struct ucred *cr);
void cred_update_thread(struct thread *td);
void crfree(struct ucred *cr);
struct ucred *crget(void);
struct ucred *crhold(struct ucred *cr);
int crshared(struct ucred *cr);
void cru2x(struct ucred *cr, struct xucred *xcr);
int groupmember(gid_t gid, struct ucred *cred);
# 61 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h" 1
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h"
struct proc_ldt {
        caddr_t ldt_base;
        int ldt_len;
        int ldt_refcnt;
        u_long ldt_active;
        struct segment_descriptor ldt_sd;
};




struct mdthread {
 register_t md_savecrit;
};

struct mdproc {
 struct proc_ldt *md_ldt;
};



void set_user_ldt(struct mdproc *);
struct proc_ldt *user_ldt_alloc(struct mdproc *, int);
void user_ldt_free(struct thread *);
# 62 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 pid_t s_sid;

 char s_login[((((17)+((sizeof(long))-1))/(sizeof(long)))*(sizeof(long)))];
 struct mtx s_mtx;
};
# 90 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 struct sigiolst pg_sigiolst;
 pid_t pg_id;
 int pg_jobc;
 struct mtx pg_mtx;
};




struct pargs {
 u_int ar_ref;
 u_int ar_length;
 u_char ar_args[1];
};
# 151 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ithd;
struct kg_sched;
struct nlminfo;
struct p_sched;
struct sleepqueue;
struct td_sched;
struct trapframe;
struct turnstile;
# 187 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread;
# 198 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp;
# 208 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct proc;
# 238 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread {
 struct proc *td_proc;
 struct ksegrp *td_ksegrp;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_plist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_kglist;


 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_slpq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_lockq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_runq;

 struct { struct selinfo *tqh_first; struct selinfo **tqh_last; } td_selq;
 struct sleepqueue *td_sleepqueue;
 struct turnstile *td_turnstile;
 lwpid_t td_tid;



 int td_flags;
 int td_inhibitors;
 int td_pflags;
 int td_dupfd;
 void *td_wchan;
 const char *td_wmesg;
 u_char td_lastcpu;
 u_char td_oncpu;
 short td_locks;
 struct turnstile *td_blocked;
 struct ithd *td_ithd;
 const char *td_lockname;
 struct { struct turnstile *lh_first; } td_contested;
 struct lock_list_entry *td_sleeplocks;
 int td_intr_nesting_level;
 int td_pinned;
 struct kse_thr_mailbox *td_mailbox;
 struct ucred *td_ucred;
 struct thread *td_standin;
 u_int td_prticks;
 struct kse_upcall *td_upcall;
 u_int64_t td_sticks;
 u_int td_uuticks;
 u_int td_usticks;
 int td_intrval;
 sigset_t td_oldsigmask;
 sigset_t td_sigmask;
 sigset_t td_siglist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_umtx;
 volatile u_int td_generation;
 stack_t td_sigstk;
 int td_kflags;
 int td_xsig;
 u_long td_profil_addr;
 u_int td_profil_ticks;





 u_char td_base_pri;
 u_char td_priority;






 struct pcb *td_pcb;
 enum {
  TDS_INACTIVE = 0x0,
  TDS_INHIBITED,
  TDS_CAN_RUN,
  TDS_RUNQ,
  TDS_RUNNING
 } td_state;
 register_t td_retval[2];
 struct callout td_slpcallout;
 struct trapframe *td_frame;
 struct vm_object *td_kstack_obj;
 vm_offset_t td_kstack;
 int td_kstack_pages;
 struct vm_object *td_altkstack_obj;
 vm_offset_t td_altkstack;
 int td_altkstack_pages;
 u_int td_critnest;
 struct mdthread td_md;
 struct td_sched *td_sched;
};
# 446 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct kse_upcall {
 struct { struct kse_upcall *tqe_next; struct kse_upcall **tqe_prev; } ku_link;
 struct ksegrp *ku_ksegrp;
 struct thread *ku_owner;
 int ku_flags;
 struct kse_mailbox *ku_mailbox;
 stack_t ku_stack;
 void *ku_func;
 unsigned int ku_mflags;
};
# 465 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp {
 struct proc *kg_proc;
 struct { struct ksegrp *tqe_next; struct ksegrp **tqe_prev; } kg_ksegrp;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_runq;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_slpq;
 struct { struct kse_upcall *tqh_first; struct kse_upcall **tqh_last; } kg_upcalls;

 u_int kg_estcpu;
 u_int kg_slptime;
 int kg_runnable;
 int kg_numupcalls;
 int kg_upsleeps;
 struct kse_thr_mailbox *kg_completed;
 int kg_nextupcall;
 int kg_upquantum;



 u_char kg_pri_class;
 u_char kg_user_pri;

 int kg_numthreads;
 struct kg_sched *kg_sched;
};





struct proc {
 struct { struct proc *le_next; struct proc **le_prev; } p_list;
 struct { struct ksegrp *tqh_first; struct ksegrp **tqh_last; } p_ksegrps;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_suspended;
 struct ucred *p_ucred;
 struct filedesc *p_fd;
 struct filedesc_to_leader *p_fdtol;

 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vm_object *p_unused1;
 struct sigacts *p_sigacts;




 int p_flag;
 int p_sflag;
 enum {
  PRS_NEW = 0,
  PRS_NORMAL,
  PRS_ZOMBIE
 } p_state;
 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;
 struct mtx p_mtx;



 pid_t p_oppid;
 struct vmspace *p_vmspace;
 u_int p_swtime;
 struct itimerval p_realtimer;
 struct bintime p_runtime;
 u_int64_t p_uu;
 u_int64_t p_su;
 u_int64_t p_iu;
 u_int64_t p_uticks;
 u_int64_t p_sticks;
 u_int64_t p_iticks;
 int p_profthreads;
 int p_maxthrwaits;
 int p_traceflag;
 struct vnode *p_tracevp;
 struct ucred *p_tracecred;
 struct vnode *p_textvp;
 sigset_t p_siglist;
 char p_lock;
 struct sigiolst p_sigiolst;
 int p_sigparent;
 int p_sig;
 u_long p_code;
 u_int p_stops;
 u_int p_stype;
 char p_step;
 u_char p_pfsflags;
 struct nlminfo *p_nlminfo;
 void *p_aioinfo;
 struct thread *p_singlethread;
 int p_suspcount;
 struct thread *p_xthread;
 int p_boundary_count;





 u_int p_magic;
 char p_comm[19 + 1];
 struct pgrp *p_pgrp;
 struct sysentvec *p_sysent;
 struct pargs *p_args;
 rlim_t p_cpulimit;
 signed char p_nice;



 u_short p_xstat;
 struct knlist p_klist;
 int p_numthreads;
 int p_numksegrps;
 struct mdproc p_md;
 struct callout p_itcallout;
 struct user *p_unused2;
 u_short p_acflag;
 struct rusage *p_ru;
 struct proc *p_peers;
 struct proc *p_leader;
 void *p_emuldata;
 struct label *p_label;
 struct p_sched *p_sched;
};
# 676 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct malloc_type   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_28_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_29_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_118_T; extern  _GLOBAL_118_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_30_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_119_T; extern  _GLOBAL_119_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_31_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_120_T; extern  _GLOBAL_120_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_32_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_123_T; extern  _GLOBAL_123_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_125_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_33_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_126_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_34_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_132_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_35_A[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_134_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_140_T; extern  _GLOBAL_140_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_140_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_141_T; extern  _GLOBAL_141_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_142_T; extern  _GLOBAL_142_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_lastpid[NUM_STACKS];   

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
struct proc *zpfind(pid_t);

void adjustrunqueue(struct thread *, int newpri);
void ast(struct trapframe *framep);
struct thread *choosethread(void);
int cr_cansignal(struct ucred *cred, struct proc *proc, int signum);
int enterpgrp(struct proc *p, pid_t pgid, struct pgrp *pgrp, struct session *sess);
int enterthispgrp(struct proc *p, struct pgrp *pgrp);
void faultin(struct proc *p);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int fork1(struct thread *, int, int, struct proc **);
void fork_exit(void (*)(void *, struct trapframe *), void *,
     struct trapframe *);
void fork_return(struct thread *, struct trapframe *);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
int maybe_preempt(struct thread *td);
void mi_switch(int flags, struct thread *newtd);
int p_candebug(struct thread *td, struct proc *p);
int p_cansee(struct thread *td, struct proc *p);
int p_cansched(struct thread *td, struct proc *p);
int p_cansignal(struct thread *td, struct proc *p, int signum);
struct pargs *pargs_alloc(int len);
void pargs_drop(struct pargs *pa);
void pargs_free(struct pargs *pa);
void pargs_hold(struct pargs *pa);
void procinit(void);
void threadinit(void);
void proc_linkup(struct proc *p, struct ksegrp *kg, struct thread *td);
void proc_reparent(struct proc *child, struct proc *newparent);
struct pstats *pstats_alloc(void);
void pstats_fork(struct pstats *src, struct pstats *dst);
void pstats_free(struct pstats *ps);
int securelevel_ge(struct ucred *cr, int level);
int securelevel_gt(struct ucred *cr, int level);
void setrunnable(struct thread *);
void setrunqueue(struct thread *, int flags);
void setsugid(struct proc *p);
int sigonstack(size_t sp);
void sleepinit(void);
void stopevent(struct proc *, u_int, u_int);
void cpu_idle(void);
typedef  void   ( *_GLOBAL_145_T  )  ( void  ) ; extern  _GLOBAL_145_T global_cpu_idle_hook[NUM_STACKS];   
void cpu_switch(struct thread *old, struct thread *new);
void cpu_throw(struct thread *old, struct thread *new) __attribute__((__noreturn__)) ;
void unsleep(struct thread *);
void userret(struct thread *, struct trapframe *, u_int);

void cpu_exit(struct thread *);
void exit1(struct thread *, int) __attribute__((__noreturn__)) ;
void cpu_fork(struct thread *, struct proc *, struct thread *, int);
void cpu_set_fork_handler(struct thread *, void (*)(void *), void *);


struct ksegrp *ksegrp_alloc(void);
void ksegrp_free(struct ksegrp *kg);
void ksegrp_stash(struct ksegrp *kg);
void kse_GC(void);
void kseinit(void);
void cpu_set_upcall(struct thread *td, struct thread *td0);
void cpu_set_upcall_kse(struct thread *td, struct kse_upcall *ku);
void cpu_thread_clean(struct thread *);
void cpu_thread_exit(struct thread *);
void cpu_thread_setup(struct thread *td);
void cpu_thread_siginfo(int sig, u_long code, siginfo_t *si);
void cpu_thread_swapin(struct thread *);
void cpu_thread_swapout(struct thread *);
void ksegrp_link(struct ksegrp *kg, struct proc *p);
void ksegrp_unlink(struct ksegrp *kg);
void thread_signal_add(struct thread *td, int sig);
struct thread *thread_alloc(void);
void thread_exit(void) __attribute__((__noreturn__)) ;
int thread_export_context(struct thread *td, int willexit);
void thread_free(struct thread *td);
void thread_link(struct thread *td, struct ksegrp *kg);
void thread_reap(void);
struct thread *thread_schedule_upcall(struct thread *td, struct kse_upcall *ku);
int thread_single(int how);
void thread_single_end(void);
int thread_sleep_check(struct thread *td);
void thread_stash(struct thread *td);
int thread_suspend_check(int how);
void thread_suspend_one(struct thread *td);
void thread_unlink(struct thread *td);
void thread_unsuspend(struct proc *p);
void thread_unsuspend_one(struct thread *td);
int thread_upcall_check(struct thread *td);
void thread_unthread(struct thread *td);
int thread_userret(struct thread *td, struct trapframe *frame);
void thread_user_enter(struct thread *td);
void thread_wait(struct proc *p);
int thread_statclock(int user);
struct kse_upcall *upcall_alloc(void);
void upcall_free(struct kse_upcall *ku);
void upcall_link(struct kse_upcall *ku, struct ksegrp *kg);
void upcall_unlink(struct kse_upcall *ku);
void upcall_remove(struct thread *td);
void upcall_stash(struct kse_upcall *ke);
void thread_sanity_check(struct thread *td, char *);
void thread_stopped(struct proc *p);
struct thread *thread_switchout(struct thread *td, int flags,
      struct thread *newtd);
void thread_continued(struct proc *p);
void thr_exit1(void);
# 56 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/protosw.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct mbuf;
struct thread;
struct sockaddr;
struct socket;
struct sockopt;
# 67 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
typedef void pr_input_t (struct mbuf *, int);
typedef int pr_input6_t (struct mbuf **, int*, int);
typedef void pr_in_input_t (struct mbuf *, int, int);
typedef int pr_output_t (struct mbuf *, struct socket *);
typedef int pr_in_output_t (struct mbuf *, struct socket *, struct sockaddr *);
typedef void pr_ctlinput_t (int, struct sockaddr *, void *);
typedef int pr_ctloutput_t (struct socket *, struct sockopt *);
typedef void pr_init_t (void);
typedef void pr_fasttimo_t (void);
typedef void pr_slowtimo_t (void);
typedef void pr_drain_t (void);

typedef int pr_usrreq_t(struct socket *, int, struct mbuf *,
        struct mbuf *, struct mbuf *, struct thread *);

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;

 pr_input_t *pr_input;
 pr_output_t *pr_output;
 pr_ctlinput_t *pr_ctlinput;
 pr_ctloutput_t *pr_ctloutput;

 pr_usrreq_t *pr_ousrreq;

 pr_init_t *pr_init;
 pr_fasttimo_t *pr_fasttimo;
 pr_slowtimo_t *pr_slowtimo;
 pr_drain_t *pr_drain;

 struct pr_usrreqs *pr_usrreqs;
};
# 177 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct ifnet;
struct stat;
struct ucred;
struct uio;







struct pr_usrreqs {
 int (*pru_abort)(struct socket *so);
 int (*pru_accept)(struct socket *so, struct sockaddr **nam);
 int (*pru_attach)(struct socket *so, int proto, struct thread *td);
 int (*pru_bind)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect2)(struct socket *so1, struct socket *so2);
 int (*pru_control)(struct socket *so, u_long cmd, caddr_t data,
      struct ifnet *ifp, struct thread *td);
 int (*pru_detach)(struct socket *so);
 int (*pru_disconnect)(struct socket *so);
 int (*pru_listen)(struct socket *so, struct thread *td);
 int (*pru_peeraddr)(struct socket *so, struct sockaddr **nam);
 int (*pru_rcvd)(struct socket *so, int flags);
 int (*pru_rcvoob)(struct socket *so, struct mbuf *m, int flags);
 int (*pru_send)(struct socket *so, int flags, struct mbuf *m,
      struct sockaddr *addr, struct mbuf *control,
      struct thread *td);



 int (*pru_sense)(struct socket *so, struct stat *sb);
 int (*pru_shutdown)(struct socket *so);
 int (*pru_sockaddr)(struct socket *so, struct sockaddr **nam);
# 223 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
 int (*pru_sosend)(struct socket *so, struct sockaddr *addr,
      struct uio *uio, struct mbuf *top, struct mbuf *control,
      int flags, struct thread *td);
 int (*pru_soreceive)(struct socket *so, struct sockaddr **paddr,
      struct uio *uio, struct mbuf **mp0, struct mbuf **controlp,
      int *flagsp);
 int (*pru_sopoll)(struct socket *so, int events,
      struct ucred *cred, struct thread *td);
 void (*pru_sosetlabel)(struct socket *so);
};

int pru_accept_notsupp(struct socket *so, struct sockaddr **nam);
int pru_connect_notsupp(struct socket *so, struct sockaddr *nam,
     struct thread *td);
int pru_connect2_notsupp(struct socket *so1, struct socket *so2);
int pru_control_notsupp(struct socket *so, u_long cmd, caddr_t data,
     struct ifnet *ifp, struct thread *td);
int pru_listen_notsupp(struct socket *so, struct thread *td);
int pru_rcvd_notsupp(struct socket *so, int flags);
int pru_rcvoob_notsupp(struct socket *so, struct mbuf *m, int flags);
int pru_sense_null(struct socket *so, struct stat *sb);
void pru_sosetlabel_null(struct socket *so);
# 318 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
void pfctlinput(int, struct sockaddr *);
void pfctlinput2(int, struct sockaddr *, void *);
struct protosw *pffindproto(int family, int protocol, int type);
struct protosw *pffindtype(int family, int type);
# 57 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2
# 68 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
typedef __sa_family_t sa_family_t;




typedef __socklen_t socklen_t;
# 141 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};


struct accept_filter_arg {
 char af_name[16];
 char af_arg[256-16];
};
# 215 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr {
 unsigned char sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};







struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 243 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr_storage {
 unsigned char ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128U - sizeof(unsigned char) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 376 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 406 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 428 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsgcred {
 pid_t cmcred_pid;
 uid_t cmcred_uid;
 uid_t cmcred_euid;
 gid_t cmcred_gid;
 short cmcred_ngroups;
 gid_t cmcred_groups[16];
};
# 481 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 char *msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 char *msg_accrights;
 int msg_accrightslen;
};
# 510 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};
# 58 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h"
struct selinfo {
 struct { struct selinfo *tqe_next; struct selinfo **tqe_prev; } si_thrlist;
 struct thread *si_thread;
 struct knlist si_note;
 short si_flags;
};






void clear_selinfo_list(struct thread *td);
void selrecord(struct thread *selector, struct selinfo *sip);
void selwakeup(struct selinfo *sip);
void selwakeuppri(struct selinfo *sip, int pri);
# 38 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 2
# 47 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef u_quad_t so_gen_t;
# 60 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct socket {
 int so_count;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 int so_qstate;
 void *so_pcb;
 struct protosw *so_proto;
# 80 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 struct socket *so_head;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_incomp;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_comp;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_list;
 short so_qlen;
 short so_incqlen;

 short so_qlimit;
 short so_timeo;
 u_short so_error;
 struct sigio *so_sigio;

 u_long so_oobmark;
 struct { struct aiocblist *tqh_first; struct aiocblist **tqh_last; } so_aiojobq;



 struct sockbuf {
  struct selinfo sb_sel;
  struct mtx sb_mtx;

  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  u_int sb_ctl;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
  short sb_state;
 } so_rcv, so_snd;
# 132 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 void (*so_upcall)(struct socket *, void *, int);
 void *so_upcallarg;
 struct ucred *so_cred;
 struct label *so_label;
 struct label *so_peerlabel;

 so_gen_t so_gencnt;
 void *so_emuldata;
  struct so_accf {
  struct accept_filter *so_accept_filter;
  void *so_accept_filter_arg;
  char *so_accept_filter_str;
 } *so_accf;
};
# 160 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef  struct mtx   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_accept_mtx[NUM_STACKS];    
# 228 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct xsocket {
 size_t xso_len;
 struct socket *xso_so;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 caddr_t so_pcb;
 int xso_protocol;
 int xso_family;
 short so_qlen;
 short so_incqlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 u_long so_oobmark;
 struct xsockbuf {
  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
 } so_rcv, so_snd;
 uid_t so_uid;
};
# 410 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
enum sopt_dir { SOPT_GET, SOPT_SET };
struct sockopt {
 enum sopt_dir sopt_dir;
 int sopt_level;
 int sopt_name;
 void *sopt_val;
 size_t sopt_valsize;
 struct thread *sopt_td;
};

struct accept_filter {
 char accf_name[16];
 void (*accf_callback)
  (struct socket *so, void *arg, int waitflag);
 void * (*accf_create)
  (struct socket *so, char *arg);
 void (*accf_destroy)
  (struct socket *so);
 struct { struct accept_filter *sle_next; } accf_next;
};


typedef  struct malloc_type   _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_147_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_36_A[NUM_STACKS] = { &_GLOBAL_0_M_ACCF_I, &_GLOBAL_1_M_ACCF_I, &_GLOBAL_2_M_ACCF_I, &_GLOBAL_3_M_ACCF_I, &_GLOBAL_4_M_ACCF_I, &_GLOBAL_5_M_ACCF_I, &_GLOBAL_6_M_ACCF_I, &_GLOBAL_7_M_ACCF_I, &_GLOBAL_8_M_ACCF_I, &_GLOBAL_9_M_ACCF_I, &_GLOBAL_10_M_ACCF_I, &_GLOBAL_11_M_ACCF_I, &_GLOBAL_12_M_ACCF_I, &_GLOBAL_13_M_ACCF_I, &_GLOBAL_14_M_ACCF_I, &_GLOBAL_15_M_ACCF_I, &_GLOBAL_16_M_ACCF_I, &_GLOBAL_17_M_ACCF_I, &_GLOBAL_18_M_ACCF_I, &_GLOBAL_19_M_ACCF_I, &_GLOBAL_20_M_ACCF_I, &_GLOBAL_21_M_ACCF_I, &_GLOBAL_22_M_ACCF_I, &_GLOBAL_23_M_ACCF_I, &_GLOBAL_24_M_ACCF_I, &_GLOBAL_25_M_ACCF_I, &_GLOBAL_26_M_ACCF_I, &_GLOBAL_27_M_ACCF_I, &_GLOBAL_28_M_ACCF_I, &_GLOBAL_29_M_ACCF_I, &_GLOBAL_30_M_ACCF_I, &_GLOBAL_31_M_ACCF_I, &_GLOBAL_32_M_ACCF_I, &_GLOBAL_33_M_ACCF_I, &_GLOBAL_34_M_ACCF_I, &_GLOBAL_35_M_ACCF_I, &_GLOBAL_36_M_ACCF_I, &_GLOBAL_37_M_ACCF_I, &_GLOBAL_38_M_ACCF_I, &_GLOBAL_39_M_ACCF_I, &_GLOBAL_40_M_ACCF_I, &_GLOBAL_41_M_ACCF_I, &_GLOBAL_42_M_ACCF_I, &_GLOBAL_43_M_ACCF_I, &_GLOBAL_44_M_ACCF_I, &_GLOBAL_45_M_ACCF_I, &_GLOBAL_46_M_ACCF_I, &_GLOBAL_47_M_ACCF_I, &_GLOBAL_48_M_ACCF_I, &_GLOBAL_49_M_ACCF_I, };   
typedef  struct malloc_type   _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_37_A[NUM_STACKS] = { &_GLOBAL_0_M_PCB_I, &_GLOBAL_1_M_PCB_I, &_GLOBAL_2_M_PCB_I, &_GLOBAL_3_M_PCB_I, &_GLOBAL_4_M_PCB_I, &_GLOBAL_5_M_PCB_I, &_GLOBAL_6_M_PCB_I, &_GLOBAL_7_M_PCB_I, &_GLOBAL_8_M_PCB_I, &_GLOBAL_9_M_PCB_I, &_GLOBAL_10_M_PCB_I, &_GLOBAL_11_M_PCB_I, &_GLOBAL_12_M_PCB_I, &_GLOBAL_13_M_PCB_I, &_GLOBAL_14_M_PCB_I, &_GLOBAL_15_M_PCB_I, &_GLOBAL_16_M_PCB_I, &_GLOBAL_17_M_PCB_I, &_GLOBAL_18_M_PCB_I, &_GLOBAL_19_M_PCB_I, &_GLOBAL_20_M_PCB_I, &_GLOBAL_21_M_PCB_I, &_GLOBAL_22_M_PCB_I, &_GLOBAL_23_M_PCB_I, &_GLOBAL_24_M_PCB_I, &_GLOBAL_25_M_PCB_I, &_GLOBAL_26_M_PCB_I, &_GLOBAL_27_M_PCB_I, &_GLOBAL_28_M_PCB_I, &_GLOBAL_29_M_PCB_I, &_GLOBAL_30_M_PCB_I, &_GLOBAL_31_M_PCB_I, &_GLOBAL_32_M_PCB_I, &_GLOBAL_33_M_PCB_I, &_GLOBAL_34_M_PCB_I, &_GLOBAL_35_M_PCB_I, &_GLOBAL_36_M_PCB_I, &_GLOBAL_37_M_PCB_I, &_GLOBAL_38_M_PCB_I, &_GLOBAL_39_M_PCB_I, &_GLOBAL_40_M_PCB_I, &_GLOBAL_41_M_PCB_I, &_GLOBAL_42_M_PCB_I, &_GLOBAL_43_M_PCB_I, &_GLOBAL_44_M_PCB_I, &_GLOBAL_45_M_PCB_I, &_GLOBAL_46_M_PCB_I, &_GLOBAL_47_M_PCB_I, &_GLOBAL_48_M_PCB_I, &_GLOBAL_49_M_PCB_I, };   
typedef  struct malloc_type   _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_38_A[NUM_STACKS] = { &_GLOBAL_0_M_SONAME_I, &_GLOBAL_1_M_SONAME_I, &_GLOBAL_2_M_SONAME_I, &_GLOBAL_3_M_SONAME_I, &_GLOBAL_4_M_SONAME_I, &_GLOBAL_5_M_SONAME_I, &_GLOBAL_6_M_SONAME_I, &_GLOBAL_7_M_SONAME_I, &_GLOBAL_8_M_SONAME_I, &_GLOBAL_9_M_SONAME_I, &_GLOBAL_10_M_SONAME_I, &_GLOBAL_11_M_SONAME_I, &_GLOBAL_12_M_SONAME_I, &_GLOBAL_13_M_SONAME_I, &_GLOBAL_14_M_SONAME_I, &_GLOBAL_15_M_SONAME_I, &_GLOBAL_16_M_SONAME_I, &_GLOBAL_17_M_SONAME_I, &_GLOBAL_18_M_SONAME_I, &_GLOBAL_19_M_SONAME_I, &_GLOBAL_20_M_SONAME_I, &_GLOBAL_21_M_SONAME_I, &_GLOBAL_22_M_SONAME_I, &_GLOBAL_23_M_SONAME_I, &_GLOBAL_24_M_SONAME_I, &_GLOBAL_25_M_SONAME_I, &_GLOBAL_26_M_SONAME_I, &_GLOBAL_27_M_SONAME_I, &_GLOBAL_28_M_SONAME_I, &_GLOBAL_29_M_SONAME_I, &_GLOBAL_30_M_SONAME_I, &_GLOBAL_31_M_SONAME_I, &_GLOBAL_32_M_SONAME_I, &_GLOBAL_33_M_SONAME_I, &_GLOBAL_34_M_SONAME_I, &_GLOBAL_35_M_SONAME_I, &_GLOBAL_36_M_SONAME_I, &_GLOBAL_37_M_SONAME_I, &_GLOBAL_38_M_SONAME_I, &_GLOBAL_39_M_SONAME_I, &_GLOBAL_40_M_SONAME_I, &_GLOBAL_41_M_SONAME_I, &_GLOBAL_42_M_SONAME_I, &_GLOBAL_43_M_SONAME_I, &_GLOBAL_44_M_SONAME_I, &_GLOBAL_45_M_SONAME_I, &_GLOBAL_46_M_SONAME_I, &_GLOBAL_47_M_SONAME_I, &_GLOBAL_48_M_SONAME_I, &_GLOBAL_49_M_SONAME_I, };   


typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_152_T; extern  _GLOBAL_152_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_so_gencnt[NUM_STACKS];   

struct mbuf;
struct sockaddr;
struct ucred;
struct uio;




int do_setopt_accept_filter(struct socket *so, struct sockopt *sopt);
int so_setsockopt(struct socket *so, int level, int optname,
     void *optval, size_t optlen);
int sockargs(struct mbuf **mp, caddr_t buf, int buflen, int type);
int getsockaddr(struct sockaddr **namp, caddr_t uaddr, size_t len);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappend_locked(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
void sbappendstream_locked(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendaddr_locked(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
int sbappendcontrol_locked(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbappendrecord_locked(struct sockbuf *sb, struct mbuf *m0);
void sbcheck(struct sockbuf *sb);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdrop_locked(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbdroprecord_locked(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbflush_locked(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbinsertoob_locked(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb, struct socket *so);
void sbrelease_locked(struct sockbuf *sb, struct socket *so);
int sbreserve(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
int sbreserve_locked(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
void sbtoxsockbuf(struct sockbuf *sb, struct xsockbuf *xsb);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct sockaddr **nam);
struct socket *soalloc(int mflags);
int socheckuid(struct socket *so, uid_t uid);
int sobind(struct socket *so, struct sockaddr *nam, struct thread *td);
void socantrcvmore(struct socket *so);
void socantrcvmore_locked(struct socket *so);
void socantsendmore(struct socket *so);
void socantsendmore_locked(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct sockaddr *nam, struct thread *td);
int soconnect2(struct socket *so1, struct socket *so2);
int socow_setup(struct mbuf *m0, struct uio *uio);
int socreate(int dom, struct socket **aso, int type, int proto,
     struct ucred *cred, struct thread *td);
void sodealloc(struct socket *so);
int sodisconnect(struct socket *so);
struct sockaddr *sodupsockaddr(const struct sockaddr *sa, int mflags);
void sofree(struct socket *so);
int sogetopt(struct socket *so, struct sockopt *sopt);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog, struct thread *td);
void solisten_proto(struct socket *so);
int solisten_proto_check(struct socket *so);
struct socket *
 sonewconn(struct socket *head, int connstatus);
int sooptcopyin(struct sockopt *sopt, void *buf, size_t len, size_t minlen);
int sooptcopyout(struct sockopt *sopt, const void *buf, size_t len);


int soopt_getm(struct sockopt *sopt, struct mbuf **mp);
int soopt_mcopyin(struct sockopt *sopt, struct mbuf *m);
int soopt_mcopyout(struct sockopt *sopt, struct mbuf *m);

int sopoll(struct socket *so, int events, struct ucred *active_cred,
     struct thread *td);
int soreceive(struct socket *so, struct sockaddr **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct sockaddr *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags,
     struct thread *td);
int sosetopt(struct socket *so, struct sockopt *sopt);
int soshutdown(struct socket *so, int how);
void sotoxsocket(struct socket *so, struct xsocket *xso);
void sowakeup(struct socket *so, struct sockbuf *sb);
# 556 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
int accept_filt_add(struct accept_filter *filt);
int accept_filt_del(char *name);
struct accept_filter *accept_filt_get(char *name);
# 59 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/resource.h" 1
# 57 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;

};
# 125 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};



struct orlimit {
 __int32_t rlim_cur;
 __int32_t rlim_max;
};

struct loadavg {
 __fixpt_t ldavg[3];
 long fscale;
};
# 153 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
typedef  struct loadavg   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_averunnable[NUM_STACKS];    
typedef  long  _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_1_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_2_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_3_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_4_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_5_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_6_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_7_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_8_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_9_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_10_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_11_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_12_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_13_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_14_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_15_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_16_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_17_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_18_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_19_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_20_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_21_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_22_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_23_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_24_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_25_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_26_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_27_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_28_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_29_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_30_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_31_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_32_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_33_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_34_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_35_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_36_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_37_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_38_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_39_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_40_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_41_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_42_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_43_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_44_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_45_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_46_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_47_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_48_cp_time_I [ 5 ] ; extern  _GLOBAL_155_T  _GLOBAL_49_cp_time_I [ 5 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cp_time_I) *_GLOBAL_cp_time_39_A[NUM_STACKS];  
# 37 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct pstats {

 struct rusage p_ru;
 struct rusage p_cru;
 struct itimerval p_timer[3];



 struct uprof {
  caddr_t pr_base;
  u_long pr_size;
  u_long pr_off;
  u_long pr_scale;
 } p_prof;

 struct timeval p_start;
};
# 78 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct plimit {
 struct rlimit pl_rlimit[11];
 int pl_refcnt;
 struct mtx *pl_mtx;
};
# 96 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct uidinfo {
 struct { struct uidinfo *le_next; struct uidinfo **le_prev; } ui_hash;
 rlim_t ui_sbsize;
 long ui_proccnt;
 uid_t ui_uid;
 u_int ui_ref;
 struct mtx *ui_mtxp;
};




struct proc;
struct thread;

void addupc_intr(struct thread *td, uintptr_t pc, u_int ticks);
void addupc_task(struct thread *td, uintptr_t pc, u_int ticks);
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
     struct timeval *ip);
int chgproccnt(struct uidinfo *uip, int diff, int maxval);
int chgsbsize(struct uidinfo *uip, u_int *hiwat, u_int to,
     rlim_t maxval);
int fuswintr(void *base);
struct plimit
 *lim_alloc(void);
void lim_copy(struct plimit *dst, struct plimit *src);
rlim_t lim_cur(struct proc *p, int which);
void lim_free(struct plimit *limp);
struct plimit
 *lim_hold(struct plimit *limp);
rlim_t lim_max(struct proc *p, int which);
void lim_rlimit(struct proc *p, int which, struct rlimit *rlp);
void ruadd(struct rusage *ru, struct rusage *ru2);
int suswintr(void *base, int word);
struct uidinfo
 *uifind(uid_t uid);
void uifree(struct uidinfo *uip);
void uihashinit(void);
void uihold(struct uidinfo *uip);
# 60 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 1
# 53 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
struct sigacts {
 sig_t ps_sigact[128];
 sigset_t ps_catchmask[128];
 sigset_t ps_sigonstack;
 sigset_t ps_sigintr;
 sigset_t ps_sigreset;
 sigset_t ps_signodefer;
 sigset_t ps_siginfo;
 sigset_t ps_sigignore;
 sigset_t ps_sigcatch;
 sigset_t ps_freebsd4;
 sigset_t ps_osigset;
 sigset_t ps_usertramp;
 int ps_flag;
 int ps_refcnt;
 struct mtx ps_mtx;
};
# 178 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
__sigisempty(sigset_t *set)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i])
   return (0);
 }
 return (1);
}

static __inline int
__sigseteq(sigset_t *set1, sigset_t *set2)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set1->__bits[i] != set2->__bits[i])
   return (0);
 }
 return (1);
}
# 209 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
typedef enum sigtarget_enum { SIGTARGET_P, SIGTARGET_TD } sigtarget_t;
# 221 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
sigsetmasked(sigset_t *set, sigset_t *mask)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i] & ~mask->__bits[i])
   return (0);
 }
 return (1);
}

struct pgrp;
struct thread;
struct proc;
struct sigio;
struct mtx;

typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_sugid_coredump[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_sigio_lock[NUM_STACKS];    
# 255 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
int cursig(struct thread *td);
void execsigs(struct proc *p);
void gsignal(int pgid, int sig);
void killproc(struct proc *p, char *why);
void pgsigio(struct sigio **, int signum, int checkctty);
void pgsignal(struct pgrp *pgrp, int sig, int checkctty);
void postsig(int sig);
void psignal(struct proc *p, int sig);
struct sigacts *sigacts_alloc(void);
void sigacts_copy(struct sigacts *dest, struct sigacts *src);
void sigacts_free(struct sigacts *ps);
struct sigacts *sigacts_hold(struct sigacts *ps);
int sigacts_shared(struct sigacts *ps);
void sigexit(struct thread *td, int signum) __attribute__((__noreturn__)) ;
int sig_ffs(sigset_t *set);
void siginit(struct proc *p);
void signotify(struct thread *td);
void tdsignal(struct thread *td, int sig, sigtarget_t target);
void trapsignal(struct thread *td, int sig, u_long code);
int ptracestop(struct thread *td, int sig);




void sendsig(sig_t action, int sig, sigset_t *retmask, u_long code);
# 61 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct thread;
# 60 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 127 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_req {
 struct thread *td;
 int lock;
 void *oldptr;
 size_t oldlen;
 size_t oldidx;
 int (*oldfunc)(struct sysctl_req *, const void *, size_t);
 void *newptr;
 size_t newlen;
 size_t newidx;
 int (*newfunc)(struct sysctl_req *, void *, size_t);
 size_t validlen;
};

struct sysctl_oid_list { struct sysctl_oid *slh_first; };





struct sysctl_oid {
 struct sysctl_oid_list *oid_parent;
 struct { struct sysctl_oid *sle_next; } oid_link;
 int oid_number;
 u_int oid_kind;
 void *oid_arg1;
 int oid_arg2;
 const char *oid_name;
 int (*oid_handler)(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
 const char *oid_fmt;
 int oid_refcnt;
 const char *descr;
};




int sysctl_handle_int(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_long(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_intptr(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_string(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_opaque(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);




void sysctl_register_oid(struct sysctl_oid *oidp);
void sysctl_unregister_oid(struct sysctl_oid *oidp);
# 191 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_ctx_entry {
 struct sysctl_oid *entry;
 struct { struct sysctl_ctx_entry *tqe_next; struct sysctl_ctx_entry **tqe_prev; } link;
};

struct sysctl_ctx_list { struct sysctl_ctx_entry *tqh_first; struct sysctl_ctx_entry **tqh_last; };
# 584 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
typedef  struct sysctl_oid_list   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_170_T; extern  _GLOBAL_170_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_40_A[NUM_STACKS];  
typedef  char  _GLOBAL_171_T; extern  _GLOBAL_171_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_41_A[NUM_STACKS];  
typedef  char  _GLOBAL_172_T; extern  _GLOBAL_172_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_42_A[NUM_STACKS];  
typedef  char  _GLOBAL_173_T; extern  _GLOBAL_173_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_173_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_43_A[NUM_STACKS];  


struct sysctl_oid *sysctl_add_oid(struct sysctl_ctx_list *clist,
  struct sysctl_oid_list *parent, int nbr, const char *name,
  int kind, void *arg1, int arg2,
  int (*handler) (struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req),
  const char *fmt, const char *descr);
int sysctl_move_oid(struct sysctl_oid *oidp,
  struct sysctl_oid_list *parent);
int sysctl_remove_oid(struct sysctl_oid *oidp, int del, int recurse);
int sysctl_ctx_init(struct sysctl_ctx_list *clist);
int sysctl_ctx_free(struct sysctl_ctx_list *clist);
struct sysctl_ctx_entry *sysctl_ctx_entry_add(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
struct sysctl_ctx_entry *sysctl_ctx_entry_find(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
int sysctl_ctx_entry_del(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);

int kernel_sysctl(struct thread *td, int *name, u_int namelen, void *old,
        size_t *oldlenp, void *new, size_t newlen,
        size_t *retval);
int kernel_sysctlbyname(struct thread *td, char *name,
  void *old, size_t *oldlenp, void *new, size_t newlen,
  size_t *retval);
int userland_sysctl(struct thread *td, int *name, u_int namelen, void *old,
   size_t *oldlenp, int inkernel, void *new, size_t newlen,
   size_t *retval);
int sysctl_find_oid(int *name, u_int namelen, struct sysctl_oid **noid,
   int *nindx, struct sysctl_req *req);
int sysctl_wire_old_buffer(struct sysctl_req *req, size_t len);
# 62 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE,
 UIO_NOCOPY
};




struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 int uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct thread *uio_td;
};
# 81 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
struct vm_object;
struct vm_page;

struct uio *cloneuio(struct uio *uiop);
int copyinfrom(const void * restrict src, void * restrict dst,
     size_t len, int seg);
int copyiniov(struct iovec *iovp, u_int iovcnt, struct iovec **iov,
     int error);
int copyinstrfrom(const void * restrict src, void * restrict dst,
     size_t len, size_t * restrict copied, int seg);
int copyinuio(struct iovec *iovp, u_int iovcnt, struct uio **uiop);
void uio_yield(void);
int uiomove(void *cp, int n, struct uio *uio);
int uiomove_frombuf(void *buf, int buflen, struct uio *uio);
int uiomove_fromphys(struct vm_page *ma[], vm_offset_t offset, int n,
     struct uio *uio);
int uiomoveco(void *cp, int n, struct uio *uio, struct vm_object *obj,
     int disposable);
# 63 "freebsd5/kern/uipc_socket.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/jail.h" 1
# 16 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
struct jail {
 u_int32_t version;
 char *path;
 char *hostname;
 u_int32_t ip_number;
};

struct xprison {
 int pr_version;
 int pr_id;
 char pr_path[1024];
 char pr_host[256];
 u_int32_t pr_ip;
};
# 42 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
# 1 "freebsd5/freebsd/usr/include/sys/_task.h" 1
# 40 "freebsd5/freebsd/usr/include/sys/_task.h"
typedef void task_fn_t(void *context, int pending);

struct task {
 struct { struct task *stqe_next; } ta_link;
 int ta_pending;
 int ta_priority;
 task_fn_t *ta_func;
 void *ta_context;
};
# 43 "freebsd5/freebsd/usr/src/sys/sys/jail.h" 2




typedef  struct malloc_type   _GLOBAL_174_T; extern  _GLOBAL_174_T  _GLOBAL_0_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_1_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_2_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_3_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_4_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_5_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_6_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_7_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_8_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_9_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_10_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_11_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_12_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_13_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_14_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_15_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_16_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_17_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_18_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_19_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_20_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_21_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_22_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_23_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_24_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_25_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_26_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_27_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_28_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_29_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_30_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_31_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_32_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_33_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_34_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_35_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_36_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_37_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_38_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_39_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_40_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_41_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_42_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_43_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_44_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_45_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_46_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_47_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_48_M_PRISON_I [ 1 ] ; extern  _GLOBAL_174_T  _GLOBAL_49_M_PRISON_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PRISON_I) *_GLOBAL_M_PRISON_44_A[NUM_STACKS];   
# 62 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
struct prison {
 struct { struct prison *le_next; struct prison **le_prev; } pr_list;
 int pr_id;
 int pr_ref;
 char pr_path[1024];
 struct vnode *pr_root;
 char pr_host[256];
 u_int32_t pr_ip;
 void *pr_linux;
 int pr_securelevel;
 struct task pr_task;
 struct mtx pr_mtx;
};






typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_jail_set_hostname_allowed[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_jail_socket_unixiproute_only[NUM_STACKS];   
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_jail_sysvipc_allowed[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_jail_getfsstat_jailrootonly[NUM_STACKS];   
typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_jail_allow_raw_sockets[NUM_STACKS];   
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_jail_chflags_allowed[NUM_STACKS];   

struct prisonlist { struct prison *lh_first; };
typedef  struct prisonlist   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_allprison[NUM_STACKS];    




struct ucred;
struct mount;
struct sockaddr;
int jailed(struct ucred *cred);
void getcredhostname(struct ucred *cred, char *, size_t);
int prison_check(struct ucred *cred1, struct ucred *cred2);
int prison_check_mount(struct ucred *cred, struct mount *mp);
void prison_free(struct prison *pr);
u_int32_t prison_getip(struct ucred *cred);
void prison_hold(struct prison *pr);
int prison_if(struct ucred *cred, struct sockaddr *sa);
int prison_ip(struct ucred *cred, int flag, u_int32_t *ip);
void prison_remote_ip(struct ucred *cred, int flags, u_int32_t *ip);
# 64 "freebsd5/kern/uipc_socket.c" 2




static int soreceive_rcvoob(struct socket *so, struct uio *uio,
      int flags);


                              int do_setopt_accept_filter(struct socket *so, struct sockopt *sopt);


static void filt_sordetach(struct knote *kn);
static int filt_soread(struct knote *kn, long hint);
static void filt_sowdetach(struct knote *kn);
static int filt_sowrite(struct knote *kn, long hint);
static int filt_solisten(struct knote *kn, long hint);

typedef  struct filterops   _GLOBAL_182_T; static  _GLOBAL_182_T  global_solisten_filtops[NUM_STACKS] = {  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_solisten  } ,  };     
       
typedef  struct filterops   _GLOBAL_183_T; static  _GLOBAL_183_T  global_soread_filtops[NUM_STACKS] = {  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  { 1 , ( ( void *  ) 0  )   , filt_sordetach  , filt_soread  } ,  };     
       
typedef  struct filterops   _GLOBAL_184_T; static  _GLOBAL_184_T  global_sowrite_filtops[NUM_STACKS] = {  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  { 1 , ( ( void *  ) 0  )   , filt_sowdetach  , filt_sowrite  } ,  };     
       

typedef  uma_zone_t _GLOBAL_185_T;  _GLOBAL_185_T  global_socket_zone[NUM_STACKS];  
typedef  so_gen_t _GLOBAL_186_T;  _GLOBAL_186_T  global_so_gencnt[NUM_STACKS];  

typedef  struct malloc_type  _GLOBAL_187_T;  _GLOBAL_187_T  _GLOBAL_0_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_1_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_2_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_3_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_4_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_5_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_6_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_7_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_8_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_9_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_10_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_11_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_12_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_13_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_14_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_15_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_16_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_17_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_18_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_19_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_20_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_21_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_22_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_23_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_24_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_25_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_26_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_27_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_28_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_29_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_30_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_31_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_32_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_33_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_34_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_35_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_36_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_37_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_38_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_39_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_40_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_41_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_42_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_43_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_44_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_45_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_46_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_47_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_48_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ;  _GLOBAL_187_T  _GLOBAL_49_M_SONAME_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "soname"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_45_A[NUM_STACKS] = { &_GLOBAL_0_M_SONAME_I, &_GLOBAL_1_M_SONAME_I, &_GLOBAL_2_M_SONAME_I, &_GLOBAL_3_M_SONAME_I, &_GLOBAL_4_M_SONAME_I, &_GLOBAL_5_M_SONAME_I, &_GLOBAL_6_M_SONAME_I, &_GLOBAL_7_M_SONAME_I, &_GLOBAL_8_M_SONAME_I, &_GLOBAL_9_M_SONAME_I, &_GLOBAL_10_M_SONAME_I, &_GLOBAL_11_M_SONAME_I, &_GLOBAL_12_M_SONAME_I, &_GLOBAL_13_M_SONAME_I, &_GLOBAL_14_M_SONAME_I, &_GLOBAL_15_M_SONAME_I, &_GLOBAL_16_M_SONAME_I, &_GLOBAL_17_M_SONAME_I, &_GLOBAL_18_M_SONAME_I, &_GLOBAL_19_M_SONAME_I, &_GLOBAL_20_M_SONAME_I, &_GLOBAL_21_M_SONAME_I, &_GLOBAL_22_M_SONAME_I, &_GLOBAL_23_M_SONAME_I, &_GLOBAL_24_M_SONAME_I, &_GLOBAL_25_M_SONAME_I, &_GLOBAL_26_M_SONAME_I, &_GLOBAL_27_M_SONAME_I, &_GLOBAL_28_M_SONAME_I, &_GLOBAL_29_M_SONAME_I, &_GLOBAL_30_M_SONAME_I, &_GLOBAL_31_M_SONAME_I, &_GLOBAL_32_M_SONAME_I, &_GLOBAL_33_M_SONAME_I, &_GLOBAL_34_M_SONAME_I, &_GLOBAL_35_M_SONAME_I, &_GLOBAL_36_M_SONAME_I, &_GLOBAL_37_M_SONAME_I, &_GLOBAL_38_M_SONAME_I, &_GLOBAL_39_M_SONAME_I, &_GLOBAL_40_M_SONAME_I, &_GLOBAL_41_M_SONAME_I, &_GLOBAL_42_M_SONAME_I, &_GLOBAL_43_M_SONAME_I, &_GLOBAL_44_M_SONAME_I, &_GLOBAL_45_M_SONAME_I, &_GLOBAL_46_M_SONAME_I, &_GLOBAL_47_M_SONAME_I, &_GLOBAL_48_M_SONAME_I, &_GLOBAL_49_M_SONAME_I, };                  typedef  struct sysinit   _GLOBAL_188_T; static  _GLOBAL_188_T  global_M_SONAME_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_SONAME_I )   )   } ,  };             typedef  void const   _GLOBAL_189_T; static  _GLOBAL_189_T  * const  _global_section_0___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[0] ;static  _GLOBAL_189_T  * const  _global_section_1___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[1] ;static  _GLOBAL_189_T  * const  _global_section_2___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[2] ;static  _GLOBAL_189_T  * const  _global_section_3___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[3] ;static  _GLOBAL_189_T  * const  _global_section_4___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[4] ;static  _GLOBAL_189_T  * const  _global_section_5___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[5] ;static  _GLOBAL_189_T  * const  _global_section_6___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[6] ;static  _GLOBAL_189_T  * const  _global_section_7___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[7] ;static  _GLOBAL_189_T  * const  _global_section_8___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[8] ;static  _GLOBAL_189_T  * const  _global_section_9___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[9] ;static  _GLOBAL_189_T  * const  _global_section_10___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[10] ;static  _GLOBAL_189_T  * const  _global_section_11___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[11] ;static  _GLOBAL_189_T  * const  _global_section_12___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[12] ;static  _GLOBAL_189_T  * const  _global_section_13___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[13] ;static  _GLOBAL_189_T  * const  _global_section_14___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[14] ;static  _GLOBAL_189_T  * const  _global_section_15___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[15] ;static  _GLOBAL_189_T  * const  _global_section_16___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[16] ;static  _GLOBAL_189_T  * const  _global_section_17___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[17] ;static  _GLOBAL_189_T  * const  _global_section_18___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[18] ;static  _GLOBAL_189_T  * const  _global_section_19___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[19] ;static  _GLOBAL_189_T  * const  _global_section_20___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[20] ;static  _GLOBAL_189_T  * const  _global_section_21___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[21] ;static  _GLOBAL_189_T  * const  _global_section_22___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[22] ;static  _GLOBAL_189_T  * const  _global_section_23___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[23] ;static  _GLOBAL_189_T  * const  _global_section_24___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[24] ;static  _GLOBAL_189_T  * const  _global_section_25___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[25] ;static  _GLOBAL_189_T  * const  _global_section_26___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[26] ;static  _GLOBAL_189_T  * const  _global_section_27___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[27] ;static  _GLOBAL_189_T  * const  _global_section_28___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[28] ;static  _GLOBAL_189_T  * const  _global_section_29___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[29] ;static  _GLOBAL_189_T  * const  _global_section_30___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[30] ;static  _GLOBAL_189_T  * const  _global_section_31___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[31] ;static  _GLOBAL_189_T  * const  _global_section_32___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[32] ;static  _GLOBAL_189_T  * const  _global_section_33___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[33] ;static  _GLOBAL_189_T  * const  _global_section_34___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[34] ;static  _GLOBAL_189_T  * const  _global_section_35___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[35] ;static  _GLOBAL_189_T  * const  _global_section_36___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[36] ;static  _GLOBAL_189_T  * const  _global_section_37___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[37] ;static  _GLOBAL_189_T  * const  _global_section_38___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[38] ;static  _GLOBAL_189_T  * const  _global_section_39___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[39] ;static  _GLOBAL_189_T  * const  _global_section_40___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[40] ;static  _GLOBAL_189_T  * const  _global_section_41___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[41] ;static  _GLOBAL_189_T  * const  _global_section_42___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[42] ;static  _GLOBAL_189_T  * const  _global_section_43___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[43] ;static  _GLOBAL_189_T  * const  _global_section_44___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[44] ;static  _GLOBAL_189_T  * const  _global_section_45___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[45] ;static  _GLOBAL_189_T  * const  _global_section_46___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[46] ;static  _GLOBAL_189_T  * const  _global_section_47___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[47] ;static  _GLOBAL_189_T  * const  _global_section_48___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[48] ;static  _GLOBAL_189_T  * const  _global_section_49___set_sysinit_set_sym_M_SONAME_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_SONAME_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_190_T; static  _GLOBAL_190_T  global_M_SONAME_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_SONAME_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_SONAME_I )   )   } ,  };             typedef  void const   _GLOBAL_191_T; static  _GLOBAL_191_T  * const  global___set_sysuninit_set_sym_M_SONAME_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_SONAME_uninit_sys_uninit[0] ,  & global_M_SONAME_uninit_sys_uninit[1] ,  & global_M_SONAME_uninit_sys_uninit[2] ,  & global_M_SONAME_uninit_sys_uninit[3] ,  & global_M_SONAME_uninit_sys_uninit[4] ,  & global_M_SONAME_uninit_sys_uninit[5] ,  & global_M_SONAME_uninit_sys_uninit[6] ,  & global_M_SONAME_uninit_sys_uninit[7] ,  & global_M_SONAME_uninit_sys_uninit[8] ,  & global_M_SONAME_uninit_sys_uninit[9] ,  & global_M_SONAME_uninit_sys_uninit[10] ,  & global_M_SONAME_uninit_sys_uninit[11] ,  & global_M_SONAME_uninit_sys_uninit[12] ,  & global_M_SONAME_uninit_sys_uninit[13] ,  & global_M_SONAME_uninit_sys_uninit[14] ,  & global_M_SONAME_uninit_sys_uninit[15] ,  & global_M_SONAME_uninit_sys_uninit[16] ,  & global_M_SONAME_uninit_sys_uninit[17] ,  & global_M_SONAME_uninit_sys_uninit[18] ,  & global_M_SONAME_uninit_sys_uninit[19] ,  & global_M_SONAME_uninit_sys_uninit[20] ,  & global_M_SONAME_uninit_sys_uninit[21] ,  & global_M_SONAME_uninit_sys_uninit[22] ,  & global_M_SONAME_uninit_sys_uninit[23] ,  & global_M_SONAME_uninit_sys_uninit[24] ,  & global_M_SONAME_uninit_sys_uninit[25] ,  & global_M_SONAME_uninit_sys_uninit[26] ,  & global_M_SONAME_uninit_sys_uninit[27] ,  & global_M_SONAME_uninit_sys_uninit[28] ,  & global_M_SONAME_uninit_sys_uninit[29] ,  & global_M_SONAME_uninit_sys_uninit[30] ,  & global_M_SONAME_uninit_sys_uninit[31] ,  & global_M_SONAME_uninit_sys_uninit[32] ,  & global_M_SONAME_uninit_sys_uninit[33] ,  & global_M_SONAME_uninit_sys_uninit[34] ,  & global_M_SONAME_uninit_sys_uninit[35] ,  & global_M_SONAME_uninit_sys_uninit[36] ,  & global_M_SONAME_uninit_sys_uninit[37] ,  & global_M_SONAME_uninit_sys_uninit[38] ,  & global_M_SONAME_uninit_sys_uninit[39] ,  & global_M_SONAME_uninit_sys_uninit[40] ,  & global_M_SONAME_uninit_sys_uninit[41] ,  & global_M_SONAME_uninit_sys_uninit[42] ,  & global_M_SONAME_uninit_sys_uninit[43] ,  & global_M_SONAME_uninit_sys_uninit[44] ,  & global_M_SONAME_uninit_sys_uninit[45] ,  & global_M_SONAME_uninit_sys_uninit[46] ,  & global_M_SONAME_uninit_sys_uninit[47] ,  & global_M_SONAME_uninit_sys_uninit[48] ,  & global_M_SONAME_uninit_sys_uninit[49] ,  };          
typedef  struct malloc_type  _GLOBAL_192_T;  _GLOBAL_192_T  _GLOBAL_0_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_1_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_2_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_3_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_4_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_5_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_6_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_7_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_8_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_9_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_10_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_11_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_12_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_13_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_14_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_15_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_16_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_17_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_18_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_19_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_20_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_21_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_22_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_23_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_24_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_25_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_26_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_27_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_28_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_29_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_30_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_31_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_32_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_33_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_34_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_35_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_36_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_37_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_38_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_39_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_40_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_41_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_42_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_43_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_44_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_45_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_46_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_47_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_48_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ;  _GLOBAL_192_T  _GLOBAL_49_M_PCB_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "pcb"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_46_A[NUM_STACKS] = { &_GLOBAL_0_M_PCB_I, &_GLOBAL_1_M_PCB_I, &_GLOBAL_2_M_PCB_I, &_GLOBAL_3_M_PCB_I, &_GLOBAL_4_M_PCB_I, &_GLOBAL_5_M_PCB_I, &_GLOBAL_6_M_PCB_I, &_GLOBAL_7_M_PCB_I, &_GLOBAL_8_M_PCB_I, &_GLOBAL_9_M_PCB_I, &_GLOBAL_10_M_PCB_I, &_GLOBAL_11_M_PCB_I, &_GLOBAL_12_M_PCB_I, &_GLOBAL_13_M_PCB_I, &_GLOBAL_14_M_PCB_I, &_GLOBAL_15_M_PCB_I, &_GLOBAL_16_M_PCB_I, &_GLOBAL_17_M_PCB_I, &_GLOBAL_18_M_PCB_I, &_GLOBAL_19_M_PCB_I, &_GLOBAL_20_M_PCB_I, &_GLOBAL_21_M_PCB_I, &_GLOBAL_22_M_PCB_I, &_GLOBAL_23_M_PCB_I, &_GLOBAL_24_M_PCB_I, &_GLOBAL_25_M_PCB_I, &_GLOBAL_26_M_PCB_I, &_GLOBAL_27_M_PCB_I, &_GLOBAL_28_M_PCB_I, &_GLOBAL_29_M_PCB_I, &_GLOBAL_30_M_PCB_I, &_GLOBAL_31_M_PCB_I, &_GLOBAL_32_M_PCB_I, &_GLOBAL_33_M_PCB_I, &_GLOBAL_34_M_PCB_I, &_GLOBAL_35_M_PCB_I, &_GLOBAL_36_M_PCB_I, &_GLOBAL_37_M_PCB_I, &_GLOBAL_38_M_PCB_I, &_GLOBAL_39_M_PCB_I, &_GLOBAL_40_M_PCB_I, &_GLOBAL_41_M_PCB_I, &_GLOBAL_42_M_PCB_I, &_GLOBAL_43_M_PCB_I, &_GLOBAL_44_M_PCB_I, &_GLOBAL_45_M_PCB_I, &_GLOBAL_46_M_PCB_I, &_GLOBAL_47_M_PCB_I, &_GLOBAL_48_M_PCB_I, &_GLOBAL_49_M_PCB_I, };                  typedef  struct sysinit   _GLOBAL_193_T; static  _GLOBAL_193_T  global_M_PCB_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_PCB_I )   )   } ,  };             typedef  void const   _GLOBAL_194_T; static  _GLOBAL_194_T  * const  _global_section_0___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[0] ;static  _GLOBAL_194_T  * const  _global_section_1___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[1] ;static  _GLOBAL_194_T  * const  _global_section_2___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[2] ;static  _GLOBAL_194_T  * const  _global_section_3___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[3] ;static  _GLOBAL_194_T  * const  _global_section_4___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[4] ;static  _GLOBAL_194_T  * const  _global_section_5___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[5] ;static  _GLOBAL_194_T  * const  _global_section_6___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[6] ;static  _GLOBAL_194_T  * const  _global_section_7___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[7] ;static  _GLOBAL_194_T  * const  _global_section_8___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[8] ;static  _GLOBAL_194_T  * const  _global_section_9___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[9] ;static  _GLOBAL_194_T  * const  _global_section_10___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[10] ;static  _GLOBAL_194_T  * const  _global_section_11___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[11] ;static  _GLOBAL_194_T  * const  _global_section_12___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[12] ;static  _GLOBAL_194_T  * const  _global_section_13___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[13] ;static  _GLOBAL_194_T  * const  _global_section_14___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[14] ;static  _GLOBAL_194_T  * const  _global_section_15___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[15] ;static  _GLOBAL_194_T  * const  _global_section_16___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[16] ;static  _GLOBAL_194_T  * const  _global_section_17___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[17] ;static  _GLOBAL_194_T  * const  _global_section_18___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[18] ;static  _GLOBAL_194_T  * const  _global_section_19___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[19] ;static  _GLOBAL_194_T  * const  _global_section_20___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[20] ;static  _GLOBAL_194_T  * const  _global_section_21___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[21] ;static  _GLOBAL_194_T  * const  _global_section_22___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[22] ;static  _GLOBAL_194_T  * const  _global_section_23___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[23] ;static  _GLOBAL_194_T  * const  _global_section_24___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[24] ;static  _GLOBAL_194_T  * const  _global_section_25___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[25] ;static  _GLOBAL_194_T  * const  _global_section_26___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[26] ;static  _GLOBAL_194_T  * const  _global_section_27___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[27] ;static  _GLOBAL_194_T  * const  _global_section_28___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[28] ;static  _GLOBAL_194_T  * const  _global_section_29___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[29] ;static  _GLOBAL_194_T  * const  _global_section_30___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[30] ;static  _GLOBAL_194_T  * const  _global_section_31___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[31] ;static  _GLOBAL_194_T  * const  _global_section_32___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[32] ;static  _GLOBAL_194_T  * const  _global_section_33___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[33] ;static  _GLOBAL_194_T  * const  _global_section_34___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[34] ;static  _GLOBAL_194_T  * const  _global_section_35___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[35] ;static  _GLOBAL_194_T  * const  _global_section_36___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[36] ;static  _GLOBAL_194_T  * const  _global_section_37___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[37] ;static  _GLOBAL_194_T  * const  _global_section_38___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[38] ;static  _GLOBAL_194_T  * const  _global_section_39___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[39] ;static  _GLOBAL_194_T  * const  _global_section_40___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[40] ;static  _GLOBAL_194_T  * const  _global_section_41___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[41] ;static  _GLOBAL_194_T  * const  _global_section_42___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[42] ;static  _GLOBAL_194_T  * const  _global_section_43___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[43] ;static  _GLOBAL_194_T  * const  _global_section_44___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[44] ;static  _GLOBAL_194_T  * const  _global_section_45___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[45] ;static  _GLOBAL_194_T  * const  _global_section_46___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[46] ;static  _GLOBAL_194_T  * const  _global_section_47___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[47] ;static  _GLOBAL_194_T  * const  _global_section_48___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[48] ;static  _GLOBAL_194_T  * const  _global_section_49___set_sysinit_set_sym_M_PCB_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_PCB_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_195_T; static  _GLOBAL_195_T  global_M_PCB_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_PCB_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_PCB_I )   )   } ,  };             typedef  void const   _GLOBAL_196_T; static  _GLOBAL_196_T  * const  global___set_sysuninit_set_sym_M_PCB_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_PCB_uninit_sys_uninit[0] ,  & global_M_PCB_uninit_sys_uninit[1] ,  & global_M_PCB_uninit_sys_uninit[2] ,  & global_M_PCB_uninit_sys_uninit[3] ,  & global_M_PCB_uninit_sys_uninit[4] ,  & global_M_PCB_uninit_sys_uninit[5] ,  & global_M_PCB_uninit_sys_uninit[6] ,  & global_M_PCB_uninit_sys_uninit[7] ,  & global_M_PCB_uninit_sys_uninit[8] ,  & global_M_PCB_uninit_sys_uninit[9] ,  & global_M_PCB_uninit_sys_uninit[10] ,  & global_M_PCB_uninit_sys_uninit[11] ,  & global_M_PCB_uninit_sys_uninit[12] ,  & global_M_PCB_uninit_sys_uninit[13] ,  & global_M_PCB_uninit_sys_uninit[14] ,  & global_M_PCB_uninit_sys_uninit[15] ,  & global_M_PCB_uninit_sys_uninit[16] ,  & global_M_PCB_uninit_sys_uninit[17] ,  & global_M_PCB_uninit_sys_uninit[18] ,  & global_M_PCB_uninit_sys_uninit[19] ,  & global_M_PCB_uninit_sys_uninit[20] ,  & global_M_PCB_uninit_sys_uninit[21] ,  & global_M_PCB_uninit_sys_uninit[22] ,  & global_M_PCB_uninit_sys_uninit[23] ,  & global_M_PCB_uninit_sys_uninit[24] ,  & global_M_PCB_uninit_sys_uninit[25] ,  & global_M_PCB_uninit_sys_uninit[26] ,  & global_M_PCB_uninit_sys_uninit[27] ,  & global_M_PCB_uninit_sys_uninit[28] ,  & global_M_PCB_uninit_sys_uninit[29] ,  & global_M_PCB_uninit_sys_uninit[30] ,  & global_M_PCB_uninit_sys_uninit[31] ,  & global_M_PCB_uninit_sys_uninit[32] ,  & global_M_PCB_uninit_sys_uninit[33] ,  & global_M_PCB_uninit_sys_uninit[34] ,  & global_M_PCB_uninit_sys_uninit[35] ,  & global_M_PCB_uninit_sys_uninit[36] ,  & global_M_PCB_uninit_sys_uninit[37] ,  & global_M_PCB_uninit_sys_uninit[38] ,  & global_M_PCB_uninit_sys_uninit[39] ,  & global_M_PCB_uninit_sys_uninit[40] ,  & global_M_PCB_uninit_sys_uninit[41] ,  & global_M_PCB_uninit_sys_uninit[42] ,  & global_M_PCB_uninit_sys_uninit[43] ,  & global_M_PCB_uninit_sys_uninit[44] ,  & global_M_PCB_uninit_sys_uninit[45] ,  & global_M_PCB_uninit_sys_uninit[46] ,  & global_M_PCB_uninit_sys_uninit[47] ,  & global_M_PCB_uninit_sys_uninit[48] ,  & global_M_PCB_uninit_sys_uninit[49] ,  };          

typedef  struct sysctl_oid_list   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_sysctl__kern_ipc_children[NUM_STACKS];    

typedef  int  _GLOBAL_198_T; static  _GLOBAL_198_T  global_somaxconn[NUM_STACKS] = {  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  };     
typedef  struct sysctl_oid   _GLOBAL_199_T; static  _GLOBAL_199_T  global_sysctl___kern_ipc_somaxconn[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[0]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[1]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[2]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[3]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[4]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[5]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[6]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[7]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[8]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[9]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[10]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[11]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[12]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[13]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[14]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[15]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[16]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[17]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[18]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[19]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[20]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[21]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[22]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[23]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[24]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[25]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[26]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[27]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[28]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[29]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[30]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[31]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[32]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[33]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[34]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[35]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[36]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[37]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[38]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[39]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[40]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[41]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[42]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[43]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[44]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[45]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[46]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[47]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[48]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_somaxconn[49]   , 0  , "somaxconn"  , sysctl_handle_int  , "I"  , 0  , "Maximum pending socket connection queue size"  } ,  };   
 
# 97 "freebsd5/kern/uipc_socket.c"
   
 
# 97 "freebsd5/kern/uipc_socket.c"
               typedef  void const   _GLOBAL_200_T; static  _GLOBAL_200_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[0] ;static  _GLOBAL_200_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[1] ;static  _GLOBAL_200_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[2] ;static  _GLOBAL_200_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[3] ;static  _GLOBAL_200_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[4] ;static  _GLOBAL_200_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[5] ;static  _GLOBAL_200_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[6] ;static  _GLOBAL_200_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[7] ;static  _GLOBAL_200_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[8] ;static  _GLOBAL_200_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[9] ;static  _GLOBAL_200_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[10] ;static  _GLOBAL_200_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[11] ;static  _GLOBAL_200_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[12] ;static  _GLOBAL_200_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[13] ;static  _GLOBAL_200_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[14] ;static  _GLOBAL_200_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[15] ;static  _GLOBAL_200_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[16] ;static  _GLOBAL_200_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[17] ;static  _GLOBAL_200_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[18] ;static  _GLOBAL_200_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[19] ;static  _GLOBAL_200_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[20] ;static  _GLOBAL_200_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[21] ;static  _GLOBAL_200_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[22] ;static  _GLOBAL_200_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[23] ;static  _GLOBAL_200_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[24] ;static  _GLOBAL_200_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[25] ;static  _GLOBAL_200_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[26] ;static  _GLOBAL_200_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[27] ;static  _GLOBAL_200_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[28] ;static  _GLOBAL_200_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[29] ;static  _GLOBAL_200_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[30] ;static  _GLOBAL_200_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[31] ;static  _GLOBAL_200_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[32] ;static  _GLOBAL_200_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[33] ;static  _GLOBAL_200_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[34] ;static  _GLOBAL_200_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[35] ;static  _GLOBAL_200_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[36] ;static  _GLOBAL_200_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[37] ;static  _GLOBAL_200_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[38] ;static  _GLOBAL_200_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[39] ;static  _GLOBAL_200_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[40] ;static  _GLOBAL_200_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[41] ;static  _GLOBAL_200_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[42] ;static  _GLOBAL_200_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[43] ;static  _GLOBAL_200_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[44] ;static  _GLOBAL_200_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[45] ;static  _GLOBAL_200_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[46] ;static  _GLOBAL_200_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[47] ;static  _GLOBAL_200_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[48] ;static  _GLOBAL_200_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_somaxconn __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_somaxconn[49] ;    
 
# 97 "freebsd5/kern/uipc_socket.c"
    
                                                                  
typedef  int  _GLOBAL_201_T; static  _GLOBAL_201_T  global_numopensockets[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_202_T; static  _GLOBAL_202_T  global_sysctl___kern_ipc_numopensockets[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[0]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[1]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[2]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[3]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[4]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[5]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[6]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[7]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[8]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[9]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[10]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[11]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[12]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[13]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[14]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[15]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[16]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[17]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[18]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[19]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[20]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[21]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[22]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[23]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[24]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[25]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[26]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[27]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[28]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[29]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[30]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[31]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[32]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[33]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[34]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[35]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[36]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[37]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[38]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[39]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[40]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[41]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[42]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[43]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[44]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[45]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[46]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[47]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[48]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_numopensockets[49]   , 0  , "numopensockets"  , sysctl_handle_int  , "I"  , 0  , "Number of open sockets"  } ,  };   
 
# 100 "freebsd5/kern/uipc_socket.c"
   
 
# 100 "freebsd5/kern/uipc_socket.c"
               typedef  void const   _GLOBAL_203_T; static  _GLOBAL_203_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[0] ;static  _GLOBAL_203_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[1] ;static  _GLOBAL_203_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[2] ;static  _GLOBAL_203_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[3] ;static  _GLOBAL_203_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[4] ;static  _GLOBAL_203_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[5] ;static  _GLOBAL_203_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[6] ;static  _GLOBAL_203_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[7] ;static  _GLOBAL_203_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[8] ;static  _GLOBAL_203_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[9] ;static  _GLOBAL_203_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[10] ;static  _GLOBAL_203_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[11] ;static  _GLOBAL_203_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[12] ;static  _GLOBAL_203_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[13] ;static  _GLOBAL_203_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[14] ;static  _GLOBAL_203_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[15] ;static  _GLOBAL_203_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[16] ;static  _GLOBAL_203_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[17] ;static  _GLOBAL_203_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[18] ;static  _GLOBAL_203_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[19] ;static  _GLOBAL_203_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[20] ;static  _GLOBAL_203_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[21] ;static  _GLOBAL_203_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[22] ;static  _GLOBAL_203_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[23] ;static  _GLOBAL_203_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[24] ;static  _GLOBAL_203_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[25] ;static  _GLOBAL_203_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[26] ;static  _GLOBAL_203_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[27] ;static  _GLOBAL_203_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[28] ;static  _GLOBAL_203_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[29] ;static  _GLOBAL_203_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[30] ;static  _GLOBAL_203_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[31] ;static  _GLOBAL_203_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[32] ;static  _GLOBAL_203_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[33] ;static  _GLOBAL_203_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[34] ;static  _GLOBAL_203_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[35] ;static  _GLOBAL_203_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[36] ;static  _GLOBAL_203_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[37] ;static  _GLOBAL_203_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[38] ;static  _GLOBAL_203_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[39] ;static  _GLOBAL_203_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[40] ;static  _GLOBAL_203_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[41] ;static  _GLOBAL_203_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[42] ;static  _GLOBAL_203_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[43] ;static  _GLOBAL_203_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[44] ;static  _GLOBAL_203_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[45] ;static  _GLOBAL_203_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[46] ;static  _GLOBAL_203_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[47] ;static  _GLOBAL_203_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[48] ;static  _GLOBAL_203_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_numopensockets __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_numopensockets[49] ;    
 
# 100 "freebsd5/kern/uipc_socket.c"
    
                                                 
# 118 "freebsd5/kern/uipc_socket.c"
typedef  struct mtx  _GLOBAL_204_T;  _GLOBAL_204_T  global_accept_mtx[NUM_STACKS];   
typedef  struct mtx_args   _GLOBAL_205_T; static  _GLOBAL_205_T  global_accept_mtx_args[NUM_STACKS] = {  { ( & global_accept_mtx[0]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[1]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[2]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[3]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[4]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[5]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[6]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[7]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[8]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[9]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[10]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[11]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[12]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[13]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[14]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[15]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[16]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[17]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[18]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[19]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[20]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[21]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[22]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[23]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[24]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[25]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[26]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[27]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[28]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[29]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[30]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[31]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[32]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[33]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[34]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[35]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[36]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[37]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[38]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[39]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[40]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[41]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[42]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[43]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[44]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[45]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[46]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[47]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[48]  )  , ( "accept" )   , ( 0x00000000 )   } ,  { ( & global_accept_mtx[49]  )  , ( "accept" )   , ( 0x00000000 )   } ,  };           typedef  struct sysinit   _GLOBAL_206_T; static  _GLOBAL_206_T  global_accept_mtx_mtx_sysinit_sys_init[NUM_STACKS] = {  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[0]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[1]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[2]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[3]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[4]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[5]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[6]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[7]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[8]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[9]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[10]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[11]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[12]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[13]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[14]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[15]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[16]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[17]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[18]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[19]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[20]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[21]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[22]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[23]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[24]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[25]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[26]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[27]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[28]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[29]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[30]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[31]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[32]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[33]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[34]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[35]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[36]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[37]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[38]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[39]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[40]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[41]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[42]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[43]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[44]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[45]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[46]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[47]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[48]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_accept_mtx_args[49]  )   )   } ,  };             typedef  void const   _GLOBAL_207_T; static  _GLOBAL_207_T  * const  _global_section_0___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[0] ;static  _GLOBAL_207_T  * const  _global_section_1___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[1] ;static  _GLOBAL_207_T  * const  _global_section_2___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[2] ;static  _GLOBAL_207_T  * const  _global_section_3___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[3] ;static  _GLOBAL_207_T  * const  _global_section_4___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[4] ;static  _GLOBAL_207_T  * const  _global_section_5___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[5] ;static  _GLOBAL_207_T  * const  _global_section_6___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[6] ;static  _GLOBAL_207_T  * const  _global_section_7___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[7] ;static  _GLOBAL_207_T  * const  _global_section_8___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[8] ;static  _GLOBAL_207_T  * const  _global_section_9___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[9] ;static  _GLOBAL_207_T  * const  _global_section_10___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[10] ;static  _GLOBAL_207_T  * const  _global_section_11___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[11] ;static  _GLOBAL_207_T  * const  _global_section_12___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[12] ;static  _GLOBAL_207_T  * const  _global_section_13___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[13] ;static  _GLOBAL_207_T  * const  _global_section_14___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[14] ;static  _GLOBAL_207_T  * const  _global_section_15___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[15] ;static  _GLOBAL_207_T  * const  _global_section_16___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[16] ;static  _GLOBAL_207_T  * const  _global_section_17___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[17] ;static  _GLOBAL_207_T  * const  _global_section_18___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[18] ;static  _GLOBAL_207_T  * const  _global_section_19___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[19] ;static  _GLOBAL_207_T  * const  _global_section_20___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[20] ;static  _GLOBAL_207_T  * const  _global_section_21___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[21] ;static  _GLOBAL_207_T  * const  _global_section_22___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[22] ;static  _GLOBAL_207_T  * const  _global_section_23___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[23] ;static  _GLOBAL_207_T  * const  _global_section_24___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[24] ;static  _GLOBAL_207_T  * const  _global_section_25___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[25] ;static  _GLOBAL_207_T  * const  _global_section_26___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[26] ;static  _GLOBAL_207_T  * const  _global_section_27___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[27] ;static  _GLOBAL_207_T  * const  _global_section_28___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[28] ;static  _GLOBAL_207_T  * const  _global_section_29___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[29] ;static  _GLOBAL_207_T  * const  _global_section_30___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[30] ;static  _GLOBAL_207_T  * const  _global_section_31___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[31] ;static  _GLOBAL_207_T  * const  _global_section_32___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[32] ;static  _GLOBAL_207_T  * const  _global_section_33___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[33] ;static  _GLOBAL_207_T  * const  _global_section_34___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[34] ;static  _GLOBAL_207_T  * const  _global_section_35___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[35] ;static  _GLOBAL_207_T  * const  _global_section_36___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[36] ;static  _GLOBAL_207_T  * const  _global_section_37___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[37] ;static  _GLOBAL_207_T  * const  _global_section_38___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[38] ;static  _GLOBAL_207_T  * const  _global_section_39___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[39] ;static  _GLOBAL_207_T  * const  _global_section_40___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[40] ;static  _GLOBAL_207_T  * const  _global_section_41___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[41] ;static  _GLOBAL_207_T  * const  _global_section_42___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[42] ;static  _GLOBAL_207_T  * const  _global_section_43___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[43] ;static  _GLOBAL_207_T  * const  _global_section_44___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[44] ;static  _GLOBAL_207_T  * const  _global_section_45___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[45] ;static  _GLOBAL_207_T  * const  _global_section_46___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[46] ;static  _GLOBAL_207_T  * const  _global_section_47___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[47] ;static  _GLOBAL_207_T  * const  _global_section_48___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[48] ;static  _GLOBAL_207_T  * const  _global_section_49___set_sysinit_set_sym_accept_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_accept_mtx_mtx_sysinit_sys_init[49] ;         ;
# 128 "freebsd5/kern/uipc_socket.c"
typedef  struct mtx   _GLOBAL_208_T; static  _GLOBAL_208_T  global_so_global_mtx[NUM_STACKS];    
typedef  struct mtx_args   _GLOBAL_209_T; static  _GLOBAL_209_T  global_so_global_mtx_args[NUM_STACKS] = {  { ( & global_so_global_mtx[0]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[1]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[2]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[3]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[4]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[5]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[6]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[7]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[8]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[9]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[10]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[11]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[12]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[13]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[14]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[15]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[16]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[17]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[18]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[19]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[20]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[21]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[22]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[23]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[24]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[25]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[26]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[27]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[28]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[29]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[30]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[31]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[32]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[33]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[34]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[35]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[36]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[37]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[38]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[39]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[40]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[41]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[42]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[43]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[44]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[45]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[46]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[47]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[48]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  { ( & global_so_global_mtx[49]  )  , ( "so_glabel" )   , ( 0x00000000 )   } ,  };           typedef  struct sysinit   _GLOBAL_210_T; static  _GLOBAL_210_T  global_so_global_mtx_mtx_sysinit_sys_init[NUM_STACKS] = {  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[0]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[1]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[2]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[3]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[4]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[5]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[6]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[7]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[8]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[9]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[10]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[11]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[12]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[13]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[14]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[15]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[16]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[17]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[18]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[19]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[20]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[21]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[22]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[23]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[24]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[25]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[26]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[27]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[28]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[29]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[30]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[31]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[32]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[33]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[34]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[35]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[36]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[37]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[38]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[39]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[40]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[41]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[42]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[43]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[44]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[45]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[46]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[47]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[48]  )   )   } ,  { SI_SUB_LOCK , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_sysinit    , ( ( void *  ) ( & global_so_global_mtx_args[49]  )   )   } ,  };             typedef  void const   _GLOBAL_211_T; static  _GLOBAL_211_T  * const  _global_section_0___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[0] ;static  _GLOBAL_211_T  * const  _global_section_1___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[1] ;static  _GLOBAL_211_T  * const  _global_section_2___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[2] ;static  _GLOBAL_211_T  * const  _global_section_3___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[3] ;static  _GLOBAL_211_T  * const  _global_section_4___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[4] ;static  _GLOBAL_211_T  * const  _global_section_5___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[5] ;static  _GLOBAL_211_T  * const  _global_section_6___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[6] ;static  _GLOBAL_211_T  * const  _global_section_7___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[7] ;static  _GLOBAL_211_T  * const  _global_section_8___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[8] ;static  _GLOBAL_211_T  * const  _global_section_9___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[9] ;static  _GLOBAL_211_T  * const  _global_section_10___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[10] ;static  _GLOBAL_211_T  * const  _global_section_11___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[11] ;static  _GLOBAL_211_T  * const  _global_section_12___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[12] ;static  _GLOBAL_211_T  * const  _global_section_13___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[13] ;static  _GLOBAL_211_T  * const  _global_section_14___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[14] ;static  _GLOBAL_211_T  * const  _global_section_15___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[15] ;static  _GLOBAL_211_T  * const  _global_section_16___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[16] ;static  _GLOBAL_211_T  * const  _global_section_17___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[17] ;static  _GLOBAL_211_T  * const  _global_section_18___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[18] ;static  _GLOBAL_211_T  * const  _global_section_19___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[19] ;static  _GLOBAL_211_T  * const  _global_section_20___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[20] ;static  _GLOBAL_211_T  * const  _global_section_21___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[21] ;static  _GLOBAL_211_T  * const  _global_section_22___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[22] ;static  _GLOBAL_211_T  * const  _global_section_23___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[23] ;static  _GLOBAL_211_T  * const  _global_section_24___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[24] ;static  _GLOBAL_211_T  * const  _global_section_25___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[25] ;static  _GLOBAL_211_T  * const  _global_section_26___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[26] ;static  _GLOBAL_211_T  * const  _global_section_27___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[27] ;static  _GLOBAL_211_T  * const  _global_section_28___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[28] ;static  _GLOBAL_211_T  * const  _global_section_29___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[29] ;static  _GLOBAL_211_T  * const  _global_section_30___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[30] ;static  _GLOBAL_211_T  * const  _global_section_31___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[31] ;static  _GLOBAL_211_T  * const  _global_section_32___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[32] ;static  _GLOBAL_211_T  * const  _global_section_33___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[33] ;static  _GLOBAL_211_T  * const  _global_section_34___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[34] ;static  _GLOBAL_211_T  * const  _global_section_35___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[35] ;static  _GLOBAL_211_T  * const  _global_section_36___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[36] ;static  _GLOBAL_211_T  * const  _global_section_37___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[37] ;static  _GLOBAL_211_T  * const  _global_section_38___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[38] ;static  _GLOBAL_211_T  * const  _global_section_39___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[39] ;static  _GLOBAL_211_T  * const  _global_section_40___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[40] ;static  _GLOBAL_211_T  * const  _global_section_41___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[41] ;static  _GLOBAL_211_T  * const  _global_section_42___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[42] ;static  _GLOBAL_211_T  * const  _global_section_43___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[43] ;static  _GLOBAL_211_T  * const  _global_section_44___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[44] ;static  _GLOBAL_211_T  * const  _global_section_45___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[45] ;static  _GLOBAL_211_T  * const  _global_section_46___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[46] ;static  _GLOBAL_211_T  * const  _global_section_47___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[47] ;static  _GLOBAL_211_T  * const  _global_section_48___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[48] ;static  _GLOBAL_211_T  * const  _global_section_49___set_sysinit_set_sym_so_global_mtx_mtx_sysinit_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_so_global_mtx_mtx_sysinit_sys_init[49] ;         ;
# 147 "freebsd5/kern/uipc_socket.c"
struct socket *
soalloc(int mflags)
{
 struct socket *so;




 so = uma_zalloc(global_socket_zone[get_stack_id()], mflags | 0x0100);
 if (so != ((void *)0)) {
# 165 "freebsd5/kern/uipc_socket.c"
  mtx_init((&(&so->so_snd)->sb_mtx), "so_snd", ((void *)0), 0x00000000);
  mtx_init((&(&so->so_rcv)->sb_mtx), "so_rcv", ((void *)0), 0x00000000);

  do { (((&so->so_aiojobq))->tqh_first) = ((void *)0); (&so->so_aiojobq)->tqh_last = &(((&so->so_aiojobq))->tqh_first); ; } while (0);
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_so_global_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  so->so_gencnt = ++global_so_gencnt[get_stack_id()];
  ++global_numopensockets[get_stack_id()];
  do { if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_so_global_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 }
 return so;
}





int
socreate(dom, aso, type, proto, cred, td)
 int dom;
 struct socket **aso;
 int type;
 int proto;
 struct ucred *cred;
 struct thread *td;
{
 struct protosw *prp;
 struct socket *so;
 int error;

 if (proto)
  prp = pffindproto(dom, proto, type);
 else
  prp = pffindtype(dom, type);

 if (prp == ((void *)0) || prp->pr_usrreqs->pru_attach == ((void *)0))
  return (43);

 if (jailed(cred) && global_jail_socket_unixiproute_only[get_stack_id()] &&
     prp->pr_domain->dom_family != 1 &&
     prp->pr_domain->dom_family != 2 &&
     prp->pr_domain->dom_family != 17) {
  return (43);
 }

 if (prp->pr_type != type)
  return (41);
 so = soalloc(0x0002);
 if (so == ((void *)0))
  return (55);

 do { (((&so->so_incomp))->tqh_first) = ((void *)0); (&so->so_incomp)->tqh_last = &(((&so->so_incomp))->tqh_first); ; } while (0);
 do { (((&so->so_comp))->tqh_first) = ((void *)0); (&so->so_comp)->tqh_last = &(((&so->so_comp))->tqh_first); ; } while (0);
 so->so_type = type;
 so->so_cred = crhold(cred);
 so->so_proto = prp;



 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 knlist_init(&so->so_rcv.sb_sel.si_note, (&(&so->so_rcv)->sb_mtx));
 knlist_init(&so->so_snd.sb_sel.si_note, (&(&so->so_snd)->sb_mtx));
 do { ; ++(so)->so_count; } while (0);
 do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 error = (*prp->pr_usrreqs->pru_attach)(so, proto, td);
 if (error) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  so->so_state |= 0x0001;
  do { ; ; if ((so)->so_count <= 0) panic("sorele"); if (--(so)->so_count == 0) sofree(so); else { do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0); do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } } while (0);
  return (error);
 }
 *aso = so;
 return (0);
}

int
sobind(so, nam, td)
 struct socket *so;
 struct sockaddr *nam;
 struct thread *td;
{

 return ((*so->so_proto->pr_usrreqs->pru_bind)(so, nam, td));
}

void
sodealloc(struct socket *so)
{

 ;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_so_global_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 so->so_gencnt = ++global_so_gencnt[get_stack_id()];
 do { if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_so_global_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 if (so->so_rcv.sb_hiwat)
  (void)chgsbsize(so->so_cred->cr_uidinfo,
      &so->so_rcv.sb_hiwat, 0, ((rlim_t)(((u_quad_t)1 << 63) - 1)));
 if (so->so_snd.sb_hiwat)
  (void)chgsbsize(so->so_cred->cr_uidinfo,
      &so->so_snd.sb_hiwat, 0, ((rlim_t)(((u_quad_t)1 << 63) - 1)));


 if (so->so_accf != ((void *)0))
  do_setopt_accept_filter(so, ((void *)0));




 crfree(so->so_cred);
 mtx_destroy((&(&so->so_snd)->sb_mtx));
 mtx_destroy((&(&so->so_rcv)->sb_mtx));

 uma_zfree(global_socket_zone[get_stack_id()], so);






 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_so_global_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 --global_numopensockets[get_stack_id()];
 do { if (!atomic_cmpset_ptr(&((((&global_so_global_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_so_global_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}

int
solisten(so, backlog, td)
 struct socket *so;
 int backlog;
 struct thread *td;
{
 int error;






 if (so->so_state & (0x0002 | 0x0004 |
       0x0008))
  return (22);
 error = (*so->so_proto->pr_usrreqs->pru_listen)(so, td);
 if (error)
  return (error);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (((&so->so_comp)->tqh_first == ((void *)0))) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  so->so_options |= 0x0002;
  do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 }
 if (backlog < 0 || backlog > global_somaxconn[get_stack_id()])
  backlog = global_somaxconn[get_stack_id()];
 so->so_qlimit = backlog;
 do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (0);
}
# 331 "freebsd5/kern/uipc_socket.c"
void
sofree(so)
 struct socket *so;
{
 struct socket *head;

 ;
 ;

 if (so->so_pcb != ((void *)0) || (so->so_state & 0x0001) == 0 ||
     so->so_count != 0) {
  do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
  do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  return;
 }

 head = so->so_head;
 if (head != ((void *)0)) {
 


                   ;
 

                                                              ;
# 367 "freebsd5/kern/uipc_socket.c"
  if ((so->so_qstate & 0x1000) != 0) {
   do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   return;
  }
  do { if (((((so))->so_list.tqe_next)) != ((void *)0)) (((so))->so_list.tqe_next)->so_list.tqe_prev = (so)->so_list.tqe_prev; else { (&head->so_incomp)->tqh_last = (so)->so_list.tqe_prev; ; } *(so)->so_list.tqe_prev = (((so))->so_list.tqe_next); ; ; ; } while (0);
  head->so_incqlen--;
  so->so_qstate &= ~0x0800;
  so->so_head = ((void *)0);
 }



                                                         ;
 do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 so->so_snd.sb_flags |= 0x40;
 (void)((&so->so_snd)->sb_flags & 0x01 ? (((0x0002) == 0x0002) ? sb_lock(&so->so_snd) : 35) : ((&so->so_snd)->sb_flags |= 0x01), 0);





 socantsendmore_locked(so);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { ; (&so->so_snd)->sb_flags &= ~0x01; if ((&so->so_snd)->sb_flags & 0x02) { (&so->so_snd)->sb_flags &= ~0x02; wakeup(&(&so->so_snd)->sb_flags); } } while (0);
 sbrelease_locked(&so->so_snd, so);
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 sorflush(so);
 knlist_destroy(&so->so_rcv.sb_sel.si_note);
 knlist_destroy(&so->so_snd.sb_sel.si_note);
 sodealloc(so);
}
# 411 "freebsd5/kern/uipc_socket.c"
int
soclose(so)
 struct socket *so;
{
 int error = 0;

 ;

 funsetown(&so->so_sigio);
 if (so->so_options & 0x0002) {
  struct socket *sp;
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  while ((sp = ((&so->so_incomp)->tqh_first)) != ((void *)0)) {
   do { if (((((sp))->so_list.tqe_next)) != ((void *)0)) (((sp))->so_list.tqe_next)->so_list.tqe_prev = (sp)->so_list.tqe_prev; else { (&so->so_incomp)->tqh_last = (sp)->so_list.tqe_prev; ; } *(sp)->so_list.tqe_prev = (((sp))->so_list.tqe_next); ; ; ; } while (0);
   so->so_incqlen--;
   sp->so_qstate &= ~0x0800;
   sp->so_head = ((void *)0);
   do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   (void) soabort(sp);
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  }
  while ((sp = ((&so->so_comp)->tqh_first)) != ((void *)0)) {
   do { if (((((sp))->so_list.tqe_next)) != ((void *)0)) (((sp))->so_list.tqe_next)->so_list.tqe_prev = (sp)->so_list.tqe_prev; else { (&so->so_comp)->tqh_last = (sp)->so_list.tqe_prev; ; } *(sp)->so_list.tqe_prev = (((sp))->so_list.tqe_next); ; ; ; } while (0);
   so->so_qlen--;
   sp->so_qstate &= ~0x1000;
   sp->so_head = ((void *)0);
   do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   (void) soabort(sp);
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  }
  do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 }
 if (so->so_pcb == ((void *)0))
  goto discard;
 if (so->so_state & 0x0002) {
  if ((so->so_state & 0x0008) == 0) {
   error = sodisconnect(so);
   if (error)
    goto drop;
  }
  if (so->so_options & 0x0080) {
   if ((so->so_state & 0x0008) &&
       (so->so_state & 0x0100))
    goto drop;
   while (so->so_state & 0x0002) {
    error = msleep(&so->so_timeo, ((void *)0), ((64) + 24) | 0x100, "soclos", so->so_linger * global_hz[get_stack_id()])
                                                     ;
    if (error)
     break;
   }
  }
 }
drop:
 if (so->so_pcb != ((void *)0)) {
  int error2 = (*so->so_proto->pr_usrreqs->pru_detach)(so);
  if (error == 0)
   error = error2;
 }
discard:
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 ;
 so->so_state |= 0x0001;
 do { ; ; if ((so)->so_count <= 0) panic("sorele"); if (--(so)->so_count == 0) sofree(so); else { do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0); do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } } while (0);
 return (error);
}







int
soabort(so)
 struct socket *so;
{
 int error;

 error = (*so->so_proto->pr_usrreqs->pru_abort)(so);
 if (error) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  do { ; ; if ((so)->so_count == 0) sofree(so); else { do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0); do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } } while(0);
  return error;
 }
 return (0);
}

int
soaccept(so, nam)
 struct socket *so;
 struct sockaddr **nam;
{
 int error;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 ;
 so->so_state &= ~0x0001;
 do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 error = (*so->so_proto->pr_usrreqs->pru_accept)(so, nam);
 return (error);
}

int
soconnect(so, nam, td)
 struct socket *so;
 struct sockaddr *nam;
 struct thread *td;
{
 int error;

 if (so->so_options & 0x0002)
  return (45);






 if (so->so_state & (0x0002|0x0004) &&
     ((so->so_proto->pr_flags & 0x04) ||
     (error = sodisconnect(so))))
  error = 56;
 else
  error = (*so->so_proto->pr_usrreqs->pru_connect)(so, nam, td);
 return (error);
}

int
soconnect2(so1, so2)
 struct socket *so1;
 struct socket *so2;
{

 return ((*so1->so_proto->pr_usrreqs->pru_connect2)(so1, so2));
}

int
sodisconnect(so)
 struct socket *so;
{
 int error;

 if ((so->so_state & 0x0002) == 0)
  return (57);
 if (so->so_state & 0x0008)
  return (37);
 error = (*so->so_proto->pr_usrreqs->pru_disconnect)(so);
 return (error);
}
# 597 "freebsd5/kern/uipc_socket.c"
int
sosend(so, addr, uio, top, control, flags, td)
 struct socket *so;
 struct sockaddr *addr;
 struct uio *uio;
 struct mbuf *top;
 struct mbuf *control;
 int flags;
 struct thread *td;
{
 struct mbuf **mp;
 struct mbuf *m;
 long space, len = 0, resid;
 int clen = 0, error, dontroute;
 int atomic = ((so)->so_proto->pr_flags & 0x01) || top;




 if (uio != ((void *)0))
  resid = uio->uio_resid;
 else
  resid = top->M_dat.MH.MH_pkthdr.len;
# 630 "freebsd5/kern/uipc_socket.c"
 if (resid < 0 || (so->so_type == 1 && (flags & 0x8))) {
  error = 22;
  goto out;
 }

 dontroute =
     (flags & 0x4) && (so->so_options & 0x0010) == 0 &&
     (so->so_proto->pr_flags & 0x01);
 if (td != ((void *)0))
  td->td_proc->p_stats->p_ru.ru_msgsnd++;
 if (control != ((void *)0))
  clen = control->m_hdr.mh_len;


 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
restart:
 ;
 error = ((&so->so_snd)->sb_flags & 0x01 ? ((((((flags) & 0x80) ? 0x0001 : 0x0002)) == 0x0002) ? sb_lock(&so->so_snd) : 35) : ((&so->so_snd)->sb_flags |= 0x01), 0);
 if (error)
  goto out_locked;
 do {
  ;
  if (so->so_snd.sb_state & 0x0010)
   { error = (32); goto release; };
  if (so->so_error) {
   error = so->so_error;
   so->so_error = 0;
   goto release;
  }
  if ((so->so_state & 0x0002) == 0) {






   if ((so->so_proto->pr_flags & 0x04) &&
       (so->so_proto->pr_flags & 0x20) == 0) {
    if ((so->so_state & 0x0400) == 0 &&
        !(resid == 0 && clen != 0))
     { error = (57); goto release; };
   } else if (addr == ((void *)0))
       { error = (so->so_proto->pr_flags & 0x04 ? 57 : 39); goto release; }
                               ;
  }
  space = ((long) imin((int)((&so->so_snd)->sb_hiwat - (&so->so_snd)->sb_cc), (int)((&so->so_snd)->sb_mbmax - (&so->so_snd)->sb_mbcnt)));
  if (flags & 0x1)
   space += 1024;
  if ((atomic && resid > so->so_snd.sb_hiwat) ||
      clen > so->so_snd.sb_hiwat)
   { error = (40); goto release; };
  if (space < resid + clen &&
      (atomic || space < so->so_snd.sb_lowat || space < clen)) {
   if ((so->so_state & 0x0100) || (flags & 0x4000))
    { error = (35); goto release; };
   do { ; (&so->so_snd)->sb_flags &= ~0x01; if ((&so->so_snd)->sb_flags & 0x02) { (&so->so_snd)->sb_flags &= ~0x02; wakeup(&(&so->so_snd)->sb_flags); } } while (0);
   error = sbwait(&so->so_snd);
   if (error)
    goto out_locked;
   goto restart;
  }
  do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
  mp = &top;
  space -= clen;
  do {
      if (uio == ((void *)0)) {



   resid = 0;
   if (flags & 0x8)
    top->m_hdr.mh_flags |= 0x0004;
      } else do {



   if (resid >= (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1)) {
# 747 "freebsd5/kern/uipc_socket.c"
    if (top == ((void *)0)) {
     m = m_getcl(0x0002, 1, 0x0002);
     m->M_dat.MH.MH_pkthdr.len = 0;
     m->M_dat.MH.MH_pkthdr.rcvif = (struct ifnet *)0;
    } else
     m = m_getcl(0x0002, 1, 0);
    len = min(min((1 << 11), resid), space);

   } else {
    if (top == ((void *)0)) {
     m = m_gethdr(0x0002, 1);
     m->M_dat.MH.MH_pkthdr.len = 0;
     m->M_dat.MH.MH_pkthdr.rcvif = (struct ifnet *)0;

     len = min(min(((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)), resid), space);




     if (atomic && m && len < ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
     do { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (len)) & ~(sizeof(long) - 1); } while (0);
    } else {
     m = m_get(0x0002, 1);
     len = min(min((256 - sizeof(struct m_hdr)), resid), space);
    }
   }
   if (m == ((void *)0)) {
    error = 55;
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    goto release;
   }

   space -= len;





   error = uiomove(((void *)((m)->m_hdr.mh_data)), (int)len, uio);
   resid = uio->uio_resid;
   m->m_hdr.mh_len = len;
   *mp = m;
   top->M_dat.MH.MH_pkthdr.len += len;
   if (error) {
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    goto release;
   }
   mp = &m->m_hdr.mh_next;
   if (resid <= 0) {
    if (flags & 0x8)
     top->m_hdr.mh_flags |= 0x0004;
    break;
   }
      } while (space > 0 && atomic);
      if (dontroute) {
       do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
       so->so_options |= 0x0010;
       do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
      }
# 815 "freebsd5/kern/uipc_socket.c"
      error = (*so->so_proto->pr_usrreqs->pru_send)(so,
   (flags & 0x1) ? 0x1 :





   ((flags & 0x100) &&
    (so->so_proto->pr_flags & 0x20) &&
    (resid <= 0)) ?
    0x2 :

   (resid > 0 && space > 0) ? 0x4 : 0,
   top, addr, control, td);
      if (dontroute) {
       do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
       so->so_options &= ~0x0010;
       do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
      }
      clen = 0;
      control = ((void *)0);
      top = ((void *)0);
      mp = &top;
      if (error) {
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   goto release;
      }
  } while (resid && space > 0);
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 } while (resid);

release:
 ;
 do { ; (&so->so_snd)->sb_flags &= ~0x01; if ((&so->so_snd)->sb_flags & 0x02) { (&so->so_snd)->sb_flags &= ~0x02; wakeup(&(&so->so_snd)->sb_flags); } } while (0);
out_locked:
 ;
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
out:
 if (top != ((void *)0))
  m_freem(top);
 if (control != ((void *)0))
  m_freem(control);
 return (error);
}
# 868 "freebsd5/kern/uipc_socket.c"
static int
soreceive_rcvoob(so, uio, flags)
 struct socket *so;
 struct uio *uio;
 int flags;
{
 struct protosw *pr = so->so_proto;
 struct mbuf *m;
 int error;

 ;

  m = m_get(0x0002, 1);
  if (m == ((void *)0))
   return (55);
  error = (*pr->pr_usrreqs->pru_rcvoob)(so, m, flags & 0x2);
  if (error)
   goto bad;
  do {
# 908 "freebsd5/kern/uipc_socket.c"
   error = uiomove(((void *)((m)->m_hdr.mh_data)),
       (int) min(uio->uio_resid, m->m_hdr.mh_len), uio);
   m = m_free(m);
  } while (uio->uio_resid && error == 0 && m);
bad:
 if (m != ((void *)0))
   m_freem(m);
  return (error);
}
# 926 "freebsd5/kern/uipc_socket.c"
static __inline void
sockbuf_pushsync(struct sockbuf *sb, struct mbuf *nextrecord)
{

 ;




 if (sb->sb_mb != ((void *)0))
  sb->sb_mb->m_hdr.mh_nextpkt = nextrecord;
 else
  sb->sb_mb = nextrecord;







        if (sb->sb_mb == ((void *)0)) {
                sb->sb_mbtail = ((void *)0);
                sb->sb_lastrecord = ((void *)0);
        } else if (sb->sb_mb->m_hdr.mh_nextpkt == ((void *)0))
                sb->sb_lastrecord = sb->sb_mb;
}
# 970 "freebsd5/kern/uipc_socket.c"
int
soreceive(so, psa, uio, mp0, controlp, flagsp)
 struct socket *so;
 struct sockaddr **psa;
 struct uio *uio;
 struct mbuf **mp0;
 struct mbuf **controlp;
 int *flagsp;
{
 struct mbuf *m, **mp;
 int flags, len, error, offset;
 struct protosw *pr = so->so_proto;
 struct mbuf *nextrecord;
 int moff, type = 0;
 int orig_resid = uio->uio_resid;

 mp = mp0;
 if (psa != ((void *)0))
  *psa = ((void *)0);
 if (controlp != ((void *)0))
  *controlp = ((void *)0);
 if (flagsp != ((void *)0))
  flags = *flagsp &~ 0x8;
 else
  flags = 0;
 if (flags & 0x1)
  return (soreceive_rcvoob(so, uio, flags));
 if (mp != ((void *)0))
  *mp = ((void *)0);
 if (so->so_state & 0x0400 && uio->uio_resid)
  (*pr->pr_usrreqs->pru_rcvd)(so, 0);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
restart:
 ;
 error = ((&so->so_rcv)->sb_flags & 0x01 ? ((((((flags) & 0x80) ? 0x0001 : 0x0002)) == 0x0002) ? sb_lock(&so->so_rcv) : 35) : ((&so->so_rcv)->sb_flags |= 0x01), 0);
 if (error)
  goto out;

 m = so->so_rcv.sb_mb;
# 1021 "freebsd5/kern/uipc_socket.c"
 if (m == ((void *)0) || (((flags & 0x80) == 0 &&
     so->so_rcv.sb_cc < uio->uio_resid) &&
     (so->so_rcv.sb_cc < so->so_rcv.sb_lowat ||
     ((flags & 0x40) && uio->uio_resid <= so->so_rcv.sb_hiwat)) &&
     m->m_hdr.mh_nextpkt == ((void *)0) && (pr->pr_flags & 0x01) == 0)) {
 

                           ;
  if (so->so_error) {
   if (m != ((void *)0))
    goto dontblock;
   error = so->so_error;
   if ((flags & 0x2) == 0)
    so->so_error = 0;
   goto release;
  }
  ;
  if (so->so_rcv.sb_state & 0x0020) {
   if (m)
    goto dontblock;
   else
    goto release;
  }
  for (; m != ((void *)0); m = m->m_hdr.mh_next)
   if (m->m_hdr.mh_type == 15 || (m->m_hdr.mh_flags & 0x0004)) {
    m = so->so_rcv.sb_mb;
    goto dontblock;
   }
  if ((so->so_state & (0x0002|0x0004)) == 0 &&
      (so->so_proto->pr_flags & 0x04)) {
   error = 57;
   goto release;
  }
  if (uio->uio_resid == 0)
   goto release;
  if ((so->so_state & 0x0100) ||
      (flags & (0x80|0x4000))) {
   error = 35;
   goto release;
  }
  ;
  ;
  do { ; (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup(&(&so->so_rcv)->sb_flags); } } while (0);
  error = sbwait(&so->so_rcv);
  if (error)
   goto out;
  goto restart;
 }
dontblock:
# 1085 "freebsd5/kern/uipc_socket.c"
 ;
 if (uio->uio_td)
  uio->uio_td->td_proc->p_stats->p_ru.ru_msgrcv++;
 ;
 ;
 ;
 nextrecord = m->m_hdr.mh_nextpkt;
 if (pr->pr_flags & 0x02) {
 
                                     ;
  orig_resid = 0;
  if (psa != ((void *)0))
   *psa = sodupsockaddr(((struct sockaddr *)((m)->m_hdr.mh_data)),
       0x0001);
  if (flags & 0x2) {
   m = m->m_hdr.mh_next;
  } else {
   { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; if ((m)->m_hdr.mh_type != 1 && (m)->m_hdr.mh_type != 2 && (m)->m_hdr.mh_type != 15) (&so->so_rcv)->sb_ctl -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
   so->so_rcv.sb_mb = m_free(m);
   m = so->so_rcv.sb_mb;
   sockbuf_pushsync(&so->so_rcv, nextrecord);
  }
 }







 if (m != ((void *)0) && m->m_hdr.mh_type == 14) {
  struct mbuf *cm = ((void *)0), *cmn;
  struct mbuf **cme = &cm;

  do {
  if (flags & 0x2) {
    if (controlp != ((void *)0)) {
    *controlp = m_copym((m), (0), (m->m_hdr.mh_len), 0x0001);
     controlp = &(*controlp)->m_hdr.mh_next;
    }
   m = m->m_hdr.mh_next;
  } else {
   { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; if ((m)->m_hdr.mh_type != 1 && (m)->m_hdr.mh_type != 2 && (m)->m_hdr.mh_type != 15) (&so->so_rcv)->sb_ctl -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
   so->so_rcv.sb_mb = m->m_hdr.mh_next;
   m->m_hdr.mh_next = ((void *)0);
    *cme = m;
    cme = &(*cme)->m_hdr.mh_next;
   m = so->so_rcv.sb_mb;
  }
  } while (m != ((void *)0) && m->m_hdr.mh_type == 14);
  if ((flags & 0x2) == 0)
   sockbuf_pushsync(&so->so_rcv, nextrecord);
  while (cm != ((void *)0)) {
   cmn = cm->m_hdr.mh_next;
   cm->m_hdr.mh_next = ((void *)0);
   if (pr->pr_domain->dom_externalize != ((void *)0)) {
    do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
    error = (*pr->pr_domain->dom_externalize)
        (cm, controlp);
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   } else if (controlp != ((void *)0))
    *controlp = cm;
   else
    m_freem(cm);
   if (controlp != ((void *)0)) {
   orig_resid = 0;
   while (*controlp != ((void *)0))
    controlp = &(*controlp)->m_hdr.mh_next;
  }
   cm = cmn;
 }
  nextrecord = so->so_rcv.sb_mb->m_hdr.mh_nextpkt;
  orig_resid = 0;
 }
 if (m != ((void *)0)) {
  if ((flags & 0x2) == 0) {
  
                                                     ;
   if (nextrecord == ((void *)0)) {
   
                                              ;
   
                                                   ;
   }
  }
  type = m->m_hdr.mh_type;
  if (type == 15)
   flags |= 0x1;
 } else {
  if ((flags & 0x2) == 0) {
  
                                          ;
   if (so->so_rcv.sb_mb == ((void *)0)) {
   
                                             ;
  }
 }
 }
 ;
 ;
 ;
# 1195 "freebsd5/kern/uipc_socket.c"
 moff = 0;
 offset = 0;
 while (m != ((void *)0) && uio->uio_resid > 0 && error == 0) {




  ;
  if (m->m_hdr.mh_type == 15) {
   if (type != 15)
    break;
  } else if (type == 15)
   break;
  else
     
                                  ;
  so->so_rcv.sb_state &= ~0x0040;
  len = uio->uio_resid;
  if (so->so_oobmark && len > so->so_oobmark - offset)
   len = so->so_oobmark - offset;
  if (len > m->m_hdr.mh_len - moff)
   len = m->m_hdr.mh_len - moff;
# 1225 "freebsd5/kern/uipc_socket.c"
  if (mp == ((void *)0)) {
   ;
   ;
   ;
   do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
# 1252 "freebsd5/kern/uipc_socket.c"
   error = uiomove(((char *)((m)->m_hdr.mh_data)) + moff, (int)len, uio);
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if (error)
    goto release;
  } else
   uio->uio_resid -= len;
  ;
  if (len == m->m_hdr.mh_len - moff) {
   if (m->m_hdr.mh_flags & 0x0004)
    flags |= 0x8;
   if (flags & 0x2) {
    m = m->m_hdr.mh_next;
    moff = 0;
   } else {
    nextrecord = m->m_hdr.mh_nextpkt;
    { (&so->so_rcv)->sb_cc -= (m)->m_hdr.mh_len; if ((m)->m_hdr.mh_type != 1 && (m)->m_hdr.mh_type != 2 && (m)->m_hdr.mh_type != 15) (&so->so_rcv)->sb_ctl -= (m)->m_hdr.mh_len; (&so->so_rcv)->sb_mbcnt -= 256; if ((m)->m_hdr.mh_flags & 0x0001) (&so->so_rcv)->sb_mbcnt -= (m)->M_dat.MH.MH_dat.MH_ext.ext_size; };
    if (mp != ((void *)0)) {
     *mp = m;
     mp = &m->m_hdr.mh_next;
     so->so_rcv.sb_mb = m = m->m_hdr.mh_next;
     *mp = ((void *)0);
    } else {
     so->so_rcv.sb_mb = m_free(m);
     m = so->so_rcv.sb_mb;
    }
    if (m != ((void *)0)) {
     m->m_hdr.mh_nextpkt = nextrecord;
     if (nextrecord == ((void *)0))
      so->so_rcv.sb_lastrecord = m;
    } else {
     so->so_rcv.sb_mb = nextrecord;
     do { if ((&so->so_rcv)->sb_mb == ((void *)0)) { (&so->so_rcv)->sb_mbtail = ((void *)0); (&so->so_rcv)->sb_lastrecord = ((void *)0); } } while ( 0);
    }
    ;
    ;
   }
  } else {
   if (flags & 0x2)
    moff += len;
   else {
    if (mp != ((void *)0)) {
     do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
     *mp = m_copym(m, 0, len, 0x0002);
     do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    }
    m->m_hdr.mh_data += len;
    m->m_hdr.mh_len -= len;
    so->so_rcv.sb_cc -= len;
   }
  }
  ;
  if (so->so_oobmark) {
   if ((flags & 0x2) == 0) {
    so->so_oobmark -= len;
    if (so->so_oobmark == 0) {
     so->so_rcv.sb_state |= 0x0040;
     break;
    }
   } else {
    offset += len;
    if (offset == so->so_oobmark)
     break;
   }
  }
  if (flags & 0x8)
   break;







  while (flags & 0x40 && m == ((void *)0) && uio->uio_resid > 0 &&
      !((so)->so_proto->pr_flags & 0x01) && nextrecord == ((void *)0)) {
   ;
   if (so->so_error || so->so_rcv.sb_state & 0x0020)
    break;




   if (pr->pr_flags & 0x08 && so->so_pcb != ((void *)0)) {
    do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
    (*pr->pr_usrreqs->pru_rcvd)(so, flags);
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   }
   ;
   ;
   error = sbwait(&so->so_rcv);
   if (error)
    goto release;
   m = so->so_rcv.sb_mb;
   if (m != ((void *)0))
    nextrecord = m->m_hdr.mh_nextpkt;
  }
 }

 ;
 if (m != ((void *)0) && pr->pr_flags & 0x01) {
  flags |= 0x10;
  if ((flags & 0x2) == 0)
   (void) sbdroprecord_locked(&so->so_rcv);
 }
 if ((flags & 0x2) == 0) {
  if (m == ((void *)0)) {





   so->so_rcv.sb_mb = nextrecord;
   if (so->so_rcv.sb_mb == ((void *)0)) {
    so->so_rcv.sb_mbtail = ((void *)0);
    so->so_rcv.sb_lastrecord = ((void *)0);
   } else if (nextrecord->m_hdr.mh_nextpkt == ((void *)0))
    so->so_rcv.sb_lastrecord = nextrecord;
  }
  ;
  ;
  if (pr->pr_flags & 0x08 && so->so_pcb) {
   do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   (*pr->pr_usrreqs->pru_rcvd)(so, flags);
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  }
 }
 ;
 if (orig_resid == uio->uio_resid && orig_resid &&
     (flags & 0x8) == 0 && (so->so_rcv.sb_state & 0x0020) == 0) {
  do { ; (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup(&(&so->so_rcv)->sb_flags); } } while (0);
  goto restart;
 }

 if (flagsp != ((void *)0))
  *flagsp |= flags;
release:
 ;
 do { ; (&so->so_rcv)->sb_flags &= ~0x01; if ((&so->so_rcv)->sb_flags & 0x02) { (&so->so_rcv)->sb_flags &= ~0x02; wakeup(&(&so->so_rcv)->sb_flags); } } while (0);
out:
 ;
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 return (error);
}

int
soshutdown(so, how)
 struct socket *so;
 int how;
{
 struct protosw *pr = so->so_proto;

 if (!(how == 0 || how == 1 || how == 2))
  return (22);

 if (how != 1)
  sorflush(so);
 if (how != 0)
  return ((*pr->pr_usrreqs->pru_shutdown)(so));
 return (0);
}

void
sorflush(so)
 struct socket *so;
{
 struct sockbuf *sb = &so->so_rcv;
 struct protosw *pr = so->so_proto;
 struct sockbuf asb;
# 1429 "freebsd5/kern/uipc_socket.c"
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(sb)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(sb)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 sb->sb_flags |= 0x40;
 (void) ((sb)->sb_flags & 0x01 ? (((0x0002) == 0x0002) ? sb_lock(sb) : 35) : ((sb)->sb_flags |= 0x01), 0);





 socantrcvmore_locked(so);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(sb)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(sb)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { ; (sb)->sb_flags &= ~0x01; if ((sb)->sb_flags & 0x02) { (sb)->sb_flags &= ~0x02; wakeup(&(sb)->sb_flags); } } while (0);




 bzero(&asb, ((size_t)(&((struct sockbuf *)0)->sb_mb)));
 bcopy(&sb->sb_mb, &asb.sb_mb,
     sizeof(*sb) - ((size_t)(&((struct sockbuf *)0)->sb_mb)));
 bzero(&sb->sb_mb,
     sizeof(*sb) - ((size_t)(&((struct sockbuf *)0)->sb_mb)));
 do { if (!atomic_cmpset_ptr(&(((((&(sb)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(sb)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);

 mtx_init((&(&asb)->sb_mtx), "so_rcv", ((void *)0), 0x00000000);
 if (pr->pr_flags & 0x10 && pr->pr_domain->dom_dispose != ((void *)0))
  (*pr->pr_domain->dom_dispose)(asb.sb_mb);
 sbrelease(&asb, so);
 mtx_destroy((&(&asb)->sb_mtx));
}


                              int
do_setopt_accept_filter(so, sopt)
 struct socket *so;
 struct sockopt *sopt;
{
 struct accept_filter_arg *afap;
 struct accept_filter *afp;
 struct so_accf *newaf;
 int error = 0;

 newaf = ((void *)0);
 afap = ((void *)0);
# 1479 "freebsd5/kern/uipc_socket.c"
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if ((so->so_options & 0x0002) == 0) {
  do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
  return (22);
 }


 if (sopt == ((void *)0)) {
  if (so->so_accf != ((void *)0)) {
   struct so_accf *af = so->so_accf;
   if (af->so_accept_filter != ((void *)0) &&
    af->so_accept_filter->accf_destroy != ((void *)0)) {
    af->so_accept_filter->accf_destroy(so);
   }
   if (af->so_accept_filter_str != ((void *)0)) {
    nsc_free((af->so_accept_filter_str), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])));
   }
   nsc_free((af), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])));
   so->so_accf = ((void *)0);
  }
  so->so_options &= ~0x1000;
  do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
  return (0);
 }
 do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
# 1513 "freebsd5/kern/uipc_socket.c"
 ((afap) = (struct accept_filter_arg *)nsc_malloc((u_long)(sizeof(*afap)), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])), (0x0002)))
              ;

 error = sooptcopyin(sopt, afap, sizeof *afap, sizeof *afap);
 afap->af_name[sizeof(afap->af_name)-1] = '\0';
 afap->af_arg[sizeof(afap->af_arg)-1] = '\0';
 if (error) {
  nsc_free((afap), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])));
  return (error);
 }
 afp = accept_filt_get(afap->af_name);
 if (afp == ((void *)0)) {
  nsc_free((afap), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])));
  return (2);
 }






 ((newaf) = (struct so_accf *)nsc_malloc((u_long)(sizeof(*newaf)), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])), (0x0002 | 0x0100)))
            ;
 if (afp->accf_create != ((void *)0) && afap->af_name[0] != '\0') {
   int len = strlen(afap->af_name) + 1;
  ((newaf->so_accept_filter_str) = (char *)nsc_malloc((u_long)(len), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])), (0x0002)))
               ;
  strcpy(newaf->so_accept_filter_str, afap->af_name);
 }

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);

 if (so->so_accf != ((void *)0)) {
  error = 22;
  goto out;
  }






 if (afp->accf_create != ((void *)0)) {
  newaf->so_accept_filter_arg =
      afp->accf_create(so, afap->af_arg);
  if (newaf->so_accept_filter_arg == ((void *)0)) {
   error = 22;
   goto out;
  }
 }
 newaf->so_accept_filter = afp;
 so->so_accf = newaf;
 so->so_options |= 0x1000;
 newaf = ((void *)0);
out:
 do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 if (newaf != ((void *)0)) {
  if (newaf->so_accept_filter_str != ((void *)0))
   nsc_free((newaf->so_accept_filter_str), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])));
  nsc_free((newaf), ((*_GLOBAL_M_ACCF_36_A[get_stack_id()])));
 }
 if (afap != ((void *)0))
  nsc_free((afap), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])));
 return (error);
}
# 1587 "freebsd5/kern/uipc_socket.c"
int
sooptcopyin(sopt, buf, len, minlen)
 struct sockopt *sopt;
 void *buf;
 size_t len;
 size_t minlen;
{
 size_t valsize;







 if ((valsize = sopt->sopt_valsize) < minlen)
  return 22;
 if (valsize > len)
  sopt->sopt_valsize = valsize = len;

 if (sopt->sopt_td != ((void *)0))
  return (copyin(sopt->sopt_val, buf, valsize));

 bcopy(sopt->sopt_val, buf, valsize);
 return 0;
}





int
so_setsockopt(struct socket *so, int level, int optname, void *optval,
    size_t optlen)
{
 struct sockopt sopt;

 sopt.sopt_level = level;
 sopt.sopt_name = optname;
 sopt.sopt_dir = SOPT_SET;
 sopt.sopt_val = optval;
 sopt.sopt_valsize = optlen;
 sopt.sopt_td = ((void *)0);
 return (sosetopt(so, &sopt));
}

int
sosetopt(so, sopt)
 struct socket *so;
 struct sockopt *sopt;
{
 int error, optval;
 struct linger l;
 struct timeval tv;
 u_long val;




 error = 0;
 if (sopt->sopt_level != 0xffff) {
  if (so->so_proto && so->so_proto->pr_ctloutput)
   return ((*so->so_proto->pr_ctloutput)
      (so, sopt));
  error = 42;
 } else {
  switch (sopt->sopt_name) {

  case 0x1000:
   error = do_setopt_accept_filter(so, sopt);
   if (error)
    goto bad;
   break;

  case 0x0080:
   error = sooptcopyin(sopt, &l, sizeof l, sizeof l);
   if (error)
    goto bad;

   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   so->so_linger = l.l_linger;
   if (l.l_onoff)
    so->so_options |= 0x0080;
   else
    so->so_options &= ~0x0080;
   do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   break;

  case 0x0001:
  case 0x0008:
  case 0x0010:
  case 0x0040:
  case 0x0020:
  case 0x0004:
  case 0x0200:
  case 0x0100:
  case 0x0400:
  case 0x2000:
  case 0x0800:
   error = sooptcopyin(sopt, &optval, sizeof optval,
         sizeof optval);
   if (error)
    goto bad;
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if (optval)
    so->so_options |= sopt->sopt_name;
   else
    so->so_options &= ~sopt->sopt_name;
   do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   break;

  case 0x1001:
  case 0x1002:
  case 0x1003:
  case 0x1004:
   error = sooptcopyin(sopt, &optval, sizeof optval,
         sizeof optval);
   if (error)
    goto bad;





   if (optval < 1) {
    error = 22;
    goto bad;
   }

   switch (sopt->sopt_name) {
   case 0x1001:
   case 0x1002:
    if (sbreserve(sopt->sopt_name == 0x1001 ?
        &so->so_snd : &so->so_rcv, (u_long)optval,
        so, global___pcpu[get_stack_id()].pc_curthread) == 0) {
     error = 55;
     goto bad;
    }
    break;





   case 0x1003:
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    so->so_snd.sb_lowat =
        (optval > so->so_snd.sb_hiwat) ?
        so->so_snd.sb_hiwat : optval;
    do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
    break;
   case 0x1004:
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    so->so_rcv.sb_lowat =
        (optval > so->so_rcv.sb_hiwat) ?
        so->so_rcv.sb_hiwat : optval;
    do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
    break;
   }
   break;

  case 0x1005:
  case 0x1006:
   error = sooptcopyin(sopt, &tv, sizeof tv,
         sizeof tv);
   if (error)
    goto bad;


   if (tv.tv_sec < 0 || tv.tv_sec > 0x7fffffff / global_hz[get_stack_id()] ||
       tv.tv_usec < 0 || tv.tv_usec >= 1000000) {
    error = 33;
    goto bad;
   }


   val = (u_long)(tv.tv_sec * global_hz[get_stack_id()]) + tv.tv_usec / global_tick[get_stack_id()];
   if (val > 0x7fffffff) {
    error = 33;
    goto bad;
   }
   if (val == 0 && tv.tv_usec != 0)
    val = 1;

   switch (sopt->sopt_name) {
   case 0x1005:
    so->so_snd.sb_timeo = val;
    break;
   case 0x1006:
    so->so_rcv.sb_timeo = val;
    break;
   }
   break;
  case 0x1009:
# 1789 "freebsd5/kern/uipc_socket.c"
   error = 45;

   break;
  default:
   error = 42;
   break;
  }
  if (error == 0 && so->so_proto != ((void *)0) &&
      so->so_proto->pr_ctloutput != ((void *)0)) {
   (void) ((*so->so_proto->pr_ctloutput)
      (so, sopt));
  }
 }
bad:
 return (error);
}


int
sooptcopyout(struct sockopt *sopt, const void *buf, size_t len)
{
 int error;
 size_t valsize;

 error = 0;
# 1824 "freebsd5/kern/uipc_socket.c"
 valsize = min(len, sopt->sopt_valsize);
 sopt->sopt_valsize = valsize;
 if (sopt->sopt_val != ((void *)0)) {
  if (sopt->sopt_td != ((void *)0))
   error = copyout(buf, sopt->sopt_val, valsize);
  else
   bcopy(buf, sopt->sopt_val, valsize);
 }
 return error;
}

int
sogetopt(so, sopt)
 struct socket *so;
 struct sockopt *sopt;
{
 int error, optval;
 struct linger l;
 struct timeval tv;

 struct accept_filter_arg *afap;





 error = 0;
 if (sopt->sopt_level != 0xffff) {
  if (so->so_proto && so->so_proto->pr_ctloutput) {
   return ((*so->so_proto->pr_ctloutput)
      (so, sopt));
  } else
   return (42);
 } else {
  switch (sopt->sopt_name) {

  case 0x1000:

   if ((so->so_options & 0x0002) == 0)
    return (22);
   ((afap) = (struct accept_filter_arg *)nsc_malloc((u_long)(sizeof(*afap)), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])), (0x0002 | 0x0100)))
                              ;
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if ((so->so_options & 0x1000) != 0) {
    strcpy(afap->af_name, so->so_accf->so_accept_filter->accf_name);
    if (so->so_accf->so_accept_filter_str != ((void *)0))
     strcpy(afap->af_arg, so->so_accf->so_accept_filter_str);
   }
   do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   error = sooptcopyout(sopt, afap, sizeof(*afap));
   nsc_free((afap), ((*_GLOBAL_M_TEMP_15_A[get_stack_id()])));
   break;


  case 0x0080:





   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   l.l_onoff = so->so_options & 0x0080;
   l.l_linger = so->so_linger;
   do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
   error = sooptcopyout(sopt, &l, sizeof l);
   break;

  case 0x0040:
  case 0x0010:
  case 0x0001:
  case 0x0008:
  case 0x0004:
  case 0x0200:
  case 0x0020:
  case 0x0100:
  case 0x0400:
  case 0x2000:
  case 0x0800:
   optval = so->so_options & sopt->sopt_name;
integer:
   error = sooptcopyout(sopt, &optval, sizeof optval);
   break;

  case 0x1008:
   optval = so->so_type;
   goto integer;

  case 0x1007:
   optval = so->so_error;
   so->so_error = 0;
   goto integer;

  case 0x1001:
   optval = so->so_snd.sb_hiwat;
   goto integer;

  case 0x1002:
   optval = so->so_rcv.sb_hiwat;
   goto integer;

  case 0x1003:
   optval = so->so_snd.sb_lowat;
   goto integer;

  case 0x1004:
   optval = so->so_rcv.sb_lowat;
   goto integer;

  case 0x1005:
  case 0x1006:
   optval = (sopt->sopt_name == 0x1005 ?
      so->so_snd.sb_timeo : so->so_rcv.sb_timeo);

   tv.tv_sec = optval / global_hz[get_stack_id()];
   tv.tv_usec = (optval % global_hz[get_stack_id()]) * global_tick[get_stack_id()];
   error = sooptcopyout(sopt, &tv, sizeof tv);
   break;
  case 0x1009:
# 1953 "freebsd5/kern/uipc_socket.c"
   error = 45;

   break;
  case 0x1010:
# 1968 "freebsd5/kern/uipc_socket.c"
   error = 45;

   break;
  default:
   error = 42;
   break;
  }
  return (error);
 }
}


int
soopt_getm(struct sockopt *sopt, struct mbuf **mp)
{
 struct mbuf *m, *m_prev;
 int sopt_size = sopt->sopt_valsize;

 ((m) = m_get((sopt->sopt_td ? 0x0002 : 0x0001), (1)));
 if (m == ((void *)0))
  return 55;
 if (sopt_size > (256 - sizeof(struct m_hdr))) {
  m_clget((m), (sopt->sopt_td ? 0x0002 : 0x0001));
  if ((m->m_hdr.mh_flags & 0x0001) == 0) {
   m_free(m);
   return 55;
  }
  m->m_hdr.mh_len = min((1 << 11), sopt_size);
 } else {
  m->m_hdr.mh_len = min((256 - sizeof(struct m_hdr)), sopt_size);
 }
 sopt_size -= m->m_hdr.mh_len;
 *mp = m;
 m_prev = m;

 while (sopt_size) {
  ((m) = m_get((sopt->sopt_td ? 0x0002 : 0x0001), (1)));
  if (m == ((void *)0)) {
   m_freem(*mp);
   return 55;
  }
  if (sopt_size > (256 - sizeof(struct m_hdr))) {
   m_clget((m), (sopt->sopt_td != ((void *)0) ? 0x0002 : 0x0001))
                  ;
   if ((m->m_hdr.mh_flags & 0x0001) == 0) {
    m_freem(m);
    m_freem(*mp);
    return 55;
   }
   m->m_hdr.mh_len = min((1 << 11), sopt_size);
  } else {
   m->m_hdr.mh_len = min((256 - sizeof(struct m_hdr)), sopt_size);
  }
  sopt_size -= m->m_hdr.mh_len;
  m_prev->m_hdr.mh_next = m;
  m_prev = m;
 }
 return 0;
}


int
soopt_mcopyin(struct sockopt *sopt, struct mbuf *m)
{
 struct mbuf *m0 = m;

 if (sopt->sopt_val == ((void *)0))
  return 0;
 while (m != ((void *)0) && sopt->sopt_valsize >= m->m_hdr.mh_len) {
  if (sopt->sopt_td != ((void *)0)) {
   int error;

   error = copyin(sopt->sopt_val, ((char *)((m)->m_hdr.mh_data)),
           m->m_hdr.mh_len);
   if (error != 0) {
    m_freem(m0);
    return(error);
   }
  } else
   bcopy(sopt->sopt_val, ((char *)((m)->m_hdr.mh_data)), m->m_hdr.mh_len);
  sopt->sopt_valsize -= m->m_hdr.mh_len;
  sopt->sopt_val = (char *)sopt->sopt_val + m->m_hdr.mh_len;
  m = m->m_hdr.mh_next;
 }
 if (m != ((void *)0))
  panic("ip6_sooptmcopyin");
 return 0;
}


int
soopt_mcopyout(struct sockopt *sopt, struct mbuf *m)
{
 struct mbuf *m0 = m;
 size_t valsize = 0;

 if (sopt->sopt_val == ((void *)0))
  return 0;
 while (m != ((void *)0) && sopt->sopt_valsize >= m->m_hdr.mh_len) {
  if (sopt->sopt_td != ((void *)0)) {
   int error;

   error = copyout(((char *)((m)->m_hdr.mh_data)), sopt->sopt_val,
           m->m_hdr.mh_len);
   if (error != 0) {
    m_freem(m0);
    return(error);
   }
  } else
   bcopy(((char *)((m)->m_hdr.mh_data)), sopt->sopt_val, m->m_hdr.mh_len);
        sopt->sopt_valsize -= m->m_hdr.mh_len;
        sopt->sopt_val = (char *)sopt->sopt_val + m->m_hdr.mh_len;
        valsize += m->m_hdr.mh_len;
        m = m->m_hdr.mh_next;
 }
 if (m != ((void *)0)) {

  m_freem(m0);
  return(22);
 }
 sopt->sopt_valsize = valsize;
 return 0;
}

void
sohasoutofband(so)
 struct socket *so;
{
 if (so->so_sigio != ((void *)0))
  pgsigio(&so->so_sigio, 16, 0);
 selwakeuppri(&so->so_rcv.sb_sel, ((64) + 24));
}

int
sopoll(struct socket *so, int events, struct ucred *active_cred,
    struct thread *td)
{
 int revents = 0;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (events & (0x0001 | 0x0040))
  if (((so)->so_rcv.sb_cc >= (so)->so_rcv.sb_lowat || ((so)->so_rcv.sb_state & 0x0020) || !((&(so)->so_comp)->tqh_first == ((void *)0)) || (so)->so_error))
   revents |= events & (0x0001 | 0x0040);

 if (events & 0x2000)
  if (so->so_rcv.sb_cc >= so->so_rcv.sb_lowat ||
      !((&so->so_comp)->tqh_first == ((void *)0)) || so->so_error)
   revents |= 0x2000;

 if (events & (0x0004 | 0x0004))
  if (((((long) imin((int)((&(so)->so_snd)->sb_hiwat - (&(so)->so_snd)->sb_cc), (int)((&(so)->so_snd)->sb_mbmax - (&(so)->so_snd)->sb_mbcnt))) >= (so)->so_snd.sb_lowat && (((so)->so_state&0x0002) || ((so)->so_proto->pr_flags&0x04)==0)) || ((so)->so_snd.sb_state & 0x0010) || (so)->so_error))
   revents |= events & (0x0004 | 0x0004);

 if (events & (0x0002 | 0x0080))
  if (so->so_oobmark || (so->so_rcv.sb_state & 0x0040))
   revents |= events & (0x0002 | 0x0080);

 if (revents == 0) {
  if (events &
      (0x0001 | 0x2000 | 0x0002 | 0x0040 |
       0x0080)) {
   selrecord(td, &so->so_rcv.sb_sel);
   so->so_rcv.sb_flags |= 0x08;
  }

  if (events & (0x0004 | 0x0004)) {
   selrecord(td, &so->so_snd.sb_sel);
   so->so_snd.sb_flags |= 0x08;
  }
 }

 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 return (revents);
}

int
soo_kqfilter(struct file *fp, struct knote *kn)
{
 struct socket *so = kn->kn_ptr.p_fp->f_data;
 struct sockbuf *sb;

 switch (kn->kn_kevent.filter) {
 case (-1):
  if (so->so_options & 0x0002)
   kn->kn_fop = &global_solisten_filtops[get_stack_id()];
  else
   kn->kn_fop = &global_soread_filtops[get_stack_id()];
  sb = &so->so_rcv;
  break;
 case (-2):
  kn->kn_fop = &global_sowrite_filtops[get_stack_id()];
  sb = &so->so_snd;
  break;
 default:
  return (22);
 }

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(sb)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(sb)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 knlist_add(&sb->sb_sel.si_note, kn, 1);
 sb->sb_flags |= 0x100;
 do { if (!atomic_cmpset_ptr(&(((((&(sb)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(sb)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
 return (0);
}

static void
filt_sordetach(struct knote *kn)
{
 struct socket *so = kn->kn_ptr.p_fp->f_data;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 knlist_remove(&so->so_rcv.sb_sel.si_note, kn, 1);
 if (knlist_empty(&so->so_rcv.sb_sel.si_note))
  so->so_rcv.sb_flags &= ~0x100;
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
}


static int
filt_soread(struct knote *kn, long hint)
{
 struct socket *so;

 so = kn->kn_ptr.p_fp->f_data;
 ;

 kn->kn_kevent.data = so->so_rcv.sb_cc - so->so_rcv.sb_ctl;
 if (so->so_rcv.sb_state & 0x0020) {
  kn->kn_kevent.flags |= 0x8000;
  kn->kn_kevent.fflags = so->so_error;
  return (1);
 } else if (so->so_error)
  return (1);
 else if (kn->kn_sfflags & 0x0001)
  return (kn->kn_kevent.data >= kn->kn_sdata);
 else
 return (so->so_rcv.sb_cc >= so->so_rcv.sb_lowat);
}

static void
filt_sowdetach(struct knote *kn)
{
 struct socket *so = kn->kn_ptr.p_fp->f_data;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&so->so_snd)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 knlist_remove(&so->so_snd.sb_sel.si_note, kn, 1);
 if (knlist_empty(&so->so_snd.sb_sel.si_note))
  so->so_snd.sb_flags &= ~0x100;
 do { if (!atomic_cmpset_ptr(&(((((&(&so->so_snd)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&so->so_snd)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0);
}


static int
filt_sowrite(struct knote *kn, long hint)
{
 struct socket *so;

 so = kn->kn_ptr.p_fp->f_data;
 ;
 kn->kn_kevent.data = ((long) imin((int)((&so->so_snd)->sb_hiwat - (&so->so_snd)->sb_cc), (int)((&so->so_snd)->sb_mbmax - (&so->so_snd)->sb_mbcnt)));
 if (so->so_snd.sb_state & 0x0010) {
  kn->kn_kevent.flags |= 0x8000;
  kn->kn_kevent.fflags = so->so_error;
  return (1);
 } else if (so->so_error)
  return (1);
 else if (((so->so_state & 0x0002) == 0) &&
     (so->so_proto->pr_flags & 0x04))
  return (0);
 else if (kn->kn_sfflags & 0x0001)
  return (kn->kn_kevent.data >= kn->kn_sdata);
 else
 return (kn->kn_kevent.data >= so->so_snd.sb_lowat);
}


static int
filt_solisten(struct knote *kn, long hint)
{
 struct socket *so = kn->kn_ptr.p_fp->f_data;

 kn->kn_kevent.data = so->so_qlen;
 return (! ((&so->so_comp)->tqh_first == ((void *)0)));
}

int
socheckuid(struct socket *so, uid_t uid)
{

 if (so == ((void *)0))
  return (1);
 if (so->so_cred->cr_uid == uid)
  return (0);
 return (1);
}

