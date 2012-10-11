# 1 "freebsd5/kern/kern_conf.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/kern_conf.c"
# 27 "freebsd5/kern/kern_conf.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 28 "freebsd5/kern/kern_conf.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/kern_conf.c,v 1.155 2004/08/15 06:24:40 jmg Exp $" "\"");

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

# 31 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2




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
# 54 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2




typedef  unsigned long   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_0_A[NUM_STACKS];  
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_6_T; extern  _GLOBAL_6_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_1_A[NUM_STACKS];  
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_2_A[NUM_STACKS];  

typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_tz_dsttime[NUM_STACKS];   
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
# 32 "freebsd5/kern/kern_conf.c" 2
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
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


typedef  struct callout_list   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_20_T; extern  _GLOBAL_20_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_23_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_23_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_23_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_3_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_4_A[NUM_STACKS];  
typedef  char  _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_5_A[NUM_STACKS];  
typedef  int  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_6_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_7_A[NUM_STACKS];   

typedef  long  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_38_T; extern  _GLOBAL_38_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_39_T; extern  _GLOBAL_39_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_8_A[NUM_STACKS];  

typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_9_A[NUM_STACKS];   
typedef  char  _GLOBAL_47_T; extern  _GLOBAL_47_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_10_A[NUM_STACKS];  
typedef  char  _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_11_A[NUM_STACKS];  

typedef  char  _GLOBAL_50_T; extern  _GLOBAL_50_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_51_T; extern  _GLOBAL_51_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_12_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_52_T; extern  _GLOBAL_52_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_13_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_14_A[NUM_STACKS];   
typedef  char const   _GLOBAL_54_T; extern  _GLOBAL_54_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_15_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_wdog_tickler[NUM_STACKS];   





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
# 33 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/bio.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/bio.h"
struct disk;
struct bio;

typedef void bio_task_t(void *);




struct bio {
 uint8_t bio_cmd;
 uint8_t bio_flags;
 uint8_t bio_cflags;
 uint8_t bio_pflags;
 struct cdev *bio_dev;
 struct disk *bio_disk;
 off_t bio_offset;
 long bio_bcount;
 caddr_t bio_data;
 int bio_error;
 long bio_resid;
 void (*bio_done)(struct bio *);
 void *bio_driver1;
 void *bio_driver2;
 void *bio_caller1;
 void *bio_caller2;
 struct { struct bio *tqe_next; struct bio **tqe_prev; } bio_queue;
 const char *bio_attribute;
 struct g_consumer *bio_from;
 struct g_provider *bio_to;
 off_t bio_length;
 off_t bio_completed;
 u_int bio_children;
 u_int bio_inbed;
 struct bio *bio_parent;
 struct bintime bio_t0;

 bio_task_t *bio_task;
 void *bio_task_arg;


 daddr_t bio_pblkno;
};
# 102 "freebsd5/freebsd/usr/src/sys/sys/bio.h"
struct uio;
struct devstat;

struct bio_queue_head {
 struct bio_queue { struct bio *tqh_first; struct bio **tqh_last; } queue;
 off_t last_offset;
 struct bio *insert_point;
 struct bio *switch_point;
};

void biodone(struct bio *bp);
void biofinish(struct bio *bp, struct devstat *stat, int error);
int biowait(struct bio *bp, const char *wchan);

void bioq_disksort(struct bio_queue_head *ap, struct bio *bp);
struct bio *bioq_first(struct bio_queue_head *head);
void bioq_flush(struct bio_queue_head *head, struct devstat *stp, int error);
void bioq_init(struct bio_queue_head *head);
void bioq_insert_head(struct bio_queue_head *head, struct bio *bp);
void bioq_insert_tail(struct bio_queue_head *head, struct bio *bp);
void bioq_remove(struct bio_queue_head *head, struct bio *bp);

void bio_taskqueue(struct bio *bp, bio_task_t *fund, void *arg);

int physio(struct cdev *dev, struct uio *uio, int ioflag);
# 34 "freebsd5/kern/kern_conf.c" 2
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
typedef  struct lock_class   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_lock_class_sx[NUM_STACKS];    

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
# 35 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2


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
typedef  union descriptor   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_16_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_17_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_63_T; extern  _GLOBAL_63_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_64_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_18_A[NUM_STACKS];     
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
# 36 "freebsd5/kern/kern_conf.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_19_A[NUM_STACKS];  
typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_20_A[NUM_STACKS];  
typedef  char  _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_21_A[NUM_STACKS];  
typedef  char  _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_22_A[NUM_STACKS];  


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
# 37 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/module.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef enum modeventtype {
 MOD_LOAD,
 MOD_UNLOAD,
 MOD_SHUTDOWN,
 MOD_QUIESCE
} modeventtype_t;

typedef struct module *module_t;
typedef int (*modeventhand_t)(module_t, int , void *);




typedef struct moduledata {
 const char *name;
 modeventhand_t evhand;
 void *priv;
} moduledata_t;





typedef union modspecific {
 int intval;
 u_int uintval;
 long longval;
 u_long ulongval;
} modspecific_t;




struct mod_depend {
 int md_ver_minimum;
 int md_ver_preferred;
 int md_ver_maximum;
};




struct mod_version {
 int mv_version;
};

struct mod_metadata {
 int md_version;
 int md_type;
 void *md_data;
 const char *md_cval;
};
# 129 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef  struct sx   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_23_A[NUM_STACKS];   
# 138 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct linker_file;

void module_register_init(const void *);
int module_register(const struct moduledata *, struct linker_file *);
module_t module_lookupbyname(const char *);
module_t module_lookupbyid(int);
void module_reference(module_t);
void module_release(module_t);
int module_unload(module_t, int flags);
int module_getid(module_t);
module_t module_getfnext(module_t);
void module_setspecific(module_t, modspecific_t *);
# 168 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct module_stat {
 int version;
 char name[32];
 int refs;
 int id;
 modspecific_t data;
};
# 38 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
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
typedef  struct malloc_type   _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_24_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_92_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_25_A[NUM_STACKS] = { &_GLOBAL_0_M_DEVBUF_I, &_GLOBAL_1_M_DEVBUF_I, &_GLOBAL_2_M_DEVBUF_I, &_GLOBAL_3_M_DEVBUF_I, &_GLOBAL_4_M_DEVBUF_I, &_GLOBAL_5_M_DEVBUF_I, &_GLOBAL_6_M_DEVBUF_I, &_GLOBAL_7_M_DEVBUF_I, &_GLOBAL_8_M_DEVBUF_I, &_GLOBAL_9_M_DEVBUF_I, &_GLOBAL_10_M_DEVBUF_I, &_GLOBAL_11_M_DEVBUF_I, &_GLOBAL_12_M_DEVBUF_I, &_GLOBAL_13_M_DEVBUF_I, &_GLOBAL_14_M_DEVBUF_I, &_GLOBAL_15_M_DEVBUF_I, &_GLOBAL_16_M_DEVBUF_I, &_GLOBAL_17_M_DEVBUF_I, &_GLOBAL_18_M_DEVBUF_I, &_GLOBAL_19_M_DEVBUF_I, &_GLOBAL_20_M_DEVBUF_I, &_GLOBAL_21_M_DEVBUF_I, &_GLOBAL_22_M_DEVBUF_I, &_GLOBAL_23_M_DEVBUF_I, &_GLOBAL_24_M_DEVBUF_I, &_GLOBAL_25_M_DEVBUF_I, &_GLOBAL_26_M_DEVBUF_I, &_GLOBAL_27_M_DEVBUF_I, &_GLOBAL_28_M_DEVBUF_I, &_GLOBAL_29_M_DEVBUF_I, &_GLOBAL_30_M_DEVBUF_I, &_GLOBAL_31_M_DEVBUF_I, &_GLOBAL_32_M_DEVBUF_I, &_GLOBAL_33_M_DEVBUF_I, &_GLOBAL_34_M_DEVBUF_I, &_GLOBAL_35_M_DEVBUF_I, &_GLOBAL_36_M_DEVBUF_I, &_GLOBAL_37_M_DEVBUF_I, &_GLOBAL_38_M_DEVBUF_I, &_GLOBAL_39_M_DEVBUF_I, &_GLOBAL_40_M_DEVBUF_I, &_GLOBAL_41_M_DEVBUF_I, &_GLOBAL_42_M_DEVBUF_I, &_GLOBAL_43_M_DEVBUF_I, &_GLOBAL_44_M_DEVBUF_I, &_GLOBAL_45_M_DEVBUF_I, &_GLOBAL_46_M_DEVBUF_I, &_GLOBAL_47_M_DEVBUF_I, &_GLOBAL_48_M_DEVBUF_I, &_GLOBAL_49_M_DEVBUF_I, };   
typedef  struct malloc_type   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_26_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_27_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_28_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_96_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_29_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_malloc_mtx[NUM_STACKS];    


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
# 39 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ktr.h" 1
# 114 "freebsd5/freebsd/usr/src/sys/sys/ktr.h"
struct ktr_entry {
 u_int64_t ktr_timestamp;
 int ktr_cpu;
 int ktr_line;
 const char *ktr_file;
 const char *ktr_desc;
 u_long ktr_parms[6];
};

typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_102_T; extern volatile  _GLOBAL_102_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_30_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2



struct eventhandler_entry {
 struct { struct eventhandler_entry *tqe_next; struct eventhandler_entry **tqe_prev; } ee_link;
 int ee_priority;

 void *ee_arg;
};

struct eventhandler_list {
 char *el_name;
 int el_flags;

 u_int el_runcount;
 struct mtx el_lock;
 struct { struct eventhandler_list *tqe_next; struct eventhandler_list **tqe_prev; } el_link;
 struct { struct eventhandler_entry *tqh_first; struct eventhandler_entry **tqh_last; } el_entries;
};

typedef struct eventhandler_entry *eventhandler_tag;
# 127 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
eventhandler_tag eventhandler_register(struct eventhandler_list *list,
     char *name, void *func, void *arg, int priority);
void eventhandler_deregister(struct eventhandler_list *list,
     eventhandler_tag tag);
struct eventhandler_list *eventhandler_find_list(char *name);
void eventhandler_prune_list(struct eventhandler_list *list);
# 144 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
typedef void (*shutdown_fn)(void *, int);





struct eventhandler_entry_shutdown_pre_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_post_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_final { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;


typedef void (*vm_lowmem_handler_t)(void *, int);

struct eventhandler_entry_vm_lowmem { struct eventhandler_entry ee; vm_lowmem_handler_t eh_func; }; struct __hack;






struct proc;

typedef void (*exitlist_fn)(void *, struct proc *);
typedef void (*forklist_fn)(void *, struct proc *, struct proc *, int);
typedef void (*execlist_fn)(void *, struct proc *);

struct eventhandler_entry_process_exit { struct eventhandler_entry ee; exitlist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_fork { struct eventhandler_entry ee; forklist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_exec { struct eventhandler_entry ee; execlist_fn eh_func; }; struct __hack;
# 45 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 2

struct tty;
struct disk;
struct vnode;
struct buf;
struct snaphead { struct inode *tqh_first; struct inode **tqh_last; };

struct cdev {
 u_int si_flags;
# 64 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
 struct timespec si_atime;
 struct timespec si_ctime;
 struct timespec si_mtime;
 dev_t si_udev;
 int si_refcount;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_list;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_clone;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_hash;
 struct { struct vnode *slh_first; } si_hlist;
 struct { struct cdev *lh_first; } si_children;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_siblings;
 struct cdev *si_parent;
 u_int si_inode;
 char *si_name;
 void *si_drv1, *si_drv2;
 struct cdevsw *si_devsw;
 int si_iosize_max;
 u_int si_stripesize;
 u_int si_stripeoffset;
 uid_t si_uid;
 gid_t si_gid;
 mode_t si_mode;
 u_long si_usecount;
 u_long si_threadcount;
 union {
  struct {
   struct tty *__sit_tty;
  } __si_tty;
  struct {
   struct mount *__sid_mountpoint;
   int __sid_bsize_phys;
   int __sid_bsize_best;
   struct snaphead __sid_snapshots;
   daddr_t __sid_snaplistsize;
   daddr_t *__sid_snapblklist;
   int (*__sid_copyonwrite)(struct vnode *, struct buf *);
  } __si_disk;
 } __si_u;
 char __si_namebuf[63 + 1];
};
# 118 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct bio;
struct buf;
struct thread;
struct uio;
struct knote;
struct clonedevs;
# 141 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef struct thread d_thread_t;

typedef int d_open_t(struct cdev *dev, int oflags, int devtype, struct thread *td);
typedef int d_fdopen_t(struct cdev *dev, int oflags, struct thread *td, int fdidx);
typedef int d_close_t(struct cdev *dev, int fflag, int devtype, struct thread *td);
typedef void d_strategy_t(struct bio *bp);
typedef int d_ioctl_t(struct cdev *dev, u_long cmd, caddr_t data,
        int fflag, struct thread *td);

typedef int d_read_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_write_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_poll_t(struct cdev *dev, int events, struct thread *td);
typedef int d_kqfilter_t(struct cdev *dev, struct knote *kn);
typedef int d_mmap_t(struct cdev *dev, vm_offset_t offset, vm_paddr_t *paddr,
          int nprot);

typedef int d_spare1_t(struct cdev *dev);
typedef int d_spare2_t(struct cdev *dev);

typedef int dumper_t(
 void *priv,
 void *virtual,
 vm_offset_t physical,
 off_t offset,
 size_t length);
# 207 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct cdevsw {
 int d_version;
 int d_maj;
 u_int d_flags;
 const char *d_name;
 d_open_t *d_open;
 d_fdopen_t *d_fdopen;
 d_close_t *d_close;
 d_read_t *d_read;
 d_write_t *d_write;
 d_ioctl_t *d_ioctl;
 d_poll_t *d_poll;
 d_mmap_t *d_mmap;
 d_strategy_t *d_strategy;
 dumper_t *d_dump;
 d_kqfilter_t *d_kqfilter;
 d_spare1_t *d_spare1;
 d_spare2_t *d_spare2;


 struct { struct cdevsw *le_next; struct cdevsw **le_prev; } d_list;
 struct { struct cdev *lh_first; } d_devs;
 int d_refcount;
};
# 244 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct module;

struct devsw_module_data {
 int (*chainevh)(struct module *, int, void *);
 void *chainarg;

};
# 261 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
void clone_setup(struct clonedevs **cdp);
void clone_cleanup(struct clonedevs **);


int clone_create(struct clonedevs **, struct cdevsw *, int *unit, struct cdev **dev, u_int extra);

int count_dev(struct cdev *_dev);
void destroy_dev(struct cdev *_dev);
struct cdevsw *devsw(struct cdev *_dev);
void cdevsw_ref(struct cdevsw *);
void cdevsw_rel(struct cdevsw *);
const char *devtoname(struct cdev *_dev);
int dev_named(struct cdev *_pdev, const char *_name);
void dev_depends(struct cdev *_pdev, struct cdev *_cdev);
void dev_ref(struct cdev *dev);
void dev_rel(struct cdev *dev);
void dev_strategy(struct buf *bp);
struct cdev *makebdev(int _maj, int _min);
struct cdev *make_dev(struct cdevsw *_devsw, int _minor, uid_t _uid, gid_t _gid,
  int _perms, const char *_fmt, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
struct cdev *make_dev_alias(struct cdev *_pdev, const char *_fmt, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int dev2unit(struct cdev *_dev);
int unit2minor(int _unit);
void setconf(void);
struct cdev *getdiskbyname(char *_name);

void devfs_create(struct cdev *dev);
void devfs_destroy(struct cdev *dev);
# 301 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef void (*dev_clone_fn)(void *arg, char *name, int namelen, struct cdev **result);

int dev_stdclone(char *_name, char **_namep, const char *_stem, int *_unit);
struct eventhandler_entry_dev_clone { struct eventhandler_entry ee; dev_clone_fn eh_func; }; struct __hack;



struct dumperinfo {
 dumper_t *dumper;
 void *priv;
 u_int blocksize;
 off_t mediaoffset;
 off_t mediasize;
};

int set_dumper(struct dumperinfo *);
void dumpsys(struct dumperinfo *);
typedef  int  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_dumping[NUM_STACKS];   


typedef  d_ioctl_t _GLOBAL_105_T;  _GLOBAL_105_T  ttyioctl;  
typedef  d_kqfilter_t _GLOBAL_106_T;  _GLOBAL_106_T  ttykqfilter;  
typedef  d_poll_t _GLOBAL_107_T;  _GLOBAL_107_T  ttypoll;  
typedef  d_read_t _GLOBAL_108_T;  _GLOBAL_108_T  ttyread;  
typedef  d_write_t _GLOBAL_109_T;  _GLOBAL_109_T  ttywrite;  
# 40 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
struct mtx;






struct lock {
 struct mtx *lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 const char *lk_wmesg;
 int lk_timo;
 struct thread *lk_lockholder;
 struct lock *lk_newlock;
# 68 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
};
# 201 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
void dumplockinfo(struct lock *lkp);
struct thread;

void lockinit(struct lock *, int prio, const char *wmesg,
   int timo, int flags);
void lockdestroy(struct lock *);
# 218 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
int lockmgr(struct lock *, u_int flags,
   struct mtx *, struct thread *p);

void transferlockers(struct lock *, struct lock *);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *, struct thread *);
int lockcount(struct lock *);
# 41 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2






# 1 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h"
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





typedef  struct malloc_type   _GLOBAL_110_T; extern  _GLOBAL_110_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_110_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_31_A[NUM_STACKS];   
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
# 37 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 2





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
# 48 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 2







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
# 49 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
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
# 132 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
typedef  struct malloc_type   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_1_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_2_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_3_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_4_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_5_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_6_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_7_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_8_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_9_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_10_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_11_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_12_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_13_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_14_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_15_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_16_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_17_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_18_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_19_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_20_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_21_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_22_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_23_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_24_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_25_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_26_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_27_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_28_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_29_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_30_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_31_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_32_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_33_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_34_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_35_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_36_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_37_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_38_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_39_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_40_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_41_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_42_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_43_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_44_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_45_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_46_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_47_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_48_M_ACL_I [ 1 ] ; extern  _GLOBAL_111_T  _GLOBAL_49_M_ACL_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACL_I) *_GLOBAL_M_ACL_32_A[NUM_STACKS];   






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
# 50 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };





struct buflists { struct buf *tqh_first; struct buf **tqh_last; };

typedef int vop_t(void *);
struct namecache;

struct vpollinfo {
 struct mtx vpi_lock;
 struct selinfo vpi_selinfo;
 short vpi_events;
 short vpi_revents;
};
# 107 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnode {
 struct mtx v_interlock;
 u_long v_iflag;
 int v_usecount;
 long v_numoutput;
 struct thread *v_vxthread;
 int v_holdcnt;
 struct buflists v_cleanblkhd;
 struct buf *v_cleanblkroot;
 int v_cleanbufcnt;
 struct buflists v_dirtyblkhd;
 struct buf *v_dirtyblkroot;
 int v_dirtybufcnt;
 u_long v_vflag;
 int v_writecount;
 struct vm_object *v_object;
 daddr_t v_lastw;
 daddr_t v_cstart;
 daddr_t v_lasta;
 int v_clen;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct {
   struct cdev *vu_cdev;
   struct { struct vnode *sle_next; } vu_specnext;
  } vu_spec;
  struct fifoinfo *vu_fifoinfo;
 } v_un;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_nmntvnodes;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 enum vtype v_type;
 const char *v_tag;
 void *v_data;
 struct lock v_lock;
 struct lock *v_vnlock;
 vop_t **v_op;
 struct mount *v_mount;
 struct { struct namecache *lh_first; } v_cache_src;
 struct { struct namecache *tqh_first; struct namecache **tqh_last; } v_cache_dst;
 u_long v_id;
 struct vnode *v_dd;
 u_long v_ddid;
 struct vpollinfo *v_pollinfo;
 struct label *v_label;




 dev_t v_cachedfs;
 ino_t v_cachedid;
 int v_bsize;
};
# 170 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct xvnode {
 size_t xv_size;
 void *xv_vnode;
 u_long xv_flag;
 int xv_usecount;
 int xv_writecount;
 int xv_holdcnt;
 u_long xv_id;
 void *xv_mount;
 long xv_numoutput;
 enum vtype xv_type;
 union {
  void *xvu_socket;
  void *xvu_fifo;
  dev_t xvu_rdev;
  struct {
   dev_t xvu_dev;
   ino_t xvu_ino;
  } xv_uns;
 } xv_un;
};
# 248 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 dev_t va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 struct timespec va_birthtime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 324 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct malloc_type   _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_1_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_2_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_3_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_4_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_5_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_6_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_7_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_8_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_9_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_10_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_11_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_12_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_13_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_14_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_15_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_16_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_17_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_18_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_19_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_20_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_21_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_22_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_23_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_24_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_25_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_26_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_27_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_28_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_29_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_30_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_31_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_32_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_33_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_34_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_35_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_36_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_37_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_38_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_39_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_40_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_41_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_42_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_43_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_44_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_45_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_46_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_47_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_48_M_VNODE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_49_M_VNODE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_VNODE_I) *_GLOBAL_M_VNODE_33_A[NUM_STACKS];   






typedef  enum vtype   _GLOBAL_113_T; extern  _GLOBAL_113_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_34_A[NUM_STACKS];   
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_35_A[NUM_STACKS];  
# 369 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct vnode   _GLOBAL_115_T; extern  _GLOBAL_115_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_async_io_version[NUM_STACKS];   
typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_desiredvnodes[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_118_T; extern  _GLOBAL_118_T  * global_namei_zone[NUM_STACKS];    
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_prtactive[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_va_null[NUM_STACKS];    







typedef  void   ( *_GLOBAL_122_T  )  ( int  deltat  ) ; extern  _GLOBAL_122_T global_lease_updatetime[NUM_STACKS];    
# 433 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_thread_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_123_T; extern  _GLOBAL_123_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_123_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_36_A[NUM_STACKS];   
# 470 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 vop_t *opve_impl;
};
struct vnodeopv_desc {

 vop_t ***opv_desc_vector_p;
 struct vnodeopv_entry_desc *opv_desc_ops;
};





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 564 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_vmiodirenable[NUM_STACKS];   

static __inline int
vn_canvmio(struct vnode *vp)
{
      if (vp && (vp->v_type == VREG || (global_vmiodirenable[get_stack_id()] && vp->v_type == VDIR)))
  return(1);
 return(0);
}




# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/vnode_if.h" 1







typedef  struct vnodeop_desc   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_vop_default_desc[NUM_STACKS];    
struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_vop_islocked_desc[NUM_STACKS];    
static __inline int VOP_ISLOCKED(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_islocked_args a;
 int rc;
 a.a_desc = (& global_vop_islocked_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 rc = (( *(((vp)->v_op)[((((& global_vop_islocked_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_vop_lookup_desc[NUM_STACKS];    
static __inline int VOP_LOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_lookup_args a;
 int rc;
 a.a_desc = (& global_vop_lookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;



 rc = (( *(((dvp)->v_op)[((((& global_vop_lookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_cachedlookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_vop_cachedlookup_desc[NUM_STACKS];    
static __inline int VOP_CACHEDLOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_cachedlookup_args a;
 int rc;
 a.a_desc = (& global_vop_cachedlookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_cachedlookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
}
 return (rc);
}
struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_vop_create_desc[NUM_STACKS];    
static __inline int VOP_CREATE(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_create_args a;
 int rc;
 a.a_desc = (& global_vop_create_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_create_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_vop_whiteout_desc[NUM_STACKS];    
static __inline int VOP_WHITEOUT(
 struct vnode *dvp,
 struct componentname *cnp,
 int flags)
{
 struct vop_whiteout_args a;
 int rc;
 a.a_desc = (& global_vop_whiteout_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_cnp = cnp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_whiteout_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_vop_mknod_desc[NUM_STACKS];    
static __inline int VOP_MKNOD(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mknod_args a;
 int rc;
 a.a_desc = (& global_vop_mknod_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mknod_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
 int a_fdidx;
};
typedef  struct vnodeop_desc   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_vop_open_desc[NUM_STACKS];    
static __inline int VOP_OPEN(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td,
 int fdidx)
{
 struct vop_open_args a;
 int rc;
 a.a_desc = (& global_vop_open_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 a.a_fdidx = fdidx;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_open_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_vop_close_desc[NUM_STACKS];    
static __inline int VOP_CLOSE(
 struct vnode *vp,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_close_args a;
 int rc;
 a.a_desc = (& global_vop_close_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_close_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_vop_access_desc[NUM_STACKS];    
static __inline int VOP_ACCESS(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_access_args a;
 int rc;
 a.a_desc = (& global_vop_access_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_access_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_vop_getattr_desc[NUM_STACKS];    
static __inline int VOP_GETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getattr_args a;
 int rc;
 a.a_desc = (& global_vop_getattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_vop_setattr_desc[NUM_STACKS];    
static __inline int VOP_SETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setattr_args a;
 int rc;
 a.a_desc = (& global_vop_setattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_vop_read_desc[NUM_STACKS];    
static __inline int VOP_READ(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_read_args a;
 int rc;
 a.a_desc = (& global_vop_read_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_read_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_vop_write_desc[NUM_STACKS];    
static __inline int VOP_WRITE(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_write_args a;
 int rc;
 a.a_desc = (& global_vop_write_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_write_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_vop_lease_desc[NUM_STACKS];    
static __inline int VOP_LEASE(
 struct vnode *vp,
 struct thread *td,
 struct ucred *cred,
 int flag)
{
 struct vop_lease_args a;
 int rc;
 a.a_desc = (& global_vop_lease_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 a.a_cred = cred;
 a.a_flag = flag;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_lease_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 caddr_t a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_vop_ioctl_desc[NUM_STACKS];    
static __inline int VOP_IOCTL(
 struct vnode *vp,
 u_long command,
 caddr_t data,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_ioctl_args a;
 int rc;
 a.a_desc = (& global_vop_ioctl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_command = command;
 a.a_data = data;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_ioctl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_vop_poll_desc[NUM_STACKS];    
static __inline int VOP_POLL(
 struct vnode *vp,
 int events,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_poll_args a;
 int rc;
 a.a_desc = (& global_vop_poll_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_events = events;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_poll_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_vop_kqfilter_desc[NUM_STACKS];    
static __inline int VOP_KQFILTER(
 struct vnode *vp,
 struct knote *kn)
{
 struct vop_kqfilter_args a;
 int rc;
 a.a_desc = (& global_vop_kqfilter_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_kn = kn;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_kqfilter_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_vop_revoke_desc[NUM_STACKS];    
static __inline int VOP_REVOKE(
 struct vnode *vp,
 int flags)
{
 struct vop_revoke_args a;
 int rc;
 a.a_desc = (& global_vop_revoke_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_revoke_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_vop_fsync_desc[NUM_STACKS];    
static __inline int VOP_FSYNC(
 struct vnode *vp,
 struct ucred *cred,
 int waitfor,
 struct thread *td)
{
 struct vop_fsync_args a;
 int rc;
 a.a_desc = (& global_vop_fsync_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_waitfor = waitfor;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_fsync_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_145_T; extern  _GLOBAL_145_T  global_vop_remove_desc[NUM_STACKS];    
static __inline int VOP_REMOVE(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_remove_args a;
 int rc;
 a.a_desc = (& global_vop_remove_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_remove_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_tdvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_vop_link_desc[NUM_STACKS];    
static __inline int VOP_LINK(
 struct vnode *tdvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_link_args a;
 int rc;
 a.a_desc = (& global_vop_link_desc[get_stack_id()]);
 a.a_tdvp = tdvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((tdvp)->v_op)[((((& global_vop_link_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_vop_rename_desc[NUM_STACKS];    
static __inline int VOP_RENAME(
 struct vnode *fdvp,
 struct vnode *fvp,
 struct componentname *fcnp,
 struct vnode *tdvp,
 struct vnode *tvp,
 struct componentname *tcnp)
{
 struct vop_rename_args a;
 int rc;
 a.a_desc = (& global_vop_rename_desc[get_stack_id()]);
 a.a_fdvp = fdvp;
 a.a_fvp = fvp;
 a.a_fcnp = fcnp;
 a.a_tdvp = tdvp;
 a.a_tvp = tvp;
 a.a_tcnp = tcnp;



 rc = (( *(((fdvp)->v_op)[((((& global_vop_rename_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_vop_mkdir_desc[NUM_STACKS];    
static __inline int VOP_MKDIR(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mkdir_args a;
 int rc;
 a.a_desc = (& global_vop_mkdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mkdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_vop_rmdir_desc[NUM_STACKS];    
static __inline int VOP_RMDIR(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_rmdir_args a;
 int rc;
 a.a_desc = (& global_vop_rmdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_rmdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_vop_symlink_desc[NUM_STACKS];    
static __inline int VOP_SYMLINK(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap,
 char *target)
{
 struct vop_symlink_args a;
 int rc;
 a.a_desc = (& global_vop_symlink_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 a.a_target = target;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_symlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_vop_readdir_desc[NUM_STACKS];    
static __inline int VOP_READDIR(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred,
 int *eofflag,
 int *ncookies,
 u_long **cookies)
{
 struct vop_readdir_args a;
 int rc;
 a.a_desc = (& global_vop_readdir_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_eofflag = eofflag;
 a.a_ncookies = ncookies;
 a.a_cookies = cookies;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_vop_readlink_desc[NUM_STACKS];    
static __inline int VOP_READLINK(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred)
{
 struct vop_readlink_args a;
 int rc;
 a.a_desc = (& global_vop_readlink_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_vop_inactive_desc[NUM_STACKS];    
static __inline int VOP_INACTIVE(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_inactive_args a;
 int rc;
 a.a_desc = (& global_vop_inactive_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_inactive_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_vop_reclaim_desc[NUM_STACKS];    
static __inline int VOP_RECLAIM(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_reclaim_args a;
 int rc;
 a.a_desc = (& global_vop_reclaim_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reclaim_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_vop_lock_desc[NUM_STACKS];    
static __inline int VOP_LOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_lock_args a;
 int rc;
 a.a_desc = (& global_vop_lock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_lock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_vop_unlock_desc[NUM_STACKS];    
static __inline int VOP_UNLOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_unlock_args a;
 int rc;
 a.a_desc = (& global_vop_unlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_unlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
 int *a_runb;
};
typedef  struct vnodeop_desc   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_vop_bmap_desc[NUM_STACKS];    
static __inline int VOP_BMAP(
 struct vnode *vp,
 daddr_t bn,
 struct vnode **vpp,
 daddr_t *bnp,
 int *runp,
 int *runb)
{
 struct vop_bmap_args a;
 int rc;
 a.a_desc = (& global_vop_bmap_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bn = bn;
 a.a_vpp = vpp;
 a.a_bnp = bnp;
 a.a_runp = runp;
 a.a_runb = runb;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_bmap_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_vop_strategy_desc[NUM_STACKS];    
static __inline int VOP_STRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_strategy_args a;
 int rc;
 a.a_desc = (& global_vop_strategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_strategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_specstrategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_vop_specstrategy_desc[NUM_STACKS];    
static __inline int VOP_SPECSTRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_specstrategy_args a;
 int rc;
 a.a_desc = (& global_vop_specstrategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_specstrategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getwritemount_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct mount **a_mpp;
};
typedef  struct vnodeop_desc   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_vop_getwritemount_desc[NUM_STACKS];    
static __inline int VOP_GETWRITEMOUNT(
 struct vnode *vp,
 struct mount **mpp)
{
 struct vop_getwritemount_args a;
 int rc;
 a.a_desc = (& global_vop_getwritemount_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mpp = mpp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getwritemount_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_vop_print_desc[NUM_STACKS];    
static __inline int VOP_PRINT(
 struct vnode *vp)
{
 struct vop_print_args a;
 int rc;
 a.a_desc = (& global_vop_print_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_print_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_vop_pathconf_desc[NUM_STACKS];    
static __inline int VOP_PATHCONF(
 struct vnode *vp,
 int name,
 register_t *retval)
{
 struct vop_pathconf_args a;
 int rc;
 a.a_desc = (& global_vop_pathconf_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_name = name;
 a.a_retval = retval;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_pathconf_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 caddr_t a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_vop_advlock_desc[NUM_STACKS];    
static __inline int VOP_ADVLOCK(
 struct vnode *vp,
 caddr_t id,
 int op,
 struct flock *fl,
 int flags)
{
 struct vop_advlock_args a;
 int rc;
 a.a_desc = (& global_vop_advlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_id = id;
 a.a_op = op;
 a.a_fl = fl;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_advlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_vop_reallocblks_desc[NUM_STACKS];    
static __inline int VOP_REALLOCBLKS(
 struct vnode *vp,
 struct cluster_save *buflist)
{
 struct vop_reallocblks_args a;
 int rc;
 a.a_desc = (& global_vop_reallocblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_buflist = buflist;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reallocblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_reqpage;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_vop_getpages_desc[NUM_STACKS];    
static __inline int VOP_GETPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int reqpage,
 vm_ooffset_t offset)
{
 struct vop_getpages_args a;
 int rc;
 a.a_desc = (& global_vop_getpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_reqpage = reqpage;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_putpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_sync;
 int *a_rtvals;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_vop_putpages_desc[NUM_STACKS];    
static __inline int VOP_PUTPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int sync,
 int *rtvals,
 vm_ooffset_t offset)
{
 struct vop_putpages_args a;
 int rc;
 a.a_desc = (& global_vop_putpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_sync = sync;
 a.a_rtvals = rtvals;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_putpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_freeblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_addr;
 daddr_t a_length;
};
typedef  struct vnodeop_desc   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vop_freeblks_desc[NUM_STACKS];    
static __inline int VOP_FREEBLKS(
 struct vnode *vp,
 daddr_t addr,
 daddr_t length)
{
 struct vop_freeblks_args a;
 int rc;
 a.a_desc = (& global_vop_freeblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_addr = addr;
 a.a_length = length;
 rc = (( *(((vp)->v_op)[((((& global_vop_freeblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vop_getacl_desc[NUM_STACKS];    
static __inline int VOP_GETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getacl_args a;
 int rc;
 a.a_desc = (& global_vop_getacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_vop_setacl_desc[NUM_STACKS];    
static __inline int VOP_SETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setacl_args a;
 int rc;
 a.a_desc = (& global_vop_setacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_aclcheck_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vop_aclcheck_desc[NUM_STACKS];    
static __inline int VOP_ACLCHECK(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_aclcheck_args a;
 int rc;
 a.a_desc = (& global_vop_aclcheck_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_aclcheck_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_closeextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_commit;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_vop_closeextattr_desc[NUM_STACKS];    
static __inline int VOP_CLOSEEXTATTR(
 struct vnode *vp,
 int commit,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_closeextattr_args a;
 int rc;
 a.a_desc = (& global_vop_closeextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_commit = commit;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_closeextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_vop_getextattr_desc[NUM_STACKS];    
static __inline int VOP_GETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getextattr_args a;
 int rc;
 a.a_desc = (& global_vop_getextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_listextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_vop_listextattr_desc[NUM_STACKS];    
static __inline int VOP_LISTEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_listextattr_args a;
 int rc;
 a.a_desc = (& global_vop_listextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_listextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_openextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_vop_openextattr_desc[NUM_STACKS];    
static __inline int VOP_OPENEXTATTR(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_openextattr_args a;
 int rc;
 a.a_desc = (& global_vop_openextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_openextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_deleteextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_deleteextattr_desc[NUM_STACKS];    
static __inline int VOP_DELETEEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_deleteextattr_args a;
 int rc;
 a.a_desc = (& global_vop_deleteextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_deleteextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_setextattr_desc[NUM_STACKS];    
static __inline int VOP_SETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setextattr_args a;
 int rc;
 a.a_desc = (& global_vop_setextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_createvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_createvobject_desc[NUM_STACKS];    
static __inline int VOP_CREATEVOBJECT(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_createvobject_args a;
 int rc;
 a.a_desc = (& global_vop_createvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_createvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_destroyvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_destroyvobject_desc[NUM_STACKS];    
static __inline int VOP_DESTROYVOBJECT(
 struct vnode *vp)
{
 struct vop_destroyvobject_args a;
 int rc;
 a.a_desc = (& global_vop_destroyvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_destroyvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vm_object **a_objpp;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_getvobject_desc[NUM_STACKS];    
static __inline int VOP_GETVOBJECT(
 struct vnode *vp,
 struct vm_object **objpp)
{
 struct vop_getvobject_args a;
 int rc;
 a.a_desc = (& global_vop_getvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_objpp = objpp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setlabel_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct label *a_label;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_setlabel_desc[NUM_STACKS];    
static __inline int VOP_SETLABEL(
 struct vnode *vp,
 struct label *label,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setlabel_args a;
 int rc;
 a.a_desc = (& global_vop_setlabel_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_label = label;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setlabel_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
# 578 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2




struct componentname;
struct file;
struct mount;
struct nameidata;
struct ostat;
struct thread;
struct proc;
struct stat;
struct nstat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

typedef  int   ( *_GLOBAL_182_T  )  ( struct vop_lease_args   *  ) ; extern  _GLOBAL_182_T global_lease_check_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_184_T  )  ( struct vnode   *  ) ; extern  _GLOBAL_184_T global_softdep_fsync_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_186_T  )  ( struct mount   *  ) ; extern  _GLOBAL_186_T global_softdep_process_worklist_hook[NUM_STACKS];     

struct vnode *addaliasu(struct vnode *vp, dev_t nvp_rdev);
int bdevvp(struct cdev *dev, struct vnode **vpp);

void cache_enter(struct vnode *dvp, struct vnode *vp,
     struct componentname *cnp);
int cache_lookup(struct vnode *dvp, struct vnode **vpp,
     struct componentname *cnp);
void cache_purge(struct vnode *vp);
void cache_purgevfs(struct mount *mp);
int cache_leaf_test(struct vnode *vp);
int change_dir(struct vnode *vp, struct thread *td);
int change_root(struct vnode *vp, struct thread *td);
void cvtstat(struct stat *st, struct ostat *ost);
void cvtnstat(struct stat *sb, struct nstat *nsb);
int getnewvnode(const char *tag, struct mount *mp, vop_t **vops,
     struct vnode **vpp);
int lease_check(struct vop_lease_args *ap);
int spec_vnoperate(struct vop_generic_args *);
int speedup_syncer(void);


int vn_fullpath(struct thread *td, struct vnode *vn,
     char **retbuf, char **freebuf);
int vaccess(enum vtype type, mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred, int *privused);
int vaccess_acl_posix1e(enum vtype type, uid_t file_uid,
     gid_t file_gid, struct acl *acl, mode_t acc_mode,
     struct ucred *cred, int *privused);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
void vdrop(struct vnode *);
void vdropl(struct vnode *);
int vfinddev(struct cdev *dev, struct vnode **vpp);
void vfs_add_vnodeops(const void *);
void vfs_rm_vnodeops(const void *);
int vflush(struct mount *mp, int rootrefs, int flags, struct thread *td);
int vget(struct vnode *vp, int lockflag, struct thread *td);
void vgone(struct vnode *vp);
void vgonel(struct vnode *vp, struct thread *td);
void vhold(struct vnode *);
void vholdl(struct vnode *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct thread *td, int slpflag, int slptimeo);
int vtruncbuf(struct vnode *vp, struct ucred *cred, struct thread *td,
     off_t length, int blksize);
void vprint(char *label, struct vnode *vp);
int vrecycle(struct vnode *vp, void *dummyarg, struct thread *td);
int vn_close(struct vnode *vp,
     int flags, struct ucred *file_cred, struct thread *td);
void vn_finished_write(struct mount *mp);
int vn_isdisk(struct vnode *vp, int *errp);
int vn_lock(struct vnode *vp, int flags, struct thread *td);





int vn_open(struct nameidata *ndp, int *flagp, int cmode, int fdidx);
int vn_open_cred(struct nameidata *ndp, int *flagp, int cmode,
     struct ucred *cred, int fdidx);
void vn_pollevent(struct vnode *vp, int events);
void vn_pollgone(struct vnode *vp);
int vn_pollrecord(struct vnode *vp, struct thread *p, int events);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, int *aresid,
     struct thread *td);
int vn_rdwr_inchunks(enum uio_rw rw, struct vnode *vp, caddr_t base,
     size_t len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, size_t *aresid,
     struct thread *td);
int vn_stat(struct vnode *vp, struct stat *sb, struct ucred *active_cred,
     struct ucred *file_cred, struct thread *td);
int vn_start_write(struct vnode *vp, struct mount **mpp, int flags);
struct cdev *vn_todev(struct vnode *vp);
int vn_write_suspend_wait(struct vnode *vp, struct mount *mp,
     int flags);
int vn_writechk(struct vnode *vp);
int vn_extattr_get(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int *buflen, char *buf, struct thread *td);
int vn_extattr_set(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int buflen, char *buf, struct thread *td);
int vn_extattr_rm(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, struct thread *td);
int vfs_cache_lookup(struct vop_lookup_args *ap);
int vfs_object_create(struct vnode *vp, struct thread *td,
     struct ucred *cred);
void vfs_timestamp(struct timespec *);
void vfs_write_resume(struct mount *mp);
int vfs_write_suspend(struct mount *mp);
int vop_stdbmap(struct vop_bmap_args *);
int vop_stdfsync(struct vop_fsync_args *);
int vop_stdgetwritemount(struct vop_getwritemount_args *);
int vop_stdgetpages(struct vop_getpages_args *);
int vop_stdinactive(struct vop_inactive_args *);
int vop_stdislocked(struct vop_islocked_args *);
int vop_stdlock(struct vop_lock_args *);
int vop_stdputpages(struct vop_putpages_args *);
int vop_stdunlock(struct vop_unlock_args *);
int vop_nopoll(struct vop_poll_args *);
int vop_stdpathconf(struct vop_pathconf_args *);
int vop_stdpoll(struct vop_poll_args *);
int vop_revoke(struct vop_revoke_args *);
int vop_eopnotsupp(struct vop_generic_args *ap);
int vop_ebadf(struct vop_generic_args *ap);
int vop_einval(struct vop_generic_args *ap);
int vop_enotty(struct vop_generic_args *ap);
int vop_defaultop(struct vop_generic_args *ap);
int vop_null(struct vop_generic_args *ap);
int vop_panic(struct vop_generic_args *ap);
int vop_stdcreatevobject(struct vop_createvobject_args *ap);
int vop_stddestroyvobject(struct vop_destroyvobject_args *ap);
int vop_stdgetvobject(struct vop_getvobject_args *ap);

void vfree(struct vnode *);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
void vref(struct vnode *vp);
int vrefcnt(struct vnode *vp);
void vbusy(struct vnode *vp);
void v_addpollinfo(struct vnode *vp);

typedef  vop_t  _GLOBAL_187_T; extern  _GLOBAL_187_T  * *  global_default_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_188_T; extern  _GLOBAL_188_T  * *  global_spec_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_189_T; extern  _GLOBAL_189_T  * *  global_dead_vnodeop_p[NUM_STACKS];   
# 41 "freebsd5/kern/kern_conf.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/poll.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/poll.h"
typedef unsigned int nfds_t;




struct pollfd {
 int fd;
 short events;
 short revents;
};
# 43 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ctype.h" 1
# 44 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 1
# 178 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 274 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h" 2
# 52 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 275 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 2
# 283 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ttydefaults.h" 1
# 284 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 2
# 50 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2
# 59 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct clist {
 int c_cc;
 int c_cbcount;
 int c_cbmax;
 int c_cbreserved;
 char *c_cf;
 char *c_cl;
};

struct tty;

typedef void t_oproc_t(struct tty *);
typedef void t_stop_t(struct tty *, int);
typedef int t_param_t(struct tty *, struct termios *);
typedef int t_modem_t(struct tty *, int, int);
typedef void t_break_t(struct tty *, int);
typedef int t_ioctl_t(struct tty *, u_long cmd, void * data,
        int fflag, struct thread *td);
# 85 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct tty {
 struct clist t_rawq;
 long t_rawcc;
 struct clist t_canq;
 long t_cancc;
 struct clist t_outq;
 long t_outcc;
 int t_line;
 struct cdev *t_dev;
 int t_state;
 int t_flags;
 int t_timeout;
 struct pgrp *t_pgrp;
 struct session *t_session;
 struct sigio *t_sigio;
 struct selinfo t_rsel;
 struct selinfo t_wsel;
 struct termios t_termios;
 struct winsize t_winsize;
 void *t_sc;
 int t_column;
 int t_rocount, t_rocol;
 int t_ififosize;
 int t_ihiwat;
 int t_ilowat;
 speed_t t_ispeedwat;
 int t_ohiwat;
 int t_olowat;
 speed_t t_ospeedwat;
 int t_gen;
 struct { struct tty *tqe_next; struct tty **tqe_prev; } t_list;

 struct mtx t_mtx;
 int t_refcnt;
 int t_hotchar;
 int t_dtr_wait;


 t_oproc_t *t_oproc;
 t_stop_t *t_stop;
 t_param_t *t_param;
 t_modem_t *t_modem;
 t_break_t *t_break;
 t_ioctl_t *t_ioctl;
};
# 147 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct xtty {
 size_t xt_size;
 long xt_rawcc;
 long xt_cancc;
 long xt_outcc;
 int xt_line;
 dev_t xt_dev;
 int xt_state;
 int xt_flags;
 int xt_timeout;
 pid_t xt_pgid;
 pid_t xt_sid;
 struct termios xt_termios;
 struct winsize xt_winsize;
 int xt_column;
 int xt_rocount, xt_rocol;
 int xt_ififosize;
 int xt_ihiwat;
 int xt_ilowat;
 speed_t xt_ispeedwat;
 int xt_ohiwat;
 int xt_olowat;
 speed_t xt_ospeedwat;
};
# 240 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct speedtab {
 int sp_speed;
 int sp_code;
};
# 276 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
typedef  struct malloc_type   _GLOBAL_190_T; extern  _GLOBAL_190_T  _GLOBAL_0_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_1_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_2_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_3_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_4_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_5_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_6_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_7_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_8_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_9_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_10_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_11_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_12_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_13_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_14_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_15_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_16_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_17_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_18_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_19_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_20_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_21_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_22_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_23_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_24_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_25_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_26_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_27_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_28_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_29_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_30_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_31_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_32_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_33_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_34_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_35_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_36_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_37_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_38_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_39_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_40_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_41_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_42_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_43_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_44_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_45_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_46_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_47_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_48_M_TTYS_I [ 1 ] ; extern  _GLOBAL_190_T  _GLOBAL_49_M_TTYS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TTYS_I) *_GLOBAL_M_TTYS_37_A[NUM_STACKS];   

typedef  struct msgbuf   _GLOBAL_191_T; extern  _GLOBAL_191_T  _GLOBAL_0_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_1_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_2_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_3_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_4_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_5_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_6_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_7_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_8_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_9_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_10_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_11_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_12_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_13_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_14_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_15_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_16_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_17_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_18_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_19_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_20_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_21_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_22_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_23_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_24_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_25_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_26_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_27_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_28_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_29_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_30_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_31_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_32_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_33_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_34_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_35_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_36_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_37_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_38_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_39_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_40_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_41_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_42_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_43_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_44_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_45_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_46_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_47_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_48_consmsgbuf_I; extern  _GLOBAL_191_T  _GLOBAL_49_consmsgbuf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_consmsgbuf_I) *_GLOBAL_consmsgbuf_38_A[NUM_STACKS];   
typedef  struct tty   _GLOBAL_192_T; extern  _GLOBAL_192_T  * global_constty[NUM_STACKS];    
typedef  long  _GLOBAL_193_T; extern  _GLOBAL_193_T  global_tk_cancc[NUM_STACKS];   
typedef  long  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_tk_nin[NUM_STACKS];   
typedef  long  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_tk_nout[NUM_STACKS];   
typedef  long  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_tk_rawcc[NUM_STACKS];   

int b_to_q(char *cp, int cc, struct clist *q);
void catq(struct clist *from, struct clist *to);
void clist_alloc_cblocks(struct clist *q, int ccmax, int ccres);
void clist_free_cblocks(struct clist *q);
void constty_set(struct tty *tp);
void constty_clear(void);
int getc(struct clist *q);
void ndflush(struct clist *q, int cc);
char *nextc(struct clist *q, char *cp, int *c);
void nottystop(struct tty *tp, int rw);
int putc(int c, struct clist *q);
int q_to_b(struct clist *q, char *cp, int cc);
void termioschars(struct termios *t);
int tputchar(int c, struct tty *tp);
int ttcompat(struct tty *tp, u_long com, caddr_t data, int flag);
int ttioctl(struct tty *tp, u_long com, void *data, int flag);
int ttread(struct tty *tp, struct uio *uio, int flag);
void ttrstrt(void *tp);
int ttsetcompat(struct tty *tp, u_long *com, caddr_t data,
     struct termios *term);
void ttsetwater(struct tty *tp);
int ttspeedtab(int speed, struct speedtab *table);
int ttstart(struct tty *tp);
void ttwakeup(struct tty *tp);
int ttwrite(struct tty *tp, struct uio *uio, int flag);
void ttwwakeup(struct tty *tp);
void ttyblock(struct tty *tp);
void ttychars(struct tty *tp);
int ttycheckoutq(struct tty *tp, int wait);
int tty_close(struct tty *tp);
int ttydtrwaitsleep(struct tty *tp);
void ttydtrwaitstart(struct tty *tp);
void ttyflush(struct tty *tp, int rw);
void ttygone(struct tty *tp);
void ttyinfo(struct tty *tp);
int ttyinput(int c, struct tty *tp);
int ttylclose(struct tty *tp, int flag);
void ttyldoptim(struct tty *tp);
struct tty *ttymalloc(struct tty *tp);
int ttymodem(struct tty *tp, int flag);
int tty_open(struct cdev *device, struct tty *tp);
int ttyref(struct tty *tp);
int ttyrel(struct tty *tp);
int ttysleep(struct tty *tp, void *chan, int pri, char *wmesg, int timo);
int ttywait(struct tty *tp);
int unputc(struct clist *q);




# 1 "freebsd5/freebsd/usr/include/sys/linedisc.h" 1
# 45 "freebsd5/freebsd/usr/include/sys/linedisc.h"
struct tty;

typedef int l_open_t(struct cdev *dev, struct tty *tp);
typedef int l_close_t(struct tty *tp, int flag);
typedef int l_read_t(struct tty *tp, struct uio *uio, int flag);
typedef int l_write_t(struct tty *tp, struct uio *uio, int flag);
typedef int l_ioctl_t(struct tty *tp, u_long cmd, caddr_t data,
        int flag, struct thread *td);
typedef int l_rint_t(int c, struct tty *tp);
typedef int l_start_t(struct tty *tp);
typedef int l_modem_t(struct tty *tp, int flag);




struct linesw {
 l_open_t *l_open;
 l_close_t *l_close;
 l_read_t *l_read;
 l_write_t *l_write;
 l_ioctl_t *l_ioctl;
 l_rint_t *l_rint;
 l_start_t *l_start;
 l_modem_t *l_modem;
};

typedef  struct linesw   _GLOBAL_197_T; extern  _GLOBAL_197_T  * _GLOBAL_0_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_1_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_2_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_3_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_4_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_5_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_6_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_7_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_8_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_9_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_10_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_11_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_12_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_13_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_14_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_15_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_16_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_17_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_18_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_19_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_20_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_21_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_22_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_23_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_24_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_25_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_26_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_27_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_28_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_29_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_30_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_31_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_32_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_33_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_34_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_35_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_36_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_37_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_38_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_39_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_40_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_41_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_42_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_43_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_44_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_45_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_46_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_47_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_48_linesw_I [ ]  ; extern  _GLOBAL_197_T  * _GLOBAL_49_linesw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_39_A[NUM_STACKS] = { &_GLOBAL_0_linesw_I, &_GLOBAL_1_linesw_I, &_GLOBAL_2_linesw_I, &_GLOBAL_3_linesw_I, &_GLOBAL_4_linesw_I, &_GLOBAL_5_linesw_I, &_GLOBAL_6_linesw_I, &_GLOBAL_7_linesw_I, &_GLOBAL_8_linesw_I, &_GLOBAL_9_linesw_I, &_GLOBAL_10_linesw_I, &_GLOBAL_11_linesw_I, &_GLOBAL_12_linesw_I, &_GLOBAL_13_linesw_I, &_GLOBAL_14_linesw_I, &_GLOBAL_15_linesw_I, &_GLOBAL_16_linesw_I, &_GLOBAL_17_linesw_I, &_GLOBAL_18_linesw_I, &_GLOBAL_19_linesw_I, &_GLOBAL_20_linesw_I, &_GLOBAL_21_linesw_I, &_GLOBAL_22_linesw_I, &_GLOBAL_23_linesw_I, &_GLOBAL_24_linesw_I, &_GLOBAL_25_linesw_I, &_GLOBAL_26_linesw_I, &_GLOBAL_27_linesw_I, &_GLOBAL_28_linesw_I, &_GLOBAL_29_linesw_I, &_GLOBAL_30_linesw_I, &_GLOBAL_31_linesw_I, &_GLOBAL_32_linesw_I, &_GLOBAL_33_linesw_I, &_GLOBAL_34_linesw_I, &_GLOBAL_35_linesw_I, &_GLOBAL_36_linesw_I, &_GLOBAL_37_linesw_I, &_GLOBAL_38_linesw_I, &_GLOBAL_39_linesw_I, &_GLOBAL_40_linesw_I, &_GLOBAL_41_linesw_I, &_GLOBAL_42_linesw_I, &_GLOBAL_43_linesw_I, &_GLOBAL_44_linesw_I, &_GLOBAL_45_linesw_I, &_GLOBAL_46_linesw_I, &_GLOBAL_47_linesw_I, &_GLOBAL_48_linesw_I, &_GLOBAL_49_linesw_I, };   
typedef  int  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_nlinesw[NUM_STACKS];   

int ldisc_register(int , struct linesw *);
void ldisc_deregister(int);


typedef  l_read_t _GLOBAL_199_T;  _GLOBAL_199_T  l_noread;  
typedef  l_write_t _GLOBAL_200_T;  _GLOBAL_200_T  l_nowrite;  
typedef  l_ioctl_t _GLOBAL_201_T;  _GLOBAL_201_T  l_nullioctl;  

static __inline int
ttyld_open(struct tty *tp, struct cdev *dev)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_open)(dev, tp));
}

static __inline int
ttyld_close(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_close)(tp, flag));
}

static __inline int
ttyld_read(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_read)(tp, uio, flag));
}

static __inline int
ttyld_write(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_write)(tp, uio, flag));
}

static __inline int
ttyld_ioctl(struct tty *tp, u_long cmd, caddr_t data, int flag,
    struct thread *td)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_ioctl)(tp, cmd, data, flag, td));
}

static __inline int
ttyld_rint(struct tty *tp, int c)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_rint)(c, tp));
}

static __inline int
ttyld_start(struct tty *tp)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_start)(tp));
}

static __inline int
ttyld_modem(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_39_A[get_stack_id()])[tp->t_line]->l_modem)(tp, flag));
}
# 336 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2
# 45 "freebsd5/kern/kern_conf.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h" 1
# 46 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h"
typedef __va_list va_list;
# 46 "freebsd5/kern/kern_conf.c" 2

typedef  struct malloc_type   _GLOBAL_202_T; static  _GLOBAL_202_T  _GLOBAL_0_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_1_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_2_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_3_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_4_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_5_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_6_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_7_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_8_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_9_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_10_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_11_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_12_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_13_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_14_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_15_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_16_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_17_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_18_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_19_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_20_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_21_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_22_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_23_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_24_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_25_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_26_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_27_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_28_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_29_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_30_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_31_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_32_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_33_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_34_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_35_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_36_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_37_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_38_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_39_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_40_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_41_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_42_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_43_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_44_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_45_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_46_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_47_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_48_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static  _GLOBAL_202_T  _GLOBAL_49_M_DEVT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "cdev"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVT_I) *_GLOBAL_M_DEVT_40_A[NUM_STACKS] = { &_GLOBAL_0_M_DEVT_I, &_GLOBAL_1_M_DEVT_I, &_GLOBAL_2_M_DEVT_I, &_GLOBAL_3_M_DEVT_I, &_GLOBAL_4_M_DEVT_I, &_GLOBAL_5_M_DEVT_I, &_GLOBAL_6_M_DEVT_I, &_GLOBAL_7_M_DEVT_I, &_GLOBAL_8_M_DEVT_I, &_GLOBAL_9_M_DEVT_I, &_GLOBAL_10_M_DEVT_I, &_GLOBAL_11_M_DEVT_I, &_GLOBAL_12_M_DEVT_I, &_GLOBAL_13_M_DEVT_I, &_GLOBAL_14_M_DEVT_I, &_GLOBAL_15_M_DEVT_I, &_GLOBAL_16_M_DEVT_I, &_GLOBAL_17_M_DEVT_I, &_GLOBAL_18_M_DEVT_I, &_GLOBAL_19_M_DEVT_I, &_GLOBAL_20_M_DEVT_I, &_GLOBAL_21_M_DEVT_I, &_GLOBAL_22_M_DEVT_I, &_GLOBAL_23_M_DEVT_I, &_GLOBAL_24_M_DEVT_I, &_GLOBAL_25_M_DEVT_I, &_GLOBAL_26_M_DEVT_I, &_GLOBAL_27_M_DEVT_I, &_GLOBAL_28_M_DEVT_I, &_GLOBAL_29_M_DEVT_I, &_GLOBAL_30_M_DEVT_I, &_GLOBAL_31_M_DEVT_I, &_GLOBAL_32_M_DEVT_I, &_GLOBAL_33_M_DEVT_I, &_GLOBAL_34_M_DEVT_I, &_GLOBAL_35_M_DEVT_I, &_GLOBAL_36_M_DEVT_I, &_GLOBAL_37_M_DEVT_I, &_GLOBAL_38_M_DEVT_I, &_GLOBAL_39_M_DEVT_I, &_GLOBAL_40_M_DEVT_I, &_GLOBAL_41_M_DEVT_I, &_GLOBAL_42_M_DEVT_I, &_GLOBAL_43_M_DEVT_I, &_GLOBAL_44_M_DEVT_I, &_GLOBAL_45_M_DEVT_I, &_GLOBAL_46_M_DEVT_I, &_GLOBAL_47_M_DEVT_I, &_GLOBAL_48_M_DEVT_I, &_GLOBAL_49_M_DEVT_I, };                   typedef  struct sysinit   _GLOBAL_203_T; static  _GLOBAL_203_T  global_M_DEVT_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_DEVT_I )   )   } ,  };             typedef  void const   _GLOBAL_204_T; static  _GLOBAL_204_T  * const  _global_section_0___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[0] ;static  _GLOBAL_204_T  * const  _global_section_1___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[1] ;static  _GLOBAL_204_T  * const  _global_section_2___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[2] ;static  _GLOBAL_204_T  * const  _global_section_3___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[3] ;static  _GLOBAL_204_T  * const  _global_section_4___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[4] ;static  _GLOBAL_204_T  * const  _global_section_5___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[5] ;static  _GLOBAL_204_T  * const  _global_section_6___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[6] ;static  _GLOBAL_204_T  * const  _global_section_7___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[7] ;static  _GLOBAL_204_T  * const  _global_section_8___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[8] ;static  _GLOBAL_204_T  * const  _global_section_9___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[9] ;static  _GLOBAL_204_T  * const  _global_section_10___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[10] ;static  _GLOBAL_204_T  * const  _global_section_11___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[11] ;static  _GLOBAL_204_T  * const  _global_section_12___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[12] ;static  _GLOBAL_204_T  * const  _global_section_13___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[13] ;static  _GLOBAL_204_T  * const  _global_section_14___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[14] ;static  _GLOBAL_204_T  * const  _global_section_15___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[15] ;static  _GLOBAL_204_T  * const  _global_section_16___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[16] ;static  _GLOBAL_204_T  * const  _global_section_17___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[17] ;static  _GLOBAL_204_T  * const  _global_section_18___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[18] ;static  _GLOBAL_204_T  * const  _global_section_19___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[19] ;static  _GLOBAL_204_T  * const  _global_section_20___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[20] ;static  _GLOBAL_204_T  * const  _global_section_21___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[21] ;static  _GLOBAL_204_T  * const  _global_section_22___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[22] ;static  _GLOBAL_204_T  * const  _global_section_23___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[23] ;static  _GLOBAL_204_T  * const  _global_section_24___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[24] ;static  _GLOBAL_204_T  * const  _global_section_25___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[25] ;static  _GLOBAL_204_T  * const  _global_section_26___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[26] ;static  _GLOBAL_204_T  * const  _global_section_27___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[27] ;static  _GLOBAL_204_T  * const  _global_section_28___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[28] ;static  _GLOBAL_204_T  * const  _global_section_29___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[29] ;static  _GLOBAL_204_T  * const  _global_section_30___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[30] ;static  _GLOBAL_204_T  * const  _global_section_31___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[31] ;static  _GLOBAL_204_T  * const  _global_section_32___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[32] ;static  _GLOBAL_204_T  * const  _global_section_33___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[33] ;static  _GLOBAL_204_T  * const  _global_section_34___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[34] ;static  _GLOBAL_204_T  * const  _global_section_35___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[35] ;static  _GLOBAL_204_T  * const  _global_section_36___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[36] ;static  _GLOBAL_204_T  * const  _global_section_37___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[37] ;static  _GLOBAL_204_T  * const  _global_section_38___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[38] ;static  _GLOBAL_204_T  * const  _global_section_39___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[39] ;static  _GLOBAL_204_T  * const  _global_section_40___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[40] ;static  _GLOBAL_204_T  * const  _global_section_41___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[41] ;static  _GLOBAL_204_T  * const  _global_section_42___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[42] ;static  _GLOBAL_204_T  * const  _global_section_43___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[43] ;static  _GLOBAL_204_T  * const  _global_section_44___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[44] ;static  _GLOBAL_204_T  * const  _global_section_45___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[45] ;static  _GLOBAL_204_T  * const  _global_section_46___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[46] ;static  _GLOBAL_204_T  * const  _global_section_47___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[47] ;static  _GLOBAL_204_T  * const  _global_section_48___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[48] ;static  _GLOBAL_204_T  * const  _global_section_49___set_sysinit_set_sym_M_DEVT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_DEVT_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_205_T; static  _GLOBAL_205_T  global_M_DEVT_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_DEVT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_DEVT_I )   )   } ,  };             typedef  void const   _GLOBAL_206_T; static  _GLOBAL_206_T  * const  global___set_sysuninit_set_sym_M_DEVT_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_DEVT_uninit_sys_uninit[0] ,  & global_M_DEVT_uninit_sys_uninit[1] ,  & global_M_DEVT_uninit_sys_uninit[2] ,  & global_M_DEVT_uninit_sys_uninit[3] ,  & global_M_DEVT_uninit_sys_uninit[4] ,  & global_M_DEVT_uninit_sys_uninit[5] ,  & global_M_DEVT_uninit_sys_uninit[6] ,  & global_M_DEVT_uninit_sys_uninit[7] ,  & global_M_DEVT_uninit_sys_uninit[8] ,  & global_M_DEVT_uninit_sys_uninit[9] ,  & global_M_DEVT_uninit_sys_uninit[10] ,  & global_M_DEVT_uninit_sys_uninit[11] ,  & global_M_DEVT_uninit_sys_uninit[12] ,  & global_M_DEVT_uninit_sys_uninit[13] ,  & global_M_DEVT_uninit_sys_uninit[14] ,  & global_M_DEVT_uninit_sys_uninit[15] ,  & global_M_DEVT_uninit_sys_uninit[16] ,  & global_M_DEVT_uninit_sys_uninit[17] ,  & global_M_DEVT_uninit_sys_uninit[18] ,  & global_M_DEVT_uninit_sys_uninit[19] ,  & global_M_DEVT_uninit_sys_uninit[20] ,  & global_M_DEVT_uninit_sys_uninit[21] ,  & global_M_DEVT_uninit_sys_uninit[22] ,  & global_M_DEVT_uninit_sys_uninit[23] ,  & global_M_DEVT_uninit_sys_uninit[24] ,  & global_M_DEVT_uninit_sys_uninit[25] ,  & global_M_DEVT_uninit_sys_uninit[26] ,  & global_M_DEVT_uninit_sys_uninit[27] ,  & global_M_DEVT_uninit_sys_uninit[28] ,  & global_M_DEVT_uninit_sys_uninit[29] ,  & global_M_DEVT_uninit_sys_uninit[30] ,  & global_M_DEVT_uninit_sys_uninit[31] ,  & global_M_DEVT_uninit_sys_uninit[32] ,  & global_M_DEVT_uninit_sys_uninit[33] ,  & global_M_DEVT_uninit_sys_uninit[34] ,  & global_M_DEVT_uninit_sys_uninit[35] ,  & global_M_DEVT_uninit_sys_uninit[36] ,  & global_M_DEVT_uninit_sys_uninit[37] ,  & global_M_DEVT_uninit_sys_uninit[38] ,  & global_M_DEVT_uninit_sys_uninit[39] ,  & global_M_DEVT_uninit_sys_uninit[40] ,  & global_M_DEVT_uninit_sys_uninit[41] ,  & global_M_DEVT_uninit_sys_uninit[42] ,  & global_M_DEVT_uninit_sys_uninit[43] ,  & global_M_DEVT_uninit_sys_uninit[44] ,  & global_M_DEVT_uninit_sys_uninit[45] ,  & global_M_DEVT_uninit_sys_uninit[46] ,  & global_M_DEVT_uninit_sys_uninit[47] ,  & global_M_DEVT_uninit_sys_uninit[48] ,  & global_M_DEVT_uninit_sys_uninit[49] ,  };          


typedef  unsigned char   _GLOBAL_207_T; extern  _GLOBAL_207_T  _GLOBAL_0_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_1_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_2_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_3_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_4_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_5_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_6_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_7_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_8_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_9_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_10_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_11_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_12_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_13_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_14_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_15_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_16_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_17_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_18_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_19_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_20_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_21_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_22_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_23_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_24_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_25_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_26_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_27_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_28_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_29_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_30_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_31_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_32_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_33_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_34_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_35_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_36_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_37_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_38_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_39_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_40_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_41_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_42_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_43_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_44_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_45_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_46_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_47_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_48_reserved_majors_I [ 256 ] ; extern  _GLOBAL_207_T  _GLOBAL_49_reserved_majors_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_reserved_majors_I) *_GLOBAL_reserved_majors_41_A[NUM_STACKS] = { &_GLOBAL_0_reserved_majors_I, &_GLOBAL_1_reserved_majors_I, &_GLOBAL_2_reserved_majors_I, &_GLOBAL_3_reserved_majors_I, &_GLOBAL_4_reserved_majors_I, &_GLOBAL_5_reserved_majors_I, &_GLOBAL_6_reserved_majors_I, &_GLOBAL_7_reserved_majors_I, &_GLOBAL_8_reserved_majors_I, &_GLOBAL_9_reserved_majors_I, &_GLOBAL_10_reserved_majors_I, &_GLOBAL_11_reserved_majors_I, &_GLOBAL_12_reserved_majors_I, &_GLOBAL_13_reserved_majors_I, &_GLOBAL_14_reserved_majors_I, &_GLOBAL_15_reserved_majors_I, &_GLOBAL_16_reserved_majors_I, &_GLOBAL_17_reserved_majors_I, &_GLOBAL_18_reserved_majors_I, &_GLOBAL_19_reserved_majors_I, &_GLOBAL_20_reserved_majors_I, &_GLOBAL_21_reserved_majors_I, &_GLOBAL_22_reserved_majors_I, &_GLOBAL_23_reserved_majors_I, &_GLOBAL_24_reserved_majors_I, &_GLOBAL_25_reserved_majors_I, &_GLOBAL_26_reserved_majors_I, &_GLOBAL_27_reserved_majors_I, &_GLOBAL_28_reserved_majors_I, &_GLOBAL_29_reserved_majors_I, &_GLOBAL_30_reserved_majors_I, &_GLOBAL_31_reserved_majors_I, &_GLOBAL_32_reserved_majors_I, &_GLOBAL_33_reserved_majors_I, &_GLOBAL_34_reserved_majors_I, &_GLOBAL_35_reserved_majors_I, &_GLOBAL_36_reserved_majors_I, &_GLOBAL_37_reserved_majors_I, &_GLOBAL_38_reserved_majors_I, &_GLOBAL_39_reserved_majors_I, &_GLOBAL_40_reserved_majors_I, &_GLOBAL_41_reserved_majors_I, &_GLOBAL_42_reserved_majors_I, &_GLOBAL_43_reserved_majors_I, &_GLOBAL_44_reserved_majors_I, &_GLOBAL_45_reserved_majors_I, &_GLOBAL_46_reserved_majors_I, &_GLOBAL_47_reserved_majors_I, &_GLOBAL_48_reserved_majors_I, &_GLOBAL_49_reserved_majors_I, };   
# 62 "freebsd5/kern/kern_conf.c"
typedef  struct cdev   _GLOBAL_208_T; static  _GLOBAL_208_T  _GLOBAL_0_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_1_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_2_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_3_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_4_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_5_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_6_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_7_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_8_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_9_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_10_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_11_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_12_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_13_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_14_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_15_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_16_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_17_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_18_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_19_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_20_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_21_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_22_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_23_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_24_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_25_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_26_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_27_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_28_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_29_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_30_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_31_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_32_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_33_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_34_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_35_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_36_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_37_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_38_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_39_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_40_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_41_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_42_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_43_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_44_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_45_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_46_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_47_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_48_devt_stash_I [ 50 ] ; static  _GLOBAL_208_T  _GLOBAL_49_devt_stash_I [ 50 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devt_stash_I) *_GLOBAL_devt_stash_42_A[NUM_STACKS] = { &_GLOBAL_0_devt_stash_I, &_GLOBAL_1_devt_stash_I, &_GLOBAL_2_devt_stash_I, &_GLOBAL_3_devt_stash_I, &_GLOBAL_4_devt_stash_I, &_GLOBAL_5_devt_stash_I, &_GLOBAL_6_devt_stash_I, &_GLOBAL_7_devt_stash_I, &_GLOBAL_8_devt_stash_I, &_GLOBAL_9_devt_stash_I, &_GLOBAL_10_devt_stash_I, &_GLOBAL_11_devt_stash_I, &_GLOBAL_12_devt_stash_I, &_GLOBAL_13_devt_stash_I, &_GLOBAL_14_devt_stash_I, &_GLOBAL_15_devt_stash_I, &_GLOBAL_16_devt_stash_I, &_GLOBAL_17_devt_stash_I, &_GLOBAL_18_devt_stash_I, &_GLOBAL_19_devt_stash_I, &_GLOBAL_20_devt_stash_I, &_GLOBAL_21_devt_stash_I, &_GLOBAL_22_devt_stash_I, &_GLOBAL_23_devt_stash_I, &_GLOBAL_24_devt_stash_I, &_GLOBAL_25_devt_stash_I, &_GLOBAL_26_devt_stash_I, &_GLOBAL_27_devt_stash_I, &_GLOBAL_28_devt_stash_I, &_GLOBAL_29_devt_stash_I, &_GLOBAL_30_devt_stash_I, &_GLOBAL_31_devt_stash_I, &_GLOBAL_32_devt_stash_I, &_GLOBAL_33_devt_stash_I, &_GLOBAL_34_devt_stash_I, &_GLOBAL_35_devt_stash_I, &_GLOBAL_36_devt_stash_I, &_GLOBAL_37_devt_stash_I, &_GLOBAL_38_devt_stash_I, &_GLOBAL_39_devt_stash_I, &_GLOBAL_40_devt_stash_I, &_GLOBAL_41_devt_stash_I, &_GLOBAL_42_devt_stash_I, &_GLOBAL_43_devt_stash_I, &_GLOBAL_44_devt_stash_I, &_GLOBAL_45_devt_stash_I, &_GLOBAL_46_devt_stash_I, &_GLOBAL_47_devt_stash_I, &_GLOBAL_48_devt_stash_I, &_GLOBAL_49_devt_stash_I, };   

typedef  struct { struct cdev   * lh_first  ;  }   _GLOBAL_209_T; static  _GLOBAL_209_T  _GLOBAL_0_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_1_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_2_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_3_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_4_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_5_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_6_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_7_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_8_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_9_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_10_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_11_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_12_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_13_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_14_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_15_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_16_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_17_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_18_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_19_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_20_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_21_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_22_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_23_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_24_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_25_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_26_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_27_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_28_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_29_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_30_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_31_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_32_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_33_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_34_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_35_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_36_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_37_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_38_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_39_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_40_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_41_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_42_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_43_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_44_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_45_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_46_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_47_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_48_dev_hash_I [ 83 ] ; static  _GLOBAL_209_T  _GLOBAL_49_dev_hash_I [ 83 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dev_hash_I) *_GLOBAL_dev_hash_43_A[NUM_STACKS] = { &_GLOBAL_0_dev_hash_I, &_GLOBAL_1_dev_hash_I, &_GLOBAL_2_dev_hash_I, &_GLOBAL_3_dev_hash_I, &_GLOBAL_4_dev_hash_I, &_GLOBAL_5_dev_hash_I, &_GLOBAL_6_dev_hash_I, &_GLOBAL_7_dev_hash_I, &_GLOBAL_8_dev_hash_I, &_GLOBAL_9_dev_hash_I, &_GLOBAL_10_dev_hash_I, &_GLOBAL_11_dev_hash_I, &_GLOBAL_12_dev_hash_I, &_GLOBAL_13_dev_hash_I, &_GLOBAL_14_dev_hash_I, &_GLOBAL_15_dev_hash_I, &_GLOBAL_16_dev_hash_I, &_GLOBAL_17_dev_hash_I, &_GLOBAL_18_dev_hash_I, &_GLOBAL_19_dev_hash_I, &_GLOBAL_20_dev_hash_I, &_GLOBAL_21_dev_hash_I, &_GLOBAL_22_dev_hash_I, &_GLOBAL_23_dev_hash_I, &_GLOBAL_24_dev_hash_I, &_GLOBAL_25_dev_hash_I, &_GLOBAL_26_dev_hash_I, &_GLOBAL_27_dev_hash_I, &_GLOBAL_28_dev_hash_I, &_GLOBAL_29_dev_hash_I, &_GLOBAL_30_dev_hash_I, &_GLOBAL_31_dev_hash_I, &_GLOBAL_32_dev_hash_I, &_GLOBAL_33_dev_hash_I, &_GLOBAL_34_dev_hash_I, &_GLOBAL_35_dev_hash_I, &_GLOBAL_36_dev_hash_I, &_GLOBAL_37_dev_hash_I, &_GLOBAL_38_dev_hash_I, &_GLOBAL_39_dev_hash_I, &_GLOBAL_40_dev_hash_I, &_GLOBAL_41_dev_hash_I, &_GLOBAL_42_dev_hash_I, &_GLOBAL_43_dev_hash_I, &_GLOBAL_44_dev_hash_I, &_GLOBAL_45_dev_hash_I, &_GLOBAL_46_dev_hash_I, &_GLOBAL_47_dev_hash_I, &_GLOBAL_48_dev_hash_I, &_GLOBAL_49_dev_hash_I, };       

typedef  struct { struct cdev   * lh_first  ;  }   _GLOBAL_210_T; static  _GLOBAL_210_T  global_dev_free[NUM_STACKS];        

typedef  int  _GLOBAL_211_T; static  _GLOBAL_211_T  global_free_devt[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_212_T; static  _GLOBAL_212_T  global_sysctl___debug_free_devt[NUM_STACKS] = {  { & global_sysctl__debug_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[0]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[1]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[2]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[3]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[4]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[5]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[6]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[7]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[8]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[9]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[10]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[11]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[12]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[13]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[14]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[15]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[16]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[17]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[18]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[19]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[20]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[21]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[22]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[23]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[24]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[25]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[26]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[27]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[28]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[29]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[30]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[31]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[32]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[33]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[34]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[35]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[36]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[37]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[38]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[39]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[40]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[41]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[42]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[43]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[44]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[45]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[46]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[47]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[48]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_free_devt[49]   , 0  , "free_devt"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };                     typedef  void const   _GLOBAL_213_T; static  _GLOBAL_213_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[0] ;static  _GLOBAL_213_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[1] ;static  _GLOBAL_213_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[2] ;static  _GLOBAL_213_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[3] ;static  _GLOBAL_213_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[4] ;static  _GLOBAL_213_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[5] ;static  _GLOBAL_213_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[6] ;static  _GLOBAL_213_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[7] ;static  _GLOBAL_213_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[8] ;static  _GLOBAL_213_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[9] ;static  _GLOBAL_213_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[10] ;static  _GLOBAL_213_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[11] ;static  _GLOBAL_213_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[12] ;static  _GLOBAL_213_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[13] ;static  _GLOBAL_213_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[14] ;static  _GLOBAL_213_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[15] ;static  _GLOBAL_213_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[16] ;static  _GLOBAL_213_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[17] ;static  _GLOBAL_213_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[18] ;static  _GLOBAL_213_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[19] ;static  _GLOBAL_213_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[20] ;static  _GLOBAL_213_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[21] ;static  _GLOBAL_213_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[22] ;static  _GLOBAL_213_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[23] ;static  _GLOBAL_213_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[24] ;static  _GLOBAL_213_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[25] ;static  _GLOBAL_213_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[26] ;static  _GLOBAL_213_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[27] ;static  _GLOBAL_213_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[28] ;static  _GLOBAL_213_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[29] ;static  _GLOBAL_213_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[30] ;static  _GLOBAL_213_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[31] ;static  _GLOBAL_213_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[32] ;static  _GLOBAL_213_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[33] ;static  _GLOBAL_213_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[34] ;static  _GLOBAL_213_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[35] ;static  _GLOBAL_213_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[36] ;static  _GLOBAL_213_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[37] ;static  _GLOBAL_213_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[38] ;static  _GLOBAL_213_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[39] ;static  _GLOBAL_213_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[40] ;static  _GLOBAL_213_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[41] ;static  _GLOBAL_213_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[42] ;static  _GLOBAL_213_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[43] ;static  _GLOBAL_213_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[44] ;static  _GLOBAL_213_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[45] ;static  _GLOBAL_213_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[46] ;static  _GLOBAL_213_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[47] ;static  _GLOBAL_213_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[48] ;static  _GLOBAL_213_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___debug_free_devt __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___debug_free_devt[49] ;         

typedef  struct mtx   _GLOBAL_214_T; static  _GLOBAL_214_T  global_devmtx[NUM_STACKS];    
static void freedev(struct cdev *dev);
static struct cdev *newdev(int x, int y);


static void
devlock(void)
{
 if (!((&global_devmtx[get_stack_id()])->mtx_object.lo_flags & 0x00010000))
  mtx_init(&global_devmtx[get_stack_id()], "cdev", ((void *)0), 0x00000000);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_devmtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_devmtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
}

static void
devunlock(void)
{
 do { if (!atomic_cmpset_ptr(&((((&global_devmtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_devmtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}

void
dev_ref(struct cdev *dev)
{
 devlock();
 dev->si_refcount++;
 devunlock();
}

void
dev_rel(struct cdev *dev)
{
 devlock();
 dev->si_refcount--;

                                                         ;
 if (dev->si_devsw == ((void *)0) && dev->si_refcount == 0) {
  do { if ((((dev))->si_list.le_next) != ((void *)0)) (((dev))->si_list.le_next)->si_list.le_prev = (dev)->si_list.le_prev; *(dev)->si_list.le_prev = (((dev))->si_list.le_next); } while (0);
  freedev(dev);
 }
 devunlock();
}

void
cdevsw_ref(struct cdevsw *csw)
{
 devlock();
 csw->d_refcount++;
 devunlock();
}

void
cdevsw_rel(struct cdevsw *csw)
{
 devlock();
 csw->d_refcount--;

                                                          ;
 devunlock();
}

int
nullop(void)
{

 return (0);
}

int
eopnotsupp(void)
{

 return (45);
}

static int
enxio(void)
{
 return (6);
}

static int
enodev(void)
{
 return (19);
}
# 166 "freebsd5/kern/kern_conf.c"
static void
dead_strategy(struct bio *bp)
{

 biofinish(bp, ((void *)0), 6);
}




typedef  struct cdevsw   _GLOBAL_215_T; static  _GLOBAL_215_T  global_dead_cdevsw[NUM_STACKS] = {  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = ( d_open_t *  ) enxio    , . d_close  = ( d_close_t *  ) enxio    , . d_read  = ( d_read_t *  ) enxio    , . d_write  = ( d_write_t *  ) enxio    , . d_ioctl  = ( d_ioctl_t *  ) enxio    , . d_poll  = ( d_poll_t *  ) enodev    , . d_mmap  = ( d_mmap_t *  ) enodev    , . d_strategy  = dead_strategy   , . d_name  = "dead"   , . d_maj  = 255   , . d_dump  = ( dumper_t *  ) enxio    , . d_kqfilter  = ( d_kqfilter_t *  ) enxio    } ,  };      
   
   
    
    
    
    
    
    
    
   
   
   
    
    

# 203 "freebsd5/kern/kern_conf.c"
static void
no_strategy(struct bio *bp)
{

 biofinish(bp, ((void *)0), 19);
}

static int
no_poll(struct cdev *dev __attribute__((__unused__)) , int events, struct thread *td __attribute__((__unused__)) )
{
# 221 "freebsd5/kern/kern_conf.c"
 if (events & ~(0x0001|0x0002|0x0004|0x0040|0x0080| 0x0100|0x0008|0x0010|0x0020))
  return (0x0020);

 return (events & (0x0001 | 0x0004 | 0x0040 | 0x0004));
}



struct cdevsw *
devsw(struct cdev *dev)
{
 if (dev->si_devsw != ((void *)0))
  return (dev->si_devsw);
 return (&global_dead_cdevsw[get_stack_id()]);
}





int
major(struct cdev *x)
{
 if (x == ((void *)0))
  return (dev_t)(-1);
 return((x->si_udev >> 8) & 0xff);
}

int
minor(struct cdev *x)
{
 if (x == ((void *)0))
  return (dev_t)(-1);
 return(x->si_udev & 0xffff00ff);
}

int
dev2unit(struct cdev *x)
{
 int i;

 if (x == ((void *)0))
  return (dev_t)(-1);
 i = minor(x);
 return ((i & 0xff) | (i >> 8));
}

int
unit2minor(int unit)
{

 ;
 return ((unit & 0xff) | ((unit << 8) & ~0xffff));
}

static struct cdev *
allocdev(void)
{
 typedef  int  _GLOBAL_216_T; static  _GLOBAL_216_T  global_stashed[NUM_STACKS];   
 struct cdev *si;

 if (((&global_dev_free[get_stack_id()])->lh_first)) {
  si = ((&global_dev_free[get_stack_id()])->lh_first);
  do { if ((((si))->si_hash.le_next) != ((void *)0)) (((si))->si_hash.le_next)->si_hash.le_prev = (si)->si_hash.le_prev; *(si)->si_hash.le_prev = (((si))->si_hash.le_next); } while (0);
 } else if (global_stashed[get_stack_id()] >= 50) {
  ((si) = (struct cdev *)nsc_malloc((u_long)(sizeof(*si)), ((*_GLOBAL_M_DEVT_40_A[get_stack_id()])), (0x0400 | 0x0100 | 0x0002)))
                                        ;
 } else {
  si = (*_GLOBAL_devt_stash_42_A[get_stack_id()]) + global_stashed[get_stack_id()]++;
  bzero(si, sizeof *si);
  si->si_flags |= 0x0001;
 }
 si->__si_namebuf[0] = '\0';
 si->si_name = si->__si_namebuf;
 do { (((&si->si_children))->lh_first) = ((void *)0); } while (0);
 do { (((&si->__si_u.__si_disk.__sid_snapshots))->tqh_first) = ((void *)0); (&si->__si_u.__si_disk.__sid_snapshots)->tqh_last = &(((&si->__si_u.__si_disk.__sid_snapshots))->tqh_first); ; } while (0);
 return (si);
}

static struct cdev *
newdev(int x, int y)
{
 struct cdev *si;
 dev_t udev;
 int hash;

 if (x == umajor((dev_t)(-1)) && y == uminor((dev_t)(-1)))
  panic("newdev of NODEV");
 udev = (x << 8) | y;
 hash = udev % 83;
 for ((si) = (((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first); (si); (si) = (((si))->si_hash.le_next)) {
  if (si->si_udev == udev)
   return (si);
 }
 si = allocdev();
 si->si_udev = udev;
 do { if (((((si))->si_hash.le_next) = (((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first)) != ((void *)0)) (((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first)->si_hash.le_prev = &(((si))->si_hash.le_next); (((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first) = (si); (si)->si_hash.le_prev = &(((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first); } while (0);
        return (si);
}

static void
freedev(struct cdev *dev)
{

 if (dev->si_flags & 0x0001) {
  bzero(dev, sizeof(*dev));
  dev->si_flags |= 0x0001;
  do { if (((((dev))->si_hash.le_next) = (((&global_dev_free[get_stack_id()]))->lh_first)) != ((void *)0)) (((&global_dev_free[get_stack_id()]))->lh_first)->si_hash.le_prev = &(((dev))->si_hash.le_next); (((&global_dev_free[get_stack_id()]))->lh_first) = (dev); (dev)->si_hash.le_prev = &(((&global_dev_free[get_stack_id()]))->lh_first); } while (0);
 } else {
  nsc_free((dev), ((*_GLOBAL_M_DEVT_40_A[get_stack_id()])));
 }
}

dev_t
dev2udev(struct cdev *x)
{
 if (x == ((void *)0))
  return ((dev_t)(-1));
 return (x->si_udev);
}

struct cdev *
findcdev(dev_t udev)
{
 struct cdev *si;
 int hash;

 if (udev == (dev_t)(-1))
  return (((void *)0));
 hash = udev % 83;
 for ((si) = (((&(*_GLOBAL_dev_hash_43_A[get_stack_id()])[hash]))->lh_first); (si); (si) = (((si))->si_hash.le_next)) {
  if (si->si_udev == udev)
   return (si);
 }
 return (((void *)0));
}

int
uminor(dev_t dev)
{
 return (dev & 0xffff00ff);
}

int
umajor(dev_t dev)
{
 return ((dev & 0xff00) >> 8);
}

static void
find_major(struct cdevsw *devsw)
{
 int i;

 for (i = 256 - 1; i > 0; i--)
  if ((*_GLOBAL_reserved_majors_41_A[get_stack_id()])[i] != i)
   break;
 ;
 devsw->d_maj = i;
 (*_GLOBAL_reserved_majors_41_A[get_stack_id()])[i] = i;
 devsw->d_flags |= 0x40000000;
}

static void
fini_cdevsw(struct cdevsw *devsw)
{
 if (devsw->d_flags & 0x40000000) {
  (*_GLOBAL_reserved_majors_41_A[get_stack_id()])[devsw->d_maj] = 0;
  devsw->d_maj = 0;
  devsw->d_flags &= ~0x40000000;
 } else if (devsw->d_maj == 0)
  devsw->d_maj = 256;
 devsw->d_flags &= ~0x80000000;
}

static void
prep_cdevsw(struct cdevsw *devsw)
{

 devlock();

 if (devsw->d_version != 0x20011966) {
  nsc_printf(
      "WARNING: Device driver \"%s\" has wrong version %s\n",
      devsw->d_name, "and is disabled.  Recompile KLD module.");
  devsw->d_open = (d_open_t *)enxio;
  devsw->d_close = (d_close_t *)enxio;
  devsw->d_read = (d_read_t *)enxio;
  devsw->d_write = (d_write_t *)enxio;
  devsw->d_ioctl = (d_ioctl_t *)enxio;
  devsw->d_poll = (d_poll_t *)enodev;
  devsw->d_mmap = (d_mmap_t *)enodev;
  devsw->d_strategy = dead_strategy;
  devsw->d_dump = (dumper_t *)enxio;
  devsw->d_kqfilter = (d_kqfilter_t *)enxio;
 }

 if (devsw->d_flags & 0x0004) {
  if (devsw->d_ioctl == ((void *)0)) devsw->d_ioctl = ttyioctl;
  if (devsw->d_read == ((void *)0)) devsw->d_read = ttyread;
  if (devsw->d_write == ((void *)0)) devsw->d_write = ttywrite;
  if (devsw->d_kqfilter == ((void *)0)) devsw->d_kqfilter = ttykqfilter;
  if (devsw->d_poll == ((void *)0)) devsw->d_poll = ttypoll;
 }

 if (devsw->d_open == ((void *)0)) devsw->d_open = (d_open_t *)nullop;
 if (devsw->d_close == ((void *)0)) devsw->d_close = (d_close_t *)nullop;
 if (devsw->d_read == ((void *)0)) devsw->d_read = (d_read_t *)enodev;
 if (devsw->d_write == ((void *)0)) devsw->d_write = (d_write_t *)enodev;
 if (devsw->d_ioctl == ((void *)0)) devsw->d_ioctl = (d_ioctl_t *)enodev;
 if (devsw->d_poll == ((void *)0)) devsw->d_poll = no_poll;
 if (devsw->d_mmap == ((void *)0)) devsw->d_mmap = (d_mmap_t *)enodev;
 if (devsw->d_strategy == ((void *)0)) devsw->d_strategy = no_strategy;
 if (devsw->d_dump == ((void *)0)) devsw->d_dump = (dumper_t *)enodev;
 if (devsw->d_kqfilter == ((void *)0)) devsw->d_kqfilter = (d_kqfilter_t *)enodev;

 do { (((&devsw->d_devs))->lh_first) = ((void *)0); } while (0);

 devsw->d_flags |= 0x80000000;

 if (devsw->d_maj == 0) {
  find_major(devsw);
 } else {
  if (devsw->d_maj == 256)
   devsw->d_maj = 0;
 
                                                       ;
  if ((*_GLOBAL_reserved_majors_41_A[get_stack_id()])[devsw->d_maj] != devsw->d_maj) {
   nsc_printf("WARNING: driver \"%s\" used %s %d\n",
       devsw->d_name, "unreserved major device number",
       devsw->d_maj);
   (*_GLOBAL_reserved_majors_41_A[get_stack_id()])[devsw->d_maj] = devsw->d_maj;
  }
 }
 devunlock();
}

struct cdev *
make_dev(struct cdevsw *devsw, int minornr, uid_t uid, gid_t gid, int perms, const char *fmt, ...)
{
 struct cdev *dev;
 va_list ap;
 int i;


                                                   ;

 if (!(devsw->d_flags & 0x80000000))
  prep_cdevsw(devsw);
 dev = newdev(devsw->d_maj, minornr);
 if (dev->si_flags & 0x0008 &&
     dev->si_flags & 0x0004 &&
     dev->si_devsw == devsw) {





  return (dev);
 }
 devlock();


                                                            ;

 __builtin_va_start((ap), (fmt));
 i = vsnrprintf(dev->__si_namebuf, sizeof dev->__si_namebuf, 32, fmt, ap);
 if (i > (sizeof dev->__si_namebuf - 1)) {
  nsc_printf("WARNING: Device name truncated! (%s)",
      dev->__si_namebuf);
 }
 __builtin_va_end(ap);
 dev->si_devsw = devsw;
 dev->si_uid = uid;
 dev->si_gid = gid;
 dev->si_mode = perms;
 dev->si_flags |= 0x0004;

 do { if (((((dev))->si_list.le_next) = (((&devsw->d_devs))->lh_first)) != ((void *)0)) (((&devsw->d_devs))->lh_first)->si_list.le_prev = &(((dev))->si_list.le_next); (((&devsw->d_devs))->lh_first) = (dev); (dev)->si_list.le_prev = &(((&devsw->d_devs))->lh_first); } while (0);
 devfs_create(dev);
 devunlock();
 return (dev);
}

int
dev_named(struct cdev *pdev, const char *name)
{
 struct cdev *cdev;

 if (strcmp(devtoname(pdev), name) == 0)
  return (1);
 for ((cdev) = (((&pdev->si_children))->lh_first); (cdev); (cdev) = (((cdev))->si_siblings.le_next))
  if (strcmp(devtoname(cdev), name) == 0)
   return (1);
 return (0);
}

void
dev_depends(struct cdev *pdev, struct cdev *cdev)
{

 devlock();
 cdev->si_parent = pdev;
 cdev->si_flags |= 0x0010;
 do { if (((((cdev))->si_siblings.le_next) = (((&pdev->si_children))->lh_first)) != ((void *)0)) (((&pdev->si_children))->lh_first)->si_siblings.le_prev = &(((cdev))->si_siblings.le_next); (((&pdev->si_children))->lh_first) = (cdev); (cdev)->si_siblings.le_prev = &(((&pdev->si_children))->lh_first); } while (0);
 devunlock();
}

struct cdev *
make_dev_alias(struct cdev *pdev, const char *fmt, ...)
{
 struct cdev *dev;
 va_list ap;
 int i;

 dev = allocdev();
 devlock();
 dev->si_flags |= 0x0002;
 dev->si_flags |= 0x0004;
 __builtin_va_start((ap), (fmt));
 i = vsnrprintf(dev->__si_namebuf, sizeof dev->__si_namebuf, 32, fmt, ap);
 if (i > (sizeof dev->__si_namebuf - 1)) {
  nsc_printf("WARNING: Device name truncated! (%s)",
      dev->__si_namebuf);
 }
 __builtin_va_end(ap);

 devfs_create(dev);
 devunlock();
 dev_depends(pdev, dev);
 return (dev);
}

static void
idestroy_dev(struct cdev *dev)
{
 if (!(dev->si_flags & 0x0004)) {
  nsc_printf( "WARNING: Driver mistake: destroy_dev on %d/%d\n",
      major(dev), minor(dev));
  panic("don't do that");
 }

 devfs_destroy(dev);


 dev->si_flags &= ~0x0004;


 if (dev->si_flags & 0x0010) {
  do { if ((((dev))->si_siblings.le_next) != ((void *)0)) (((dev))->si_siblings.le_next)->si_siblings.le_prev = (dev)->si_siblings.le_prev; *(dev)->si_siblings.le_prev = (((dev))->si_siblings.le_next); } while (0);
  dev->si_flags &= ~0x0010;
 }


 while (!((&dev->si_children)->lh_first == ((void *)0)))
  idestroy_dev(((&dev->si_children)->lh_first));


 if (dev->si_flags & 0x0200) {
  do { if ((((dev))->si_clone.le_next) != ((void *)0)) (((dev))->si_clone.le_next)->si_clone.le_prev = (dev)->si_clone.le_prev; *(dev)->si_clone.le_prev = (((dev))->si_clone.le_next); } while (0);
  dev->si_flags &= ~0x0200;
 }

 if (!(dev->si_flags & 0x0002)) {

  do { if ((((dev))->si_list.le_next) != ((void *)0)) (((dev))->si_list.le_next)->si_list.le_prev = (dev)->si_list.le_prev; *(dev)->si_list.le_prev = (((dev))->si_list.le_next); } while (0);


  if (((&dev->si_devsw->d_devs)->lh_first == ((void *)0)))
   fini_cdevsw(dev->si_devsw);

  do { if ((((dev))->si_hash.le_next) != ((void *)0)) (((dev))->si_hash.le_next)->si_hash.le_prev = (dev)->si_hash.le_prev; *(dev)->si_hash.le_prev = (((dev))->si_hash.le_next); } while (0);
 }
 dev->si_drv1 = 0;
 dev->si_drv2 = 0;
 dev->si_devsw = ((void *)0);
 bzero(&dev->__si_u, sizeof(dev->__si_u));
 dev->si_flags &= ~0x0002;
 if (dev->si_refcount > 0) {
  do { if (((((dev))->si_list.le_next) = (((&global_dead_cdevsw[get_stack_id()].d_devs))->lh_first)) != ((void *)0)) (((&global_dead_cdevsw[get_stack_id()].d_devs))->lh_first)->si_list.le_prev = &(((dev))->si_list.le_next); (((&global_dead_cdevsw[get_stack_id()].d_devs))->lh_first) = (dev); (dev)->si_list.le_prev = &(((&global_dead_cdevsw[get_stack_id()].d_devs))->lh_first); } while (0);
 } else {
 freedev(dev);
 }
}

void
destroy_dev(struct cdev *dev)
{

 devlock();
 idestroy_dev(dev);
 devunlock();
}

const char *
devtoname(struct cdev *dev)
{
 char *p;
 int mynor;

 if (dev->si_name[0] == '#' || dev->si_name[0] == '\0') {
  p = dev->si_name;
  if (devsw(dev))
   sprintf(p, "#%s/", devsw(dev)->d_name);
  else
   sprintf(p, "#%d/", major(dev));
  p += strlen(p);
  mynor = minor(dev);
  if (mynor < 0 || mynor > 255)
   sprintf(p, "%#x", (u_int)mynor);
  else
   sprintf(p, "%d", mynor);
 }
 return (dev->si_name);
}

int
dev_stdclone(char *name, char **namep, const char *stem, int *unit)
{
 int u, i;

 i = strlen(stem);
 if (bcmp(stem, name, i) != 0)
  return (0);
 if (!((name[i]) >= '0' && (name[i]) <= '9'))
  return (0);
 u = 0;
 if (name[i] == '0' && ((name[i+1]) >= '0' && (name[i+1]) <= '9'))
  return (0);
 while (((name[i]) >= '0' && (name[i]) <= '9')) {
  u *= 10;
  u += name[i++] - '0';
 }
 if (u > 0xffffff)
  return (0);
 *unit = u;
 if (namep)
  *namep = &name[i];
 if (name[i])
  return (2);
 return (1);
}
# 681 "freebsd5/kern/kern_conf.c"
struct clonedevs {
 struct { struct cdev *lh_first; } head;
};

void
clone_setup(struct clonedevs **cdp)
{

 *cdp = nsc_malloc(sizeof **cdp, (*_GLOBAL_M_DEVBUF_25_A[get_stack_id()]), 0x0002 | 0x0100);
 do { (((&(*cdp)->head))->lh_first) = ((void *)0); } while (0);
}

int
clone_create(struct clonedevs **cdp, struct cdevsw *csw, int *up, struct cdev **dp, u_int extra)
{
 struct clonedevs *cd;
 struct cdev *dev, *dl, *de;
 int unit, low, u;


                                                                ;

                                                          ;

                                                   ;

 if (csw->d_maj == 0)
  find_major(csw);
# 718 "freebsd5/kern/kern_conf.c"
 unit = *up;
 low = extra;
 de = dl = ((void *)0);
 cd = *cdp;
 for ((dev) = (((&cd->head))->lh_first); (dev); (dev) = (((dev))->si_clone.le_next)) {
  u = dev2unit(dev);
  if (u == (unit | extra)) {
   *dp = dev;
   return (0);
  }
  if (unit == -1 && u == low) {
   low++;
   de = dev;
   continue;
  }
  if (u > (unit | extra)) {
   dl = dev;
   break;
  }
  de = dev;
 }
 if (unit == -1)
  unit = low & 0xfffff;
 dev = newdev(csw->d_maj, unit2minor(unit | extra));

                                                ;
 if (dl != ((void *)0))
  do { (dev)->si_clone.le_prev = (dl)->si_clone.le_prev; (((dev))->si_clone.le_next) = (dl); *(dl)->si_clone.le_prev = (dev); (dl)->si_clone.le_prev = &(((dev))->si_clone.le_next); } while (0);
 else if (de != ((void *)0))
  do { if (((((dev))->si_clone.le_next) = (((de))->si_clone.le_next)) != ((void *)0)) (((de))->si_clone.le_next)->si_clone.le_prev = &(((dev))->si_clone.le_next); (((de))->si_clone.le_next) = (dev); (dev)->si_clone.le_prev = &(((de))->si_clone.le_next); } while (0);
 else
  do { if (((((dev))->si_clone.le_next) = (((&cd->head))->lh_first)) != ((void *)0)) (((&cd->head))->lh_first)->si_clone.le_prev = &(((dev))->si_clone.le_next); (((&cd->head))->lh_first) = (dev); (dev)->si_clone.le_prev = &(((&cd->head))->lh_first); } while (0);
 dev->si_flags |= 0x0200;
 *up = unit;
 return (1);
}





void
clone_cleanup(struct clonedevs **cdp)
{
 struct cdev *dev, *tdev;
 struct clonedevs *cd;

 cd = *cdp;
 if (cd == ((void *)0))
  return;
 for ((dev) = (((&cd->head))->lh_first); (dev) && ((tdev) = (((dev))->si_clone.le_next), 1); (dev) = (tdev)) {
 
                                                                       ;
  destroy_dev(dev);
 }
 nsc_free(cd, (*_GLOBAL_M_DEVBUF_25_A[get_stack_id()]));
 *cdp = ((void *)0);
}





static int
sysctl_devname(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 int error;
 dev_t ud;
 struct cdev *dev;

 error = (req->newfunc)(req, &ud, sizeof (ud));
 if (error)
  return (error);
 if (ud == (dev_t)(-1))
  return(22);
 dev = findcdev(ud);
 if (dev == ((void *)0))
  error = 2;
 else
  error = (req->oldfunc)(req, dev->si_name, strlen(dev->si_name) + 1);
 return (error);
}

typedef  struct sysctl_oid   _GLOBAL_217_T; static  _GLOBAL_217_T  global_sysctl___kern_devname[NUM_STACKS] = {  { & global_sysctl__kern_children[0]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[1]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[2]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[3]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[4]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[5]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[6]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[7]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[8]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[9]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[10]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[11]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[12]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[13]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[14]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[15]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[16]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[17]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[18]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[19]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[20]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[21]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[22]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[23]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[24]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[25]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[26]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[27]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[28]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[29]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[30]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[31]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[32]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[33]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[34]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[35]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[36]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[37]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[38]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[39]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[40]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[41]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[42]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[43]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[44]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[45]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[46]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[47]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[48]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  { & global_sysctl__kern_children[49]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x10000000  )   , ( ( void *  ) 0  )   , 0  , "devname"  , sysctl_devname  , ""  , 0  , "devname(3) handler"  } ,  };   
 
# 801 "freebsd5/kern/kern_conf.c"
   
 
# 801 "freebsd5/kern/kern_conf.c"
                typedef  void const   _GLOBAL_218_T; static  _GLOBAL_218_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[0] ;static  _GLOBAL_218_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[1] ;static  _GLOBAL_218_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[2] ;static  _GLOBAL_218_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[3] ;static  _GLOBAL_218_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[4] ;static  _GLOBAL_218_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[5] ;static  _GLOBAL_218_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[6] ;static  _GLOBAL_218_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[7] ;static  _GLOBAL_218_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[8] ;static  _GLOBAL_218_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[9] ;static  _GLOBAL_218_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[10] ;static  _GLOBAL_218_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[11] ;static  _GLOBAL_218_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[12] ;static  _GLOBAL_218_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[13] ;static  _GLOBAL_218_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[14] ;static  _GLOBAL_218_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[15] ;static  _GLOBAL_218_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[16] ;static  _GLOBAL_218_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[17] ;static  _GLOBAL_218_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[18] ;static  _GLOBAL_218_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[19] ;static  _GLOBAL_218_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[20] ;static  _GLOBAL_218_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[21] ;static  _GLOBAL_218_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[22] ;static  _GLOBAL_218_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[23] ;static  _GLOBAL_218_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[24] ;static  _GLOBAL_218_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[25] ;static  _GLOBAL_218_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[26] ;static  _GLOBAL_218_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[27] ;static  _GLOBAL_218_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[28] ;static  _GLOBAL_218_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[29] ;static  _GLOBAL_218_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[30] ;static  _GLOBAL_218_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[31] ;static  _GLOBAL_218_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[32] ;static  _GLOBAL_218_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[33] ;static  _GLOBAL_218_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[34] ;static  _GLOBAL_218_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[35] ;static  _GLOBAL_218_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[36] ;static  _GLOBAL_218_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[37] ;static  _GLOBAL_218_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[38] ;static  _GLOBAL_218_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[39] ;static  _GLOBAL_218_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[40] ;static  _GLOBAL_218_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[41] ;static  _GLOBAL_218_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[42] ;static  _GLOBAL_218_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[43] ;static  _GLOBAL_218_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[44] ;static  _GLOBAL_218_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[45] ;static  _GLOBAL_218_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[46] ;static  _GLOBAL_218_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[47] ;static  _GLOBAL_218_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[48] ;static  _GLOBAL_218_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_devname __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_devname[49] ;    
 
# 801 "freebsd5/kern/kern_conf.c"
    
                                                   

