# 1 "freebsd5/crypto/md5.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/crypto/md5.c"
# 31 "freebsd5/crypto/md5.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 32 "freebsd5/crypto/md5.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/crypto/md5.c,v 1.9 2004/01/27 19:49:19 des Exp $" "\"");

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
# 35 "freebsd5/crypto/md5.c" 2

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
# 37 "freebsd5/crypto/md5.c" 2
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
# 38 "freebsd5/crypto/md5.c" 2
# 1 "freebsd5/crypto/md5.h" 1
# 38 "freebsd5/crypto/md5.h"
typedef struct {
 union {
  u_int32_t md5_state32[4];
  u_int8_t md5_state8[16];
 } md5_st;







 union {
  u_int64_t md5_count64;
  u_int8_t md5_count8[8];
 } md5_count;



 u_int md5_i;
 u_int8_t md5_buf[64];
} md5_ctxt;

extern void md5_init(md5_ctxt *);
extern void md5_loop(md5_ctxt *, u_int8_t *, u_int);
extern void md5_pad(md5_ctxt *);
extern void md5_result(u_int8_t *, md5_ctxt *);
# 39 "freebsd5/crypto/md5.c" 2
# 97 "freebsd5/crypto/md5.c"
typedef  const u_int32_t   _GLOBAL_40_T; static  _GLOBAL_40_T  _GLOBAL_0_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_1_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_2_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_3_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_4_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_5_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_6_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_7_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_8_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_9_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_10_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_11_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_12_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_13_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_14_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_15_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_16_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_17_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_18_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_19_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_20_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_21_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_22_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_23_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_24_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_25_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_26_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_27_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_28_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_29_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_30_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_31_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_32_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_33_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_34_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_35_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_36_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_37_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_38_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_39_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_40_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_41_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_42_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_43_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_44_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_45_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_46_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_47_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_48_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static  _GLOBAL_40_T  _GLOBAL_49_T_I [ 65 ]  = { 0 , 0xd76aa478  , 0xe8c7b756  , 0x242070db  , 0xc1bdceee  , 0xf57c0faf  , 0x4787c62a  , 0xa8304613  , 0xfd469501  , 0x698098d8  , 0x8b44f7af  , 0xffff5bb1  , 0x895cd7be  , 0x6b901122  , 0xfd987193  , 0xa679438e  , 0x49b40821  , 0xf61e2562  , 0xc040b340  , 0x265e5a51  , 0xe9b6c7aa  , 0xd62f105d  , 0x2441453  , 0xd8a1e681  , 0xe7d3fbc8  , 0x21e1cde6  , 0xc33707d6  , 0xf4d50d87  , 0x455a14ed  , 0xa9e3e905  , 0xfcefa3f8  , 0x676f02d9  , 0x8d2a4c8a  , 0xfffa3942  , 0x8771f681  , 0x6d9d6122  , 0xfde5380c  , 0xa4beea44  , 0x4bdecfa9  , 0xf6bb4b60  , 0xbebfbc70  , 0x289b7ec6  , 0xeaa127fa  , 0xd4ef3085  , 0x4881d05  , 0xd9d4d039  , 0xe6db99e5  , 0x1fa27cf8  , 0xc4ac5665  , 0xf4292244  , 0x432aff97  , 0xab9423a7  , 0xfc93a039  , 0x655b59c3  , 0x8f0ccc92  , 0xffeff47d  , 0x85845dd1  , 0x6fa87e4f  , 0xfe2ce6e0  , 0xa3014314  , 0x4e0811a1  , 0xf7537e82  , 0xbd3af235  , 0x2ad7d2bb  , 0xeb86d391  , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_T_I) *_GLOBAL_T_13_A[NUM_STACKS] = { &_GLOBAL_0_T_I, &_GLOBAL_1_T_I, &_GLOBAL_2_T_I, &_GLOBAL_3_T_I, &_GLOBAL_4_T_I, &_GLOBAL_5_T_I, &_GLOBAL_6_T_I, &_GLOBAL_7_T_I, &_GLOBAL_8_T_I, &_GLOBAL_9_T_I, &_GLOBAL_10_T_I, &_GLOBAL_11_T_I, &_GLOBAL_12_T_I, &_GLOBAL_13_T_I, &_GLOBAL_14_T_I, &_GLOBAL_15_T_I, &_GLOBAL_16_T_I, &_GLOBAL_17_T_I, &_GLOBAL_18_T_I, &_GLOBAL_19_T_I, &_GLOBAL_20_T_I, &_GLOBAL_21_T_I, &_GLOBAL_22_T_I, &_GLOBAL_23_T_I, &_GLOBAL_24_T_I, &_GLOBAL_25_T_I, &_GLOBAL_26_T_I, &_GLOBAL_27_T_I, &_GLOBAL_28_T_I, &_GLOBAL_29_T_I, &_GLOBAL_30_T_I, &_GLOBAL_31_T_I, &_GLOBAL_32_T_I, &_GLOBAL_33_T_I, &_GLOBAL_34_T_I, &_GLOBAL_35_T_I, &_GLOBAL_36_T_I, &_GLOBAL_37_T_I, &_GLOBAL_38_T_I, &_GLOBAL_39_T_I, &_GLOBAL_40_T_I, &_GLOBAL_41_T_I, &_GLOBAL_42_T_I, &_GLOBAL_43_T_I, &_GLOBAL_44_T_I, &_GLOBAL_45_T_I, &_GLOBAL_46_T_I, &_GLOBAL_47_T_I, &_GLOBAL_48_T_I, &_GLOBAL_49_T_I, };     
 
    
    
    
    

    
    
    
    

    
    
    
    

    
    
    
    


typedef  const u_int8_t   _GLOBAL_41_T; static  _GLOBAL_41_T  _GLOBAL_0_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_1_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_2_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_3_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_4_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_5_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_6_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_7_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_8_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_9_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_10_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_11_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_12_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_13_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_14_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_15_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_16_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_17_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_18_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_19_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_20_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_21_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_22_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_23_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_24_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_25_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_26_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_27_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_28_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_29_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_30_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_31_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_32_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_33_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_34_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_35_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_36_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_37_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_38_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_39_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_40_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_41_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_42_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_43_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_44_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_45_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_46_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_47_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_48_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static  _GLOBAL_41_T  _GLOBAL_49_md5_paddat_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_md5_paddat_I) *_GLOBAL_md5_paddat_14_A[NUM_STACKS] = { &_GLOBAL_0_md5_paddat_I, &_GLOBAL_1_md5_paddat_I, &_GLOBAL_2_md5_paddat_I, &_GLOBAL_3_md5_paddat_I, &_GLOBAL_4_md5_paddat_I, &_GLOBAL_5_md5_paddat_I, &_GLOBAL_6_md5_paddat_I, &_GLOBAL_7_md5_paddat_I, &_GLOBAL_8_md5_paddat_I, &_GLOBAL_9_md5_paddat_I, &_GLOBAL_10_md5_paddat_I, &_GLOBAL_11_md5_paddat_I, &_GLOBAL_12_md5_paddat_I, &_GLOBAL_13_md5_paddat_I, &_GLOBAL_14_md5_paddat_I, &_GLOBAL_15_md5_paddat_I, &_GLOBAL_16_md5_paddat_I, &_GLOBAL_17_md5_paddat_I, &_GLOBAL_18_md5_paddat_I, &_GLOBAL_19_md5_paddat_I, &_GLOBAL_20_md5_paddat_I, &_GLOBAL_21_md5_paddat_I, &_GLOBAL_22_md5_paddat_I, &_GLOBAL_23_md5_paddat_I, &_GLOBAL_24_md5_paddat_I, &_GLOBAL_25_md5_paddat_I, &_GLOBAL_26_md5_paddat_I, &_GLOBAL_27_md5_paddat_I, &_GLOBAL_28_md5_paddat_I, &_GLOBAL_29_md5_paddat_I, &_GLOBAL_30_md5_paddat_I, &_GLOBAL_31_md5_paddat_I, &_GLOBAL_32_md5_paddat_I, &_GLOBAL_33_md5_paddat_I, &_GLOBAL_34_md5_paddat_I, &_GLOBAL_35_md5_paddat_I, &_GLOBAL_36_md5_paddat_I, &_GLOBAL_37_md5_paddat_I, &_GLOBAL_38_md5_paddat_I, &_GLOBAL_39_md5_paddat_I, &_GLOBAL_40_md5_paddat_I, &_GLOBAL_41_md5_paddat_I, &_GLOBAL_42_md5_paddat_I, &_GLOBAL_43_md5_paddat_I, &_GLOBAL_44_md5_paddat_I, &_GLOBAL_45_md5_paddat_I, &_GLOBAL_46_md5_paddat_I, &_GLOBAL_47_md5_paddat_I, &_GLOBAL_48_md5_paddat_I, &_GLOBAL_49_md5_paddat_I, };     
        
        
        
        
        
        
        
        


static void md5_calc(u_int8_t *, md5_ctxt *);

void md5_init(ctxt)
 md5_ctxt *ctxt;
{
 ctxt->md5_count.md5_count64 = 0;
 ctxt->md5_i = 0;
 ctxt->md5_st.md5_state32[0] = 0x67452301;
 ctxt->md5_st.md5_state32[1] = 0xefcdab89;
 ctxt->md5_st.md5_state32[2] = 0x98badcfe;
 ctxt->md5_st.md5_state32[3] = 0x10325476;
 bzero(ctxt->md5_buf, sizeof(ctxt->md5_buf));
}

void md5_loop(ctxt, input, len)
 md5_ctxt *ctxt;
 u_int8_t *input;
 u_int len;
{
 u_int gap, i;

 ctxt->md5_count.md5_count64 += len * 8;
 gap = 64 - ctxt->md5_i;

 if (len >= gap) {
  bcopy((void *)input, (void *)(ctxt->md5_buf + ctxt->md5_i),
   gap);
  md5_calc(ctxt->md5_buf, ctxt);

  for (i = gap; i + 64 <= len; i += 64) {
   md5_calc((u_int8_t *)(input + i), ctxt);
  }

  ctxt->md5_i = len - i;
  bcopy((void *)(input + i), (void *)ctxt->md5_buf, ctxt->md5_i);
 } else {
  bcopy((void *)input, (void *)(ctxt->md5_buf + ctxt->md5_i),
   len);
  ctxt->md5_i += len;
 }
}

void md5_pad(ctxt)
 md5_ctxt *ctxt;
{
 u_int gap;


 gap = 64 - ctxt->md5_i;
 if (gap > 8) {
  bcopy((*_GLOBAL_md5_paddat_14_A[get_stack_id()]),
        (void *)(ctxt->md5_buf + ctxt->md5_i),
        gap - sizeof(ctxt->md5_count.md5_count64));
 } else {

  bcopy((*_GLOBAL_md5_paddat_14_A[get_stack_id()]), (void *)(ctxt->md5_buf + ctxt->md5_i),
   gap);
  md5_calc(ctxt->md5_buf, ctxt);
  bcopy(((*_GLOBAL_md5_paddat_14_A[get_stack_id()]) + gap),
        (void *)ctxt->md5_buf,
        64 - sizeof(ctxt->md5_count.md5_count64));
 }



 bcopy(&ctxt->md5_count.md5_count8[0], &ctxt->md5_buf[56], 8);
# 209 "freebsd5/crypto/md5.c"
 md5_calc(ctxt->md5_buf, ctxt);
}

void md5_result(digest, ctxt)
 u_int8_t *digest;
 md5_ctxt *ctxt;
{


 bcopy(&ctxt->md5_st.md5_state8[0], digest, 16);
# 230 "freebsd5/crypto/md5.c"
}

static void md5_calc(b64, ctxt)
 u_int8_t *b64;
 md5_ctxt *ctxt;
{
 u_int32_t A = ctxt->md5_st.md5_state32[0];
 u_int32_t B = ctxt->md5_st.md5_state32[1];
 u_int32_t C = ctxt->md5_st.md5_state32[2];
 u_int32_t D = ctxt->md5_st.md5_state32[3];

 u_int32_t *X = (u_int32_t *)b64;
# 266 "freebsd5/crypto/md5.c"
 { (A) = (A) + ((((B)) & ((C))) | ((~(B)) & ((D)))) + X[(0)] + (*_GLOBAL_T_13_A[get_stack_id()])[(1)]; (A) = ((((A)) << ((7))) | (((A)) >> (32 - ((7))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((B))) | ((~(A)) & ((C)))) + X[(1)] + (*_GLOBAL_T_13_A[get_stack_id()])[(2)]; (D) = ((((D)) << ((12))) | (((D)) >> (32 - ((12))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((A))) | ((~(D)) & ((B)))) + X[(2)] + (*_GLOBAL_T_13_A[get_stack_id()])[(3)]; (C) = ((((C)) << ((17))) | (((C)) >> (32 - ((17))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((D))) | ((~(C)) & ((A)))) + X[(3)] + (*_GLOBAL_T_13_A[get_stack_id()])[(4)]; (B) = ((((B)) << ((22))) | (((B)) >> (32 - ((22))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((C))) | ((~(B)) & ((D)))) + X[(4)] + (*_GLOBAL_T_13_A[get_stack_id()])[(5)]; (A) = ((((A)) << ((7))) | (((A)) >> (32 - ((7))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((B))) | ((~(A)) & ((C)))) + X[(5)] + (*_GLOBAL_T_13_A[get_stack_id()])[(6)]; (D) = ((((D)) << ((12))) | (((D)) >> (32 - ((12))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((A))) | ((~(D)) & ((B)))) + X[(6)] + (*_GLOBAL_T_13_A[get_stack_id()])[(7)]; (C) = ((((C)) << ((17))) | (((C)) >> (32 - ((17))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((D))) | ((~(C)) & ((A)))) + X[(7)] + (*_GLOBAL_T_13_A[get_stack_id()])[(8)]; (B) = ((((B)) << ((22))) | (((B)) >> (32 - ((22))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((C))) | ((~(B)) & ((D)))) + X[(8)] + (*_GLOBAL_T_13_A[get_stack_id()])[(9)]; (A) = ((((A)) << ((7))) | (((A)) >> (32 - ((7))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((B))) | ((~(A)) & ((C)))) + X[(9)] + (*_GLOBAL_T_13_A[get_stack_id()])[(10)]; (D) = ((((D)) << ((12))) | (((D)) >> (32 - ((12))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((A))) | ((~(D)) & ((B)))) + X[(10)] + (*_GLOBAL_T_13_A[get_stack_id()])[(11)]; (C) = ((((C)) << ((17))) | (((C)) >> (32 - ((17))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((D))) | ((~(C)) & ((A)))) + X[(11)] + (*_GLOBAL_T_13_A[get_stack_id()])[(12)]; (B) = ((((B)) << ((22))) | (((B)) >> (32 - ((22))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((C))) | ((~(B)) & ((D)))) + X[(12)] + (*_GLOBAL_T_13_A[get_stack_id()])[(13)]; (A) = ((((A)) << ((7))) | (((A)) >> (32 - ((7))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((B))) | ((~(A)) & ((C)))) + X[(13)] + (*_GLOBAL_T_13_A[get_stack_id()])[(14)]; (D) = ((((D)) << ((12))) | (((D)) >> (32 - ((12))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((A))) | ((~(D)) & ((B)))) + X[(14)] + (*_GLOBAL_T_13_A[get_stack_id()])[(15)]; (C) = ((((C)) << ((17))) | (((C)) >> (32 - ((17))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((D))) | ((~(C)) & ((A)))) + X[(15)] + (*_GLOBAL_T_13_A[get_stack_id()])[(16)]; (B) = ((((B)) << ((22))) | (((B)) >> (32 - ((22))))); (B) = (C) + (B); };

 { (A) = (A) + ((((B)) & ((D))) | (((C)) & (~(D)))) + X[(1)] + (*_GLOBAL_T_13_A[get_stack_id()])[(17)]; (A) = ((((A)) << ((5))) | (((A)) >> (32 - ((5))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((C))) | (((B)) & (~(C)))) + X[(6)] + (*_GLOBAL_T_13_A[get_stack_id()])[(18)]; (D) = ((((D)) << ((9))) | (((D)) >> (32 - ((9))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((B))) | (((A)) & (~(B)))) + X[(11)] + (*_GLOBAL_T_13_A[get_stack_id()])[(19)]; (C) = ((((C)) << ((14))) | (((C)) >> (32 - ((14))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((A))) | (((D)) & (~(A)))) + X[(0)] + (*_GLOBAL_T_13_A[get_stack_id()])[(20)]; (B) = ((((B)) << ((20))) | (((B)) >> (32 - ((20))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((D))) | (((C)) & (~(D)))) + X[(5)] + (*_GLOBAL_T_13_A[get_stack_id()])[(21)]; (A) = ((((A)) << ((5))) | (((A)) >> (32 - ((5))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((C))) | (((B)) & (~(C)))) + X[(10)] + (*_GLOBAL_T_13_A[get_stack_id()])[(22)]; (D) = ((((D)) << ((9))) | (((D)) >> (32 - ((9))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((B))) | (((A)) & (~(B)))) + X[(15)] + (*_GLOBAL_T_13_A[get_stack_id()])[(23)]; (C) = ((((C)) << ((14))) | (((C)) >> (32 - ((14))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((A))) | (((D)) & (~(A)))) + X[(4)] + (*_GLOBAL_T_13_A[get_stack_id()])[(24)]; (B) = ((((B)) << ((20))) | (((B)) >> (32 - ((20))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((D))) | (((C)) & (~(D)))) + X[(9)] + (*_GLOBAL_T_13_A[get_stack_id()])[(25)]; (A) = ((((A)) << ((5))) | (((A)) >> (32 - ((5))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((C))) | (((B)) & (~(C)))) + X[(14)] + (*_GLOBAL_T_13_A[get_stack_id()])[(26)]; (D) = ((((D)) << ((9))) | (((D)) >> (32 - ((9))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((B))) | (((A)) & (~(B)))) + X[(3)] + (*_GLOBAL_T_13_A[get_stack_id()])[(27)]; (C) = ((((C)) << ((14))) | (((C)) >> (32 - ((14))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((A))) | (((D)) & (~(A)))) + X[(8)] + (*_GLOBAL_T_13_A[get_stack_id()])[(28)]; (B) = ((((B)) << ((20))) | (((B)) >> (32 - ((20))))); (B) = (C) + (B); };
 { (A) = (A) + ((((B)) & ((D))) | (((C)) & (~(D)))) + X[(13)] + (*_GLOBAL_T_13_A[get_stack_id()])[(29)]; (A) = ((((A)) << ((5))) | (((A)) >> (32 - ((5))))); (A) = (B) + (A); }; { (D) = (D) + ((((A)) & ((C))) | (((B)) & (~(C)))) + X[(2)] + (*_GLOBAL_T_13_A[get_stack_id()])[(30)]; (D) = ((((D)) << ((9))) | (((D)) >> (32 - ((9))))); (D) = (A) + (D); };
 { (C) = (C) + ((((D)) & ((B))) | (((A)) & (~(B)))) + X[(7)] + (*_GLOBAL_T_13_A[get_stack_id()])[(31)]; (C) = ((((C)) << ((14))) | (((C)) >> (32 - ((14))))); (C) = (D) + (C); }; { (B) = (B) + ((((C)) & ((A))) | (((D)) & (~(A)))) + X[(12)] + (*_GLOBAL_T_13_A[get_stack_id()])[(32)]; (B) = ((((B)) << ((20))) | (((B)) >> (32 - ((20))))); (B) = (C) + (B); };

 { (A) = (A) + (((B)) ^ ((C)) ^ ((D))) + X[(5)] + (*_GLOBAL_T_13_A[get_stack_id()])[(33)]; (A) = ((((A)) << ((4))) | (((A)) >> (32 - ((4))))); (A) = (B) + (A); }; { (D) = (D) + (((A)) ^ ((B)) ^ ((C))) + X[(8)] + (*_GLOBAL_T_13_A[get_stack_id()])[(34)]; (D) = ((((D)) << ((11))) | (((D)) >> (32 - ((11))))); (D) = (A) + (D); };
 { (C) = (C) + (((D)) ^ ((A)) ^ ((B))) + X[(11)] + (*_GLOBAL_T_13_A[get_stack_id()])[(35)]; (C) = ((((C)) << ((16))) | (((C)) >> (32 - ((16))))); (C) = (D) + (C); }; { (B) = (B) + (((C)) ^ ((D)) ^ ((A))) + X[(14)] + (*_GLOBAL_T_13_A[get_stack_id()])[(36)]; (B) = ((((B)) << ((23))) | (((B)) >> (32 - ((23))))); (B) = (C) + (B); };
 { (A) = (A) + (((B)) ^ ((C)) ^ ((D))) + X[(1)] + (*_GLOBAL_T_13_A[get_stack_id()])[(37)]; (A) = ((((A)) << ((4))) | (((A)) >> (32 - ((4))))); (A) = (B) + (A); }; { (D) = (D) + (((A)) ^ ((B)) ^ ((C))) + X[(4)] + (*_GLOBAL_T_13_A[get_stack_id()])[(38)]; (D) = ((((D)) << ((11))) | (((D)) >> (32 - ((11))))); (D) = (A) + (D); };
 { (C) = (C) + (((D)) ^ ((A)) ^ ((B))) + X[(7)] + (*_GLOBAL_T_13_A[get_stack_id()])[(39)]; (C) = ((((C)) << ((16))) | (((C)) >> (32 - ((16))))); (C) = (D) + (C); }; { (B) = (B) + (((C)) ^ ((D)) ^ ((A))) + X[(10)] + (*_GLOBAL_T_13_A[get_stack_id()])[(40)]; (B) = ((((B)) << ((23))) | (((B)) >> (32 - ((23))))); (B) = (C) + (B); };
 { (A) = (A) + (((B)) ^ ((C)) ^ ((D))) + X[(13)] + (*_GLOBAL_T_13_A[get_stack_id()])[(41)]; (A) = ((((A)) << ((4))) | (((A)) >> (32 - ((4))))); (A) = (B) + (A); }; { (D) = (D) + (((A)) ^ ((B)) ^ ((C))) + X[(0)] + (*_GLOBAL_T_13_A[get_stack_id()])[(42)]; (D) = ((((D)) << ((11))) | (((D)) >> (32 - ((11))))); (D) = (A) + (D); };
 { (C) = (C) + (((D)) ^ ((A)) ^ ((B))) + X[(3)] + (*_GLOBAL_T_13_A[get_stack_id()])[(43)]; (C) = ((((C)) << ((16))) | (((C)) >> (32 - ((16))))); (C) = (D) + (C); }; { (B) = (B) + (((C)) ^ ((D)) ^ ((A))) + X[(6)] + (*_GLOBAL_T_13_A[get_stack_id()])[(44)]; (B) = ((((B)) << ((23))) | (((B)) >> (32 - ((23))))); (B) = (C) + (B); };
 { (A) = (A) + (((B)) ^ ((C)) ^ ((D))) + X[(9)] + (*_GLOBAL_T_13_A[get_stack_id()])[(45)]; (A) = ((((A)) << ((4))) | (((A)) >> (32 - ((4))))); (A) = (B) + (A); }; { (D) = (D) + (((A)) ^ ((B)) ^ ((C))) + X[(12)] + (*_GLOBAL_T_13_A[get_stack_id()])[(46)]; (D) = ((((D)) << ((11))) | (((D)) >> (32 - ((11))))); (D) = (A) + (D); };
 { (C) = (C) + (((D)) ^ ((A)) ^ ((B))) + X[(15)] + (*_GLOBAL_T_13_A[get_stack_id()])[(47)]; (C) = ((((C)) << ((16))) | (((C)) >> (32 - ((16))))); (C) = (D) + (C); }; { (B) = (B) + (((C)) ^ ((D)) ^ ((A))) + X[(2)] + (*_GLOBAL_T_13_A[get_stack_id()])[(48)]; (B) = ((((B)) << ((23))) | (((B)) >> (32 - ((23))))); (B) = (C) + (B); };

 { (A) = (A) + (((C)) ^ (((B)) | (~(D)))) + X[(0)] + (*_GLOBAL_T_13_A[get_stack_id()])[(49)]; (A) = ((((A)) << ((6))) | (((A)) >> (32 - ((6))))); (A) = (B) + (A); }; { (D) = (D) + (((B)) ^ (((A)) | (~(C)))) + X[(7)] + (*_GLOBAL_T_13_A[get_stack_id()])[(50)]; (D) = ((((D)) << ((10))) | (((D)) >> (32 - ((10))))); (D) = (A) + (D); };
 { (C) = (C) + (((A)) ^ (((D)) | (~(B)))) + X[(14)] + (*_GLOBAL_T_13_A[get_stack_id()])[(51)]; (C) = ((((C)) << ((15))) | (((C)) >> (32 - ((15))))); (C) = (D) + (C); }; { (B) = (B) + (((D)) ^ (((C)) | (~(A)))) + X[(5)] + (*_GLOBAL_T_13_A[get_stack_id()])[(52)]; (B) = ((((B)) << ((21))) | (((B)) >> (32 - ((21))))); (B) = (C) + (B); };
 { (A) = (A) + (((C)) ^ (((B)) | (~(D)))) + X[(12)] + (*_GLOBAL_T_13_A[get_stack_id()])[(53)]; (A) = ((((A)) << ((6))) | (((A)) >> (32 - ((6))))); (A) = (B) + (A); }; { (D) = (D) + (((B)) ^ (((A)) | (~(C)))) + X[(3)] + (*_GLOBAL_T_13_A[get_stack_id()])[(54)]; (D) = ((((D)) << ((10))) | (((D)) >> (32 - ((10))))); (D) = (A) + (D); };
 { (C) = (C) + (((A)) ^ (((D)) | (~(B)))) + X[(10)] + (*_GLOBAL_T_13_A[get_stack_id()])[(55)]; (C) = ((((C)) << ((15))) | (((C)) >> (32 - ((15))))); (C) = (D) + (C); }; { (B) = (B) + (((D)) ^ (((C)) | (~(A)))) + X[(1)] + (*_GLOBAL_T_13_A[get_stack_id()])[(56)]; (B) = ((((B)) << ((21))) | (((B)) >> (32 - ((21))))); (B) = (C) + (B); };
 { (A) = (A) + (((C)) ^ (((B)) | (~(D)))) + X[(8)] + (*_GLOBAL_T_13_A[get_stack_id()])[(57)]; (A) = ((((A)) << ((6))) | (((A)) >> (32 - ((6))))); (A) = (B) + (A); }; { (D) = (D) + (((B)) ^ (((A)) | (~(C)))) + X[(15)] + (*_GLOBAL_T_13_A[get_stack_id()])[(58)]; (D) = ((((D)) << ((10))) | (((D)) >> (32 - ((10))))); (D) = (A) + (D); };
 { (C) = (C) + (((A)) ^ (((D)) | (~(B)))) + X[(6)] + (*_GLOBAL_T_13_A[get_stack_id()])[(59)]; (C) = ((((C)) << ((15))) | (((C)) >> (32 - ((15))))); (C) = (D) + (C); }; { (B) = (B) + (((D)) ^ (((C)) | (~(A)))) + X[(13)] + (*_GLOBAL_T_13_A[get_stack_id()])[(60)]; (B) = ((((B)) << ((21))) | (((B)) >> (32 - ((21))))); (B) = (C) + (B); };
 { (A) = (A) + (((C)) ^ (((B)) | (~(D)))) + X[(4)] + (*_GLOBAL_T_13_A[get_stack_id()])[(61)]; (A) = ((((A)) << ((6))) | (((A)) >> (32 - ((6))))); (A) = (B) + (A); }; { (D) = (D) + (((B)) ^ (((A)) | (~(C)))) + X[(11)] + (*_GLOBAL_T_13_A[get_stack_id()])[(62)]; (D) = ((((D)) << ((10))) | (((D)) >> (32 - ((10))))); (D) = (A) + (D); };
 { (C) = (C) + (((A)) ^ (((D)) | (~(B)))) + X[(2)] + (*_GLOBAL_T_13_A[get_stack_id()])[(63)]; (C) = ((((C)) << ((15))) | (((C)) >> (32 - ((15))))); (C) = (D) + (C); }; { (B) = (B) + (((D)) ^ (((C)) | (~(A)))) + X[(9)] + (*_GLOBAL_T_13_A[get_stack_id()])[(64)]; (B) = ((((B)) << ((21))) | (((B)) >> (32 - ((21))))); (B) = (C) + (B); };

 ctxt->md5_st.md5_state32[0] += A;
 ctxt->md5_st.md5_state32[1] += B;
 ctxt->md5_st.md5_state32[2] += C;
 ctxt->md5_st.md5_state32[3] += D;
}
