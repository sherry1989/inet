# 1 "freebsd5/netinet/accf_http.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet/accf_http.c"
# 32 "freebsd5/netinet/accf_http.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
#include "num_stacks.h"
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

# 33 "freebsd5/netinet/accf_http.c" 2
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
# 34 "freebsd5/netinet/accf_http.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
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
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
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
typedef  struct malloc_type   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_17_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_18_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_19_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_20_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_21_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_malloc_mtx[NUM_STACKS];    


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
# 40 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 2






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
typedef  uma_zone_t  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_nmbclusters[NUM_STACKS];   

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
# 35 "freebsd5/netinet/accf_http.c" 2
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
typedef  struct sx   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_22_A[NUM_STACKS];   
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
# 36 "freebsd5/netinet/accf_http.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
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

# 40 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 2
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

typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_sugid_coredump[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_sigio_lock[NUM_STACKS];    
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
# 37 "freebsd5/netinet/accf_http.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_25_A[NUM_STACKS];  
typedef  char  _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_26_A[NUM_STACKS];  


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
# 38 "freebsd5/netinet/accf_http.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
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





typedef  struct malloc_type   _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_91_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_27_A[NUM_STACKS];   
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
typedef  struct mtx   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_accept_mtx[NUM_STACKS];    
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


typedef  struct malloc_type   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_93_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_28_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_94_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_29_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_95_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_30_A[NUM_STACKS];   


typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_so_gencnt[NUM_STACKS];   

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


typedef  struct sysctl_oid_list   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_sysctl__net_inet_accf_children[NUM_STACKS];    

int accept_filt_generic_mod_event(module_t mod, int event, void *data);
# 39 "freebsd5/netinet/accf_http.c" 2


static void sohashttpget(struct socket *so, void *arg, int waitflag);

static void soparsehttpvers(struct socket *so, void *arg, int waitflag);

static void soishttpconnected(struct socket *so, void *arg, int waitflag);

static int mbufstrcmp(struct mbuf *m, struct mbuf *npkt, int offset, char *cmp);

static int mbufstrncmp(struct mbuf *m, struct mbuf *npkt, int offset,
 int max, char *cmp);

static int sbfull(struct sockbuf *sb);

typedef  struct accept_filter   _GLOBAL_101_T; static  _GLOBAL_101_T  global_accf_http_filter[NUM_STACKS] = {  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "httpready" , sohashttpget  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  };      
 
 
  
  


typedef  moduledata_t  _GLOBAL_102_T; static  _GLOBAL_102_T  global_accf_http_mod[NUM_STACKS] = {  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[0]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[1]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[2]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[3]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[4]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[5]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[6]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[7]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[8]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[9]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[10]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[11]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[12]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[13]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[14]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[15]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[16]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[17]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[18]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[19]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[20]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[21]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[22]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[23]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[24]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[25]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[26]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[27]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[28]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[29]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[30]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[31]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[32]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[33]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[34]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[35]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[36]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[37]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[38]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[39]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[40]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[41]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[42]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[43]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[44]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[45]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[46]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[47]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[48]   } ,  { "accf_http" , accept_filt_generic_mod_event  , & global_accf_http_filter[49]   } ,  };     
 
 
 


typedef  struct mod_metadata   _GLOBAL_103_T; static  _GLOBAL_103_T  global__mod_metadata_md_accf_http[NUM_STACKS] = {  { 1 , 2  , & global_accf_http_mod[0]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[1]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[2]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[3]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[4]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[5]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[6]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[7]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[8]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[9]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[10]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[11]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[12]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[13]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[14]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[15]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[16]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[17]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[18]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[19]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[20]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[21]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[22]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[23]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[24]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[25]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[26]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[27]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[28]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[29]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[30]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[31]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[32]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[33]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[34]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[35]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[36]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[37]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[38]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[39]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[40]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[41]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[42]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[43]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[44]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[45]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[46]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[47]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[48]   , "accf_http"  } ,  { 1 , 2  , & global_accf_http_mod[49]   , "accf_http"  } ,  };            typedef  void const   _GLOBAL_104_T; static  _GLOBAL_104_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[0] ;static  _GLOBAL_104_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[1] ;static  _GLOBAL_104_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[2] ;static  _GLOBAL_104_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[3] ;static  _GLOBAL_104_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[4] ;static  _GLOBAL_104_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[5] ;static  _GLOBAL_104_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[6] ;static  _GLOBAL_104_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[7] ;static  _GLOBAL_104_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[8] ;static  _GLOBAL_104_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[9] ;static  _GLOBAL_104_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[10] ;static  _GLOBAL_104_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[11] ;static  _GLOBAL_104_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[12] ;static  _GLOBAL_104_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[13] ;static  _GLOBAL_104_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[14] ;static  _GLOBAL_104_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[15] ;static  _GLOBAL_104_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[16] ;static  _GLOBAL_104_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[17] ;static  _GLOBAL_104_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[18] ;static  _GLOBAL_104_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[19] ;static  _GLOBAL_104_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[20] ;static  _GLOBAL_104_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[21] ;static  _GLOBAL_104_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[22] ;static  _GLOBAL_104_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[23] ;static  _GLOBAL_104_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[24] ;static  _GLOBAL_104_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[25] ;static  _GLOBAL_104_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[26] ;static  _GLOBAL_104_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[27] ;static  _GLOBAL_104_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[28] ;static  _GLOBAL_104_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[29] ;static  _GLOBAL_104_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[30] ;static  _GLOBAL_104_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[31] ;static  _GLOBAL_104_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[32] ;static  _GLOBAL_104_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[33] ;static  _GLOBAL_104_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[34] ;static  _GLOBAL_104_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[35] ;static  _GLOBAL_104_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[36] ;static  _GLOBAL_104_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[37] ;static  _GLOBAL_104_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[38] ;static  _GLOBAL_104_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[39] ;static  _GLOBAL_104_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[40] ;static  _GLOBAL_104_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[41] ;static  _GLOBAL_104_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[42] ;static  _GLOBAL_104_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[43] ;static  _GLOBAL_104_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[44] ;static  _GLOBAL_104_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[45] ;static  _GLOBAL_104_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[46] ;static  _GLOBAL_104_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[47] ;static  _GLOBAL_104_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[48] ;static  _GLOBAL_104_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_accf_http __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_http[49] ;          typedef  struct sysinit   _GLOBAL_105_T; static  _GLOBAL_105_T  global_accf_httpmodule_sys_init[NUM_STACKS] = {  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[0]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[1]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[2]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[3]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[4]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[5]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[6]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[7]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[8]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[9]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[10]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[11]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[12]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[13]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[14]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[15]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[16]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[17]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[18]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[19]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[20]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[21]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[22]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[23]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[24]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[25]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[26]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[27]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[28]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[29]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[30]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[31]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[32]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[33]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[34]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[35]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[36]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[37]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[38]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[39]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[40]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[41]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[42]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[43]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[44]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[45]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[46]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[47]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[48]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_http_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_106_T; static  _GLOBAL_106_T  * const  _global_section_0___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[0] ;static  _GLOBAL_106_T  * const  _global_section_1___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[1] ;static  _GLOBAL_106_T  * const  _global_section_2___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[2] ;static  _GLOBAL_106_T  * const  _global_section_3___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[3] ;static  _GLOBAL_106_T  * const  _global_section_4___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[4] ;static  _GLOBAL_106_T  * const  _global_section_5___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[5] ;static  _GLOBAL_106_T  * const  _global_section_6___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[6] ;static  _GLOBAL_106_T  * const  _global_section_7___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[7] ;static  _GLOBAL_106_T  * const  _global_section_8___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[8] ;static  _GLOBAL_106_T  * const  _global_section_9___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[9] ;static  _GLOBAL_106_T  * const  _global_section_10___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[10] ;static  _GLOBAL_106_T  * const  _global_section_11___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[11] ;static  _GLOBAL_106_T  * const  _global_section_12___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[12] ;static  _GLOBAL_106_T  * const  _global_section_13___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[13] ;static  _GLOBAL_106_T  * const  _global_section_14___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[14] ;static  _GLOBAL_106_T  * const  _global_section_15___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[15] ;static  _GLOBAL_106_T  * const  _global_section_16___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[16] ;static  _GLOBAL_106_T  * const  _global_section_17___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[17] ;static  _GLOBAL_106_T  * const  _global_section_18___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[18] ;static  _GLOBAL_106_T  * const  _global_section_19___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[19] ;static  _GLOBAL_106_T  * const  _global_section_20___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[20] ;static  _GLOBAL_106_T  * const  _global_section_21___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[21] ;static  _GLOBAL_106_T  * const  _global_section_22___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[22] ;static  _GLOBAL_106_T  * const  _global_section_23___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[23] ;static  _GLOBAL_106_T  * const  _global_section_24___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[24] ;static  _GLOBAL_106_T  * const  _global_section_25___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[25] ;static  _GLOBAL_106_T  * const  _global_section_26___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[26] ;static  _GLOBAL_106_T  * const  _global_section_27___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[27] ;static  _GLOBAL_106_T  * const  _global_section_28___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[28] ;static  _GLOBAL_106_T  * const  _global_section_29___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[29] ;static  _GLOBAL_106_T  * const  _global_section_30___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[30] ;static  _GLOBAL_106_T  * const  _global_section_31___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[31] ;static  _GLOBAL_106_T  * const  _global_section_32___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[32] ;static  _GLOBAL_106_T  * const  _global_section_33___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[33] ;static  _GLOBAL_106_T  * const  _global_section_34___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[34] ;static  _GLOBAL_106_T  * const  _global_section_35___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[35] ;static  _GLOBAL_106_T  * const  _global_section_36___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[36] ;static  _GLOBAL_106_T  * const  _global_section_37___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[37] ;static  _GLOBAL_106_T  * const  _global_section_38___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[38] ;static  _GLOBAL_106_T  * const  _global_section_39___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[39] ;static  _GLOBAL_106_T  * const  _global_section_40___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[40] ;static  _GLOBAL_106_T  * const  _global_section_41___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[41] ;static  _GLOBAL_106_T  * const  _global_section_42___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[42] ;static  _GLOBAL_106_T  * const  _global_section_43___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[43] ;static  _GLOBAL_106_T  * const  _global_section_44___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[44] ;static  _GLOBAL_106_T  * const  _global_section_45___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[45] ;static  _GLOBAL_106_T  * const  _global_section_46___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[46] ;static  _GLOBAL_106_T  * const  _global_section_47___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[47] ;static  _GLOBAL_106_T  * const  _global_section_48___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[48] ;static  _GLOBAL_106_T  * const  _global_section_49___set_sysinit_set_sym_accf_httpmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_accf_httpmodule_sys_init[49] ;          struct __hack;

typedef  int  _GLOBAL_107_T; static  _GLOBAL_107_T  global_parse_http_version[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     

typedef  struct sysctl_oid_list  _GLOBAL_108_T;  _GLOBAL_108_T  global_sysctl__net_inet_accf_http_children[NUM_STACKS];  
 
# 71 "freebsd5/netinet/accf_http.c"
  typedef  struct sysctl_oid   _GLOBAL_109_T; static  _GLOBAL_109_T  global_sysctl___net_inet_accf_http[NUM_STACKS] = {  { & global_sysctl__net_inet_accf_children[0]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[0]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[1]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[1]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[2]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[2]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[3]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[3]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[4]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[4]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[5]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[5]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[6]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[6]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[7]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[7]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[8]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[8]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[9]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[9]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[10]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[10]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[11]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[11]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[12]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[12]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[13]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[13]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[14]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[14]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[15]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[15]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[16]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[16]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[17]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[17]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[18]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[18]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[19]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[19]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[20]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[20]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[21]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[21]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[22]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[22]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[23]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[23]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[24]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[24]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[25]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[25]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[26]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[26]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[27]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[27]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[28]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[28]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[29]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[29]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[30]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[30]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[31]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[31]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[32]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[32]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[33]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[33]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[34]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[34]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[35]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[35]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[36]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[36]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[37]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[37]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[38]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[38]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[39]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[39]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[40]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[40]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[41]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[41]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[42]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[42]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[43]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[43]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[44]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[44]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[45]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[45]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[46]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[46]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[47]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[47]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[48]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[48]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  { & global_sysctl__net_inet_accf_children[49]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_accf_http_children[49]    , 0  , "http"  , 0  , "N"  , 0  , "HTTP accept filter"  } ,  };   
 
# 71 "freebsd5/netinet/accf_http.c"
   
 
# 71 "freebsd5/netinet/accf_http.c"
               typedef  void const   _GLOBAL_110_T; static  _GLOBAL_110_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[0] ;static  _GLOBAL_110_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[1] ;static  _GLOBAL_110_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[2] ;static  _GLOBAL_110_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[3] ;static  _GLOBAL_110_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[4] ;static  _GLOBAL_110_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[5] ;static  _GLOBAL_110_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[6] ;static  _GLOBAL_110_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[7] ;static  _GLOBAL_110_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[8] ;static  _GLOBAL_110_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[9] ;static  _GLOBAL_110_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[10] ;static  _GLOBAL_110_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[11] ;static  _GLOBAL_110_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[12] ;static  _GLOBAL_110_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[13] ;static  _GLOBAL_110_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[14] ;static  _GLOBAL_110_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[15] ;static  _GLOBAL_110_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[16] ;static  _GLOBAL_110_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[17] ;static  _GLOBAL_110_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[18] ;static  _GLOBAL_110_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[19] ;static  _GLOBAL_110_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[20] ;static  _GLOBAL_110_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[21] ;static  _GLOBAL_110_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[22] ;static  _GLOBAL_110_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[23] ;static  _GLOBAL_110_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[24] ;static  _GLOBAL_110_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[25] ;static  _GLOBAL_110_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[26] ;static  _GLOBAL_110_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[27] ;static  _GLOBAL_110_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[28] ;static  _GLOBAL_110_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[29] ;static  _GLOBAL_110_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[30] ;static  _GLOBAL_110_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[31] ;static  _GLOBAL_110_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[32] ;static  _GLOBAL_110_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[33] ;static  _GLOBAL_110_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[34] ;static  _GLOBAL_110_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[35] ;static  _GLOBAL_110_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[36] ;static  _GLOBAL_110_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[37] ;static  _GLOBAL_110_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[38] ;static  _GLOBAL_110_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[39] ;static  _GLOBAL_110_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[40] ;static  _GLOBAL_110_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[41] ;static  _GLOBAL_110_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[42] ;static  _GLOBAL_110_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[43] ;static  _GLOBAL_110_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[44] ;static  _GLOBAL_110_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[45] ;static  _GLOBAL_110_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[46] ;static  _GLOBAL_110_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[47] ;static  _GLOBAL_110_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[48] ;static  _GLOBAL_110_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_accf_http __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http[49] ;    
 
# 71 "freebsd5/netinet/accf_http.c"
    
                     
typedef  struct sysctl_oid   _GLOBAL_111_T; static  _GLOBAL_111_T  global_sysctl___net_inet_accf_http_parsehttpversion[NUM_STACKS] = {  { & global_sysctl__net_inet_accf_http_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[0]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[1]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[2]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[3]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[4]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[5]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[6]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[7]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[8]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[9]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[10]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[11]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[12]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[13]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[14]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[15]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[16]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[17]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[18]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[19]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[20]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[21]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[22]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[23]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[24]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[25]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[26]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[27]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[28]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[29]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[30]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[31]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[32]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[33]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[34]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[35]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[36]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[37]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[38]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[39]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[40]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[41]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[42]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[43]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[44]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[45]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[46]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[47]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[48]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  { & global_sysctl__net_inet_accf_http_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_parse_http_version[49]   , 1  , "parsehttpversion"  , sysctl_handle_int  , "I"  , 0  , "Parse http version so that non 1.x requests work"  } ,  };   

 
# 73 "freebsd5/netinet/accf_http.c"
   

 
# 73 "freebsd5/netinet/accf_http.c"
               typedef  void const   _GLOBAL_112_T; static  _GLOBAL_112_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[0] ;static  _GLOBAL_112_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[1] ;static  _GLOBAL_112_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[2] ;static  _GLOBAL_112_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[3] ;static  _GLOBAL_112_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[4] ;static  _GLOBAL_112_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[5] ;static  _GLOBAL_112_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[6] ;static  _GLOBAL_112_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[7] ;static  _GLOBAL_112_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[8] ;static  _GLOBAL_112_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[9] ;static  _GLOBAL_112_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[10] ;static  _GLOBAL_112_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[11] ;static  _GLOBAL_112_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[12] ;static  _GLOBAL_112_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[13] ;static  _GLOBAL_112_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[14] ;static  _GLOBAL_112_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[15] ;static  _GLOBAL_112_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[16] ;static  _GLOBAL_112_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[17] ;static  _GLOBAL_112_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[18] ;static  _GLOBAL_112_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[19] ;static  _GLOBAL_112_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[20] ;static  _GLOBAL_112_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[21] ;static  _GLOBAL_112_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[22] ;static  _GLOBAL_112_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[23] ;static  _GLOBAL_112_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[24] ;static  _GLOBAL_112_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[25] ;static  _GLOBAL_112_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[26] ;static  _GLOBAL_112_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[27] ;static  _GLOBAL_112_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[28] ;static  _GLOBAL_112_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[29] ;static  _GLOBAL_112_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[30] ;static  _GLOBAL_112_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[31] ;static  _GLOBAL_112_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[32] ;static  _GLOBAL_112_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[33] ;static  _GLOBAL_112_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[34] ;static  _GLOBAL_112_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[35] ;static  _GLOBAL_112_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[36] ;static  _GLOBAL_112_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[37] ;static  _GLOBAL_112_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[38] ;static  _GLOBAL_112_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[39] ;static  _GLOBAL_112_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[40] ;static  _GLOBAL_112_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[41] ;static  _GLOBAL_112_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[42] ;static  _GLOBAL_112_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[43] ;static  _GLOBAL_112_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[44] ;static  _GLOBAL_112_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[45] ;static  _GLOBAL_112_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[46] ;static  _GLOBAL_112_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[47] ;static  _GLOBAL_112_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[48] ;static  _GLOBAL_112_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_accf_http_parsehttpversion __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_accf_http_parsehttpversion[49] ;    

 
# 73 "freebsd5/netinet/accf_http.c"
    

                                                   
# 86 "freebsd5/netinet/accf_http.c"
static int
sbfull(struct sockbuf *sb)
{




                                                              ;
 return (sb->sb_cc >= sb->sb_hiwat || sb->sb_mbcnt >= sb->sb_mbmax);
}





static int
mbufstrcmp(struct mbuf *m, struct mbuf *npkt, int offset, char *cmp)
{
 struct mbuf *n;

 for (; m != ((void *)0); m = n) {
  n = npkt;
  if (npkt)
   npkt = npkt->m_hdr.mh_nextpkt;
  for (; m; m = m->m_hdr.mh_next) {
   for (; offset < m->m_hdr.mh_len; offset++, cmp++) {
    if (*cmp == '\0')
     return (1);
    else if (*cmp != *(((char *)((m)->m_hdr.mh_data)) + offset))
     return (0);
   }
   if (*cmp == '\0')
    return (1);
   offset = 0;
  }
 }
 return (0);
}






static int
mbufstrncmp(struct mbuf *m, struct mbuf *npkt, int offset, int max, char *cmp)
{
 struct mbuf *n;

 for (; m != ((void *)0); m = n) {
  n = npkt;
  if (npkt)
   npkt = npkt->m_hdr.mh_nextpkt;
  for (; m; m = m->m_hdr.mh_next) {
   for (; offset < m->m_hdr.mh_len; offset++, cmp++, max--) {
    if (max == 0 || *cmp == '\0')
     return (1);
    else if (*cmp != *(((char *)((m)->m_hdr.mh_data)) + offset))
     return (0);
   }
   if (max == 0 || *cmp == '\0')
    return (1);
   offset = 0;
  }
 }
 return (0);
}







static void
sohashttpget(struct socket *so, void *arg, int waitflag)
{

 if ((so->so_rcv.sb_state & 0x0020) == 0 && !sbfull(&so->so_rcv)) {
  struct mbuf *m;
  char *cmp;
  int cmplen, cc;

  m = so->so_rcv.sb_mb;
  cc = so->so_rcv.sb_cc - 1;
  if (cc < 1)
   return;
  switch (*((char *)((m)->m_hdr.mh_data))) {
  case 'G':
   do { cmp = "ET "; cmplen = sizeof("ET ") - 1; } while(0);
   break;
  case 'H':
   do { cmp = "EAD "; cmplen = sizeof("EAD ") - 1; } while(0);
   break;
  default:
   goto fallout;
  }
  if (cc < cmplen) {
   if (mbufstrncmp(m, m->m_hdr.mh_nextpkt, 1, cc, cmp) == 1) {
    ;
    return;
   } else {
    ;
    goto fallout;
   }
  }
  if (mbufstrcmp(m, m->m_hdr.mh_nextpkt, 1, cmp) == 1) {
   ;
   if (global_parse_http_version[get_stack_id()] == 0)
    soishttpconnected(so, arg, waitflag);
   else
    soparsehttpvers(so, arg, waitflag);
   return;
  }
  ;
 }

fallout:
 ;
 so->so_upcall = ((void *)0);
 so->so_rcv.sb_flags &= ~0x20;
 soisconnected(so);
 return;
}

static void
soparsehttpvers(struct socket *so, void *arg, int waitflag)
{
 struct mbuf *m, *n;
 int i, cc, spaces, inspaces;

 if ((so->so_rcv.sb_state & 0x0020) != 0 || sbfull(&so->so_rcv))
  goto fallout;

 m = so->so_rcv.sb_mb;
 cc = so->so_rcv.sb_cc;
 inspaces = spaces = 0;
 for (m = so->so_rcv.sb_mb; m; m = n) {
  n = m->m_hdr.mh_nextpkt;
  for (; m; m = m->m_hdr.mh_next) {
   for (i = 0; i < m->m_hdr.mh_len; i++, cc--) {
    switch (*(((char *)((m)->m_hdr.mh_data)) + i)) {
    case ' ':

     if (!inspaces) {
      spaces++;
      inspaces = 1;
     }
     break;
    case '\r':
    case '\n':
     ;
     goto fallout;
    default:
     if (spaces != 2) {
      inspaces = 0;
      break;
     }







     if (cc < sizeof("HTTP/1.0") - 1) {
      if (mbufstrncmp(m, n, i, cc,
       "HTTP/1.") == 1) {
       ;
       goto readmore;
      } else {
       ;
       goto fallout;
      }
     } else if (
         mbufstrcmp(m, n, i, "HTTP/1.0") ||
         mbufstrcmp(m, n, i, "HTTP/1.1")) {
       ;
       soishttpconnected(so,
           arg, waitflag);
       return;
     } else {
      ;
      goto fallout;
     }
    }
   }
  }
 }
readmore:
 ;




 so->so_upcall = soparsehttpvers;
 so->so_rcv.sb_flags |= 0x20;
 return;

fallout:
 ;
 so->so_upcall = ((void *)0);
 so->so_rcv.sb_flags &= ~0x20;
 soisconnected(so);
 return;
}




static void
soishttpconnected(struct socket *so, void *arg, int waitflag)
{
 char a, b, c;
 struct mbuf *m, *n;
 int ccleft, copied;

 ;
 if ((so->so_rcv.sb_state & 0x0020) != 0 || sbfull(&so->so_rcv))
  goto gotit;
# 314 "freebsd5/netinet/accf_http.c"
 copied = 0;
 ccleft = so->so_rcv.sb_cc;
 if (ccleft < 3)
  goto readmore;
 a = b = c = '\0';
 for (m = so->so_rcv.sb_mb; m; m = n) {
  n = m->m_hdr.mh_nextpkt;
  for (; m; m = m->m_hdr.mh_next) {
   ccleft -= m->m_hdr.mh_len;
   if (ccleft <= 3) {
    char *src;
    int tocopy;

    tocopy = (3 - ccleft) - copied;
    src = ((char *)((m)->m_hdr.mh_data)) + (m->m_hdr.mh_len - tocopy);

    while (tocopy--) {
     switch (copied++) {
     case 0:
      a = *src++;
      break;
     case 1:
      b = *src++;
      break;
     case 2:
      c = *src++;
      break;
     }
    }
   }
  }
 }
 if (c == '\n' && (b == '\n' || (b == '\r' && a == '\n'))) {

  goto gotit;
 }

readmore:
 so->so_upcall = soishttpconnected;
 so->so_rcv.sb_flags |= 0x20;
 return;

gotit:
 so->so_upcall = ((void *)0);
 so->so_rcv.sb_flags &= ~0x20;
 soisconnected(so);
 return;
}

