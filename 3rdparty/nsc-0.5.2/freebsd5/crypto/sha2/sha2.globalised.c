# 1 "freebsd5/crypto/sha2/sha2.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/crypto/sha2/sha2.c"
# 37 "freebsd5/crypto/sha2/sha2.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 38 "freebsd5/crypto/sha2/sha2.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/crypto/sha2/sha2.c,v 1.7 2003/09/08 18:32:33 phk Exp $" "\"");

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
# 41 "freebsd5/crypto/sha2/sha2.c" 2
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
# 42 "freebsd5/crypto/sha2/sha2.c" 2

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
# 44 "freebsd5/crypto/sha2/sha2.c" 2




# 1 "freebsd5/crypto/sha2/sha2.h" 1
# 100 "freebsd5/crypto/sha2/sha2.h"
typedef struct _SHA256_CTX {
 u_int32_t state[8];
 u_int64_t bitcount;
 u_int8_t buffer[64];
} SHA256_CTX;
typedef struct _SHA512_CTX {
 u_int64_t state[8];
 u_int64_t bitcount[2];
 u_int8_t buffer[128];
} SHA512_CTX;



typedef SHA512_CTX SHA384_CTX;




void SHA256_Init(SHA256_CTX *);
void SHA256_Update(SHA256_CTX*, const u_int8_t*, size_t);
void SHA256_Final(u_int8_t[32], SHA256_CTX*);
char* SHA256_End(SHA256_CTX*, char[(32 * 2 + 1)]);
char* SHA256_Data(const u_int8_t*, size_t, char[(32 * 2 + 1)]);

void SHA384_Init(SHA384_CTX*);
void SHA384_Update(SHA384_CTX*, const u_int8_t*, size_t);
void SHA384_Final(u_int8_t[48], SHA384_CTX*);
char* SHA384_End(SHA384_CTX*, char[(48 * 2 + 1)]);
char* SHA384_Data(const u_int8_t*, size_t, char[(48 * 2 + 1)]);

void SHA512_Init(SHA512_CTX*);
void SHA512_Update(SHA512_CTX*, const u_int8_t*, size_t);
void SHA512_Final(u_int8_t[64], SHA512_CTX*);
char* SHA512_End(SHA512_CTX*, char[(64 * 2 + 1)]);
char* SHA512_Data(const u_int8_t*, size_t, char[(64 * 2 + 1)]);
# 49 "freebsd5/crypto/sha2/sha2.c" 2
# 129 "freebsd5/crypto/sha2/sha2.c"
typedef u_int8_t sha2_byte;
typedef u_int32_t sha2_word32;
typedef u_int64_t sha2_word64;
# 209 "freebsd5/crypto/sha2/sha2.c"
void SHA512_Last(SHA512_CTX*);
void SHA256_Transform(SHA256_CTX*, const sha2_word32*);
void SHA512_Transform(SHA512_CTX*, const sha2_word64*);




typedef  const sha2_word32   _GLOBAL_40_T; static  _GLOBAL_40_T  _GLOBAL_0_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_1_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_2_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_3_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_4_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_5_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_6_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_7_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_8_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_9_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_10_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_11_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_12_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_13_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_14_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_15_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_16_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_17_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_18_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_19_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_20_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_21_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_22_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_23_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_24_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_25_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_26_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_27_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_28_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_29_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_30_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_31_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_32_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_33_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_34_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_35_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_36_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_37_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_38_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_39_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_40_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_41_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_42_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_43_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_44_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_45_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_46_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_47_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_48_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static  _GLOBAL_40_T  _GLOBAL_49_K256_I [ 64 ]  = { 0x428a2f98UL , 0x71374491UL  , 0xb5c0fbcfUL  , 0xe9b5dba5UL  , 0x3956c25bUL  , 0x59f111f1UL  , 0x923f82a4UL  , 0xab1c5ed5UL  , 0xd807aa98UL  , 0x12835b01UL  , 0x243185beUL  , 0x550c7dc3UL  , 0x72be5d74UL  , 0x80deb1feUL  , 0x9bdc06a7UL  , 0xc19bf174UL  , 0xe49b69c1UL  , 0xefbe4786UL  , 0x0fc19dc6UL  , 0x240ca1ccUL  , 0x2de92c6fUL  , 0x4a7484aaUL  , 0x5cb0a9dcUL  , 0x76f988daUL  , 0x983e5152UL  , 0xa831c66dUL  , 0xb00327c8UL  , 0xbf597fc7UL  , 0xc6e00bf3UL  , 0xd5a79147UL  , 0x06ca6351UL  , 0x14292967UL  , 0x27b70a85UL  , 0x2e1b2138UL  , 0x4d2c6dfcUL  , 0x53380d13UL  , 0x650a7354UL  , 0x766a0abbUL  , 0x81c2c92eUL  , 0x92722c85UL  , 0xa2bfe8a1UL  , 0xa81a664bUL  , 0xc24b8b70UL  , 0xc76c51a3UL  , 0xd192e819UL  , 0xd6990624UL  , 0xf40e3585UL  , 0x106aa070UL  , 0x19a4c116UL  , 0x1e376c08UL  , 0x2748774cUL  , 0x34b0bcb5UL  , 0x391c0cb3UL  , 0x4ed8aa4aUL  , 0x5b9cca4fUL  , 0x682e6ff3UL  , 0x748f82eeUL  , 0x78a5636fUL  , 0x84c87814UL  , 0x8cc70208UL  , 0x90befffaUL  , 0xa4506cebUL  , 0xbef9a3f7UL  , 0xc67178f2UL  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_K256_I) *_GLOBAL_K256_13_A[NUM_STACKS] = { &_GLOBAL_0_K256_I, &_GLOBAL_1_K256_I, &_GLOBAL_2_K256_I, &_GLOBAL_3_K256_I, &_GLOBAL_4_K256_I, &_GLOBAL_5_K256_I, &_GLOBAL_6_K256_I, &_GLOBAL_7_K256_I, &_GLOBAL_8_K256_I, &_GLOBAL_9_K256_I, &_GLOBAL_10_K256_I, &_GLOBAL_11_K256_I, &_GLOBAL_12_K256_I, &_GLOBAL_13_K256_I, &_GLOBAL_14_K256_I, &_GLOBAL_15_K256_I, &_GLOBAL_16_K256_I, &_GLOBAL_17_K256_I, &_GLOBAL_18_K256_I, &_GLOBAL_19_K256_I, &_GLOBAL_20_K256_I, &_GLOBAL_21_K256_I, &_GLOBAL_22_K256_I, &_GLOBAL_23_K256_I, &_GLOBAL_24_K256_I, &_GLOBAL_25_K256_I, &_GLOBAL_26_K256_I, &_GLOBAL_27_K256_I, &_GLOBAL_28_K256_I, &_GLOBAL_29_K256_I, &_GLOBAL_30_K256_I, &_GLOBAL_31_K256_I, &_GLOBAL_32_K256_I, &_GLOBAL_33_K256_I, &_GLOBAL_34_K256_I, &_GLOBAL_35_K256_I, &_GLOBAL_36_K256_I, &_GLOBAL_37_K256_I, &_GLOBAL_38_K256_I, &_GLOBAL_39_K256_I, &_GLOBAL_40_K256_I, &_GLOBAL_41_K256_I, &_GLOBAL_42_K256_I, &_GLOBAL_43_K256_I, &_GLOBAL_44_K256_I, &_GLOBAL_45_K256_I, &_GLOBAL_46_K256_I, &_GLOBAL_47_K256_I, &_GLOBAL_48_K256_I, &_GLOBAL_49_K256_I, };     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    



typedef  const sha2_word32   _GLOBAL_41_T; static  _GLOBAL_41_T  _GLOBAL_0_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_1_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_2_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_3_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_4_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_5_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_6_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_7_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_8_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_9_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_10_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_11_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_12_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_13_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_14_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_15_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_16_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_17_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_18_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_19_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_20_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_21_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_22_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_23_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_24_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_25_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_26_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_27_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_28_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_29_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_30_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_31_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_32_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_33_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_34_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_35_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_36_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_37_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_38_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_39_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_40_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_41_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_42_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_43_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_44_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_45_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_46_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_47_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_48_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static  _GLOBAL_41_T  _GLOBAL_49_sha256_initial_hash_value_I [ 8 ]  = { 0x6a09e667UL , 0xbb67ae85UL  , 0x3c6ef372UL  , 0xa54ff53aUL  , 0x510e527fUL  , 0x9b05688cUL  , 0x1f83d9abUL  , 0x5be0cd19UL  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sha256_initial_hash_value_I) *_GLOBAL_sha256_initial_hash_value_14_A[NUM_STACKS] = { &_GLOBAL_0_sha256_initial_hash_value_I, &_GLOBAL_1_sha256_initial_hash_value_I, &_GLOBAL_2_sha256_initial_hash_value_I, &_GLOBAL_3_sha256_initial_hash_value_I, &_GLOBAL_4_sha256_initial_hash_value_I, &_GLOBAL_5_sha256_initial_hash_value_I, &_GLOBAL_6_sha256_initial_hash_value_I, &_GLOBAL_7_sha256_initial_hash_value_I, &_GLOBAL_8_sha256_initial_hash_value_I, &_GLOBAL_9_sha256_initial_hash_value_I, &_GLOBAL_10_sha256_initial_hash_value_I, &_GLOBAL_11_sha256_initial_hash_value_I, &_GLOBAL_12_sha256_initial_hash_value_I, &_GLOBAL_13_sha256_initial_hash_value_I, &_GLOBAL_14_sha256_initial_hash_value_I, &_GLOBAL_15_sha256_initial_hash_value_I, &_GLOBAL_16_sha256_initial_hash_value_I, &_GLOBAL_17_sha256_initial_hash_value_I, &_GLOBAL_18_sha256_initial_hash_value_I, &_GLOBAL_19_sha256_initial_hash_value_I, &_GLOBAL_20_sha256_initial_hash_value_I, &_GLOBAL_21_sha256_initial_hash_value_I, &_GLOBAL_22_sha256_initial_hash_value_I, &_GLOBAL_23_sha256_initial_hash_value_I, &_GLOBAL_24_sha256_initial_hash_value_I, &_GLOBAL_25_sha256_initial_hash_value_I, &_GLOBAL_26_sha256_initial_hash_value_I, &_GLOBAL_27_sha256_initial_hash_value_I, &_GLOBAL_28_sha256_initial_hash_value_I, &_GLOBAL_29_sha256_initial_hash_value_I, &_GLOBAL_30_sha256_initial_hash_value_I, &_GLOBAL_31_sha256_initial_hash_value_I, &_GLOBAL_32_sha256_initial_hash_value_I, &_GLOBAL_33_sha256_initial_hash_value_I, &_GLOBAL_34_sha256_initial_hash_value_I, &_GLOBAL_35_sha256_initial_hash_value_I, &_GLOBAL_36_sha256_initial_hash_value_I, &_GLOBAL_37_sha256_initial_hash_value_I, &_GLOBAL_38_sha256_initial_hash_value_I, &_GLOBAL_39_sha256_initial_hash_value_I, &_GLOBAL_40_sha256_initial_hash_value_I, &_GLOBAL_41_sha256_initial_hash_value_I, &_GLOBAL_42_sha256_initial_hash_value_I, &_GLOBAL_43_sha256_initial_hash_value_I, &_GLOBAL_44_sha256_initial_hash_value_I, &_GLOBAL_45_sha256_initial_hash_value_I, &_GLOBAL_46_sha256_initial_hash_value_I, &_GLOBAL_47_sha256_initial_hash_value_I, &_GLOBAL_48_sha256_initial_hash_value_I, &_GLOBAL_49_sha256_initial_hash_value_I, };     
 
 
 
 
 
 
 
 



typedef  const sha2_word64   _GLOBAL_42_T; static  _GLOBAL_42_T  _GLOBAL_0_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_1_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_2_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_3_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_4_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_5_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_6_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_7_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_8_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_9_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_10_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_11_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_12_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_13_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_14_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_15_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_16_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_17_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_18_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_19_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_20_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_21_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_22_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_23_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_24_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_25_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_26_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_27_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_28_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_29_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_30_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_31_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_32_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_33_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_34_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_35_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_36_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_37_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_38_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_39_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_40_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_41_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_42_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_43_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_44_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_45_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_46_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_47_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_48_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static  _GLOBAL_42_T  _GLOBAL_49_K512_I [ 80 ]  = { 0x428a2f98d728ae22ULL , 0x7137449123ef65cdULL  , 0xb5c0fbcfec4d3b2fULL  , 0xe9b5dba58189dbbcULL  , 0x3956c25bf348b538ULL  , 0x59f111f1b605d019ULL  , 0x923f82a4af194f9bULL  , 0xab1c5ed5da6d8118ULL  , 0xd807aa98a3030242ULL  , 0x12835b0145706fbeULL  , 0x243185be4ee4b28cULL  , 0x550c7dc3d5ffb4e2ULL  , 0x72be5d74f27b896fULL  , 0x80deb1fe3b1696b1ULL  , 0x9bdc06a725c71235ULL  , 0xc19bf174cf692694ULL  , 0xe49b69c19ef14ad2ULL  , 0xefbe4786384f25e3ULL  , 0x0fc19dc68b8cd5b5ULL  , 0x240ca1cc77ac9c65ULL  , 0x2de92c6f592b0275ULL  , 0x4a7484aa6ea6e483ULL  , 0x5cb0a9dcbd41fbd4ULL  , 0x76f988da831153b5ULL  , 0x983e5152ee66dfabULL  , 0xa831c66d2db43210ULL  , 0xb00327c898fb213fULL  , 0xbf597fc7beef0ee4ULL  , 0xc6e00bf33da88fc2ULL  , 0xd5a79147930aa725ULL  , 0x06ca6351e003826fULL  , 0x142929670a0e6e70ULL  , 0x27b70a8546d22ffcULL  , 0x2e1b21385c26c926ULL  , 0x4d2c6dfc5ac42aedULL  , 0x53380d139d95b3dfULL  , 0x650a73548baf63deULL  , 0x766a0abb3c77b2a8ULL  , 0x81c2c92e47edaee6ULL  , 0x92722c851482353bULL  , 0xa2bfe8a14cf10364ULL  , 0xa81a664bbc423001ULL  , 0xc24b8b70d0f89791ULL  , 0xc76c51a30654be30ULL  , 0xd192e819d6ef5218ULL  , 0xd69906245565a910ULL  , 0xf40e35855771202aULL  , 0x106aa07032bbd1b8ULL  , 0x19a4c116b8d2d0c8ULL  , 0x1e376c085141ab53ULL  , 0x2748774cdf8eeb99ULL  , 0x34b0bcb5e19b48a8ULL  , 0x391c0cb3c5c95a63ULL  , 0x4ed8aa4ae3418acbULL  , 0x5b9cca4f7763e373ULL  , 0x682e6ff3d6b2b8a3ULL  , 0x748f82ee5defb2fcULL  , 0x78a5636f43172f60ULL  , 0x84c87814a1f0ab72ULL  , 0x8cc702081a6439ecULL  , 0x90befffa23631e28ULL  , 0xa4506cebde82bde9ULL  , 0xbef9a3f7b2c67915ULL  , 0xc67178f2e372532bULL  , 0xca273eceea26619cULL  , 0xd186b8c721c0c207ULL  , 0xeada7dd6cde0eb1eULL  , 0xf57d4f7fee6ed178ULL  , 0x06f067aa72176fbaULL  , 0x0a637dc5a2c898a6ULL  , 0x113f9804bef90daeULL  , 0x1b710b35131c471bULL  , 0x28db77f523047d84ULL  , 0x32caab7b40c72493ULL  , 0x3c9ebe0a15c9bebcULL  , 0x431d67c49c100d4cULL  , 0x4cc5d4becb3e42b6ULL  , 0x597f299cfc657e2aULL  , 0x5fcb6fab3ad6faecULL  , 0x6c44198c4a475817ULL  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_K512_I) *_GLOBAL_K512_15_A[NUM_STACKS] = { &_GLOBAL_0_K512_I, &_GLOBAL_1_K512_I, &_GLOBAL_2_K512_I, &_GLOBAL_3_K512_I, &_GLOBAL_4_K512_I, &_GLOBAL_5_K512_I, &_GLOBAL_6_K512_I, &_GLOBAL_7_K512_I, &_GLOBAL_8_K512_I, &_GLOBAL_9_K512_I, &_GLOBAL_10_K512_I, &_GLOBAL_11_K512_I, &_GLOBAL_12_K512_I, &_GLOBAL_13_K512_I, &_GLOBAL_14_K512_I, &_GLOBAL_15_K512_I, &_GLOBAL_16_K512_I, &_GLOBAL_17_K512_I, &_GLOBAL_18_K512_I, &_GLOBAL_19_K512_I, &_GLOBAL_20_K512_I, &_GLOBAL_21_K512_I, &_GLOBAL_22_K512_I, &_GLOBAL_23_K512_I, &_GLOBAL_24_K512_I, &_GLOBAL_25_K512_I, &_GLOBAL_26_K512_I, &_GLOBAL_27_K512_I, &_GLOBAL_28_K512_I, &_GLOBAL_29_K512_I, &_GLOBAL_30_K512_I, &_GLOBAL_31_K512_I, &_GLOBAL_32_K512_I, &_GLOBAL_33_K512_I, &_GLOBAL_34_K512_I, &_GLOBAL_35_K512_I, &_GLOBAL_36_K512_I, &_GLOBAL_37_K512_I, &_GLOBAL_38_K512_I, &_GLOBAL_39_K512_I, &_GLOBAL_40_K512_I, &_GLOBAL_41_K512_I, &_GLOBAL_42_K512_I, &_GLOBAL_43_K512_I, &_GLOBAL_44_K512_I, &_GLOBAL_45_K512_I, &_GLOBAL_46_K512_I, &_GLOBAL_47_K512_I, &_GLOBAL_48_K512_I, &_GLOBAL_49_K512_I, };     
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  



typedef  const sha2_word64   _GLOBAL_43_T; static  _GLOBAL_43_T  _GLOBAL_0_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_1_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_2_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_3_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_4_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_5_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_6_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_7_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_8_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_9_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_10_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_11_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_12_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_13_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_14_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_15_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_16_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_17_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_18_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_19_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_20_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_21_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_22_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_23_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_24_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_25_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_26_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_27_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_28_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_29_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_30_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_31_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_32_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_33_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_34_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_35_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_36_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_37_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_38_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_39_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_40_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_41_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_42_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_43_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_44_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_45_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_46_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_47_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_48_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static  _GLOBAL_43_T  _GLOBAL_49_sha384_initial_hash_value_I [ 8 ]  = { 0xcbbb9d5dc1059ed8ULL , 0x629a292a367cd507ULL  , 0x9159015a3070dd17ULL  , 0x152fecd8f70e5939ULL  , 0x67332667ffc00b31ULL  , 0x8eb44a8768581511ULL  , 0xdb0c2e0d64f98fa7ULL  , 0x47b5481dbefa4fa4ULL  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sha384_initial_hash_value_I) *_GLOBAL_sha384_initial_hash_value_16_A[NUM_STACKS] = { &_GLOBAL_0_sha384_initial_hash_value_I, &_GLOBAL_1_sha384_initial_hash_value_I, &_GLOBAL_2_sha384_initial_hash_value_I, &_GLOBAL_3_sha384_initial_hash_value_I, &_GLOBAL_4_sha384_initial_hash_value_I, &_GLOBAL_5_sha384_initial_hash_value_I, &_GLOBAL_6_sha384_initial_hash_value_I, &_GLOBAL_7_sha384_initial_hash_value_I, &_GLOBAL_8_sha384_initial_hash_value_I, &_GLOBAL_9_sha384_initial_hash_value_I, &_GLOBAL_10_sha384_initial_hash_value_I, &_GLOBAL_11_sha384_initial_hash_value_I, &_GLOBAL_12_sha384_initial_hash_value_I, &_GLOBAL_13_sha384_initial_hash_value_I, &_GLOBAL_14_sha384_initial_hash_value_I, &_GLOBAL_15_sha384_initial_hash_value_I, &_GLOBAL_16_sha384_initial_hash_value_I, &_GLOBAL_17_sha384_initial_hash_value_I, &_GLOBAL_18_sha384_initial_hash_value_I, &_GLOBAL_19_sha384_initial_hash_value_I, &_GLOBAL_20_sha384_initial_hash_value_I, &_GLOBAL_21_sha384_initial_hash_value_I, &_GLOBAL_22_sha384_initial_hash_value_I, &_GLOBAL_23_sha384_initial_hash_value_I, &_GLOBAL_24_sha384_initial_hash_value_I, &_GLOBAL_25_sha384_initial_hash_value_I, &_GLOBAL_26_sha384_initial_hash_value_I, &_GLOBAL_27_sha384_initial_hash_value_I, &_GLOBAL_28_sha384_initial_hash_value_I, &_GLOBAL_29_sha384_initial_hash_value_I, &_GLOBAL_30_sha384_initial_hash_value_I, &_GLOBAL_31_sha384_initial_hash_value_I, &_GLOBAL_32_sha384_initial_hash_value_I, &_GLOBAL_33_sha384_initial_hash_value_I, &_GLOBAL_34_sha384_initial_hash_value_I, &_GLOBAL_35_sha384_initial_hash_value_I, &_GLOBAL_36_sha384_initial_hash_value_I, &_GLOBAL_37_sha384_initial_hash_value_I, &_GLOBAL_38_sha384_initial_hash_value_I, &_GLOBAL_39_sha384_initial_hash_value_I, &_GLOBAL_40_sha384_initial_hash_value_I, &_GLOBAL_41_sha384_initial_hash_value_I, &_GLOBAL_42_sha384_initial_hash_value_I, &_GLOBAL_43_sha384_initial_hash_value_I, &_GLOBAL_44_sha384_initial_hash_value_I, &_GLOBAL_45_sha384_initial_hash_value_I, &_GLOBAL_46_sha384_initial_hash_value_I, &_GLOBAL_47_sha384_initial_hash_value_I, &_GLOBAL_48_sha384_initial_hash_value_I, &_GLOBAL_49_sha384_initial_hash_value_I, };     
 
 
 
 
 
 
 
 



typedef  const sha2_word64   _GLOBAL_44_T; static  _GLOBAL_44_T  _GLOBAL_0_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_1_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_2_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_3_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_4_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_5_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_6_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_7_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_8_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_9_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_10_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_11_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_12_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_13_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_14_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_15_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_16_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_17_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_18_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_19_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_20_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_21_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_22_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_23_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_24_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_25_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_26_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_27_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_28_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_29_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_30_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_31_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_32_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_33_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_34_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_35_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_36_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_37_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_38_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_39_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_40_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_41_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_42_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_43_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_44_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_45_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_46_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_47_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_48_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static  _GLOBAL_44_T  _GLOBAL_49_sha512_initial_hash_value_I [ 8 ]  = { 0x6a09e667f3bcc908ULL , 0xbb67ae8584caa73bULL  , 0x3c6ef372fe94f82bULL  , 0xa54ff53a5f1d36f1ULL  , 0x510e527fade682d1ULL  , 0x9b05688c2b3e6c1fULL  , 0x1f83d9abfb41bd6bULL  , 0x5be0cd19137e2179ULL  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sha512_initial_hash_value_I) *_GLOBAL_sha512_initial_hash_value_17_A[NUM_STACKS] = { &_GLOBAL_0_sha512_initial_hash_value_I, &_GLOBAL_1_sha512_initial_hash_value_I, &_GLOBAL_2_sha512_initial_hash_value_I, &_GLOBAL_3_sha512_initial_hash_value_I, &_GLOBAL_4_sha512_initial_hash_value_I, &_GLOBAL_5_sha512_initial_hash_value_I, &_GLOBAL_6_sha512_initial_hash_value_I, &_GLOBAL_7_sha512_initial_hash_value_I, &_GLOBAL_8_sha512_initial_hash_value_I, &_GLOBAL_9_sha512_initial_hash_value_I, &_GLOBAL_10_sha512_initial_hash_value_I, &_GLOBAL_11_sha512_initial_hash_value_I, &_GLOBAL_12_sha512_initial_hash_value_I, &_GLOBAL_13_sha512_initial_hash_value_I, &_GLOBAL_14_sha512_initial_hash_value_I, &_GLOBAL_15_sha512_initial_hash_value_I, &_GLOBAL_16_sha512_initial_hash_value_I, &_GLOBAL_17_sha512_initial_hash_value_I, &_GLOBAL_18_sha512_initial_hash_value_I, &_GLOBAL_19_sha512_initial_hash_value_I, &_GLOBAL_20_sha512_initial_hash_value_I, &_GLOBAL_21_sha512_initial_hash_value_I, &_GLOBAL_22_sha512_initial_hash_value_I, &_GLOBAL_23_sha512_initial_hash_value_I, &_GLOBAL_24_sha512_initial_hash_value_I, &_GLOBAL_25_sha512_initial_hash_value_I, &_GLOBAL_26_sha512_initial_hash_value_I, &_GLOBAL_27_sha512_initial_hash_value_I, &_GLOBAL_28_sha512_initial_hash_value_I, &_GLOBAL_29_sha512_initial_hash_value_I, &_GLOBAL_30_sha512_initial_hash_value_I, &_GLOBAL_31_sha512_initial_hash_value_I, &_GLOBAL_32_sha512_initial_hash_value_I, &_GLOBAL_33_sha512_initial_hash_value_I, &_GLOBAL_34_sha512_initial_hash_value_I, &_GLOBAL_35_sha512_initial_hash_value_I, &_GLOBAL_36_sha512_initial_hash_value_I, &_GLOBAL_37_sha512_initial_hash_value_I, &_GLOBAL_38_sha512_initial_hash_value_I, &_GLOBAL_39_sha512_initial_hash_value_I, &_GLOBAL_40_sha512_initial_hash_value_I, &_GLOBAL_41_sha512_initial_hash_value_I, &_GLOBAL_42_sha512_initial_hash_value_I, &_GLOBAL_43_sha512_initial_hash_value_I, &_GLOBAL_44_sha512_initial_hash_value_I, &_GLOBAL_45_sha512_initial_hash_value_I, &_GLOBAL_46_sha512_initial_hash_value_I, &_GLOBAL_47_sha512_initial_hash_value_I, &_GLOBAL_48_sha512_initial_hash_value_I, &_GLOBAL_49_sha512_initial_hash_value_I, };     
 
 
 
 
 
 
 
 






typedef  const char   _GLOBAL_45_T; static  _GLOBAL_45_T  * global_sha2_hex_digits[NUM_STACKS] = {  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  "0123456789abcdef",  };      



void SHA256_Init(SHA256_CTX* context) {
 if (context == (SHA256_CTX*)0) {
  return;
 }
 bcopy((*_GLOBAL_sha256_initial_hash_value_14_A[get_stack_id()]), context->state, 32);
 bzero(context->buffer, 64);
 context->bitcount = 0;
}
# 427 "freebsd5/crypto/sha2/sha2.c"
void SHA256_Transform(SHA256_CTX* context, const sha2_word32* data) {
 sha2_word32 a, b, c, d, e, f, g, h, s0, s1;
 sha2_word32 T1, T2, *W256;
 int j;

 W256 = (sha2_word32*)context->buffer;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {


  { sha2_word32 tmp = (*data++); tmp = (tmp >> 16) | (tmp << 16); (W256[j]) = ((tmp & 0xff00ff00UL) >> 8) | ((tmp & 0x00ff00ffUL) << 8); };

  T1 = h + (((((e)) >> (6)) | (((e)) << (32 - (6)))) ^ ((((e)) >> (11)) | (((e)) << (32 - (11)))) ^ ((((e)) >> (25)) | (((e)) << (32 - (25))))) + (((e) & (f)) ^ ((~(e)) & (g))) + (*_GLOBAL_K256_13_A[get_stack_id()])[j] + W256[j];




  T2 = (((((a)) >> (2)) | (((a)) << (32 - (2)))) ^ ((((a)) >> (13)) | (((a)) << (32 - (13)))) ^ ((((a)) >> (22)) | (((a)) << (32 - (22))))) + (((a) & (b)) ^ ((a) & (c)) ^ ((b) & (c)));
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 16);

 do {

  s0 = W256[(j+1)&0x0f];
  s0 = (((((s0)) >> (7)) | (((s0)) << (32 - (7)))) ^ ((((s0)) >> (18)) | (((s0)) << (32 - (18)))) ^ (((s0)) >> (3)));
  s1 = W256[(j+14)&0x0f];
  s1 = (((((s1)) >> (17)) | (((s1)) << (32 - (17)))) ^ ((((s1)) >> (19)) | (((s1)) << (32 - (19)))) ^ (((s1)) >> (10)));


  T1 = h + (((((e)) >> (6)) | (((e)) << (32 - (6)))) ^ ((((e)) >> (11)) | (((e)) << (32 - (11)))) ^ ((((e)) >> (25)) | (((e)) << (32 - (25))))) + (((e) & (f)) ^ ((~(e)) & (g))) + (*_GLOBAL_K256_13_A[get_stack_id()])[j] +
       (W256[j&0x0f] += s1 + W256[(j+9)&0x0f] + s0);
  T2 = (((((a)) >> (2)) | (((a)) << (32 - (2)))) ^ ((((a)) >> (13)) | (((a)) << (32 - (13)))) ^ ((((a)) >> (22)) | (((a)) << (32 - (22))))) + (((a) & (b)) ^ ((a) & (c)) ^ ((b) & (c)));
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 64);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = T2 = 0;
}



void SHA256_Update(SHA256_CTX* context, const sha2_byte *data, size_t len) {
 unsigned int freespace, usedspace;

 if (len == 0) {

  return;
 }


 ;

 usedspace = (context->bitcount >> 3) % 64;
 if (usedspace > 0) {

  freespace = 64 - usedspace;

  if (len >= freespace) {

   bcopy(data, &context->buffer[usedspace], freespace);
   context->bitcount += freespace << 3;
   len -= freespace;
   data += freespace;
   SHA256_Transform(context, (sha2_word32*)context->buffer);
  } else {

   bcopy(data, &context->buffer[usedspace], len);
   context->bitcount += len << 3;

   usedspace = freespace = 0;
   return;
  }
 }
 while (len >= 64) {

  SHA256_Transform(context, (const sha2_word32*)data);
  context->bitcount += 64 << 3;
  len -= 64;
  data += 64;
 }
 if (len > 0) {

  bcopy(data, context->buffer, len);
  context->bitcount += len << 3;
 }

 usedspace = freespace = 0;
}

void SHA256_Final(sha2_byte digest[], SHA256_CTX* context) {
 sha2_word32 *d = (sha2_word32*)digest;
 unsigned int usedspace;


 ;


 if (digest != (sha2_byte*)0) {
  usedspace = (context->bitcount >> 3) % 64;


  { sha2_word64 tmp = (context->bitcount); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (context->bitcount) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };

  if (usedspace > 0) {

   context->buffer[usedspace++] = 0x80;

   if (usedspace <= (64 - 8)) {

    bzero(&context->buffer[usedspace], (64 - 8) - usedspace);
   } else {
    if (usedspace < 64) {
     bzero(&context->buffer[usedspace], 64 - usedspace);
    }

    SHA256_Transform(context, (sha2_word32*)context->buffer);


    bzero(context->buffer, (64 - 8));
   }
  } else {

   bzero(context->buffer, (64 - 8));


   *context->buffer = 0x80;
  }

  *(sha2_word64*)&context->buffer[(64 - 8)] = context->bitcount;


  SHA256_Transform(context, (sha2_word32*)context->buffer);


  {

   int j;
   for (j = 0; j < 8; j++) {
    { sha2_word32 tmp = (context->state[j]); tmp = (tmp >> 16) | (tmp << 16); (context->state[j]) = ((tmp & 0xff00ff00UL) >> 8) | ((tmp & 0x00ff00ffUL) << 8); };
    *d++ = context->state[j];
   }
  }



 }


 bzero(context, sizeof(*context));
 usedspace = 0;
}

char *SHA256_End(SHA256_CTX* context, char buffer[]) {
 sha2_byte digest[32], *d = digest;
 int i;


 ;

 if (buffer != (char*)0) {
  SHA256_Final(digest, context);

  for (i = 0; i < 32; i++) {
   *buffer++ = global_sha2_hex_digits[get_stack_id()][(*d & 0xf0) >> 4];
   *buffer++ = global_sha2_hex_digits[get_stack_id()][*d & 0x0f];
   d++;
  }
  *buffer = (char)0;
 } else {
  bzero(context, sizeof(*context));
 }
 bzero(digest, 32);
 return buffer;
}

char* SHA256_Data(const sha2_byte* data, size_t len, char digest[(32 * 2 + 1)]) {
 SHA256_CTX context;

 SHA256_Init(&context);
 SHA256_Update(&context, data, len);
 return SHA256_End(&context, digest);
}



void SHA512_Init(SHA512_CTX* context) {
 if (context == (SHA512_CTX*)0) {
  return;
 }
 bcopy((*_GLOBAL_sha512_initial_hash_value_17_A[get_stack_id()]), context->state, 64);
 bzero(context->buffer, 128);
 context->bitcount[0] = context->bitcount[1] = 0;
}
# 751 "freebsd5/crypto/sha2/sha2.c"
void SHA512_Transform(SHA512_CTX* context, const sha2_word64* data) {
 sha2_word64 a, b, c, d, e, f, g, h, s0, s1;
 sha2_word64 T1, T2, *W512 = (sha2_word64*)context->buffer;
 int j;


 a = context->state[0];
 b = context->state[1];
 c = context->state[2];
 d = context->state[3];
 e = context->state[4];
 f = context->state[5];
 g = context->state[6];
 h = context->state[7];

 j = 0;
 do {


  { sha2_word64 tmp = (*data++); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (W512[j]) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };

  T1 = h + (((((e)) >> (14)) | (((e)) << (64 - (14)))) ^ ((((e)) >> (18)) | (((e)) << (64 - (18)))) ^ ((((e)) >> (41)) | (((e)) << (64 - (41))))) + (((e) & (f)) ^ ((~(e)) & (g))) + (*_GLOBAL_K512_15_A[get_stack_id()])[j] + W512[j];




  T2 = (((((a)) >> (28)) | (((a)) << (64 - (28)))) ^ ((((a)) >> (34)) | (((a)) << (64 - (34)))) ^ ((((a)) >> (39)) | (((a)) << (64 - (39))))) + (((a) & (b)) ^ ((a) & (c)) ^ ((b) & (c)));
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 16);

 do {

  s0 = W512[(j+1)&0x0f];
  s0 = (((((s0)) >> (1)) | (((s0)) << (64 - (1)))) ^ ((((s0)) >> (8)) | (((s0)) << (64 - (8)))) ^ (((s0)) >> (7)));
  s1 = W512[(j+14)&0x0f];
  s1 = (((((s1)) >> (19)) | (((s1)) << (64 - (19)))) ^ ((((s1)) >> (61)) | (((s1)) << (64 - (61)))) ^ (((s1)) >> (6)));


  T1 = h + (((((e)) >> (14)) | (((e)) << (64 - (14)))) ^ ((((e)) >> (18)) | (((e)) << (64 - (18)))) ^ ((((e)) >> (41)) | (((e)) << (64 - (41))))) + (((e) & (f)) ^ ((~(e)) & (g))) + (*_GLOBAL_K512_15_A[get_stack_id()])[j] +
       (W512[j&0x0f] += s1 + W512[(j+9)&0x0f] + s0);
  T2 = (((((a)) >> (28)) | (((a)) << (64 - (28)))) ^ ((((a)) >> (34)) | (((a)) << (64 - (34)))) ^ ((((a)) >> (39)) | (((a)) << (64 - (39))))) + (((a) & (b)) ^ ((a) & (c)) ^ ((b) & (c)));
  h = g;
  g = f;
  f = e;
  e = d + T1;
  d = c;
  c = b;
  b = a;
  a = T1 + T2;

  j++;
 } while (j < 80);


 context->state[0] += a;
 context->state[1] += b;
 context->state[2] += c;
 context->state[3] += d;
 context->state[4] += e;
 context->state[5] += f;
 context->state[6] += g;
 context->state[7] += h;


 a = b = c = d = e = f = g = h = T1 = T2 = 0;
}



void SHA512_Update(SHA512_CTX* context, const sha2_byte *data, size_t len) {
 unsigned int freespace, usedspace;

 if (len == 0) {

  return;
 }


 ;

 usedspace = (context->bitcount[0] >> 3) % 128;
 if (usedspace > 0) {

  freespace = 128 - usedspace;

  if (len >= freespace) {

   bcopy(data, &context->buffer[usedspace], freespace);
   { (context->bitcount)[0] += (sha2_word64)(freespace << 3); if ((context->bitcount)[0] < (freespace << 3)) { (context->bitcount)[1]++; } };
   len -= freespace;
   data += freespace;
   SHA512_Transform(context, (sha2_word64*)context->buffer);
  } else {

   bcopy(data, &context->buffer[usedspace], len);
   { (context->bitcount)[0] += (sha2_word64)(len << 3); if ((context->bitcount)[0] < (len << 3)) { (context->bitcount)[1]++; } };

   usedspace = freespace = 0;
   return;
  }
 }
 while (len >= 128) {

  SHA512_Transform(context, (const sha2_word64*)data);
  { (context->bitcount)[0] += (sha2_word64)(128 << 3); if ((context->bitcount)[0] < (128 << 3)) { (context->bitcount)[1]++; } };
  len -= 128;
  data += 128;
 }
 if (len > 0) {

  bcopy(data, context->buffer, len);
  { (context->bitcount)[0] += (sha2_word64)(len << 3); if ((context->bitcount)[0] < (len << 3)) { (context->bitcount)[1]++; } };
 }

 usedspace = freespace = 0;
}

void SHA512_Last(SHA512_CTX* context) {
 unsigned int usedspace;

 usedspace = (context->bitcount[0] >> 3) % 128;


 { sha2_word64 tmp = (context->bitcount[0]); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (context->bitcount[0]) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };
 { sha2_word64 tmp = (context->bitcount[1]); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (context->bitcount[1]) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };

 if (usedspace > 0) {

  context->buffer[usedspace++] = 0x80;

  if (usedspace <= (128 - 16)) {

   bzero(&context->buffer[usedspace], (128 - 16) - usedspace);
  } else {
   if (usedspace < 128) {
    bzero(&context->buffer[usedspace], 128 - usedspace);
   }

   SHA512_Transform(context, (sha2_word64*)context->buffer);


   bzero(context->buffer, 128 - 2);
  }
 } else {

  bzero(context->buffer, (128 - 16));


  *context->buffer = 0x80;
 }

 *(sha2_word64*)&context->buffer[(128 - 16)] = context->bitcount[1];
 *(sha2_word64*)&context->buffer[(128 - 16)+8] = context->bitcount[0];


 SHA512_Transform(context, (sha2_word64*)context->buffer);
}

void SHA512_Final(sha2_byte digest[], SHA512_CTX* context) {
 sha2_word64 *d = (sha2_word64*)digest;


 ;


 if (digest != (sha2_byte*)0) {
  SHA512_Last(context);



  {

   int j;
   for (j = 0; j < 8; j++) {
    { sha2_word64 tmp = (context->state[j]); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (context->state[j]) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };
    *d++ = context->state[j];
   }
  }



 }


 bzero(context, sizeof(*context));
}

char *SHA512_End(SHA512_CTX* context, char buffer[]) {
 sha2_byte digest[64], *d = digest;
 int i;


 ;

 if (buffer != (char*)0) {
  SHA512_Final(digest, context);

  for (i = 0; i < 64; i++) {
   *buffer++ = global_sha2_hex_digits[get_stack_id()][(*d & 0xf0) >> 4];
   *buffer++ = global_sha2_hex_digits[get_stack_id()][*d & 0x0f];
   d++;
  }
  *buffer = (char)0;
 } else {
  bzero(context, sizeof(*context));
 }
 bzero(digest, 64);
 return buffer;
}

char* SHA512_Data(const sha2_byte* data, size_t len, char digest[(64 * 2 + 1)]) {
 SHA512_CTX context;

 SHA512_Init(&context);
 SHA512_Update(&context, data, len);
 return SHA512_End(&context, digest);
}



void SHA384_Init(SHA384_CTX* context) {
 if (context == (SHA384_CTX*)0) {
  return;
 }
 bcopy((*_GLOBAL_sha384_initial_hash_value_16_A[get_stack_id()]), context->state, 64);
 bzero(context->buffer, 128);
 context->bitcount[0] = context->bitcount[1] = 0;
}

void SHA384_Update(SHA384_CTX* context, const sha2_byte* data, size_t len) {
 SHA512_Update((SHA512_CTX*)context, data, len);
}

void SHA384_Final(sha2_byte digest[], SHA384_CTX* context) {
 sha2_word64 *d = (sha2_word64*)digest;


 ;


 if (digest != (sha2_byte*)0) {
  SHA512_Last((SHA512_CTX*)context);



  {

   int j;
   for (j = 0; j < 6; j++) {
    { sha2_word64 tmp = (context->state[j]); tmp = (tmp >> 32) | (tmp << 32); tmp = ((tmp & 0xff00ff00ff00ff00ULL) >> 8) | ((tmp & 0x00ff00ff00ff00ffULL) << 8); (context->state[j]) = ((tmp & 0xffff0000ffff0000ULL) >> 16) | ((tmp & 0x0000ffff0000ffffULL) << 16); };
    *d++ = context->state[j];
   }
  }



 }


 bzero(context, sizeof(*context));
}

char *SHA384_End(SHA384_CTX* context, char buffer[]) {
 sha2_byte digest[48], *d = digest;
 int i;


 ;

 if (buffer != (char*)0) {
  SHA384_Final(digest, context);

  for (i = 0; i < 48; i++) {
   *buffer++ = global_sha2_hex_digits[get_stack_id()][(*d & 0xf0) >> 4];
   *buffer++ = global_sha2_hex_digits[get_stack_id()][*d & 0x0f];
   d++;
  }
  *buffer = (char)0;
 } else {
  bzero(context, sizeof(*context));
 }
 bzero(digest, 48);
 return buffer;
}

char* SHA384_Data(const sha2_byte* data, size_t len, char digest[(48 * 2 + 1)]) {
 SHA384_CTX context;

 SHA384_Init(&context);
 SHA384_Update(&context, data, len);
 return SHA384_End(&context, digest);
}

