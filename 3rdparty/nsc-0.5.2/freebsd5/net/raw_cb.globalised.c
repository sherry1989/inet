# 1 "freebsd5/net/raw_cb.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/raw_cb.c"
# 33 "freebsd5/net/raw_cb.c"
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

# 34 "freebsd5/net/raw_cb.c" 2
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


typedef  struct domain   _GLOBAL_3_T; extern  _GLOBAL_3_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_4_T; extern  _GLOBAL_4_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 35 "freebsd5/net/raw_cb.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
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
# 36 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 2
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
typedef  struct lock_class   _GLOBAL_5_T; extern  _GLOBAL_5_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_6_T; extern  _GLOBAL_6_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_7_T; extern  _GLOBAL_7_T  global_lock_class_sx[NUM_STACKS];    

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
# 36 "freebsd5/net/raw_cb.c" 2
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
typedef  struct malloc_type   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_8_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_0_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_9_T; extern  _GLOBAL_9_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_9_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_1_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_10_T; extern  _GLOBAL_10_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_10_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_2_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_11_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_3_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_12_T; extern  _GLOBAL_12_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_12_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_4_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_13_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_5_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_14_T; extern  _GLOBAL_14_T  global_malloc_mtx[NUM_STACKS];    


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
# 37 "freebsd5/net/raw_cb.c" 2
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


typedef  struct vmmeter   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_17_T; extern  _GLOBAL_17_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_6_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_18_T; extern  _GLOBAL_18_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_18_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_7_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_19_T; extern  _GLOBAL_19_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_20_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_8_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_21_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_23_T; extern  _GLOBAL_23_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
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
# 44 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2



# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_25_T; extern  _GLOBAL_25_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_26_T; extern  _GLOBAL_26_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 38 "freebsd5/net/raw_cb.c" 2
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
# 39 "freebsd5/net/raw_cb.c" 2
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
# 40 "freebsd5/net/raw_cb.c" 2
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





typedef  struct malloc_type   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_30_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_9_A[NUM_STACKS];   
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
typedef  struct mtx   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_accept_mtx[NUM_STACKS];    
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


typedef  struct malloc_type   _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_32_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_10_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_11_A[NUM_STACKS] = { &_GLOBAL_0_M_PCB_I, &_GLOBAL_1_M_PCB_I, &_GLOBAL_2_M_PCB_I, &_GLOBAL_3_M_PCB_I, &_GLOBAL_4_M_PCB_I, &_GLOBAL_5_M_PCB_I, &_GLOBAL_6_M_PCB_I, &_GLOBAL_7_M_PCB_I, &_GLOBAL_8_M_PCB_I, &_GLOBAL_9_M_PCB_I, &_GLOBAL_10_M_PCB_I, &_GLOBAL_11_M_PCB_I, &_GLOBAL_12_M_PCB_I, &_GLOBAL_13_M_PCB_I, &_GLOBAL_14_M_PCB_I, &_GLOBAL_15_M_PCB_I, &_GLOBAL_16_M_PCB_I, &_GLOBAL_17_M_PCB_I, &_GLOBAL_18_M_PCB_I, &_GLOBAL_19_M_PCB_I, &_GLOBAL_20_M_PCB_I, &_GLOBAL_21_M_PCB_I, &_GLOBAL_22_M_PCB_I, &_GLOBAL_23_M_PCB_I, &_GLOBAL_24_M_PCB_I, &_GLOBAL_25_M_PCB_I, &_GLOBAL_26_M_PCB_I, &_GLOBAL_27_M_PCB_I, &_GLOBAL_28_M_PCB_I, &_GLOBAL_29_M_PCB_I, &_GLOBAL_30_M_PCB_I, &_GLOBAL_31_M_PCB_I, &_GLOBAL_32_M_PCB_I, &_GLOBAL_33_M_PCB_I, &_GLOBAL_34_M_PCB_I, &_GLOBAL_35_M_PCB_I, &_GLOBAL_36_M_PCB_I, &_GLOBAL_37_M_PCB_I, &_GLOBAL_38_M_PCB_I, &_GLOBAL_39_M_PCB_I, &_GLOBAL_40_M_PCB_I, &_GLOBAL_41_M_PCB_I, &_GLOBAL_42_M_PCB_I, &_GLOBAL_43_M_PCB_I, &_GLOBAL_44_M_PCB_I, &_GLOBAL_45_M_PCB_I, &_GLOBAL_46_M_PCB_I, &_GLOBAL_47_M_PCB_I, &_GLOBAL_48_M_PCB_I, &_GLOBAL_49_M_PCB_I, };   
typedef  struct malloc_type   _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_12_A[NUM_STACKS];   


typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_37_T; extern  _GLOBAL_37_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_so_gencnt[NUM_STACKS];   

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
# 41 "freebsd5/net/raw_cb.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
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


typedef  struct callout_list   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_40_T; extern  _GLOBAL_40_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_42_T; extern  _GLOBAL_42_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_43_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_43_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_43_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_44_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_13_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_48_T; extern  _GLOBAL_48_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_14_A[NUM_STACKS];  
typedef  char  _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_15_A[NUM_STACKS];  
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_sellock[NUM_STACKS];    
typedef  struct cv   _GLOBAL_55_T; extern  _GLOBAL_55_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_55_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_16_A[NUM_STACKS];   

typedef  long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_58_T; extern  _GLOBAL_58_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_59_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_17_A[NUM_STACKS];  

typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_66_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_18_A[NUM_STACKS];   
typedef  char  _GLOBAL_67_T; extern  _GLOBAL_67_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_19_A[NUM_STACKS];  
typedef  char  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_20_A[NUM_STACKS];  

typedef  char  _GLOBAL_70_T; extern  _GLOBAL_70_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_21_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_22_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_23_A[NUM_STACKS];   
typedef  char const   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_24_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_wdog_tickler[NUM_STACKS];   





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
# 42 "freebsd5/net/raw_cb.c" 2

# 1 "freebsd5/net/raw_cb.h" 1
# 42 "freebsd5/net/raw_cb.h"
struct rawcb {
 struct { struct rawcb *le_next; struct rawcb **le_prev; } list;
 struct socket *rcb_socket;
 struct sockaddr *rcb_faddr;
 struct sockaddr *rcb_laddr;
 struct sockproto rcb_proto;
};
# 59 "freebsd5/net/raw_cb.h"
typedef  struct rawcb_list_head { struct rawcb   * lh_first  ;  }   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_rawcb_list[NUM_STACKS];         
typedef  struct mtx   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_rawcb_mtx[NUM_STACKS];    


typedef  pr_ctlinput_t _GLOBAL_78_T;  _GLOBAL_78_T  raw_ctlinput;  
typedef  pr_init_t _GLOBAL_79_T;  _GLOBAL_79_T  raw_init;  


int raw_attach(struct socket *, int);
void raw_detach(struct rawcb *);
void raw_disconnect(struct rawcb *);




void raw_input(struct mbuf *,
     struct sockproto *, struct sockaddr *, struct sockaddr *);


typedef  struct pr_usrreqs   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_raw_usrreqs[NUM_STACKS];    
# 44 "freebsd5/net/raw_cb.c" 2
# 54 "freebsd5/net/raw_cb.c"
typedef  struct mtx  _GLOBAL_81_T;  _GLOBAL_81_T  global_rawcb_mtx[NUM_STACKS];   
typedef  struct rawcb_list_head  _GLOBAL_82_T;  _GLOBAL_82_T  global_rawcb_list[NUM_STACKS];   

typedef  const u_long   _GLOBAL_83_T; static  _GLOBAL_83_T  global_raw_sendspace[NUM_STACKS] = {  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  };      
typedef  const u_long   _GLOBAL_84_T; static  _GLOBAL_84_T  global_raw_recvspace[NUM_STACKS] = {  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  8192,  };      





int
raw_attach(so, proto)
 register struct socket *so;
 int proto;
{
 register struct rawcb *rp = ((struct rawcb *)(so)->so_pcb);
 int error;






 if (rp == 0)
  return (55);
 error = soreserve(so, global_raw_sendspace[get_stack_id()], global_raw_recvspace[get_stack_id()]);
 if (error)
  return (error);
 rp->rcb_socket = so;
 rp->rcb_proto.sp_family = so->so_proto->pr_domain->dom_family;
 rp->rcb_proto.sp_protocol = proto;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_rawcb_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_rawcb_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { if (((((rp))->list.le_next) = (((&global_rawcb_list[get_stack_id()]))->lh_first)) != ((void *)0)) (((&global_rawcb_list[get_stack_id()]))->lh_first)->list.le_prev = &(((rp))->list.le_next); (((&global_rawcb_list[get_stack_id()]))->lh_first) = (rp); (rp)->list.le_prev = &(((&global_rawcb_list[get_stack_id()]))->lh_first); } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_rawcb_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_rawcb_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (0);
}





void
raw_detach(rp)
 register struct rawcb *rp;
{
 struct socket *so = rp->rcb_socket;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 so->so_pcb = 0;
 do { ; ; if ((so)->so_count == 0) sofree(so); else { do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0); do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } } while(0);
 do { if ((((rp))->list.le_next) != ((void *)0)) (((rp))->list.le_next)->list.le_prev = (rp)->list.le_prev; *(rp)->list.le_prev = (((rp))->list.le_next); } while (0);





 nsc_free((caddr_t)(rp), (*_GLOBAL_M_PCB_11_A[get_stack_id()]));
}




void
raw_disconnect(rp)
 struct rawcb *rp;
{






 if (rp->rcb_socket->so_state & 0x0001)
  raw_detach(rp);
}

