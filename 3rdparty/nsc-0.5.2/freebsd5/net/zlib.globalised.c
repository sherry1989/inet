# 1 "freebsd5/net/zlib.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/zlib.c"
# 49 "freebsd5/net/zlib.c"
# 1 "freebsd5/net/zlib.h" 1
# 211 "freebsd5/net/zlib.h"
#include "num_stacks.h"
typedef unsigned char Byte;
typedef unsigned int uInt;
typedef unsigned long uLong;





   typedef Byte Bytef;

typedef char charf;
typedef int intf;
typedef uInt uIntf;
typedef uLong uLongf;


   typedef void *voidpf;
   typedef void *voidp;
# 272 "freebsd5/net/zlib.h"
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void (*free_func) (voidpf opaque, voidpf address);

struct internal_state;

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

    const char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;
    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;
# 378 "freebsd5/net/zlib.h"
extern const char * zlibVersion (void);
# 408 "freebsd5/net/zlib.h"
extern int deflate (z_streamp strm, int flush);
# 483 "freebsd5/net/zlib.h"
extern int deflateEnd (z_streamp strm);
# 516 "freebsd5/net/zlib.h"
extern int inflate_ppp (z_streamp strm, int flush);
# 574 "freebsd5/net/zlib.h"
extern int inflateEnd (z_streamp strm);
# 650 "freebsd5/net/zlib.h"
extern int deflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength)

                                 ;
# 679 "freebsd5/net/zlib.h"
extern int deflateCopy (z_streamp dest, z_streamp source)
                                                    ;
# 702 "freebsd5/net/zlib.h"
extern int deflateReset (z_streamp strm);
# 713 "freebsd5/net/zlib.h"
extern int deflateParams (z_streamp strm, int level, int strategy);
# 731 "freebsd5/net/zlib.h"
extern int deflateOutputPending (z_streamp strm);
# 773 "freebsd5/net/zlib.h"
extern int inflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength)

                          ;
# 792 "freebsd5/net/zlib.h"
extern int inflateSync (z_streamp strm);
# 807 "freebsd5/net/zlib.h"
extern int inflateReset (z_streamp strm);
# 817 "freebsd5/net/zlib.h"
extern int inflateIncomp (z_stream *strm);
# 836 "freebsd5/net/zlib.h"
extern int compress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen)
                                                ;
# 851 "freebsd5/net/zlib.h"
extern int uncompress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen)
                                           ;
# 870 "freebsd5/net/zlib.h"
typedef voidp gzFile;

extern gzFile gzopen (const char *path, const char *mode);
# 884 "freebsd5/net/zlib.h"
extern gzFile gzdopen (int fd, const char *mode);
# 897 "freebsd5/net/zlib.h"
extern int gzread (gzFile file, voidp buf, unsigned len);







extern int gzwrite (gzFile file, const voidp buf, unsigned len);






extern int gzflush (gzFile file, int flush);
# 922 "freebsd5/net/zlib.h"
extern int gzclose (gzFile file);






extern const char * gzerror (gzFile file, int *errnum);
# 946 "freebsd5/net/zlib.h"
extern uLong adler32 (uLong adler, const Bytef *buf, uInt len);
# 987 "freebsd5/net/zlib.h"
extern int deflateInit_ (z_streamp strm, int level, const char *version, int stream_size)
                                                    ;
extern int inflateInit_ (z_streamp strm, const char *version, int stream_size)
                                             ;
extern int deflateInit2_ (z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size)

                                              ;
extern int inflateInit2_ (z_streamp strm, int windowBits, const char *version, int stream_size)
                                              ;
# 1010 "freebsd5/net/zlib.h"
uLongf *get_crc_table (void);
# 50 "freebsd5/net/zlib.c" 2






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
# 57 "freebsd5/net/zlib.c" 2
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
# 58 "freebsd5/net/zlib.c" 2
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
# 59 "freebsd5/net/zlib.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslimits.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 91 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/errno.h" 1
# 92 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2

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

# 60 "freebsd5/net/zlib.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_13_A[NUM_STACKS];  
typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_14_A[NUM_STACKS];  
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_15_A[NUM_STACKS];  

typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_tz_dsttime[NUM_STACKS];   
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
# 61 "freebsd5/net/zlib.c" 2
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
typedef  struct sx   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_16_A[NUM_STACKS];   
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
# 62 "freebsd5/net/zlib.c" 2
# 90 "freebsd5/net/zlib.c"
typedef unsigned char uch;
typedef uch uchf;
typedef unsigned short ush;
typedef ush ushf;
typedef unsigned long ulg;

typedef  const char   _GLOBAL_57_T; extern  _GLOBAL_57_T  * _GLOBAL_0_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_1_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_2_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_3_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_4_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_5_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_6_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_7_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_8_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_9_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_10_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_11_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_12_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_13_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_14_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_15_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_16_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_17_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_18_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_19_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_20_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_21_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_22_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_23_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_24_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_25_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_26_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_27_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_28_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_29_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_30_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_31_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_32_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_33_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_34_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_35_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_36_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_37_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_38_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_39_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_40_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_41_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_42_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_43_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_44_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_45_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_46_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_47_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_48_z_errmsg_I [ 10 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_49_z_errmsg_I [ 10 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_z_errmsg_I) *_GLOBAL_z_errmsg_17_A[NUM_STACKS] = { &_GLOBAL_0_z_errmsg_I, &_GLOBAL_1_z_errmsg_I, &_GLOBAL_2_z_errmsg_I, &_GLOBAL_3_z_errmsg_I, &_GLOBAL_4_z_errmsg_I, &_GLOBAL_5_z_errmsg_I, &_GLOBAL_6_z_errmsg_I, &_GLOBAL_7_z_errmsg_I, &_GLOBAL_8_z_errmsg_I, &_GLOBAL_9_z_errmsg_I, &_GLOBAL_10_z_errmsg_I, &_GLOBAL_11_z_errmsg_I, &_GLOBAL_12_z_errmsg_I, &_GLOBAL_13_z_errmsg_I, &_GLOBAL_14_z_errmsg_I, &_GLOBAL_15_z_errmsg_I, &_GLOBAL_16_z_errmsg_I, &_GLOBAL_17_z_errmsg_I, &_GLOBAL_18_z_errmsg_I, &_GLOBAL_19_z_errmsg_I, &_GLOBAL_20_z_errmsg_I, &_GLOBAL_21_z_errmsg_I, &_GLOBAL_22_z_errmsg_I, &_GLOBAL_23_z_errmsg_I, &_GLOBAL_24_z_errmsg_I, &_GLOBAL_25_z_errmsg_I, &_GLOBAL_26_z_errmsg_I, &_GLOBAL_27_z_errmsg_I, &_GLOBAL_28_z_errmsg_I, &_GLOBAL_29_z_errmsg_I, &_GLOBAL_30_z_errmsg_I, &_GLOBAL_31_z_errmsg_I, &_GLOBAL_32_z_errmsg_I, &_GLOBAL_33_z_errmsg_I, &_GLOBAL_34_z_errmsg_I, &_GLOBAL_35_z_errmsg_I, &_GLOBAL_36_z_errmsg_I, &_GLOBAL_37_z_errmsg_I, &_GLOBAL_38_z_errmsg_I, &_GLOBAL_39_z_errmsg_I, &_GLOBAL_40_z_errmsg_I, &_GLOBAL_41_z_errmsg_I, &_GLOBAL_42_z_errmsg_I, &_GLOBAL_43_z_errmsg_I, &_GLOBAL_44_z_errmsg_I, &_GLOBAL_45_z_errmsg_I, &_GLOBAL_46_z_errmsg_I, &_GLOBAL_47_z_errmsg_I, &_GLOBAL_48_z_errmsg_I, &_GLOBAL_49_z_errmsg_I, };   
# 249 "freebsd5/net/zlib.c"
typedef uLong (*check_func) (uLong check, const Bytef *buf, uInt len);

voidpf zcalloc (voidpf opaque, unsigned items, unsigned size);
void zcfree (voidpf opaque, voidpf ptr);
# 312 "freebsd5/net/zlib.c"
typedef struct ct_data_s {
    union {
        ush freq;
        ush code;
    } fc;
    union {
        ush dad;
        ush len;
    } dl;
} ct_data;






typedef struct static_tree_desc_s static_tree_desc;

typedef struct tree_desc_s {
    ct_data *dyn_tree;
    int max_code;
    static_tree_desc *stat_desc;
} tree_desc;

typedef ush Pos;
typedef Pos Posf;
typedef unsigned IPos;





typedef struct deflate_state {
    z_streamp strm;
    int status;
    Bytef *pending_buf;
    ulg pending_buf_size;
    Bytef *pending_out;
    int pending;
    int noheader;
    Byte data_type;
    Byte method;
    int last_flush;



    uInt w_size;
    uInt w_bits;
    uInt w_mask;

    Bytef *window;
# 372 "freebsd5/net/zlib.c"
    ulg window_size;




    Posf *prev;





    Posf *head;

    uInt ins_h;
    uInt hash_size;
    uInt hash_bits;
    uInt hash_mask;

    uInt hash_shift;






    long block_start;




    uInt match_length;
    IPos prev_match;
    int match_available;
    uInt strstart;
    uInt match_start;
    uInt lookahead;

    uInt prev_length;




    uInt max_chain_length;





    uInt max_lazy_match;
# 431 "freebsd5/net/zlib.c"
    int level;
    int strategy;

    uInt good_match;


    int nice_match;



    struct ct_data_s dyn_ltree[(2*(256 +1+29)+1)];
    struct ct_data_s dyn_dtree[2*30 +1];
    struct ct_data_s bl_tree[2*19 +1];

    struct tree_desc_s l_desc;
    struct tree_desc_s d_desc;
    struct tree_desc_s bl_desc;

    ush bl_count[15 +1];


    int heap[2*(256 +1+29)+1];
    int heap_len;
    int heap_max;




    uch depth[2*(256 +1+29)+1];



    uchf *l_buf;

    uInt lit_bufsize;
# 485 "freebsd5/net/zlib.c"
    uInt last_lit;

    ushf *d_buf;





    ulg opt_len;
    ulg static_len;
    ulg compressed_len;
    uInt matches;
    int last_eob_len;





    ush bi_buf;



    int bi_valid;




} deflate_state;
# 531 "freebsd5/net/zlib.c"
void _tr_init (deflate_state *s);
int _tr_tally (deflate_state *s, unsigned dist, unsigned lc);
ulg _tr_flush_block (deflate_state *s, charf *buf, ulg stored_len, int eof)
              ;
void _tr_align (deflate_state *s);
void _tr_stored_block (deflate_state *s, charf *buf, ulg stored_len, int eof)
                                   ;
void _tr_stored_type_only (deflate_state *);
# 597 "freebsd5/net/zlib.c"
typedef  char _GLOBAL_58_T;  _GLOBAL_58_T  _GLOBAL_0_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_1_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_2_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_3_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_4_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_5_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_6_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_7_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_8_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_9_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_10_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_11_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_12_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_13_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_14_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_15_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_16_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_17_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_18_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_19_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_20_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_21_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_22_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_23_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_24_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_25_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_26_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_27_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_28_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_29_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_30_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_31_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_32_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_33_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_34_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_35_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_36_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_37_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_38_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_39_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_40_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_41_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_42_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_43_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_44_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_45_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_46_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_47_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_48_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ;  _GLOBAL_58_T  _GLOBAL_49_deflate_copyright_I [ ]  = " deflate 1.0.4 Copyright 1995-1996 Jean-loup Gailly " ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_deflate_copyright_I) *_GLOBAL_deflate_copyright_18_A[NUM_STACKS] = { &_GLOBAL_0_deflate_copyright_I, &_GLOBAL_1_deflate_copyright_I, &_GLOBAL_2_deflate_copyright_I, &_GLOBAL_3_deflate_copyright_I, &_GLOBAL_4_deflate_copyright_I, &_GLOBAL_5_deflate_copyright_I, &_GLOBAL_6_deflate_copyright_I, &_GLOBAL_7_deflate_copyright_I, &_GLOBAL_8_deflate_copyright_I, &_GLOBAL_9_deflate_copyright_I, &_GLOBAL_10_deflate_copyright_I, &_GLOBAL_11_deflate_copyright_I, &_GLOBAL_12_deflate_copyright_I, &_GLOBAL_13_deflate_copyright_I, &_GLOBAL_14_deflate_copyright_I, &_GLOBAL_15_deflate_copyright_I, &_GLOBAL_16_deflate_copyright_I, &_GLOBAL_17_deflate_copyright_I, &_GLOBAL_18_deflate_copyright_I, &_GLOBAL_19_deflate_copyright_I, &_GLOBAL_20_deflate_copyright_I, &_GLOBAL_21_deflate_copyright_I, &_GLOBAL_22_deflate_copyright_I, &_GLOBAL_23_deflate_copyright_I, &_GLOBAL_24_deflate_copyright_I, &_GLOBAL_25_deflate_copyright_I, &_GLOBAL_26_deflate_copyright_I, &_GLOBAL_27_deflate_copyright_I, &_GLOBAL_28_deflate_copyright_I, &_GLOBAL_29_deflate_copyright_I, &_GLOBAL_30_deflate_copyright_I, &_GLOBAL_31_deflate_copyright_I, &_GLOBAL_32_deflate_copyright_I, &_GLOBAL_33_deflate_copyright_I, &_GLOBAL_34_deflate_copyright_I, &_GLOBAL_35_deflate_copyright_I, &_GLOBAL_36_deflate_copyright_I, &_GLOBAL_37_deflate_copyright_I, &_GLOBAL_38_deflate_copyright_I, &_GLOBAL_39_deflate_copyright_I, &_GLOBAL_40_deflate_copyright_I, &_GLOBAL_41_deflate_copyright_I, &_GLOBAL_42_deflate_copyright_I, &_GLOBAL_43_deflate_copyright_I, &_GLOBAL_44_deflate_copyright_I, &_GLOBAL_45_deflate_copyright_I, &_GLOBAL_46_deflate_copyright_I, &_GLOBAL_47_deflate_copyright_I, &_GLOBAL_48_deflate_copyright_I, &_GLOBAL_49_deflate_copyright_I, };   
# 608 "freebsd5/net/zlib.c"
typedef enum {
    need_more,
    block_done,
    finish_started,
    finish_done
} block_state;

typedef block_state (*compress_func) (deflate_state *s, int flush);


static void fill_window (deflate_state *s);
static block_state deflate_stored (deflate_state *s, int flush);
static block_state deflate_fast (deflate_state *s, int flush);
static block_state deflate_slow (deflate_state *s, int flush);
static void lm_init (deflate_state *s);
static void putShortMSB (deflate_state *s, uInt b);
static void flush_pending (z_streamp strm);
static int read_buf (z_streamp strm, charf *buf, unsigned size);




static uInt longest_match (deflate_state *s, IPos cur_match);
# 660 "freebsd5/net/zlib.c"
typedef struct config_s {
   ush good_length;
   ush max_lazy;
   ush nice_length;
   ush max_chain;
   compress_func func;
} config;

typedef  config  _GLOBAL_59_T; static  _GLOBAL_59_T  _GLOBAL_0_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_1_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_2_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_3_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_4_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_5_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_6_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_7_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_8_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_9_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_10_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_11_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_12_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_13_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_14_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_15_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_16_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_17_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_18_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_19_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_20_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_21_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_22_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_23_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_24_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_25_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_26_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_27_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_28_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_29_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_30_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_31_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_32_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_33_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_34_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_35_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_36_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_37_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_38_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_39_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_40_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_41_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_42_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_43_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_44_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_45_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_46_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_47_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_48_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static  _GLOBAL_59_T  _GLOBAL_49_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  , deflate_stored  }  , { 4 , 4  , 8  , 4  , deflate_fast  }   , { 4 , 5  , 16  , 8  , deflate_fast  }   , { 4 , 6  , 32  , 32  , deflate_fast  }   , { 4 , 4  , 16  , 16  , deflate_slow  }   , { 8 , 16  , 32  , 32  , deflate_slow  }   , { 8 , 16  , 128  , 128  , deflate_slow  }   , { 8 , 32  , 128  , 256  , deflate_slow  }   , { 32 , 128  , 258  , 1024  , deflate_slow  }   , { 32 , 258  , 258  , 4096  , deflate_slow  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_configuration_table_I) *_GLOBAL_configuration_table_19_A[NUM_STACKS] = { &_GLOBAL_0_configuration_table_I, &_GLOBAL_1_configuration_table_I, &_GLOBAL_2_configuration_table_I, &_GLOBAL_3_configuration_table_I, &_GLOBAL_4_configuration_table_I, &_GLOBAL_5_configuration_table_I, &_GLOBAL_6_configuration_table_I, &_GLOBAL_7_configuration_table_I, &_GLOBAL_8_configuration_table_I, &_GLOBAL_9_configuration_table_I, &_GLOBAL_10_configuration_table_I, &_GLOBAL_11_configuration_table_I, &_GLOBAL_12_configuration_table_I, &_GLOBAL_13_configuration_table_I, &_GLOBAL_14_configuration_table_I, &_GLOBAL_15_configuration_table_I, &_GLOBAL_16_configuration_table_I, &_GLOBAL_17_configuration_table_I, &_GLOBAL_18_configuration_table_I, &_GLOBAL_19_configuration_table_I, &_GLOBAL_20_configuration_table_I, &_GLOBAL_21_configuration_table_I, &_GLOBAL_22_configuration_table_I, &_GLOBAL_23_configuration_table_I, &_GLOBAL_24_configuration_table_I, &_GLOBAL_25_configuration_table_I, &_GLOBAL_26_configuration_table_I, &_GLOBAL_27_configuration_table_I, &_GLOBAL_28_configuration_table_I, &_GLOBAL_29_configuration_table_I, &_GLOBAL_30_configuration_table_I, &_GLOBAL_31_configuration_table_I, &_GLOBAL_32_configuration_table_I, &_GLOBAL_33_configuration_table_I, &_GLOBAL_34_configuration_table_I, &_GLOBAL_35_configuration_table_I, &_GLOBAL_36_configuration_table_I, &_GLOBAL_37_configuration_table_I, &_GLOBAL_38_configuration_table_I, &_GLOBAL_39_configuration_table_I, &_GLOBAL_40_configuration_table_I, &_GLOBAL_41_configuration_table_I, &_GLOBAL_42_configuration_table_I, &_GLOBAL_43_configuration_table_I, &_GLOBAL_44_configuration_table_I, &_GLOBAL_45_configuration_table_I, &_GLOBAL_46_configuration_table_I, &_GLOBAL_47_configuration_table_I, &_GLOBAL_48_configuration_table_I, &_GLOBAL_49_configuration_table_I, };    

            
            
            
            

            
            
            
            
            
            
# 725 "freebsd5/net/zlib.c"
int deflateInit_(strm, level, version, stream_size)
    z_streamp strm;
    int level;
    const char *version;
    int stream_size;
{
    return deflateInit2_(strm, level, 8, 15, 8,
    0, version, stream_size);

}


int deflateInit2_(strm, level, method, windowBits, memLevel, strategy,
    version, stream_size)
    z_streamp strm;
    int level;
    int method;
    int windowBits;
    int memLevel;
    int strategy;
    const char *version;
    int stream_size;
{
    deflate_state *s;
    int noheader = 0;
    typedef  char  _GLOBAL_60_T; static  _GLOBAL_60_T  * global_my_version[NUM_STACKS] = {  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  "1.0.4P",  };     

    ushf *overlay;




    if (version == 0 || version[0] != global_my_version[get_stack_id()][0] ||
        stream_size != sizeof(z_stream)) {
 return (-6);
    }
    if (strm == 0) return (-2);

    strm->msg = 0;
# 772 "freebsd5/net/zlib.c"
    if (level == (-1)) level = 6;

    if (windowBits < 0) {
        noheader = 1;
        windowBits = -windowBits;
    }
    if (memLevel < 1 || memLevel > 9 || method != 8 ||
        windowBits < 9 || windowBits > 15 || level < 0 || level > 9 ||
 strategy < 0 || strategy > 2) {
        return (-2);
    }
    s = (deflate_state *) (*((strm)->zalloc))((strm)->opaque, (1), (sizeof(deflate_state)));
    if (s == 0) return (-4);
    strm->state = (struct internal_state *)s;
    s->strm = strm;

    s->noheader = noheader;
    s->w_bits = windowBits;
    s->w_size = 1 << s->w_bits;
    s->w_mask = s->w_size - 1;

    s->hash_bits = memLevel + 7;
    s->hash_size = 1 << s->hash_bits;
    s->hash_mask = s->hash_size - 1;
    s->hash_shift = ((s->hash_bits+3 -1)/3);

    s->window = (Bytef *) (*((strm)->zalloc))((strm)->opaque, (s->w_size), (2*sizeof(Byte)));
    s->prev = (Posf *) (*((strm)->zalloc))((strm)->opaque, (s->w_size), (sizeof(Pos)));
    s->head = (Posf *) (*((strm)->zalloc))((strm)->opaque, (s->hash_size), (sizeof(Pos)));

    s->lit_bufsize = 1 << (memLevel + 6);

    overlay = (ushf *) (*((strm)->zalloc))((strm)->opaque, (s->lit_bufsize), (sizeof(ush)+2));
    s->pending_buf = (uchf *) overlay;
    s->pending_buf_size = (ulg)s->lit_bufsize * (sizeof(ush)+2L);

    if (s->window == 0 || s->prev == 0 || s->head == 0 ||
        s->pending_buf == 0) {
        strm->msg = (const char*)(*_GLOBAL_z_errmsg_17_A[get_stack_id()])[2 -((-4))];
        deflateEnd (strm);
        return (-4);
    }
    s->d_buf = overlay + s->lit_bufsize/sizeof(ush);
    s->l_buf = s->pending_buf + (1+sizeof(ush))*s->lit_bufsize;

    s->level = level;
    s->strategy = strategy;
    s->method = (Byte)method;

    return deflateReset(strm);
}


int deflateSetDictionary (strm, dictionary, dictLength)
    z_streamp strm;
    const Bytef *dictionary;
    uInt dictLength;
{
    deflate_state *s;
    uInt length = dictLength;
    uInt n;
    IPos hash_head = 0;

    if (strm == 0 || strm->state == 0 || dictionary == 0)
 return (-2);

    s = (deflate_state *) strm->state;
    if (s->status != 42) return (-2);

    strm->adler = adler32(strm->adler, dictionary, dictLength);

    if (length < 3) return 0;
    if (length > ((s)->w_size-(258 +3 +1))) {
 length = ((s)->w_size-(258 +3 +1));

 dictionary += dictLength - length;

    }
    memcpy((charf *)s->window, dictionary, length);
    s->strstart = length;
    s->block_start = (long)length;





    s->ins_h = s->window[0];
    (s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[1])) & s->hash_mask);
    for (n = 0; n <= length - 3; n++) {
 ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(n) + (3 -1)])) & s->hash_mask), s->prev[(n) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (Pos)(n));
    }
    if (hash_head) hash_head = 0;
    return 0;
}


int deflateReset (strm)
    z_streamp strm;
{
    deflate_state *s;

    if (strm == 0 || strm->state == 0 ||
        strm->zalloc == 0 || strm->zfree == 0) return (-2);

    strm->total_in = strm->total_out = 0;
    strm->msg = 0;
    strm->data_type = 2;

    s = (deflate_state *)strm->state;
    s->pending = 0;
    s->pending_out = s->pending_buf;

    if (s->noheader < 0) {
        s->noheader = 0;
    }
    s->status = s->noheader ? 113 : 42;
    strm->adler = 1;
    s->last_flush = 0;

    _tr_init(s);
    lm_init(s);

    return 0;
}


int deflateParams(strm, level, strategy)
    z_streamp strm;
    int level;
    int strategy;
{
    deflate_state *s;
    compress_func func;
    int err = 0;

    if (strm == 0 || strm->state == 0) return (-2);
    s = (deflate_state *) strm->state;

    if (level == (-1)) {
 level = 6;
    }
    if (level < 0 || level > 9 || strategy < 0 || strategy > 2) {
 return (-2);
    }
    func = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].func;

    if (func != (*_GLOBAL_configuration_table_19_A[get_stack_id()])[level].func && strm->total_in != 0) {

 err = deflate(strm, 1);
    }
    if (s->level != level) {
 s->level = level;
 s->max_lazy_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[level].max_lazy;
 s->good_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[level].good_length;
 s->nice_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[level].nice_length;
 s->max_chain_length = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[level].max_chain;
    }
    s->strategy = strategy;
    return err;
}






static void putShortMSB (s, b)
    deflate_state *s;
    uInt b;
{
    {s->pending_buf[s->pending++] = ((Byte)(b >> 8));};
    {s->pending_buf[s->pending++] = ((Byte)(b & 0xff));};
}







static void flush_pending(strm)
    z_streamp strm;
{
    deflate_state *s = (deflate_state *) strm->state;
    unsigned len = s->pending;

    if (len > strm->avail_out) len = strm->avail_out;
    if (len == 0) return;

    if (strm->next_out != 0) {
 memcpy(strm->next_out, s->pending_out, len);
 strm->next_out += len;
    }
    s->pending_out += len;
    strm->total_out += len;
    strm->avail_out -= len;
    s->pending -= len;
    if (s->pending == 0) {
        s->pending_out = s->pending_buf;
    }
}


int deflate (strm, flush)
    z_streamp strm;
    int flush;
{
    int old_flush;
    deflate_state *s;

    if (strm == 0 || strm->state == 0 ||
 flush > 5 || flush < 0) {
        return (-2);
    }
    s = (deflate_state *) strm->state;

    if ((strm->next_in == 0 && strm->avail_in != 0) ||
 (s->status == 666 && flush != 5)) {
        return (strm->msg = (const char*)(*_GLOBAL_z_errmsg_17_A[get_stack_id()])[2 -((-2))], ((-2)));
    }
    if (strm->avail_out == 0) return (strm->msg = (const char*)(*_GLOBAL_z_errmsg_17_A[get_stack_id()])[2 -((-5))], ((-5)));

    s->strm = strm;
    old_flush = s->last_flush;
    s->last_flush = flush;


    if (s->status == 42) {

        uInt header = (8 + ((s->w_bits-8)<<4)) << 8;
        uInt level_flags = (s->level-1) >> 1;

        if (level_flags > 3) level_flags = 3;
        header |= (level_flags << 6);
 if (s->strstart != 0) header |= 0x20;
        header += 31 - (header % 31);

        s->status = 113;
        putShortMSB(s, header);


 if (s->strstart != 0) {
     putShortMSB(s, (uInt)(strm->adler >> 16));
     putShortMSB(s, (uInt)(strm->adler & 0xffff));
 }
 strm->adler = 1L;
    }


    if (s->pending != 0) {
        flush_pending(strm);
        if (strm->avail_out == 0) {






     s->last_flush = -1;
     return 0;
 }





    } else if (strm->avail_in == 0 && flush <= old_flush &&
        flush != 5) {
        return (strm->msg = (const char*)(*_GLOBAL_z_errmsg_17_A[get_stack_id()])[2 -((-5))], ((-5)));
    }


    if (s->status == 666 && strm->avail_in != 0) {
        return (strm->msg = (const char*)(*_GLOBAL_z_errmsg_17_A[get_stack_id()])[2 -((-5))], ((-5)));
    }



    if (strm->avail_in != 0 || s->lookahead != 0 ||
        (flush != 0 && s->status != 666)) {
        block_state bstate;

 bstate = (*((*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].func))(s, flush);

        if (bstate == finish_started || bstate == finish_done) {
            s->status = 666;
        }
        if (bstate == need_more || bstate == finish_started) {
     if (strm->avail_out == 0) {
         s->last_flush = -1;
     }
     return 0;







 }
        if (bstate == block_done) {
            if (flush == 1) {
                _tr_align(s);
     } else if (flush == 2) {


  _tr_stored_type_only(s);
            } else {
                _tr_stored_block(s, (char*)0, 0L, 0);



                if (flush == 4) {
                    s->head[s->hash_size-1] = 0; memset((charf *)s->head, 0, (unsigned)(s->hash_size-1)*sizeof(*s->head));;
                }
            }
            flush_pending(strm);
     if (strm->avail_out == 0) {
       s->last_flush = -1;
       return 0;
     }
        }
    }
    ;

    if (flush != 5) return 0;
    if (s->noheader) return 1;


    putShortMSB(s, (uInt)(strm->adler >> 16));
    putShortMSB(s, (uInt)(strm->adler & 0xffff));
    flush_pending(strm);



    s->noheader = -1;
    return s->pending != 0 ? 0 : 1;
}


int deflateEnd (strm)
    z_streamp strm;
{
    int status;
    deflate_state *s;

    if (strm == 0 || strm->state == 0) return (-2);
    s = (deflate_state *) strm->state;

    status = s->status;
    if (status != 42 && status != 113 &&
 status != 666) {
      return (-2);
    }


    {if (s->pending_buf) (*((strm)->zfree))((strm)->opaque, (voidpf)(s->pending_buf));};
    {if (s->head) (*((strm)->zfree))((strm)->opaque, (voidpf)(s->head));};
    {if (s->prev) (*((strm)->zfree))((strm)->opaque, (voidpf)(s->prev));};
    {if (s->window) (*((strm)->zfree))((strm)->opaque, (voidpf)(s->window));};

    (*((strm)->zfree))((strm)->opaque, (voidpf)(s));
    strm->state = 0;

    return status == 113 ? (-3) : 0;
}




int deflateCopy (dest, source)
    z_streamp dest;
    z_streamp source;
{
    deflate_state *ds;
    deflate_state *ss;
    ushf *overlay;

    if (source == 0 || dest == 0 || source->state == 0)
        return (-2);
    ss = (deflate_state *) source->state;

    memcpy(dest, source, sizeof(*dest));

    ds = (deflate_state *) (*((dest)->zalloc))((dest)->opaque, (1), (sizeof(deflate_state)));
    if (ds == 0) return (-4);
    dest->state = (struct internal_state *) ds;
    memcpy(ds, ss, sizeof(*ds));
    ds->strm = dest;

    ds->window = (Bytef *) (*((dest)->zalloc))((dest)->opaque, (ds->w_size), (2*sizeof(Byte)));
    ds->prev = (Posf *) (*((dest)->zalloc))((dest)->opaque, (ds->w_size), (sizeof(Pos)));
    ds->head = (Posf *) (*((dest)->zalloc))((dest)->opaque, (ds->hash_size), (sizeof(Pos)));
    overlay = (ushf *) (*((dest)->zalloc))((dest)->opaque, (ds->lit_bufsize), (sizeof(ush)+2));
    ds->pending_buf = (uchf *) overlay;

    if (ds->window == 0 || ds->prev == 0 || ds->head == 0 ||
        ds->pending_buf == 0) {
        deflateEnd (dest);
        return (-4);
    }

    memcpy(ds->window, ss->window, ds->w_size * 2 * sizeof(Byte));
    memcpy(ds->prev, ss->prev, ds->w_size * sizeof(Pos));
    memcpy(ds->head, ss->head, ds->hash_size * sizeof(Pos));
    memcpy(ds->pending_buf, ss->pending_buf, (uInt)ds->pending_buf_size);

    ds->pending_out = ds->pending_buf + (ss->pending_out - ss->pending_buf);
    ds->d_buf = overlay + ds->lit_bufsize/sizeof(ush);
    ds->l_buf = ds->pending_buf + (1+sizeof(ush))*ds->lit_bufsize;

    ds->l_desc.dyn_tree = ds->dyn_ltree;
    ds->d_desc.dyn_tree = ds->dyn_dtree;
    ds->bl_desc.dyn_tree = ds->bl_tree;

    return 0;
}





int deflateOutputPending (strm)
    z_streamp strm;
{
    if (strm == 0 || strm->state == 0) return 0;

    return ((deflate_state *)(strm->state))->pending;
}
# 1209 "freebsd5/net/zlib.c"
static int read_buf(strm, buf, size)
    z_streamp strm;
    charf *buf;
    unsigned size;
{
    unsigned len = strm->avail_in;

    if (len > size) len = size;
    if (len == 0) return 0;

    strm->avail_in -= len;

    if (!((deflate_state *)(strm->state))->noheader) {
        strm->adler = adler32(strm->adler, strm->next_in, len);
    }
    memcpy(buf, strm->next_in, len);
    strm->next_in += len;
    strm->total_in += len;

    return (int)len;
}




static void lm_init (s)
    deflate_state *s;
{
    s->window_size = (ulg)2L*s->w_size;

    s->head[s->hash_size-1] = 0; memset((charf *)s->head, 0, (unsigned)(s->hash_size-1)*sizeof(*s->head));;



    s->max_lazy_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].max_lazy;
    s->good_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].good_length;
    s->nice_match = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].nice_length;
    s->max_chain_length = (*_GLOBAL_configuration_table_19_A[get_stack_id()])[s->level].max_chain;

    s->strstart = 0;
    s->block_start = 0L;
    s->lookahead = 0;
    s->match_length = s->prev_length = 3 -1;
    s->match_available = 0;
    s->ins_h = 0;



}
# 1272 "freebsd5/net/zlib.c"
static uInt longest_match(s, cur_match)
    deflate_state *s;
    IPos cur_match;
{
    unsigned chain_length = s->max_chain_length;
    register Bytef *scan = s->window + s->strstart;
    register Bytef *match;
    register int len;
    int best_len = s->prev_length;
    int nice_match = s->nice_match;
    IPos limit = s->strstart > (IPos)((s)->w_size-(258 +3 +1)) ?
        s->strstart - (IPos)((s)->w_size-(258 +3 +1)) : 0;



    Posf *prev = s->prev;
    uInt wmask = s->w_mask;
# 1298 "freebsd5/net/zlib.c"
    register Bytef *strend = s->window + s->strstart + 258;
    register Byte scan_end1 = scan[best_len-1];
    register Byte scan_end = scan[best_len];





    ;


    if (s->prev_length >= s->good_match) {
        chain_length >>= 2;
    }



    if ((uInt)nice_match > s->lookahead) nice_match = s->lookahead;

    ;

    do {
        ;
        match = s->window + cur_match;
# 1361 "freebsd5/net/zlib.c"
        if (match[best_len] != scan_end ||
            match[best_len-1] != scan_end1 ||
            *match != *scan ||
            *++match != scan[1]) continue;







        scan += 2, match++;
        ;




        do {
        } while (*++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 scan < strend);

        ;

        len = 258 - (int)(strend - scan);
        scan = strend - 258;



        if (len > best_len) {
            s->match_start = cur_match;
            best_len = len;
            if (len >= nice_match) break;



            scan_end1 = scan[best_len-1];
            scan_end = scan[best_len];

        }
    } while ((cur_match = prev[cur_match & wmask]) > limit
             && --chain_length != 0);

    if ((uInt)best_len <= s->lookahead) return best_len;
    return s->lookahead;
}
# 1449 "freebsd5/net/zlib.c"
static void fill_window(s)
    deflate_state *s;
{
    register unsigned n, m;
    register Posf *p;
    unsigned more;
    uInt wsize = s->w_size;

    do {
        more = (unsigned)(s->window_size -(ulg)s->lookahead -(ulg)s->strstart);


        if (more == 0 && s->strstart == 0 && s->lookahead == 0) {
            more = wsize;

        } else if (more == (unsigned)(-1)) {



            more--;




        } else if (s->strstart >= wsize+((s)->w_size-(258 +3 +1))) {

            memcpy((charf *)s->window, (charf *)s->window+wsize,
                   (unsigned)wsize);
            s->match_start -= wsize;
            s->strstart -= wsize;
            s->block_start -= (long) wsize;







            n = s->hash_size;
            p = &s->head[n];
            do {
                m = *--p;
                *p = (Pos)(m >= wsize ? m-wsize : 0);
            } while (--n);

            n = wsize;
            p = &s->prev[n];
            do {
                m = *--p;
                *p = (Pos)(m >= wsize ? m-wsize : 0);



            } while (--n);
            more += wsize;
        }
        if (s->strm->avail_in == 0) return;
# 1518 "freebsd5/net/zlib.c"
        ;

        n = read_buf(s->strm, (charf *)s->window + s->strstart + s->lookahead,
                     more);
        s->lookahead += n;


        if (s->lookahead >= 3) {
            s->ins_h = s->window[s->strstart];
            (s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[s->strstart+1])) & s->hash_mask);



        }




    } while (s->lookahead < (258 +3 +1) && s->strm->avail_in != 0);
}
# 1569 "freebsd5/net/zlib.c"
static block_state deflate_stored(s, flush)
    deflate_state *s;
    int flush;
{



    ulg max_block_size = 0xffff;
    ulg max_start;

    if (max_block_size > s->pending_buf_size - 5) {
        max_block_size = s->pending_buf_size - 5;
    }


    for (;;) {

        if (s->lookahead <= 1) {

           
                                                         ;

            fill_window(s);
            if (s->lookahead == 0 && flush == 0) return need_more;

            if (s->lookahead == 0) break;
        }
 ;

 s->strstart += s->lookahead;
 s->lookahead = 0;


  max_start = s->block_start + max_block_size;
        if (s->strstart == 0 || (ulg)s->strstart >= max_start) {

     s->lookahead = (uInt)(s->strstart - max_start);
     s->strstart = (uInt)max_start;
            { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (0) ? finish_started : need_more; };
 }



        if (s->strstart - (uInt)s->block_start >= ((s)->w_size-(258 +3 +1))) {
            { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (0) ? finish_started : need_more; };
 }
    }
    { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (flush == 5)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (flush == 5) ? finish_started : need_more; };
    return flush == 5 ? finish_done : block_done;
}
# 1627 "freebsd5/net/zlib.c"
static block_state deflate_fast(s, flush)
    deflate_state *s;
    int flush;
{
    IPos hash_head = 0;
    int bflush;

    for (;;) {





        if (s->lookahead < (258 +3 +1)) {
            fill_window(s);
            if (s->lookahead < (258 +3 +1) && flush == 0) {
         return need_more;
     }
            if (s->lookahead == 0) break;
        }




        if (s->lookahead >= 3) {
            ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (Pos)(s->strstart));
        }




        if (hash_head != 0 && s->strstart - hash_head <= ((s)->w_size-(258 +3 +1))) {




            if (s->strategy != 2) {
                s->match_length = longest_match (s, hash_head);
            }

        }
        if (s->match_length >= 3) {
            ;

            bflush = _tr_tally(s, s->strstart - s->match_start,
                               s->match_length - 3);

            s->lookahead -= s->match_length;




            if (s->match_length <= s->max_lazy_match &&
                s->lookahead >= 3) {
                s->match_length--;
                do {
                    s->strstart++;
                    ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (Pos)(s->strstart));



                } while (--s->match_length != 0);
                s->strstart++;
            } else {
                s->strstart += s->match_length;
                s->match_length = 0;
                s->ins_h = s->window[s->strstart];
                (s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[s->strstart+1])) & s->hash_mask);






            }
        } else {

            ;
            bflush = _tr_tally (s, 0, s->window[s->strstart]);
            s->lookahead--;
            s->strstart++;
        }
        if (bflush) { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (0) ? finish_started : need_more; };
    }
    { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (flush == 5)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (flush == 5) ? finish_started : need_more; };
    return flush == 5 ? finish_done : block_done;
}






static block_state deflate_slow(s, flush)
    deflate_state *s;
    int flush;
{
    IPos hash_head = 0;
    int bflush;


    for (;;) {





        if (s->lookahead < (258 +3 +1)) {
            fill_window(s);
            if (s->lookahead < (258 +3 +1) && flush == 0) {
         return need_more;
     }
            if (s->lookahead == 0) break;
        }




        if (s->lookahead >= 3) {
            ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (Pos)(s->strstart));
        }



        s->prev_length = s->match_length, s->prev_match = s->match_start;
        s->match_length = 3 -1;

        if (hash_head != 0 && s->prev_length < s->max_lazy_match &&
            s->strstart - hash_head <= ((s)->w_size-(258 +3 +1))) {




            if (s->strategy != 2) {
                s->match_length = longest_match (s, hash_head);
            }


            if (s->match_length <= 5 && (s->strategy == 1 ||
                 (s->match_length == 3 &&
                  s->strstart - s->match_start > 4096))) {




                s->match_length = 3 -1;
            }
        }



        if (s->prev_length >= 3 && s->match_length <= s->prev_length) {
            uInt max_insert = s->strstart + s->lookahead - 3;


            ;

            bflush = _tr_tally(s, s->strstart -1 - s->prev_match,
                               s->prev_length - 3);






            s->lookahead -= s->prev_length-1;
            s->prev_length -= 2;
            do {
                if (++s->strstart <= max_insert) {
                    ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (Pos)(s->strstart));
                }
            } while (--s->prev_length != 0);
            s->match_available = 0;
            s->match_length = 3 -1;
            s->strstart++;

            if (bflush) { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (0) ? finish_started : need_more; };

        } else if (s->match_available) {




            ;
            if (_tr_tally (s, 0, s->window[s->strstart-1])) {
                { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (0)); s->block_start = s->strstart; flush_pending(s->strm); ; };
            }
            s->strstart++;
            s->lookahead--;
            if (s->strm->avail_out == 0) return need_more;
        } else {



            s->match_available = 1;
            s->strstart++;
            s->lookahead--;
        }
    }
    ;
    if (s->match_available) {
        ;
        _tr_tally (s, 0, s->window[s->strstart-1]);
        s->match_available = 0;
    }
    { { _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (ulg)((long)s->strstart - s->block_start), (flush == 5)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return (flush == 5) ? finish_started : need_more; };
    return flush == 5 ? finish_done : block_done;
}
# 1896 "freebsd5/net/zlib.c"
typedef  int  _GLOBAL_61_T; static  _GLOBAL_61_T  _GLOBAL_0_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_1_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_2_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_3_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_4_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_5_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_6_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_7_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_8_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_9_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_10_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_11_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_12_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_13_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_14_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_15_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_16_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_17_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_18_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_19_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_20_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_21_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_22_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_23_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_24_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_25_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_26_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_27_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_28_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_29_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_30_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_31_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_32_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_33_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_34_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_35_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_36_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_37_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_38_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_39_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_40_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_41_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_42_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_43_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_44_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_45_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_46_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_47_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_48_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_49_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_lbits_I) *_GLOBAL_extra_lbits_20_A[NUM_STACKS] = { &_GLOBAL_0_extra_lbits_I, &_GLOBAL_1_extra_lbits_I, &_GLOBAL_2_extra_lbits_I, &_GLOBAL_3_extra_lbits_I, &_GLOBAL_4_extra_lbits_I, &_GLOBAL_5_extra_lbits_I, &_GLOBAL_6_extra_lbits_I, &_GLOBAL_7_extra_lbits_I, &_GLOBAL_8_extra_lbits_I, &_GLOBAL_9_extra_lbits_I, &_GLOBAL_10_extra_lbits_I, &_GLOBAL_11_extra_lbits_I, &_GLOBAL_12_extra_lbits_I, &_GLOBAL_13_extra_lbits_I, &_GLOBAL_14_extra_lbits_I, &_GLOBAL_15_extra_lbits_I, &_GLOBAL_16_extra_lbits_I, &_GLOBAL_17_extra_lbits_I, &_GLOBAL_18_extra_lbits_I, &_GLOBAL_19_extra_lbits_I, &_GLOBAL_20_extra_lbits_I, &_GLOBAL_21_extra_lbits_I, &_GLOBAL_22_extra_lbits_I, &_GLOBAL_23_extra_lbits_I, &_GLOBAL_24_extra_lbits_I, &_GLOBAL_25_extra_lbits_I, &_GLOBAL_26_extra_lbits_I, &_GLOBAL_27_extra_lbits_I, &_GLOBAL_28_extra_lbits_I, &_GLOBAL_29_extra_lbits_I, &_GLOBAL_30_extra_lbits_I, &_GLOBAL_31_extra_lbits_I, &_GLOBAL_32_extra_lbits_I, &_GLOBAL_33_extra_lbits_I, &_GLOBAL_34_extra_lbits_I, &_GLOBAL_35_extra_lbits_I, &_GLOBAL_36_extra_lbits_I, &_GLOBAL_37_extra_lbits_I, &_GLOBAL_38_extra_lbits_I, &_GLOBAL_39_extra_lbits_I, &_GLOBAL_40_extra_lbits_I, &_GLOBAL_41_extra_lbits_I, &_GLOBAL_42_extra_lbits_I, &_GLOBAL_43_extra_lbits_I, &_GLOBAL_44_extra_lbits_I, &_GLOBAL_45_extra_lbits_I, &_GLOBAL_46_extra_lbits_I, &_GLOBAL_47_extra_lbits_I, &_GLOBAL_48_extra_lbits_I, &_GLOBAL_49_extra_lbits_I, };  
    

typedef  int  _GLOBAL_62_T; static  _GLOBAL_62_T  _GLOBAL_0_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_1_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_2_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_3_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_4_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_5_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_6_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_7_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_8_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_9_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_10_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_11_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_12_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_13_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_14_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_15_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_16_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_17_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_18_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_19_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_20_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_21_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_22_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_23_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_24_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_25_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_26_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_27_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_28_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_29_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_30_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_31_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_32_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_33_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_34_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_35_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_36_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_37_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_38_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_39_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_40_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_41_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_42_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_43_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_44_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_45_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_46_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_47_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_48_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_49_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_dbits_I) *_GLOBAL_extra_dbits_21_A[NUM_STACKS] = { &_GLOBAL_0_extra_dbits_I, &_GLOBAL_1_extra_dbits_I, &_GLOBAL_2_extra_dbits_I, &_GLOBAL_3_extra_dbits_I, &_GLOBAL_4_extra_dbits_I, &_GLOBAL_5_extra_dbits_I, &_GLOBAL_6_extra_dbits_I, &_GLOBAL_7_extra_dbits_I, &_GLOBAL_8_extra_dbits_I, &_GLOBAL_9_extra_dbits_I, &_GLOBAL_10_extra_dbits_I, &_GLOBAL_11_extra_dbits_I, &_GLOBAL_12_extra_dbits_I, &_GLOBAL_13_extra_dbits_I, &_GLOBAL_14_extra_dbits_I, &_GLOBAL_15_extra_dbits_I, &_GLOBAL_16_extra_dbits_I, &_GLOBAL_17_extra_dbits_I, &_GLOBAL_18_extra_dbits_I, &_GLOBAL_19_extra_dbits_I, &_GLOBAL_20_extra_dbits_I, &_GLOBAL_21_extra_dbits_I, &_GLOBAL_22_extra_dbits_I, &_GLOBAL_23_extra_dbits_I, &_GLOBAL_24_extra_dbits_I, &_GLOBAL_25_extra_dbits_I, &_GLOBAL_26_extra_dbits_I, &_GLOBAL_27_extra_dbits_I, &_GLOBAL_28_extra_dbits_I, &_GLOBAL_29_extra_dbits_I, &_GLOBAL_30_extra_dbits_I, &_GLOBAL_31_extra_dbits_I, &_GLOBAL_32_extra_dbits_I, &_GLOBAL_33_extra_dbits_I, &_GLOBAL_34_extra_dbits_I, &_GLOBAL_35_extra_dbits_I, &_GLOBAL_36_extra_dbits_I, &_GLOBAL_37_extra_dbits_I, &_GLOBAL_38_extra_dbits_I, &_GLOBAL_39_extra_dbits_I, &_GLOBAL_40_extra_dbits_I, &_GLOBAL_41_extra_dbits_I, &_GLOBAL_42_extra_dbits_I, &_GLOBAL_43_extra_dbits_I, &_GLOBAL_44_extra_dbits_I, &_GLOBAL_45_extra_dbits_I, &_GLOBAL_46_extra_dbits_I, &_GLOBAL_47_extra_dbits_I, &_GLOBAL_48_extra_dbits_I, &_GLOBAL_49_extra_dbits_I, };  
    

typedef  int  _GLOBAL_63_T; static  _GLOBAL_63_T  _GLOBAL_0_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_1_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_2_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_3_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_4_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_5_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_6_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_7_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_8_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_9_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_10_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_11_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_12_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_13_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_14_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_15_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_16_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_17_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_18_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_19_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_20_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_21_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_22_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_23_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_24_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_25_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_26_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_27_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_28_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_29_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_30_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_31_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_32_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_33_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_34_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_35_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_36_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_37_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_38_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_39_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_40_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_41_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_42_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_43_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_44_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_45_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_46_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_47_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_48_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_49_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_blbits_I) *_GLOBAL_extra_blbits_22_A[NUM_STACKS] = { &_GLOBAL_0_extra_blbits_I, &_GLOBAL_1_extra_blbits_I, &_GLOBAL_2_extra_blbits_I, &_GLOBAL_3_extra_blbits_I, &_GLOBAL_4_extra_blbits_I, &_GLOBAL_5_extra_blbits_I, &_GLOBAL_6_extra_blbits_I, &_GLOBAL_7_extra_blbits_I, &_GLOBAL_8_extra_blbits_I, &_GLOBAL_9_extra_blbits_I, &_GLOBAL_10_extra_blbits_I, &_GLOBAL_11_extra_blbits_I, &_GLOBAL_12_extra_blbits_I, &_GLOBAL_13_extra_blbits_I, &_GLOBAL_14_extra_blbits_I, &_GLOBAL_15_extra_blbits_I, &_GLOBAL_16_extra_blbits_I, &_GLOBAL_17_extra_blbits_I, &_GLOBAL_18_extra_blbits_I, &_GLOBAL_19_extra_blbits_I, &_GLOBAL_20_extra_blbits_I, &_GLOBAL_21_extra_blbits_I, &_GLOBAL_22_extra_blbits_I, &_GLOBAL_23_extra_blbits_I, &_GLOBAL_24_extra_blbits_I, &_GLOBAL_25_extra_blbits_I, &_GLOBAL_26_extra_blbits_I, &_GLOBAL_27_extra_blbits_I, &_GLOBAL_28_extra_blbits_I, &_GLOBAL_29_extra_blbits_I, &_GLOBAL_30_extra_blbits_I, &_GLOBAL_31_extra_blbits_I, &_GLOBAL_32_extra_blbits_I, &_GLOBAL_33_extra_blbits_I, &_GLOBAL_34_extra_blbits_I, &_GLOBAL_35_extra_blbits_I, &_GLOBAL_36_extra_blbits_I, &_GLOBAL_37_extra_blbits_I, &_GLOBAL_38_extra_blbits_I, &_GLOBAL_39_extra_blbits_I, &_GLOBAL_40_extra_blbits_I, &_GLOBAL_41_extra_blbits_I, &_GLOBAL_42_extra_blbits_I, &_GLOBAL_43_extra_blbits_I, &_GLOBAL_44_extra_blbits_I, &_GLOBAL_45_extra_blbits_I, &_GLOBAL_46_extra_blbits_I, &_GLOBAL_47_extra_blbits_I, &_GLOBAL_48_extra_blbits_I, &_GLOBAL_49_extra_blbits_I, };  
    

typedef  uch  _GLOBAL_64_T; static  _GLOBAL_64_T  _GLOBAL_0_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_1_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_2_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_3_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_4_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_5_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_6_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_7_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_8_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_9_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_10_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_11_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_12_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_13_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_14_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_15_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_16_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_17_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_18_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_19_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_20_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_21_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_22_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_23_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_24_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_25_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_26_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_27_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_28_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_29_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_30_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_31_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_32_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_33_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_34_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_35_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_36_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_37_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_38_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_39_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_40_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_41_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_42_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_43_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_44_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_45_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_46_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_47_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_48_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_49_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bl_order_I) *_GLOBAL_bl_order_23_A[NUM_STACKS] = { &_GLOBAL_0_bl_order_I, &_GLOBAL_1_bl_order_I, &_GLOBAL_2_bl_order_I, &_GLOBAL_3_bl_order_I, &_GLOBAL_4_bl_order_I, &_GLOBAL_5_bl_order_I, &_GLOBAL_6_bl_order_I, &_GLOBAL_7_bl_order_I, &_GLOBAL_8_bl_order_I, &_GLOBAL_9_bl_order_I, &_GLOBAL_10_bl_order_I, &_GLOBAL_11_bl_order_I, &_GLOBAL_12_bl_order_I, &_GLOBAL_13_bl_order_I, &_GLOBAL_14_bl_order_I, &_GLOBAL_15_bl_order_I, &_GLOBAL_16_bl_order_I, &_GLOBAL_17_bl_order_I, &_GLOBAL_18_bl_order_I, &_GLOBAL_19_bl_order_I, &_GLOBAL_20_bl_order_I, &_GLOBAL_21_bl_order_I, &_GLOBAL_22_bl_order_I, &_GLOBAL_23_bl_order_I, &_GLOBAL_24_bl_order_I, &_GLOBAL_25_bl_order_I, &_GLOBAL_26_bl_order_I, &_GLOBAL_27_bl_order_I, &_GLOBAL_28_bl_order_I, &_GLOBAL_29_bl_order_I, &_GLOBAL_30_bl_order_I, &_GLOBAL_31_bl_order_I, &_GLOBAL_32_bl_order_I, &_GLOBAL_33_bl_order_I, &_GLOBAL_34_bl_order_I, &_GLOBAL_35_bl_order_I, &_GLOBAL_36_bl_order_I, &_GLOBAL_37_bl_order_I, &_GLOBAL_38_bl_order_I, &_GLOBAL_39_bl_order_I, &_GLOBAL_40_bl_order_I, &_GLOBAL_41_bl_order_I, &_GLOBAL_42_bl_order_I, &_GLOBAL_43_bl_order_I, &_GLOBAL_44_bl_order_I, &_GLOBAL_45_bl_order_I, &_GLOBAL_46_bl_order_I, &_GLOBAL_47_bl_order_I, &_GLOBAL_48_bl_order_I, &_GLOBAL_49_bl_order_I, };  
    
# 1920 "freebsd5/net/zlib.c"
typedef  ct_data  _GLOBAL_65_T; static  _GLOBAL_65_T  _GLOBAL_0_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_1_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_2_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_3_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_4_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_5_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_6_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_7_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_8_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_9_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_10_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_11_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_12_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_13_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_14_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_15_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_16_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_17_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_18_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_19_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_20_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_21_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_22_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_23_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_24_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_25_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_26_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_27_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_28_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_29_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_30_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_31_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_32_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_33_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_34_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_35_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_36_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_37_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_38_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_39_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_40_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_41_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_42_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_43_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_44_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_45_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_46_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_47_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_48_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_49_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_ltree_I) *_GLOBAL_static_ltree_24_A[NUM_STACKS] = { &_GLOBAL_0_static_ltree_I, &_GLOBAL_1_static_ltree_I, &_GLOBAL_2_static_ltree_I, &_GLOBAL_3_static_ltree_I, &_GLOBAL_4_static_ltree_I, &_GLOBAL_5_static_ltree_I, &_GLOBAL_6_static_ltree_I, &_GLOBAL_7_static_ltree_I, &_GLOBAL_8_static_ltree_I, &_GLOBAL_9_static_ltree_I, &_GLOBAL_10_static_ltree_I, &_GLOBAL_11_static_ltree_I, &_GLOBAL_12_static_ltree_I, &_GLOBAL_13_static_ltree_I, &_GLOBAL_14_static_ltree_I, &_GLOBAL_15_static_ltree_I, &_GLOBAL_16_static_ltree_I, &_GLOBAL_17_static_ltree_I, &_GLOBAL_18_static_ltree_I, &_GLOBAL_19_static_ltree_I, &_GLOBAL_20_static_ltree_I, &_GLOBAL_21_static_ltree_I, &_GLOBAL_22_static_ltree_I, &_GLOBAL_23_static_ltree_I, &_GLOBAL_24_static_ltree_I, &_GLOBAL_25_static_ltree_I, &_GLOBAL_26_static_ltree_I, &_GLOBAL_27_static_ltree_I, &_GLOBAL_28_static_ltree_I, &_GLOBAL_29_static_ltree_I, &_GLOBAL_30_static_ltree_I, &_GLOBAL_31_static_ltree_I, &_GLOBAL_32_static_ltree_I, &_GLOBAL_33_static_ltree_I, &_GLOBAL_34_static_ltree_I, &_GLOBAL_35_static_ltree_I, &_GLOBAL_36_static_ltree_I, &_GLOBAL_37_static_ltree_I, &_GLOBAL_38_static_ltree_I, &_GLOBAL_39_static_ltree_I, &_GLOBAL_40_static_ltree_I, &_GLOBAL_41_static_ltree_I, &_GLOBAL_42_static_ltree_I, &_GLOBAL_43_static_ltree_I, &_GLOBAL_44_static_ltree_I, &_GLOBAL_45_static_ltree_I, &_GLOBAL_46_static_ltree_I, &_GLOBAL_47_static_ltree_I, &_GLOBAL_48_static_ltree_I, &_GLOBAL_49_static_ltree_I, };   






typedef  ct_data  _GLOBAL_66_T; static  _GLOBAL_66_T  _GLOBAL_0_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_1_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_2_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_3_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_4_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_5_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_6_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_7_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_8_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_9_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_10_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_11_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_12_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_13_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_14_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_15_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_16_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_17_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_18_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_19_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_20_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_21_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_22_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_23_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_24_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_25_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_26_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_27_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_28_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_29_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_30_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_31_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_32_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_33_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_34_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_35_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_36_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_37_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_38_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_39_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_40_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_41_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_42_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_43_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_44_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_45_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_46_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_47_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_48_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_49_static_dtree_I [ 30 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_dtree_I) *_GLOBAL_static_dtree_25_A[NUM_STACKS] = { &_GLOBAL_0_static_dtree_I, &_GLOBAL_1_static_dtree_I, &_GLOBAL_2_static_dtree_I, &_GLOBAL_3_static_dtree_I, &_GLOBAL_4_static_dtree_I, &_GLOBAL_5_static_dtree_I, &_GLOBAL_6_static_dtree_I, &_GLOBAL_7_static_dtree_I, &_GLOBAL_8_static_dtree_I, &_GLOBAL_9_static_dtree_I, &_GLOBAL_10_static_dtree_I, &_GLOBAL_11_static_dtree_I, &_GLOBAL_12_static_dtree_I, &_GLOBAL_13_static_dtree_I, &_GLOBAL_14_static_dtree_I, &_GLOBAL_15_static_dtree_I, &_GLOBAL_16_static_dtree_I, &_GLOBAL_17_static_dtree_I, &_GLOBAL_18_static_dtree_I, &_GLOBAL_19_static_dtree_I, &_GLOBAL_20_static_dtree_I, &_GLOBAL_21_static_dtree_I, &_GLOBAL_22_static_dtree_I, &_GLOBAL_23_static_dtree_I, &_GLOBAL_24_static_dtree_I, &_GLOBAL_25_static_dtree_I, &_GLOBAL_26_static_dtree_I, &_GLOBAL_27_static_dtree_I, &_GLOBAL_28_static_dtree_I, &_GLOBAL_29_static_dtree_I, &_GLOBAL_30_static_dtree_I, &_GLOBAL_31_static_dtree_I, &_GLOBAL_32_static_dtree_I, &_GLOBAL_33_static_dtree_I, &_GLOBAL_34_static_dtree_I, &_GLOBAL_35_static_dtree_I, &_GLOBAL_36_static_dtree_I, &_GLOBAL_37_static_dtree_I, &_GLOBAL_38_static_dtree_I, &_GLOBAL_39_static_dtree_I, &_GLOBAL_40_static_dtree_I, &_GLOBAL_41_static_dtree_I, &_GLOBAL_42_static_dtree_I, &_GLOBAL_43_static_dtree_I, &_GLOBAL_44_static_dtree_I, &_GLOBAL_45_static_dtree_I, &_GLOBAL_46_static_dtree_I, &_GLOBAL_47_static_dtree_I, &_GLOBAL_48_static_dtree_I, &_GLOBAL_49_static_dtree_I, };  




typedef  uch  _GLOBAL_67_T; static  _GLOBAL_67_T  _GLOBAL_0_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_1_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_2_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_3_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_4_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_5_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_6_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_7_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_8_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_9_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_10_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_11_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_12_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_13_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_14_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_15_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_16_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_17_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_18_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_19_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_20_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_21_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_22_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_23_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_24_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_25_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_26_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_27_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_28_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_29_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_30_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_31_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_32_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_33_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_34_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_35_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_36_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_37_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_38_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_39_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_40_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_41_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_42_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_43_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_44_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_45_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_46_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_47_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_48_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_49_dist_code_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dist_code_I) *_GLOBAL_dist_code_26_A[NUM_STACKS] = { &_GLOBAL_0_dist_code_I, &_GLOBAL_1_dist_code_I, &_GLOBAL_2_dist_code_I, &_GLOBAL_3_dist_code_I, &_GLOBAL_4_dist_code_I, &_GLOBAL_5_dist_code_I, &_GLOBAL_6_dist_code_I, &_GLOBAL_7_dist_code_I, &_GLOBAL_8_dist_code_I, &_GLOBAL_9_dist_code_I, &_GLOBAL_10_dist_code_I, &_GLOBAL_11_dist_code_I, &_GLOBAL_12_dist_code_I, &_GLOBAL_13_dist_code_I, &_GLOBAL_14_dist_code_I, &_GLOBAL_15_dist_code_I, &_GLOBAL_16_dist_code_I, &_GLOBAL_17_dist_code_I, &_GLOBAL_18_dist_code_I, &_GLOBAL_19_dist_code_I, &_GLOBAL_20_dist_code_I, &_GLOBAL_21_dist_code_I, &_GLOBAL_22_dist_code_I, &_GLOBAL_23_dist_code_I, &_GLOBAL_24_dist_code_I, &_GLOBAL_25_dist_code_I, &_GLOBAL_26_dist_code_I, &_GLOBAL_27_dist_code_I, &_GLOBAL_28_dist_code_I, &_GLOBAL_29_dist_code_I, &_GLOBAL_30_dist_code_I, &_GLOBAL_31_dist_code_I, &_GLOBAL_32_dist_code_I, &_GLOBAL_33_dist_code_I, &_GLOBAL_34_dist_code_I, &_GLOBAL_35_dist_code_I, &_GLOBAL_36_dist_code_I, &_GLOBAL_37_dist_code_I, &_GLOBAL_38_dist_code_I, &_GLOBAL_39_dist_code_I, &_GLOBAL_40_dist_code_I, &_GLOBAL_41_dist_code_I, &_GLOBAL_42_dist_code_I, &_GLOBAL_43_dist_code_I, &_GLOBAL_44_dist_code_I, &_GLOBAL_45_dist_code_I, &_GLOBAL_46_dist_code_I, &_GLOBAL_47_dist_code_I, &_GLOBAL_48_dist_code_I, &_GLOBAL_49_dist_code_I, };  





typedef  uch  _GLOBAL_68_T; static  _GLOBAL_68_T  _GLOBAL_0_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_1_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_2_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_3_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_4_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_5_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_6_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_7_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_8_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_9_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_10_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_11_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_12_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_13_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_14_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_15_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_16_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_17_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_18_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_19_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_20_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_21_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_22_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_23_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_24_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_25_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_26_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_27_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_28_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_29_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_30_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_31_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_32_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_33_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_34_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_35_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_36_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_37_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_38_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_39_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_40_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_41_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_42_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_43_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_44_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_45_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_46_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_47_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_48_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_49_length_code_I [ 258 - 3  + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_length_code_I) *_GLOBAL_length_code_27_A[NUM_STACKS] = { &_GLOBAL_0_length_code_I, &_GLOBAL_1_length_code_I, &_GLOBAL_2_length_code_I, &_GLOBAL_3_length_code_I, &_GLOBAL_4_length_code_I, &_GLOBAL_5_length_code_I, &_GLOBAL_6_length_code_I, &_GLOBAL_7_length_code_I, &_GLOBAL_8_length_code_I, &_GLOBAL_9_length_code_I, &_GLOBAL_10_length_code_I, &_GLOBAL_11_length_code_I, &_GLOBAL_12_length_code_I, &_GLOBAL_13_length_code_I, &_GLOBAL_14_length_code_I, &_GLOBAL_15_length_code_I, &_GLOBAL_16_length_code_I, &_GLOBAL_17_length_code_I, &_GLOBAL_18_length_code_I, &_GLOBAL_19_length_code_I, &_GLOBAL_20_length_code_I, &_GLOBAL_21_length_code_I, &_GLOBAL_22_length_code_I, &_GLOBAL_23_length_code_I, &_GLOBAL_24_length_code_I, &_GLOBAL_25_length_code_I, &_GLOBAL_26_length_code_I, &_GLOBAL_27_length_code_I, &_GLOBAL_28_length_code_I, &_GLOBAL_29_length_code_I, &_GLOBAL_30_length_code_I, &_GLOBAL_31_length_code_I, &_GLOBAL_32_length_code_I, &_GLOBAL_33_length_code_I, &_GLOBAL_34_length_code_I, &_GLOBAL_35_length_code_I, &_GLOBAL_36_length_code_I, &_GLOBAL_37_length_code_I, &_GLOBAL_38_length_code_I, &_GLOBAL_39_length_code_I, &_GLOBAL_40_length_code_I, &_GLOBAL_41_length_code_I, &_GLOBAL_42_length_code_I, &_GLOBAL_43_length_code_I, &_GLOBAL_44_length_code_I, &_GLOBAL_45_length_code_I, &_GLOBAL_46_length_code_I, &_GLOBAL_47_length_code_I, &_GLOBAL_48_length_code_I, &_GLOBAL_49_length_code_I, };    


typedef  int  _GLOBAL_69_T; static  _GLOBAL_69_T  _GLOBAL_0_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_1_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_2_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_3_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_4_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_5_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_6_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_7_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_8_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_9_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_10_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_11_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_12_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_13_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_14_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_15_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_16_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_17_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_18_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_19_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_20_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_21_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_22_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_23_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_24_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_25_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_26_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_27_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_28_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_29_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_30_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_31_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_32_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_33_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_34_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_35_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_36_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_37_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_38_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_39_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_40_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_41_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_42_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_43_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_44_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_45_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_46_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_47_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_48_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_49_base_length_I [ 29 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_base_length_I) *_GLOBAL_base_length_28_A[NUM_STACKS] = { &_GLOBAL_0_base_length_I, &_GLOBAL_1_base_length_I, &_GLOBAL_2_base_length_I, &_GLOBAL_3_base_length_I, &_GLOBAL_4_base_length_I, &_GLOBAL_5_base_length_I, &_GLOBAL_6_base_length_I, &_GLOBAL_7_base_length_I, &_GLOBAL_8_base_length_I, &_GLOBAL_9_base_length_I, &_GLOBAL_10_base_length_I, &_GLOBAL_11_base_length_I, &_GLOBAL_12_base_length_I, &_GLOBAL_13_base_length_I, &_GLOBAL_14_base_length_I, &_GLOBAL_15_base_length_I, &_GLOBAL_16_base_length_I, &_GLOBAL_17_base_length_I, &_GLOBAL_18_base_length_I, &_GLOBAL_19_base_length_I, &_GLOBAL_20_base_length_I, &_GLOBAL_21_base_length_I, &_GLOBAL_22_base_length_I, &_GLOBAL_23_base_length_I, &_GLOBAL_24_base_length_I, &_GLOBAL_25_base_length_I, &_GLOBAL_26_base_length_I, &_GLOBAL_27_base_length_I, &_GLOBAL_28_base_length_I, &_GLOBAL_29_base_length_I, &_GLOBAL_30_base_length_I, &_GLOBAL_31_base_length_I, &_GLOBAL_32_base_length_I, &_GLOBAL_33_base_length_I, &_GLOBAL_34_base_length_I, &_GLOBAL_35_base_length_I, &_GLOBAL_36_base_length_I, &_GLOBAL_37_base_length_I, &_GLOBAL_38_base_length_I, &_GLOBAL_39_base_length_I, &_GLOBAL_40_base_length_I, &_GLOBAL_41_base_length_I, &_GLOBAL_42_base_length_I, &_GLOBAL_43_base_length_I, &_GLOBAL_44_base_length_I, &_GLOBAL_45_base_length_I, &_GLOBAL_46_base_length_I, &_GLOBAL_47_base_length_I, &_GLOBAL_48_base_length_I, &_GLOBAL_49_base_length_I, };  


typedef  int  _GLOBAL_70_T; static  _GLOBAL_70_T  _GLOBAL_0_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_1_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_2_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_3_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_4_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_5_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_6_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_7_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_8_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_9_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_10_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_11_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_12_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_13_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_14_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_15_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_16_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_17_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_18_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_19_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_20_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_21_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_22_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_23_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_24_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_25_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_26_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_27_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_28_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_29_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_30_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_31_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_32_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_33_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_34_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_35_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_36_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_37_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_38_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_39_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_40_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_41_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_42_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_43_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_44_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_45_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_46_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_47_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_48_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_49_base_dist_I [ 30 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_base_dist_I) *_GLOBAL_base_dist_29_A[NUM_STACKS] = { &_GLOBAL_0_base_dist_I, &_GLOBAL_1_base_dist_I, &_GLOBAL_2_base_dist_I, &_GLOBAL_3_base_dist_I, &_GLOBAL_4_base_dist_I, &_GLOBAL_5_base_dist_I, &_GLOBAL_6_base_dist_I, &_GLOBAL_7_base_dist_I, &_GLOBAL_8_base_dist_I, &_GLOBAL_9_base_dist_I, &_GLOBAL_10_base_dist_I, &_GLOBAL_11_base_dist_I, &_GLOBAL_12_base_dist_I, &_GLOBAL_13_base_dist_I, &_GLOBAL_14_base_dist_I, &_GLOBAL_15_base_dist_I, &_GLOBAL_16_base_dist_I, &_GLOBAL_17_base_dist_I, &_GLOBAL_18_base_dist_I, &_GLOBAL_19_base_dist_I, &_GLOBAL_20_base_dist_I, &_GLOBAL_21_base_dist_I, &_GLOBAL_22_base_dist_I, &_GLOBAL_23_base_dist_I, &_GLOBAL_24_base_dist_I, &_GLOBAL_25_base_dist_I, &_GLOBAL_26_base_dist_I, &_GLOBAL_27_base_dist_I, &_GLOBAL_28_base_dist_I, &_GLOBAL_29_base_dist_I, &_GLOBAL_30_base_dist_I, &_GLOBAL_31_base_dist_I, &_GLOBAL_32_base_dist_I, &_GLOBAL_33_base_dist_I, &_GLOBAL_34_base_dist_I, &_GLOBAL_35_base_dist_I, &_GLOBAL_36_base_dist_I, &_GLOBAL_37_base_dist_I, &_GLOBAL_38_base_dist_I, &_GLOBAL_39_base_dist_I, &_GLOBAL_40_base_dist_I, &_GLOBAL_41_base_dist_I, &_GLOBAL_42_base_dist_I, &_GLOBAL_43_base_dist_I, &_GLOBAL_44_base_dist_I, &_GLOBAL_45_base_dist_I, &_GLOBAL_46_base_dist_I, &_GLOBAL_47_base_dist_I, &_GLOBAL_48_base_dist_I, &_GLOBAL_49_base_dist_I, };  


struct static_tree_desc_s {
    ct_data *static_tree;
    intf *extra_bits;
    int extra_base;
    int elems;
    int max_length;
};

typedef  static_tree_desc  _GLOBAL_71_T; static  _GLOBAL_71_T  global_static_l_desc[NUM_STACKS] = {  { _GLOBAL_0_static_ltree_I , _GLOBAL_0_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_1_static_ltree_I , _GLOBAL_1_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_2_static_ltree_I , _GLOBAL_2_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_3_static_ltree_I , _GLOBAL_3_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_4_static_ltree_I , _GLOBAL_4_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_5_static_ltree_I , _GLOBAL_5_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_6_static_ltree_I , _GLOBAL_6_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_7_static_ltree_I , _GLOBAL_7_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_8_static_ltree_I , _GLOBAL_8_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_9_static_ltree_I , _GLOBAL_9_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_10_static_ltree_I , _GLOBAL_10_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_11_static_ltree_I , _GLOBAL_11_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_12_static_ltree_I , _GLOBAL_12_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_13_static_ltree_I , _GLOBAL_13_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_14_static_ltree_I , _GLOBAL_14_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_15_static_ltree_I , _GLOBAL_15_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_16_static_ltree_I , _GLOBAL_16_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_17_static_ltree_I , _GLOBAL_17_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_18_static_ltree_I , _GLOBAL_18_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_19_static_ltree_I , _GLOBAL_19_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_20_static_ltree_I , _GLOBAL_20_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_21_static_ltree_I , _GLOBAL_21_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_22_static_ltree_I , _GLOBAL_22_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_23_static_ltree_I , _GLOBAL_23_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_24_static_ltree_I , _GLOBAL_24_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_25_static_ltree_I , _GLOBAL_25_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_26_static_ltree_I , _GLOBAL_26_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_27_static_ltree_I , _GLOBAL_27_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_28_static_ltree_I , _GLOBAL_28_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_29_static_ltree_I , _GLOBAL_29_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_30_static_ltree_I , _GLOBAL_30_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_31_static_ltree_I , _GLOBAL_31_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_32_static_ltree_I , _GLOBAL_32_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_33_static_ltree_I , _GLOBAL_33_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_34_static_ltree_I , _GLOBAL_34_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_35_static_ltree_I , _GLOBAL_35_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_36_static_ltree_I , _GLOBAL_36_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_37_static_ltree_I , _GLOBAL_37_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_38_static_ltree_I , _GLOBAL_38_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_39_static_ltree_I , _GLOBAL_39_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_40_static_ltree_I , _GLOBAL_40_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_41_static_ltree_I , _GLOBAL_41_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_42_static_ltree_I , _GLOBAL_42_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_43_static_ltree_I , _GLOBAL_43_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_44_static_ltree_I , _GLOBAL_44_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_45_static_ltree_I , _GLOBAL_45_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_46_static_ltree_I , _GLOBAL_46_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_47_static_ltree_I , _GLOBAL_47_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_48_static_ltree_I , _GLOBAL_48_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_49_static_ltree_I , _GLOBAL_49_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  };    
      

typedef  static_tree_desc  _GLOBAL_72_T; static  _GLOBAL_72_T  global_static_d_desc[NUM_STACKS] = {  { _GLOBAL_0_static_dtree_I , _GLOBAL_0_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_1_static_dtree_I , _GLOBAL_1_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_2_static_dtree_I , _GLOBAL_2_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_3_static_dtree_I , _GLOBAL_3_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_4_static_dtree_I , _GLOBAL_4_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_5_static_dtree_I , _GLOBAL_5_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_6_static_dtree_I , _GLOBAL_6_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_7_static_dtree_I , _GLOBAL_7_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_8_static_dtree_I , _GLOBAL_8_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_9_static_dtree_I , _GLOBAL_9_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_10_static_dtree_I , _GLOBAL_10_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_11_static_dtree_I , _GLOBAL_11_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_12_static_dtree_I , _GLOBAL_12_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_13_static_dtree_I , _GLOBAL_13_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_14_static_dtree_I , _GLOBAL_14_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_15_static_dtree_I , _GLOBAL_15_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_16_static_dtree_I , _GLOBAL_16_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_17_static_dtree_I , _GLOBAL_17_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_18_static_dtree_I , _GLOBAL_18_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_19_static_dtree_I , _GLOBAL_19_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_20_static_dtree_I , _GLOBAL_20_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_21_static_dtree_I , _GLOBAL_21_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_22_static_dtree_I , _GLOBAL_22_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_23_static_dtree_I , _GLOBAL_23_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_24_static_dtree_I , _GLOBAL_24_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_25_static_dtree_I , _GLOBAL_25_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_26_static_dtree_I , _GLOBAL_26_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_27_static_dtree_I , _GLOBAL_27_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_28_static_dtree_I , _GLOBAL_28_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_29_static_dtree_I , _GLOBAL_29_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_30_static_dtree_I , _GLOBAL_30_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_31_static_dtree_I , _GLOBAL_31_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_32_static_dtree_I , _GLOBAL_32_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_33_static_dtree_I , _GLOBAL_33_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_34_static_dtree_I , _GLOBAL_34_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_35_static_dtree_I , _GLOBAL_35_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_36_static_dtree_I , _GLOBAL_36_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_37_static_dtree_I , _GLOBAL_37_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_38_static_dtree_I , _GLOBAL_38_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_39_static_dtree_I , _GLOBAL_39_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_40_static_dtree_I , _GLOBAL_40_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_41_static_dtree_I , _GLOBAL_41_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_42_static_dtree_I , _GLOBAL_42_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_43_static_dtree_I , _GLOBAL_43_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_44_static_dtree_I , _GLOBAL_44_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_45_static_dtree_I , _GLOBAL_45_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_46_static_dtree_I , _GLOBAL_46_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_47_static_dtree_I , _GLOBAL_47_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_48_static_dtree_I , _GLOBAL_48_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_49_static_dtree_I , _GLOBAL_49_extra_dbits_I  , 0  , 30  , 15  } ,  };    
    

typedef  static_tree_desc  _GLOBAL_73_T; static  _GLOBAL_73_T  global_static_bl_desc[NUM_STACKS] = {  { ( ct_data *  ) 0  , _GLOBAL_0_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_1_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_2_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_3_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_4_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_5_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_6_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_7_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_8_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_9_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_10_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_11_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_12_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_13_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_14_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_15_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_16_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_17_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_18_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_19_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_20_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_21_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_22_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_23_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_24_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_25_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_26_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_27_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_28_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_29_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_30_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_31_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_32_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_33_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_34_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_35_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_36_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_37_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_38_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_39_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_40_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_41_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_42_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_43_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_44_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_45_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_46_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_47_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_48_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_49_extra_blbits_I  , 0  , 19  , 7  } ,  };    
     





static void tr_static_init (void);
static void init_block (deflate_state *s);
static void pqdownheap (deflate_state *s, ct_data *tree, int k);
static void gen_bitlen (deflate_state *s, tree_desc *desc);
static void gen_codes (ct_data *tree, int max_code, ushf *bl_count);
static void build_tree (deflate_state *s, tree_desc *desc);
static void scan_tree (deflate_state *s, ct_data *tree, int max_code);
static void send_tree (deflate_state *s, ct_data *tree, int max_code);
static int build_bl_tree (deflate_state *s);
static void send_all_trees (deflate_state *s, int lcodes, int dcodes, int blcodes)
                                           ;
static void compress_block (deflate_state *s, ct_data *ltree, ct_data *dtree)
                                              ;
static void set_data_type (deflate_state *s);
static unsigned bi_reverse (unsigned value, int length);
static void bi_windup (deflate_state *s);
static void bi_flush (deflate_state *s);
static void copy_block (deflate_state *s, charf *buf, unsigned len, int header)
                                          ;
# 2068 "freebsd5/net/zlib.c"
static void tr_static_init()
{
    typedef  int  _GLOBAL_74_T; static  _GLOBAL_74_T  global_static_init_done[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
    int n;
    int bits;
    int length;
    int code;
    int dist;
    ush bl_count[15 +1];


    if (global_static_init_done[get_stack_id()]) return;


    length = 0;
    for (code = 0; code < 29 -1; code++) {
        (*_GLOBAL_base_length_28_A[get_stack_id()])[code] = length;
        for (n = 0; n < (1<<(*_GLOBAL_extra_lbits_20_A[get_stack_id()])[code]); n++) {
            (*_GLOBAL_length_code_27_A[get_stack_id()])[length++] = (uch)code;
        }
    }
    ;




    (*_GLOBAL_length_code_27_A[get_stack_id()])[length-1] = (uch)code;


    dist = 0;
    for (code = 0 ; code < 16; code++) {
        (*_GLOBAL_base_dist_29_A[get_stack_id()])[code] = dist;
        for (n = 0; n < (1<<(*_GLOBAL_extra_dbits_21_A[get_stack_id()])[code]); n++) {
            (*_GLOBAL_dist_code_26_A[get_stack_id()])[dist++] = (uch)code;
        }
    }
    ;
    dist >>= 7;
    for ( ; code < 30; code++) {
        (*_GLOBAL_base_dist_29_A[get_stack_id()])[code] = dist << 7;
        for (n = 0; n < (1<<((*_GLOBAL_extra_dbits_21_A[get_stack_id()])[code]-7)); n++) {
            (*_GLOBAL_dist_code_26_A[get_stack_id()])[256 + dist++] = (uch)code;
        }
    }
    ;


    for (bits = 0; bits <= 15; bits++) bl_count[bits] = 0;
    n = 0;
    while (n <= 143) (*_GLOBAL_static_ltree_24_A[get_stack_id()])[n++].dl.len = 8, bl_count[8]++;
    while (n <= 255) (*_GLOBAL_static_ltree_24_A[get_stack_id()])[n++].dl.len = 9, bl_count[9]++;
    while (n <= 279) (*_GLOBAL_static_ltree_24_A[get_stack_id()])[n++].dl.len = 7, bl_count[7]++;
    while (n <= 287) (*_GLOBAL_static_ltree_24_A[get_stack_id()])[n++].dl.len = 8, bl_count[8]++;




    gen_codes((ct_data *)(*_GLOBAL_static_ltree_24_A[get_stack_id()]), (256 +1+29)+1, bl_count);


    for (n = 0; n < 30; n++) {
        (*_GLOBAL_static_dtree_25_A[get_stack_id()])[n].dl.len = 5;
        (*_GLOBAL_static_dtree_25_A[get_stack_id()])[n].fc.code = bi_reverse((unsigned)n, 5);
    }
    global_static_init_done[get_stack_id()] = 1;
}




void _tr_init(s)
    deflate_state *s;
{
    tr_static_init();

    s->compressed_len = 0L;

    s->l_desc.dyn_tree = s->dyn_ltree;
    s->l_desc.stat_desc = &global_static_l_desc[get_stack_id()];

    s->d_desc.dyn_tree = s->dyn_dtree;
    s->d_desc.stat_desc = &global_static_d_desc[get_stack_id()];

    s->bl_desc.dyn_tree = s->bl_tree;
    s->bl_desc.stat_desc = &global_static_bl_desc[get_stack_id()];

    s->bi_buf = 0;
    s->bi_valid = 0;
    s->last_eob_len = 8;





    init_block(s);
}




static void init_block(s)
    deflate_state *s;
{
    int n;


    for (n = 0; n < (256 +1+29); n++) s->dyn_ltree[n].fc.freq = 0;
    for (n = 0; n < 30; n++) s->dyn_dtree[n].fc.freq = 0;
    for (n = 0; n < 19; n++) s->bl_tree[n].fc.freq = 0;

    s->dyn_ltree[256].fc.freq = 1;
    s->opt_len = s->static_len = 0L;
    s->last_lit = s->matches = 0;
}
# 2212 "freebsd5/net/zlib.c"
static void pqdownheap(s, tree, k)
    deflate_state *s;
    ct_data *tree;
    int k;
{
    int v = s->heap[k];
    int j = k << 1;
    while (j <= s->heap_len) {

        if (j < s->heap_len &&
            (tree[s->heap[j+1]].fc.freq < tree[s->heap[j]].fc.freq || (tree[s->heap[j+1]].fc.freq == tree[s->heap[j]].fc.freq && s->depth[s->heap[j+1]] <= s->depth[s->heap[j]]))) {
            j++;
        }

        if ((tree[v].fc.freq < tree[s->heap[j]].fc.freq || (tree[v].fc.freq == tree[s->heap[j]].fc.freq && s->depth[v] <= s->depth[s->heap[j]]))) break;


        s->heap[k] = s->heap[j]; k = j;


        j <<= 1;
    }
    s->heap[k] = v;
}
# 2247 "freebsd5/net/zlib.c"
static void gen_bitlen(s, desc)
    deflate_state *s;
    tree_desc *desc;
{
    ct_data *tree = desc->dyn_tree;
    int max_code = desc->max_code;
    ct_data *stree = desc->stat_desc->static_tree;
    intf *extra = desc->stat_desc->extra_bits;
    int base = desc->stat_desc->extra_base;
    int max_length = desc->stat_desc->max_length;
    int h;
    int n, m;
    int bits;
    int xbits;
    ush f;
    int overflow = 0;

    for (bits = 0; bits <= 15; bits++) s->bl_count[bits] = 0;




    tree[s->heap[s->heap_max]].dl.len = 0;

    for (h = s->heap_max+1; h < (2*(256 +1+29)+1); h++) {
        n = s->heap[h];
        bits = tree[tree[n].dl.dad].dl.len + 1;
        if (bits > max_length) bits = max_length, overflow++;
        tree[n].dl.len = (ush)bits;


        if (n > max_code) continue;

        s->bl_count[bits]++;
        xbits = 0;
        if (n >= base) xbits = extra[n-base];
        f = tree[n].fc.freq;
        s->opt_len += (ulg)f * (bits + xbits);
        if (stree) s->static_len += (ulg)f * (stree[n].dl.len + xbits);
    }
    if (overflow == 0) return;

    ;



    do {
        bits = max_length-1;
        while (s->bl_count[bits] == 0) bits--;
        s->bl_count[bits]--;
        s->bl_count[bits+1] += 2;
        s->bl_count[max_length]--;



        overflow -= 2;
    } while (overflow > 0);






    for (bits = max_length; bits != 0; bits--) {
        n = s->bl_count[bits];
        while (n != 0) {
            m = s->heap[--h];
            if (m > max_code) continue;
            if (tree[m].dl.len != (unsigned) bits) {
                ;
                s->opt_len += ((long)bits - (long)tree[m].dl.len)
                              *(long)tree[m].fc.freq;
                tree[m].dl.len = (ush)bits;
            }
            n--;
        }
    }
}
# 2334 "freebsd5/net/zlib.c"
static void gen_codes (tree, max_code, bl_count)
    ct_data *tree;
    int max_code;
    ushf *bl_count;
{
    ush next_code[15 +1];
    ush code = 0;
    int bits;
    int n;




    for (bits = 1; bits <= 15; bits++) {
        next_code[bits] = code = (code + bl_count[bits-1]) << 1;
    }



   
                                      ;
    ;

    for (n = 0; n <= max_code; n++) {
        int len = tree[n].dl.len;
        if (len == 0) continue;

        tree[n].fc.code = bi_reverse(next_code[len]++, len);

       
                                                                             ;
    }
}
# 2376 "freebsd5/net/zlib.c"
static void build_tree(s, desc)
    deflate_state *s;
    tree_desc *desc;
{
    ct_data *tree = desc->dyn_tree;
    ct_data *stree = desc->stat_desc->static_tree;
    int elems = desc->stat_desc->elems;
    int n, m;
    int max_code = -1;
    int node;





    s->heap_len = 0, s->heap_max = (2*(256 +1+29)+1);

    for (n = 0; n < elems; n++) {
        if (tree[n].fc.freq != 0) {
            s->heap[++(s->heap_len)] = max_code = n;
            s->depth[n] = 0;
        } else {
            tree[n].dl.len = 0;
        }
    }






    while (s->heap_len < 2) {
        node = s->heap[++(s->heap_len)] = (max_code < 2 ? ++max_code : 0);
        tree[node].fc.freq = 1;
        s->depth[node] = 0;
        s->opt_len--; if (stree) s->static_len -= stree[node].dl.len;

    }
    desc->max_code = max_code;




    for (n = s->heap_len/2; n >= 1; n--) pqdownheap(s, tree, n);




    node = elems;
    do {
        { n = s->heap[1]; s->heap[1] = s->heap[s->heap_len--]; pqdownheap(s, tree, 1); };
        m = s->heap[1];

        s->heap[--(s->heap_max)] = n;
        s->heap[--(s->heap_max)] = m;


        tree[node].fc.freq = tree[n].fc.freq + tree[m].fc.freq;
        s->depth[node] = (uch) ((((s->depth[n])>(s->depth[m]))?(s->depth[n]):(s->depth[m])) + 1);
        tree[n].dl.dad = tree[m].dl.dad = (ush)node;







        s->heap[1] = node++;
        pqdownheap(s, tree, 1);

    } while (s->heap_len >= 2);

    s->heap[--(s->heap_max)] = s->heap[1];




    gen_bitlen(s, (tree_desc *)desc);


    gen_codes ((ct_data *)tree, max_code, s->bl_count);
}





static void scan_tree (s, tree, max_code)
    deflate_state *s;
    ct_data *tree;
    int max_code;
{
    int n;
    int prevlen = -1;
    int curlen;
    int nextlen = tree[0].dl.len;
    int count = 0;
    int max_count = 7;
    int min_count = 4;

    if (nextlen == 0) max_count = 138, min_count = 3;
    tree[max_code+1].dl.len = (ush)0xffff;

    for (n = 0; n <= max_code; n++) {
        curlen = nextlen; nextlen = tree[n+1].dl.len;
        if (++count < max_count && curlen == nextlen) {
            continue;
        } else if (count < min_count) {
            s->bl_tree[curlen].fc.freq += count;
        } else if (curlen != 0) {
            if (curlen != prevlen) s->bl_tree[curlen].fc.freq++;
            s->bl_tree[16].fc.freq++;
        } else if (count <= 10) {
            s->bl_tree[17].fc.freq++;
        } else {
            s->bl_tree[18].fc.freq++;
        }
        count = 0; prevlen = curlen;
        if (nextlen == 0) {
            max_count = 138, min_count = 3;
        } else if (curlen == nextlen) {
            max_count = 6, min_count = 3;
        } else {
            max_count = 7, min_count = 4;
        }
    }
}





static void send_tree (s, tree, max_code)
    deflate_state *s;
    ct_data *tree;
    int max_code;
{
    int n;
    int prevlen = -1;
    int curlen;
    int nextlen = tree[0].dl.len;
    int count = 0;
    int max_count = 7;
    int min_count = 4;


    if (nextlen == 0) max_count = 138, min_count = 3;

    for (n = 0; n <= max_code; n++) {
        curlen = nextlen; nextlen = tree[n+1].dl.len;
        if (++count < max_count && curlen == nextlen) {
            continue;
        } else if (count < min_count) {
            do { { int len = (s->bl_tree[(curlen)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(curlen)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(curlen)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }}; } while (--count != 0);

        } else if (curlen != 0) {
            if (curlen != prevlen) {
                { int len = (s->bl_tree[(curlen)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(curlen)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(curlen)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }}; count--;
            }
            ;
            { int len = (s->bl_tree[(16)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(16)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(16)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }}; { int len = (2); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (count-3); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (count-3) << (s)->bi_valid; (s)->bi_valid += len; }};

        } else if (count <= 10) {
            { int len = (s->bl_tree[(17)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(17)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(17)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }}; { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (count-3); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (count-3) << (s)->bi_valid; (s)->bi_valid += len; }};

        } else {
            { int len = (s->bl_tree[(18)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(18)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(18)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }}; { int len = (7); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (count-11); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (count-11) << (s)->bi_valid; (s)->bi_valid += len; }};
        }
        count = 0; prevlen = curlen;
        if (nextlen == 0) {
            max_count = 138, min_count = 3;
        } else if (curlen == nextlen) {
            max_count = 6, min_count = 3;
        } else {
            max_count = 7, min_count = 4;
        }
    }
}





static int build_bl_tree(s)
    deflate_state *s;
{
    int max_blindex;


    scan_tree(s, (ct_data *)s->dyn_ltree, s->l_desc.max_code);
    scan_tree(s, (ct_data *)s->dyn_dtree, s->d_desc.max_code);


    build_tree(s, (tree_desc *)(&(s->bl_desc)));
# 2578 "freebsd5/net/zlib.c"
    for (max_blindex = 19 -1; max_blindex >= 3; max_blindex--) {
        if (s->bl_tree[(*_GLOBAL_bl_order_23_A[get_stack_id()])[max_blindex]].dl.len != 0) break;
    }

    s->opt_len += 3*(max_blindex+1) + 5+5+4;
   
                                       ;

    return max_blindex;
}






static void send_all_trees(s, lcodes, dcodes, blcodes)
    deflate_state *s;
    int lcodes, dcodes, blcodes;
{
    int rank;

    ;
   
                             ;
    ;
    { int len = (5); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (lcodes-257); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (lcodes-257) << (s)->bi_valid; (s)->bi_valid += len; }};
    { int len = (5); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (dcodes-1); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (dcodes-1) << (s)->bi_valid; (s)->bi_valid += len; }};
    { int len = (4); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (blcodes-4); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (blcodes-4) << (s)->bi_valid; (s)->bi_valid += len; }};
    for (rank = 0; rank < blcodes; rank++) {
        ;
        { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (s->bl_tree[(*_GLOBAL_bl_order_23_A[get_stack_id()])[rank]].dl.len); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (s->bl_tree[(*_GLOBAL_bl_order_23_A[get_stack_id()])[rank]].dl.len) << (s)->bi_valid; (s)->bi_valid += len; }};
    }
    ;

    send_tree(s, (ct_data *)s->dyn_ltree, lcodes-1);
    ;

    send_tree(s, (ct_data *)s->dyn_dtree, dcodes-1);
    ;
}




void _tr_stored_block(s, buf, stored_len, eof)
    deflate_state *s;
    charf *buf;
    ulg stored_len;
    int eof;
{
    { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((0<<1)+eof); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((0<<1)+eof) << (s)->bi_valid; (s)->bi_valid += len; }};
    s->compressed_len = (s->compressed_len + 3 + 7) & (ulg)~7L;
    s->compressed_len += (stored_len + 4) << 3;

    copy_block(s, buf, (unsigned)stored_len, 1);
}



void _tr_stored_type_only(s)
    deflate_state *s;
{
    { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((0 << 1)); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((0 << 1)) << (s)->bi_valid; (s)->bi_valid += len; }};
    bi_windup(s);
    s->compressed_len = (s->compressed_len + 3) & ~7L;
}
# 2658 "freebsd5/net/zlib.c"
void _tr_align(s)
    deflate_state *s;
{
    { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (1<<1); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (1<<1) << (s)->bi_valid; (s)->bi_valid += len; }};
    { int len = ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
    s->compressed_len += 10L;
    bi_flush(s);





    if (1 + s->last_eob_len + 10 - s->bi_valid < 9) {
        { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (1<<1); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (1<<1) << (s)->bi_valid; (s)->bi_valid += len; }};
        { int len = ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((*_GLOBAL_static_ltree_24_A[get_stack_id()])[(256)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
        s->compressed_len += 10L;
        bi_flush(s);
    }
    s->last_eob_len = 7;
}






ulg _tr_flush_block(s, buf, stored_len, eof)
    deflate_state *s;
    charf *buf;
    ulg stored_len;
    int eof;
{
    ulg opt_lenb, static_lenb;
    int max_blindex = 0;


    if (s->level > 0) {


 if (s->data_type == 2) set_data_type(s);


 build_tree(s, (tree_desc *)(&(s->l_desc)));

                 ;

 build_tree(s, (tree_desc *)(&(s->d_desc)));

                 ;







 max_blindex = build_bl_tree(s);


 opt_lenb = (s->opt_len+3+7)>>3;
 static_lenb = (s->static_len+3+7)>>3;



               ;

 if (static_lenb <= opt_lenb) opt_lenb = static_lenb;

    } else {
        ;
 opt_lenb = static_lenb = stored_len + 5;
    }
# 2753 "freebsd5/net/zlib.c"
    if (stored_len+4 <= opt_lenb && buf != (char*)0) {
# 2762 "freebsd5/net/zlib.c"
        _tr_stored_block(s, buf, stored_len, eof);




    } else if (static_lenb == opt_lenb) {

        { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((1<<1)+eof); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((1<<1)+eof) << (s)->bi_valid; (s)->bi_valid += len; }};
        compress_block(s, (ct_data *)(*_GLOBAL_static_ltree_24_A[get_stack_id()]), (ct_data *)(*_GLOBAL_static_dtree_25_A[get_stack_id()]));
        s->compressed_len += 3 + s->static_len;
    } else {
        { int len = (3); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ((2<<1)+eof); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= ((2<<1)+eof) << (s)->bi_valid; (s)->bi_valid += len; }};
        send_all_trees(s, s->l_desc.max_code+1, s->d_desc.max_code+1,
                       max_blindex+1);
        compress_block(s, (ct_data *)s->dyn_ltree, (ct_data *)s->dyn_dtree);
        s->compressed_len += 3 + s->opt_len;
    }
    ;
    init_block(s);

    if (eof) {
        bi_windup(s);
        s->compressed_len += 7;
    }
   
                                    ;

    return s->compressed_len >> 3;
}





int _tr_tally (s, dist, lc)
    deflate_state *s;
    unsigned dist;
    unsigned lc;
{
    s->d_buf[s->last_lit] = (ush)dist;
    s->l_buf[s->last_lit++] = (uch)lc;
    if (dist == 0) {

        s->dyn_ltree[lc].fc.freq++;
    } else {
        s->matches++;

        dist--;
       

                                                                         ;

        s->dyn_ltree[(*_GLOBAL_length_code_27_A[get_stack_id()])[lc]+256 +1].fc.freq++;
        s->dyn_dtree[((dist) < 256 ? (*_GLOBAL_dist_code_26_A[get_stack_id()])[dist] : (*_GLOBAL_dist_code_26_A[get_stack_id()])[256+((dist)>>7)])].fc.freq++;
    }


    if (s->level > 2 && (s->last_lit & 0xfff) == 0) {

        ulg out_length = (ulg)s->last_lit*8L;
        ulg in_length = (ulg)((long)s->strstart - s->block_start);
        int dcode;
        for (dcode = 0; dcode < 30; dcode++) {
            out_length += (ulg)s->dyn_dtree[dcode].fc.freq *
                (5L+(*_GLOBAL_extra_dbits_21_A[get_stack_id()])[dcode]);
        }
        out_length >>= 3;
       

                                                 ;
        if (s->matches < s->last_lit/2 && out_length < in_length/2) return 1;
    }
    return (s->last_lit == s->lit_bufsize-1);




}




static void compress_block(s, ltree, dtree)
    deflate_state *s;
    ct_data *ltree;
    ct_data *dtree;
{
    unsigned dist;
    int lc;
    unsigned lx = 0;
    unsigned code;
    int extra;

    if (s->last_lit != 0) do {
        dist = s->d_buf[lx];
        lc = s->l_buf[lx++];
        if (dist == 0) {
            { int len = (ltree[(lc)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (ltree[(lc)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (ltree[(lc)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
            ;
        } else {

            code = (*_GLOBAL_length_code_27_A[get_stack_id()])[lc];
            { int len = (ltree[(code+256 +1)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (ltree[(code+256 +1)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (ltree[(code+256 +1)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
            extra = (*_GLOBAL_extra_lbits_20_A[get_stack_id()])[code];
            if (extra != 0) {
                lc -= (*_GLOBAL_base_length_28_A[get_stack_id()])[code];
                { int len = (extra); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (lc); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (lc) << (s)->bi_valid; (s)->bi_valid += len; }};
            }
            dist--;
            code = ((dist) < 256 ? (*_GLOBAL_dist_code_26_A[get_stack_id()])[dist] : (*_GLOBAL_dist_code_26_A[get_stack_id()])[256+((dist)>>7)]);
            ;

            { int len = (dtree[(code)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (dtree[(code)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (dtree[(code)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
            extra = (*_GLOBAL_extra_dbits_21_A[get_stack_id()])[code];
            if (extra != 0) {
                dist -= (*_GLOBAL_base_dist_29_A[get_stack_id()])[code];
                { int len = (extra); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (dist); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (dist) << (s)->bi_valid; (s)->bi_valid += len; }};
            }
        }


        ;

    } while (lx < s->last_lit);

    { int len = (ltree[(256)].dl.len); if ((s)->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (ltree[(256)].fc.code); (s)->bi_buf |= (val << (s)->bi_valid); { {(s)->pending_buf[(s)->pending++] = ((uch)(((s)->bi_buf) & 0xff));}; {(s)->pending_buf[(s)->pending++] = ((uch)((ush)((s)->bi_buf) >> 8));}; }; (s)->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - (s)->bi_valid); (s)->bi_valid += len - (8 * 2*sizeof(char)); } else { (s)->bi_buf |= (ltree[(256)].fc.code) << (s)->bi_valid; (s)->bi_valid += len; }};
    s->last_eob_len = ltree[256].dl.len;
}







static void set_data_type(s)
    deflate_state *s;
{
    int n = 0;
    unsigned ascii_freq = 0;
    unsigned bin_freq = 0;
    while (n < 7) bin_freq += s->dyn_ltree[n++].fc.freq;
    while (n < 128) ascii_freq += s->dyn_ltree[n++].fc.freq;
    while (n < 256) bin_freq += s->dyn_ltree[n++].fc.freq;
    s->data_type = (Byte)(bin_freq > (ascii_freq >> 2) ? 0 : 1);
}






static unsigned bi_reverse(code, len)
    unsigned code;
    int len;
{
    register unsigned res = 0;
    do {
        res |= code & 1;
        code >>= 1, res <<= 1;
    } while (--len > 0);
    return res >> 1;
}




static void bi_flush(s)
    deflate_state *s;
{
    if (s->bi_valid == 16) {
        { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; };
        s->bi_buf = 0;
        s->bi_valid = 0;
    } else if (s->bi_valid >= 8) {
        {s->pending_buf[s->pending++] = ((Byte)s->bi_buf);};
        s->bi_buf >>= 8;
        s->bi_valid -= 8;
    }
}




static void bi_windup(s)
    deflate_state *s;
{
    if (s->bi_valid > 8) {
        { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; };
    } else if (s->bi_valid > 0) {
        {s->pending_buf[s->pending++] = ((Byte)s->bi_buf);};
    }
    s->bi_buf = 0;
    s->bi_valid = 0;



}





static void copy_block(s, buf, len, header)
    deflate_state *s;
    charf *buf;
    unsigned len;
    int header;
{
    bi_windup(s);
    s->last_eob_len = 8;

    if (header) {
        { {s->pending_buf[s->pending++] = ((uch)(((ush)len) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)((ush)len) >> 8));}; };
        { {s->pending_buf[s->pending++] = ((uch)(((ush)~len) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)((ush)~len) >> 8));}; };



    }




    memcpy(&s->pending_buf[s->pending], buf, len);
    s->pending += len;
}
# 3009 "freebsd5/net/zlib.c"
struct inflate_blocks_state;
typedef struct inflate_blocks_state inflate_blocks_statef;

extern inflate_blocks_statef * inflate_blocks_new ( z_streamp z, check_func c, uInt w)


            ;

extern int inflate_blocks ( inflate_blocks_statef *, z_streamp , int)


         ;

extern void inflate_blocks_reset ( inflate_blocks_statef *, z_streamp , uLongf *)


              ;

extern int inflate_blocks_free ( inflate_blocks_statef *, z_streamp , uLongf *)


              ;

extern void inflate_set_dictionary ( inflate_blocks_statef *s, const Bytef *d, uInt n)


             ;

extern int inflate_addhistory ( inflate_blocks_statef *, z_streamp)

               ;

extern int inflate_packet_flush ( inflate_blocks_statef *)
                             ;







struct internal_state {


  enum {
      METHOD,
      FLAG,
      DICT4,
      DICT3,
      DICT2,
      DICT1,
      DICT0,
      BLOCKS,
      CHECK4,
      CHECK3,
      CHECK2,
      CHECK1,
      DONE,
      BAD}
    mode;


  union {
    uInt method;
    struct {
      uLong was;
      uLong need;
    } check;
    uInt marker;
  } sub;


  int nowrap;
  uInt wbits;
  inflate_blocks_statef
    *blocks;

};


int inflateReset(z)
z_streamp z;
{
  uLong c;

  if (z == 0 || z->state == 0)
    return (-2);
  z->total_in = z->total_out = 0;
  z->msg = 0;
  z->state->mode = z->state->nowrap ? BLOCKS : METHOD;
  inflate_blocks_reset(z->state->blocks, z, &c);
  ;
  return 0;
}


int inflateEnd(z)
z_streamp z;
{
  uLong c;

  if (z == 0 || z->state == 0 || z->zfree == 0)
    return (-2);
  if (z->state->blocks != 0)
    inflate_blocks_free(z->state->blocks, z, &c);
  (*((z)->zfree))((z)->opaque, (voidpf)(z->state));
  z->state = 0;
  ;
  return 0;
}


int inflateInit2_(z, w, version, stream_size)
z_streamp z;
int w;
const char *version;
int stream_size;
{
  if (version == 0 || version[0] != "1.0.4P"[0] ||
      stream_size != sizeof(z_stream))
      return (-6);


  if (z == 0)
    return (-2);
  z->msg = 0;
# 3143 "freebsd5/net/zlib.c"
  if ((z->state = (struct internal_state *)
       (*((z)->zalloc))((z)->opaque, (1), (sizeof(struct internal_state)))) == 0)
    return (-4);
  z->state->blocks = 0;


  z->state->nowrap = 0;
  if (w < 0)
  {
    w = - w;
    z->state->nowrap = 1;
  }


  if (w < 8 || w > 15)
  {
    inflateEnd(z);
    return (-2);
  }
  z->state->wbits = (uInt)w;


  if ((z->state->blocks =
      inflate_blocks_new(z, z->state->nowrap ? 0 : adler32, (uInt)1 << w))
      == 0)
  {
    inflateEnd(z);
    return (-4);
  }
  ;


  inflateReset(z);
  return 0;
}


int inflateInit_(z, version, stream_size)
z_streamp z;
const char *version;
int stream_size;
{
  return inflateInit2_(z, 15, version, stream_size);
}





int inflate_ppp(z, f)
z_streamp z;
int f;
{
  int r;
  uInt b;

  if (z == 0 || z->state == 0 || z->next_in == 0 || f < 0)
    return (-2);
  r = (-5);
  while (1) switch (z->state->mode)
  {
    case METHOD:
      {if(z->avail_in==0)goto empty;r=0;}
      if (((z->state->sub.method = (z->avail_in--,z->total_in++,*z->next_in++)) & 0xf) != 8)
      {
        z->state->mode = BAD;
        z->msg = (char*)"unknown compression method";
        z->state->sub.marker = 5;
        break;
      }
      if ((z->state->sub.method >> 4) + 8 > z->state->wbits)
      {
        z->state->mode = BAD;
        z->msg = (char*)"invalid window size";
        z->state->sub.marker = 5;
        break;
      }
      z->state->mode = FLAG;
    case FLAG:
      {if(z->avail_in==0)goto empty;r=0;}
      b = (z->avail_in--,z->total_in++,*z->next_in++);
      if (((z->state->sub.method << 8) + b) % 31)
      {
        z->state->mode = BAD;
        z->msg = (char*)"incorrect header check";
        z->state->sub.marker = 5;
        break;
      }
      ;
      if (!(b & 0x20))
      {
        z->state->mode = BLOCKS;
 break;
      }
      z->state->mode = DICT4;
    case DICT4:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need = (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 24;
      z->state->mode = DICT3;
    case DICT3:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 16;
      z->state->mode = DICT2;
    case DICT2:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 8;
      z->state->mode = DICT1;
    case DICT1:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++);
      z->adler = z->state->sub.check.need;
      z->state->mode = DICT0;
      return 2;
    case DICT0:
      z->state->mode = BAD;
      z->msg = (char*)"need dictionary";
      z->state->sub.marker = 0;
      return (-2);
    case BLOCKS:
      r = inflate_blocks(z->state->blocks, z, r);
      if (f == 2 && z->avail_in == 0 && z->avail_out != 0)
   r = inflate_packet_flush(z->state->blocks);
      if (r == (-3))
      {
        z->state->mode = BAD;
        z->state->sub.marker = 0;
        break;
      }
      if (r != 1)
        return r;
      r = 0;
      inflate_blocks_reset(z->state->blocks, z, &z->state->sub.check.was);
      if (z->state->nowrap)
      {
        z->state->mode = DONE;
        break;
      }
      z->state->mode = CHECK4;
    case CHECK4:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need = (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 24;
      z->state->mode = CHECK3;
    case CHECK3:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 16;
      z->state->mode = CHECK2;
    case CHECK2:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++) << 8;
      z->state->mode = CHECK1;
    case CHECK1:
      {if(z->avail_in==0)goto empty;r=0;}
      z->state->sub.check.need += (uLong)(z->avail_in--,z->total_in++,*z->next_in++);

      if (z->state->sub.check.was != z->state->sub.check.need)
      {
        z->state->mode = BAD;
        z->msg = (char*)"incorrect data check";
        z->state->sub.marker = 5;
        break;
      }
      ;
      z->state->mode = DONE;
    case DONE:
      return 1;
    case BAD:
      return (-3);
    default:
      return (-2);
  }

 empty:
  if (f != 2)
    return r;
  z->state->mode = BAD;
  z->msg = (char *)"need more for packet flush";
  z->state->sub.marker = 0;
  return (-3);
}


int inflateSetDictionary(z, dictionary, dictLength)
z_streamp z;
const Bytef *dictionary;
uInt dictLength;
{
  uInt length = dictLength;

  if (z == 0 || z->state == 0 || z->state->mode != DICT0)
    return (-2);

  if (adler32(1L, dictionary, dictLength) != z->adler) return (-3);
  z->adler = 1L;

  if (length >= ((uInt)1<<z->state->wbits))
  {
    length = (1<<z->state->wbits)-1;
    dictionary += dictLength - length;
  }
  inflate_set_dictionary(z->state->blocks, dictionary, length);
  z->state->mode = BLOCKS;
  return 0;
}
# 3356 "freebsd5/net/zlib.c"
int inflateIncomp(z)
z_stream *z;
{
    if (z->state->mode != BLOCKS)
 return (-3);
    return inflate_addhistory(z->state->blocks, z);
}


int inflateSync(z)
z_streamp z;
{
  uInt n;
  Bytef *p;
  uInt m;
  uLong r, w;


  if (z == 0 || z->state == 0)
    return (-2);
  if (z->state->mode != BAD)
  {
    z->state->mode = BAD;
    z->state->sub.marker = 0;
  }
  if ((n = z->avail_in) == 0)
    return (-5);
  p = z->next_in;
  m = z->state->sub.marker;


  while (n && m < 4)
  {
    if (*p == (Byte)(m < 2 ? 0 : 0xff))
      m++;
    else if (*p)
      m = 0;
    else
      m = 4 - m;
    p++, n--;
  }


  z->total_in += p - z->next_in;
  z->next_in = p;
  z->avail_in = n;
  z->state->sub.marker = m;


  if (m != 4)
    return (-3);
  r = z->total_in; w = z->total_out;
  inflateReset(z);
  z->total_in = r; z->total_out = w;
  z->state->mode = BLOCKS;
  return 0;
}
# 3441 "freebsd5/net/zlib.c"
typedef struct inflate_huft_s inflate_huft;

struct inflate_huft_s {
  union {
    struct {
      Byte Exop;
      Byte Bits;
    } what;
    Bytef *pad;
  } word;
  union {
    uInt Base;
    inflate_huft *Next;
  } more;
};





extern int inflate_trees_bits ( uIntf *, uIntf *, inflate_huft * *, z_streamp )



                ;

extern int inflate_trees_dynamic ( uInt, uInt, uIntf *, uIntf *, uIntf *, inflate_huft * *, inflate_huft * *, z_streamp )







                ;

extern int inflate_trees_fixed ( uIntf *, uIntf *, inflate_huft * *, inflate_huft * *)



                          ;

extern int inflate_trees_free ( inflate_huft *, z_streamp )

                ;
# 3500 "freebsd5/net/zlib.c"
struct inflate_codes_state;
typedef struct inflate_codes_state inflate_codes_statef;

extern inflate_codes_statef *inflate_codes_new ( uInt, uInt, inflate_huft *, inflate_huft *, z_streamp )


                ;

extern int inflate_codes ( inflate_blocks_statef *, z_streamp , int)


         ;

extern void inflate_codes_free ( inflate_codes_statef *, z_streamp )

                ;
# 3533 "freebsd5/net/zlib.c"
typedef enum {
      TYPE,
      LENS,
      STORED,
      TABLE,
      BTREE,
      DTREE,
      CODES,
      DRY,
      DONEB,
      BADB}
inflate_block_mode;


struct inflate_blocks_state {


  inflate_block_mode mode;


  union {
    uInt left;
    struct {
      uInt table;
      uInt index;
      uIntf *blens;
      uInt bb;
      inflate_huft *tb;
    } trees;
    struct {
      inflate_huft *tl;
      inflate_huft *td;
      inflate_codes_statef
         *codes;
    } decode;
  } sub;
  uInt last;


  uInt bitk;
  uLong bitb;
  Bytef *window;
  Bytef *end;
  Bytef *read;
  Bytef *write;
  check_func checkfn;
  uLong check;

};
# 3608 "freebsd5/net/zlib.c"
typedef  uInt  _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_1_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_2_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_3_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_4_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_5_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_6_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_7_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_8_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_9_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_10_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_11_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_12_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_13_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_14_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_15_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_16_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_17_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_18_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_19_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_20_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_21_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_22_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_23_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_24_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_25_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_26_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_27_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_28_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_29_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_30_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_31_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_32_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_33_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_34_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_35_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_36_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_37_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_38_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_39_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_40_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_41_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_42_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_43_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_44_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_45_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_46_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_47_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_48_inflate_mask_I [ 17 ] ; extern  _GLOBAL_75_T  _GLOBAL_49_inflate_mask_I [ 17 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inflate_mask_I) *_GLOBAL_inflate_mask_30_A[NUM_STACKS] = { &_GLOBAL_0_inflate_mask_I, &_GLOBAL_1_inflate_mask_I, &_GLOBAL_2_inflate_mask_I, &_GLOBAL_3_inflate_mask_I, &_GLOBAL_4_inflate_mask_I, &_GLOBAL_5_inflate_mask_I, &_GLOBAL_6_inflate_mask_I, &_GLOBAL_7_inflate_mask_I, &_GLOBAL_8_inflate_mask_I, &_GLOBAL_9_inflate_mask_I, &_GLOBAL_10_inflate_mask_I, &_GLOBAL_11_inflate_mask_I, &_GLOBAL_12_inflate_mask_I, &_GLOBAL_13_inflate_mask_I, &_GLOBAL_14_inflate_mask_I, &_GLOBAL_15_inflate_mask_I, &_GLOBAL_16_inflate_mask_I, &_GLOBAL_17_inflate_mask_I, &_GLOBAL_18_inflate_mask_I, &_GLOBAL_19_inflate_mask_I, &_GLOBAL_20_inflate_mask_I, &_GLOBAL_21_inflate_mask_I, &_GLOBAL_22_inflate_mask_I, &_GLOBAL_23_inflate_mask_I, &_GLOBAL_24_inflate_mask_I, &_GLOBAL_25_inflate_mask_I, &_GLOBAL_26_inflate_mask_I, &_GLOBAL_27_inflate_mask_I, &_GLOBAL_28_inflate_mask_I, &_GLOBAL_29_inflate_mask_I, &_GLOBAL_30_inflate_mask_I, &_GLOBAL_31_inflate_mask_I, &_GLOBAL_32_inflate_mask_I, &_GLOBAL_33_inflate_mask_I, &_GLOBAL_34_inflate_mask_I, &_GLOBAL_35_inflate_mask_I, &_GLOBAL_36_inflate_mask_I, &_GLOBAL_37_inflate_mask_I, &_GLOBAL_38_inflate_mask_I, &_GLOBAL_39_inflate_mask_I, &_GLOBAL_40_inflate_mask_I, &_GLOBAL_41_inflate_mask_I, &_GLOBAL_42_inflate_mask_I, &_GLOBAL_43_inflate_mask_I, &_GLOBAL_44_inflate_mask_I, &_GLOBAL_45_inflate_mask_I, &_GLOBAL_46_inflate_mask_I, &_GLOBAL_47_inflate_mask_I, &_GLOBAL_48_inflate_mask_I, &_GLOBAL_49_inflate_mask_I, };  


extern int inflate_flush ( inflate_blocks_statef *, z_streamp , int)


         ;
# 3628 "freebsd5/net/zlib.c"
typedef  const uInt   _GLOBAL_76_T; static  _GLOBAL_76_T  _GLOBAL_0_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_1_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_2_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_3_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_4_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_5_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_6_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_7_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_8_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_9_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_10_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_11_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_12_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_13_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_14_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_15_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_16_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_17_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_18_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_19_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_20_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_21_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_22_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_23_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_24_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_25_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_26_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_27_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_28_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_29_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_30_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_31_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_32_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_33_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_34_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_35_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_36_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_37_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_38_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_39_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_40_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_41_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_42_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_43_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_44_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_45_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_46_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_47_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_48_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_76_T  _GLOBAL_49_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_border_I) *_GLOBAL_border_31_A[NUM_STACKS] = { &_GLOBAL_0_border_I, &_GLOBAL_1_border_I, &_GLOBAL_2_border_I, &_GLOBAL_3_border_I, &_GLOBAL_4_border_I, &_GLOBAL_5_border_I, &_GLOBAL_6_border_I, &_GLOBAL_7_border_I, &_GLOBAL_8_border_I, &_GLOBAL_9_border_I, &_GLOBAL_10_border_I, &_GLOBAL_11_border_I, &_GLOBAL_12_border_I, &_GLOBAL_13_border_I, &_GLOBAL_14_border_I, &_GLOBAL_15_border_I, &_GLOBAL_16_border_I, &_GLOBAL_17_border_I, &_GLOBAL_18_border_I, &_GLOBAL_19_border_I, &_GLOBAL_20_border_I, &_GLOBAL_21_border_I, &_GLOBAL_22_border_I, &_GLOBAL_23_border_I, &_GLOBAL_24_border_I, &_GLOBAL_25_border_I, &_GLOBAL_26_border_I, &_GLOBAL_27_border_I, &_GLOBAL_28_border_I, &_GLOBAL_29_border_I, &_GLOBAL_30_border_I, &_GLOBAL_31_border_I, &_GLOBAL_32_border_I, &_GLOBAL_33_border_I, &_GLOBAL_34_border_I, &_GLOBAL_35_border_I, &_GLOBAL_36_border_I, &_GLOBAL_37_border_I, &_GLOBAL_38_border_I, &_GLOBAL_39_border_I, &_GLOBAL_40_border_I, &_GLOBAL_41_border_I, &_GLOBAL_42_border_I, &_GLOBAL_43_border_I, &_GLOBAL_44_border_I, &_GLOBAL_45_border_I, &_GLOBAL_46_border_I, &_GLOBAL_47_border_I, &_GLOBAL_48_border_I, &_GLOBAL_49_border_I, };     
                          
# 3677 "freebsd5/net/zlib.c"
void inflate_blocks_reset(s, z, c)
inflate_blocks_statef *s;
z_streamp z;
uLongf *c;
{
  if (s->checkfn != 0)
    *c = s->check;
  if (s->mode == BTREE || s->mode == DTREE)
    (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens));
  if (s->mode == CODES)
  {
    inflate_codes_free(s->sub.decode.codes, z);
    inflate_trees_free(s->sub.decode.td, z);
    inflate_trees_free(s->sub.decode.tl, z);
  }
  s->mode = TYPE;
  s->bitk = 0;
  s->bitb = 0;
  s->read = s->write = s->window;
  if (s->checkfn != 0)
    z->adler = s->check = (*s->checkfn)(0L, 0, 0);
  ;
}


inflate_blocks_statef *inflate_blocks_new(z, c, w)
z_streamp z;
check_func c;
uInt w;
{
  inflate_blocks_statef *s;

  if ((s = (inflate_blocks_statef *)(*((z)->zalloc))((z)->opaque, (1), (sizeof(struct inflate_blocks_state)))
                                                ) == 0)
    return s;
  if ((s->window = (Bytef *)(*((z)->zalloc))((z)->opaque, (1), (w))) == 0)
  {
    (*((z)->zfree))((z)->opaque, (voidpf)(s));
    return 0;
  }
  s->end = s->window + w;
  s->checkfn = c;
  s->mode = TYPE;
  ;
  inflate_blocks_reset(s, z, &s->check);
  return s;
}





int inflate_blocks(s, z, r)
inflate_blocks_statef *s;
z_streamp z;
int r;
{
  uInt t;
  uLong b;
  uInt k;
  Bytef *p;
  uInt n;
  Bytef *q;
  uInt m;


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}


  while (1) switch (s->mode)
  {
    case TYPE:
      {while(k<(3)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      t = (uInt)b & 7;
      s->last = t & 1;
      switch (t >> 1)
      {
        case 0:
         
                                           ;
          {b>>=(3);k-=(3);}
          t = k & 7;
          {b>>=(t);k-=(t);}
          s->mode = LENS;
          break;
        case 1:
         
                                           ;
          {
            uInt bl, bd;
            inflate_huft *tl, *td;

            inflate_trees_fixed(&bl, &bd, &tl, &td);
            s->sub.decode.codes = inflate_codes_new(bl, bd, tl, td, z);
            if (s->sub.decode.codes == 0)
            {
              r = (-4);
              {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
            }
            s->sub.decode.tl = 0;
            s->sub.decode.td = 0;
          }
          {b>>=(3);k-=(3);}
          s->mode = CODES;
          break;
        case 2:
         
                                           ;
          {b>>=(3);k-=(3);}
          s->mode = TABLE;
          break;
        case 3:
          {b>>=(3);k-=(3);}
          s->mode = BADB;
          z->msg = (char*)"invalid block type";
          r = (-3);
          {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      break;
    case LENS:
      {while(k<(32)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      if ((((~b) >> 16) & 0xffff) != (b & 0xffff))
      {
        s->mode = BADB;
        z->msg = (char*)"invalid stored block lengths";
        r = (-3);
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      s->sub.left = (uInt)b & 0xffff;
      b = k = 0;
      ;
      s->mode = s->sub.left ? STORED : (s->last ? DRY : TYPE);
      break;
    case STORED:
      if (n == 0)
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
      t = s->sub.left;
      if (t > n) t = n;
      if (t > m) t = m;
      memcpy(q, p, t);
      p += t; n -= t;
      q += t; m -= t;
      if ((s->sub.left -= t) != 0)
        break;
     

                                                     ;
      s->mode = s->last ? DRY : TYPE;
      break;
    case TABLE:
      {while(k<(14)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      s->sub.trees.table = t = (uInt)b & 0x3fff;

      if ((t & 0x1f) > 29 || ((t >> 5) & 0x1f) > 29)
      {
        s->mode = BADB;
        z->msg = (char*)"too many length or distance symbols";
        r = (-3);
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }

      t = 258 + (t & 0x1f) + ((t >> 5) & 0x1f);
      if (t < 19)
        t = 19;
      if ((s->sub.trees.blens = (uIntf*)(*((z)->zalloc))((z)->opaque, (t), (sizeof(uInt)))) == 0)
      {
        r = (-4);
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      {b>>=(14);k-=(14);}
      s->sub.trees.index = 0;
      ;
      s->mode = BTREE;
    case BTREE:
      while (s->sub.trees.index < 4 + (s->sub.trees.table >> 10))
      {
        {while(k<(3)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
        s->sub.trees.blens[(*_GLOBAL_border_31_A[get_stack_id()])[s->sub.trees.index++]] = (uInt)b & 7;
        {b>>=(3);k-=(3);}
      }
      while (s->sub.trees.index < 19)
        s->sub.trees.blens[(*_GLOBAL_border_31_A[get_stack_id()])[s->sub.trees.index++]] = 0;
      s->sub.trees.bb = 7;
      t = inflate_trees_bits(s->sub.trees.blens, &s->sub.trees.bb,
                             &s->sub.trees.tb, z);
      if (t != 0)
      {
        r = t;
        if (r == (-3)) {
          (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens));
          s->mode = BADB;
        }
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      s->sub.trees.index = 0;
      ;
      s->mode = DTREE;
    case DTREE:
      while (t = s->sub.trees.table,
             s->sub.trees.index < 258 + (t & 0x1f) + ((t >> 5) & 0x1f))
      {
        inflate_huft *h;
        uInt i, j, c;

        t = s->sub.trees.bb;
        {while(k<(t)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
        h = s->sub.trees.tb + ((uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[t]);
        t = h->word.what.Bits;
        c = h->more.Base;
        if (c < 16)
        {
          {b>>=(t);k-=(t);}
          s->sub.trees.blens[s->sub.trees.index++] = c;
        }
        else
        {
          i = c == 18 ? 7 : c - 14;
          j = c == 18 ? 11 : 3;
          {while(k<(t + i)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
          {b>>=(t);k-=(t);}
          j += (uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[i];
          {b>>=(i);k-=(i);}
          i = s->sub.trees.index;
          t = s->sub.trees.table;
          if (i + j > 258 + (t & 0x1f) + ((t >> 5) & 0x1f) ||
              (c == 16 && i < 1))
          {
            inflate_trees_free(s->sub.trees.tb, z);
            (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens));
            s->mode = BADB;
            z->msg = (char*)"invalid bit length repeat";
            r = (-3);
            {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
          }
          c = c == 16 ? s->sub.trees.blens[i - 1] : 0;
          do {
            s->sub.trees.blens[i++] = c;
          } while (--j);
          s->sub.trees.index = i;
        }
      }
      inflate_trees_free(s->sub.trees.tb, z);
      s->sub.trees.tb = 0;
      {
        uInt bl, bd;
        inflate_huft *tl, *td;
        inflate_codes_statef *c;

        bl = 9;
        bd = 6;
        t = s->sub.trees.table;



        t = inflate_trees_dynamic(257 + (t & 0x1f), 1 + ((t >> 5) & 0x1f),
                                  s->sub.trees.blens, &bl, &bd, &tl, &td, z);
        if (t != 0)
        {
          if (t == (uInt)(-3)) {
            (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens));
            s->mode = BADB;
          }
          r = t;
          {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
        }
       
                                                   ;
        if ((c = inflate_codes_new(bl, bd, tl, td, z)) == 0)
        {
          inflate_trees_free(td, z);
          inflate_trees_free(tl, z);
          r = (-4);
          {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
        }




        (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens));
        s->sub.decode.codes = c;
        s->sub.decode.tl = tl;
        s->sub.decode.td = td;
      }
      s->mode = CODES;
    case CODES:
      {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
      if ((r = inflate_codes(s, z, r)) != 1)
        return inflate_flush(s, z, r);
      r = 0;
      inflate_codes_free(s->sub.decode.codes, z);
      inflate_trees_free(s->sub.decode.td, z);
      inflate_trees_free(s->sub.decode.tl, z);
      {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}
     

                                                     ;
      if (!s->last)
      {
        s->mode = TYPE;
        break;
      }
      if (k > 7)
      {
       
        k -= 8;
        n++;
        p--;
      }
      s->mode = DRY;
    case DRY:
      {{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}
      if (s->read != s->write)
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      s->mode = DONEB;
    case DONEB:
      r = 1;
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case BADB:
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    default:
      r = (-2);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
  }
}


int inflate_blocks_free(s, z, c)
inflate_blocks_statef *s;
z_streamp z;
uLongf *c;
{
  inflate_blocks_reset(s, z, c);
  (*((z)->zfree))((z)->opaque, (voidpf)(s->window));
  (*((z)->zfree))((z)->opaque, (voidpf)(s));
  ;
  return 0;
}


void inflate_set_dictionary(s, d, n)
inflate_blocks_statef *s;
const Bytef *d;
uInt n;
{
  memcpy((charf *)s->window, d, n);
  s->read = s->write = s->window + n;
}
# 4035 "freebsd5/net/zlib.c"
int inflate_addhistory(s, z)
inflate_blocks_statef *s;
z_stream *z;
{
    uLong b;
    uInt k;
    uInt t;
    Bytef *p;
    uInt n;
    Bytef *q;
    uInt m;

    if (s->read != s->write)
 return (-2);
    if (s->mode != TYPE)
 return (-3);


    {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}



    while (n) {
 t = n;

 if (t > m) t = m;

 if (s->checkfn != 0)
     s->check = (*s->checkfn)(s->check, q, t);
 memcpy(q, p, t);
 q += t;
 p += t;
 n -= t;
 z->total_out += t;
 s->read = q;

 if (q == s->end) {
     s->read = q = s->window;
     m = (uInt)(q<s->read?s->read-q-1:s->end-q);
 }
    }
    {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
    return 0;
}






int inflate_packet_flush(s)
    inflate_blocks_statef *s;
{
    if (s->mode != LENS)
 return (-3);
    s->mode = TYPE;
    return 0;
}
# 4104 "freebsd5/net/zlib.c"
typedef  char _GLOBAL_77_T;  _GLOBAL_77_T  _GLOBAL_0_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_1_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_2_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_3_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_4_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_5_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_6_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_7_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_8_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_9_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_10_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_11_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_12_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_13_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_14_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_15_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_16_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_17_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_18_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_19_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_20_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_21_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_22_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_23_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_24_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_25_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_26_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_27_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_28_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_29_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_30_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_31_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_32_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_33_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_34_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_35_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_36_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_37_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_38_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_39_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_40_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_41_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_42_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_43_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_44_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_45_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_46_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_47_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_48_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ;  _GLOBAL_77_T  _GLOBAL_49_inflate_copyright_I [ ]  = " inflate 1.0.4 Copyright 1995-1996 Mark Adler " ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inflate_copyright_I) *_GLOBAL_inflate_copyright_32_A[NUM_STACKS] = { &_GLOBAL_0_inflate_copyright_I, &_GLOBAL_1_inflate_copyright_I, &_GLOBAL_2_inflate_copyright_I, &_GLOBAL_3_inflate_copyright_I, &_GLOBAL_4_inflate_copyright_I, &_GLOBAL_5_inflate_copyright_I, &_GLOBAL_6_inflate_copyright_I, &_GLOBAL_7_inflate_copyright_I, &_GLOBAL_8_inflate_copyright_I, &_GLOBAL_9_inflate_copyright_I, &_GLOBAL_10_inflate_copyright_I, &_GLOBAL_11_inflate_copyright_I, &_GLOBAL_12_inflate_copyright_I, &_GLOBAL_13_inflate_copyright_I, &_GLOBAL_14_inflate_copyright_I, &_GLOBAL_15_inflate_copyright_I, &_GLOBAL_16_inflate_copyright_I, &_GLOBAL_17_inflate_copyright_I, &_GLOBAL_18_inflate_copyright_I, &_GLOBAL_19_inflate_copyright_I, &_GLOBAL_20_inflate_copyright_I, &_GLOBAL_21_inflate_copyright_I, &_GLOBAL_22_inflate_copyright_I, &_GLOBAL_23_inflate_copyright_I, &_GLOBAL_24_inflate_copyright_I, &_GLOBAL_25_inflate_copyright_I, &_GLOBAL_26_inflate_copyright_I, &_GLOBAL_27_inflate_copyright_I, &_GLOBAL_28_inflate_copyright_I, &_GLOBAL_29_inflate_copyright_I, &_GLOBAL_30_inflate_copyright_I, &_GLOBAL_31_inflate_copyright_I, &_GLOBAL_32_inflate_copyright_I, &_GLOBAL_33_inflate_copyright_I, &_GLOBAL_34_inflate_copyright_I, &_GLOBAL_35_inflate_copyright_I, &_GLOBAL_36_inflate_copyright_I, &_GLOBAL_37_inflate_copyright_I, &_GLOBAL_38_inflate_copyright_I, &_GLOBAL_39_inflate_copyright_I, &_GLOBAL_40_inflate_copyright_I, &_GLOBAL_41_inflate_copyright_I, &_GLOBAL_42_inflate_copyright_I, &_GLOBAL_43_inflate_copyright_I, &_GLOBAL_44_inflate_copyright_I, &_GLOBAL_45_inflate_copyright_I, &_GLOBAL_46_inflate_copyright_I, &_GLOBAL_47_inflate_copyright_I, &_GLOBAL_48_inflate_copyright_I, &_GLOBAL_49_inflate_copyright_I, };   
# 4123 "freebsd5/net/zlib.c"
static int huft_build ( uIntf *, uInt, uInt, const uIntf *, const uIntf *, inflate_huft * *, uIntf *, z_streamp )







                ;

static voidpf falloc ( voidpf, uInt, uInt)


          ;


typedef  const uInt   _GLOBAL_78_T; static  _GLOBAL_78_T  _GLOBAL_0_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_1_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_2_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_3_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_4_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_5_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_6_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_7_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_8_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_9_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_10_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_11_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_12_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_13_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_14_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_15_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_16_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_17_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_18_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_19_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_20_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_21_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_22_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_23_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_24_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_25_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_26_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_27_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_28_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_29_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_30_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_31_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_32_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_33_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_34_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_35_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_36_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_37_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_38_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_39_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_40_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_41_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_42_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_43_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_44_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_45_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_46_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_47_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_48_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_78_T  _GLOBAL_49_cplens_I [ 31 ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cplens_I) *_GLOBAL_cplens_33_A[NUM_STACKS] = { &_GLOBAL_0_cplens_I, &_GLOBAL_1_cplens_I, &_GLOBAL_2_cplens_I, &_GLOBAL_3_cplens_I, &_GLOBAL_4_cplens_I, &_GLOBAL_5_cplens_I, &_GLOBAL_6_cplens_I, &_GLOBAL_7_cplens_I, &_GLOBAL_8_cplens_I, &_GLOBAL_9_cplens_I, &_GLOBAL_10_cplens_I, &_GLOBAL_11_cplens_I, &_GLOBAL_12_cplens_I, &_GLOBAL_13_cplens_I, &_GLOBAL_14_cplens_I, &_GLOBAL_15_cplens_I, &_GLOBAL_16_cplens_I, &_GLOBAL_17_cplens_I, &_GLOBAL_18_cplens_I, &_GLOBAL_19_cplens_I, &_GLOBAL_20_cplens_I, &_GLOBAL_21_cplens_I, &_GLOBAL_22_cplens_I, &_GLOBAL_23_cplens_I, &_GLOBAL_24_cplens_I, &_GLOBAL_25_cplens_I, &_GLOBAL_26_cplens_I, &_GLOBAL_27_cplens_I, &_GLOBAL_28_cplens_I, &_GLOBAL_29_cplens_I, &_GLOBAL_30_cplens_I, &_GLOBAL_31_cplens_I, &_GLOBAL_32_cplens_I, &_GLOBAL_33_cplens_I, &_GLOBAL_34_cplens_I, &_GLOBAL_35_cplens_I, &_GLOBAL_36_cplens_I, &_GLOBAL_37_cplens_I, &_GLOBAL_38_cplens_I, &_GLOBAL_39_cplens_I, &_GLOBAL_40_cplens_I, &_GLOBAL_41_cplens_I, &_GLOBAL_42_cplens_I, &_GLOBAL_43_cplens_I, &_GLOBAL_44_cplens_I, &_GLOBAL_45_cplens_I, &_GLOBAL_46_cplens_I, &_GLOBAL_47_cplens_I, &_GLOBAL_48_cplens_I, &_GLOBAL_49_cplens_I, };     
                       
                      

typedef  const uInt   _GLOBAL_79_T; static  _GLOBAL_79_T  _GLOBAL_0_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_1_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_2_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_3_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_4_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_5_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_6_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_7_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_8_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_9_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_10_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_11_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_12_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_13_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_14_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_15_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_16_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_17_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_18_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_19_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_20_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_21_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_22_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_23_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_24_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_25_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_26_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_27_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_28_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_29_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_30_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_31_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_32_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_33_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_34_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_35_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_36_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_37_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_38_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_39_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_40_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_41_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_42_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_43_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_44_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_45_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_46_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_47_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_48_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static  _GLOBAL_79_T  _GLOBAL_49_cplext_I [ 31 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 112  , 112  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cplext_I) *_GLOBAL_cplext_34_A[NUM_STACKS] = { &_GLOBAL_0_cplext_I, &_GLOBAL_1_cplext_I, &_GLOBAL_2_cplext_I, &_GLOBAL_3_cplext_I, &_GLOBAL_4_cplext_I, &_GLOBAL_5_cplext_I, &_GLOBAL_6_cplext_I, &_GLOBAL_7_cplext_I, &_GLOBAL_8_cplext_I, &_GLOBAL_9_cplext_I, &_GLOBAL_10_cplext_I, &_GLOBAL_11_cplext_I, &_GLOBAL_12_cplext_I, &_GLOBAL_13_cplext_I, &_GLOBAL_14_cplext_I, &_GLOBAL_15_cplext_I, &_GLOBAL_16_cplext_I, &_GLOBAL_17_cplext_I, &_GLOBAL_18_cplext_I, &_GLOBAL_19_cplext_I, &_GLOBAL_20_cplext_I, &_GLOBAL_21_cplext_I, &_GLOBAL_22_cplext_I, &_GLOBAL_23_cplext_I, &_GLOBAL_24_cplext_I, &_GLOBAL_25_cplext_I, &_GLOBAL_26_cplext_I, &_GLOBAL_27_cplext_I, &_GLOBAL_28_cplext_I, &_GLOBAL_29_cplext_I, &_GLOBAL_30_cplext_I, &_GLOBAL_31_cplext_I, &_GLOBAL_32_cplext_I, &_GLOBAL_33_cplext_I, &_GLOBAL_34_cplext_I, &_GLOBAL_35_cplext_I, &_GLOBAL_36_cplext_I, &_GLOBAL_37_cplext_I, &_GLOBAL_38_cplext_I, &_GLOBAL_39_cplext_I, &_GLOBAL_40_cplext_I, &_GLOBAL_41_cplext_I, &_GLOBAL_42_cplext_I, &_GLOBAL_43_cplext_I, &_GLOBAL_44_cplext_I, &_GLOBAL_45_cplext_I, &_GLOBAL_46_cplext_I, &_GLOBAL_47_cplext_I, &_GLOBAL_48_cplext_I, &_GLOBAL_49_cplext_I, };     
                       
                      
typedef  const uInt   _GLOBAL_80_T; static  _GLOBAL_80_T  _GLOBAL_0_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_1_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_2_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_3_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_4_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_5_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_6_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_7_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_8_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_9_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_10_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_11_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_12_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_13_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_14_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_15_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_16_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_17_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_18_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_19_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_20_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_21_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_22_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_23_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_24_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_25_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_26_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_27_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_28_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_29_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_30_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_31_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_32_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_33_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_34_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_35_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_36_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_37_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_38_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_39_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_40_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_41_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_42_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_43_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_44_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_45_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_46_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_47_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_48_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_80_T  _GLOBAL_49_cpdist_I [ 30 ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpdist_I) *_GLOBAL_cpdist_35_A[NUM_STACKS] = { &_GLOBAL_0_cpdist_I, &_GLOBAL_1_cpdist_I, &_GLOBAL_2_cpdist_I, &_GLOBAL_3_cpdist_I, &_GLOBAL_4_cpdist_I, &_GLOBAL_5_cpdist_I, &_GLOBAL_6_cpdist_I, &_GLOBAL_7_cpdist_I, &_GLOBAL_8_cpdist_I, &_GLOBAL_9_cpdist_I, &_GLOBAL_10_cpdist_I, &_GLOBAL_11_cpdist_I, &_GLOBAL_12_cpdist_I, &_GLOBAL_13_cpdist_I, &_GLOBAL_14_cpdist_I, &_GLOBAL_15_cpdist_I, &_GLOBAL_16_cpdist_I, &_GLOBAL_17_cpdist_I, &_GLOBAL_18_cpdist_I, &_GLOBAL_19_cpdist_I, &_GLOBAL_20_cpdist_I, &_GLOBAL_21_cpdist_I, &_GLOBAL_22_cpdist_I, &_GLOBAL_23_cpdist_I, &_GLOBAL_24_cpdist_I, &_GLOBAL_25_cpdist_I, &_GLOBAL_26_cpdist_I, &_GLOBAL_27_cpdist_I, &_GLOBAL_28_cpdist_I, &_GLOBAL_29_cpdist_I, &_GLOBAL_30_cpdist_I, &_GLOBAL_31_cpdist_I, &_GLOBAL_32_cpdist_I, &_GLOBAL_33_cpdist_I, &_GLOBAL_34_cpdist_I, &_GLOBAL_35_cpdist_I, &_GLOBAL_36_cpdist_I, &_GLOBAL_37_cpdist_I, &_GLOBAL_38_cpdist_I, &_GLOBAL_39_cpdist_I, &_GLOBAL_40_cpdist_I, &_GLOBAL_41_cpdist_I, &_GLOBAL_42_cpdist_I, &_GLOBAL_43_cpdist_I, &_GLOBAL_44_cpdist_I, &_GLOBAL_45_cpdist_I, &_GLOBAL_46_cpdist_I, &_GLOBAL_47_cpdist_I, &_GLOBAL_48_cpdist_I, &_GLOBAL_49_cpdist_I, };     
                       
                 
           
typedef  const uInt   _GLOBAL_81_T; static  _GLOBAL_81_T  _GLOBAL_0_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_1_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_2_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_3_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_4_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_5_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_6_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_7_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_8_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_9_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_10_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_11_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_12_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_13_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_14_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_15_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_16_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_17_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_18_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_19_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_20_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_21_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_22_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_23_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_24_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_25_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_26_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_27_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_28_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_29_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_30_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_31_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_32_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_33_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_34_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_35_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_36_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_37_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_38_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_39_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_40_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_41_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_42_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_43_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_44_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_45_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_46_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_47_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_48_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_81_T  _GLOBAL_49_cpdext_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpdext_I) *_GLOBAL_cpdext_36_A[NUM_STACKS] = { &_GLOBAL_0_cpdext_I, &_GLOBAL_1_cpdext_I, &_GLOBAL_2_cpdext_I, &_GLOBAL_3_cpdext_I, &_GLOBAL_4_cpdext_I, &_GLOBAL_5_cpdext_I, &_GLOBAL_6_cpdext_I, &_GLOBAL_7_cpdext_I, &_GLOBAL_8_cpdext_I, &_GLOBAL_9_cpdext_I, &_GLOBAL_10_cpdext_I, &_GLOBAL_11_cpdext_I, &_GLOBAL_12_cpdext_I, &_GLOBAL_13_cpdext_I, &_GLOBAL_14_cpdext_I, &_GLOBAL_15_cpdext_I, &_GLOBAL_16_cpdext_I, &_GLOBAL_17_cpdext_I, &_GLOBAL_18_cpdext_I, &_GLOBAL_19_cpdext_I, &_GLOBAL_20_cpdext_I, &_GLOBAL_21_cpdext_I, &_GLOBAL_22_cpdext_I, &_GLOBAL_23_cpdext_I, &_GLOBAL_24_cpdext_I, &_GLOBAL_25_cpdext_I, &_GLOBAL_26_cpdext_I, &_GLOBAL_27_cpdext_I, &_GLOBAL_28_cpdext_I, &_GLOBAL_29_cpdext_I, &_GLOBAL_30_cpdext_I, &_GLOBAL_31_cpdext_I, &_GLOBAL_32_cpdext_I, &_GLOBAL_33_cpdext_I, &_GLOBAL_34_cpdext_I, &_GLOBAL_35_cpdext_I, &_GLOBAL_36_cpdext_I, &_GLOBAL_37_cpdext_I, &_GLOBAL_38_cpdext_I, &_GLOBAL_39_cpdext_I, &_GLOBAL_40_cpdext_I, &_GLOBAL_41_cpdext_I, &_GLOBAL_42_cpdext_I, &_GLOBAL_43_cpdext_I, &_GLOBAL_44_cpdext_I, &_GLOBAL_45_cpdext_I, &_GLOBAL_46_cpdext_I, &_GLOBAL_47_cpdext_I, &_GLOBAL_48_cpdext_I, &_GLOBAL_49_cpdext_I, };     
                       
                 
           
# 4196 "freebsd5/net/zlib.c"
static int huft_build(b, n, s, d, e, t, m, zs)
uIntf *b;
uInt n;
uInt s;
const uIntf *d;
const uIntf *e;
inflate_huft * *t;
uIntf *m;
z_streamp zs;





{

  uInt a;
  uInt c[15 +1];
  uInt f;
  int g;
  int h;
  register uInt i;
  register uInt j;
  register int k;
  int l;
  register uIntf *p;
  inflate_huft *q;
  struct inflate_huft_s r;
  inflate_huft *u[15];
  uInt v[288];
  register int w;
  uInt x[15 +1];
  uIntf *xp;
  int y;
  uInt z;



  p = c;



  *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0;
  p = b; i = n;
  do {
    c[*p++]++;
  } while (--i);
  if (c[0] == n)
  {
    *t = (inflate_huft *)0;
    *m = 0;
    return 0;
  }



  l = *m;
  for (j = 1; j <= 15; j++)
    if (c[j])
      break;
  k = j;
  if ((uInt)l < j)
    l = j;
  for (i = 15; i; i--)
    if (c[i])
      break;
  g = i;
  if ((uInt)l > i)
    l = i;
  *m = l;



  for (y = 1 << j; j < i; j++, y <<= 1)
    if ((y -= c[j]) < 0)
      return (-3);
  if ((y -= c[i]) < 0)
    return (-3);
  c[i] += y;



  x[1] = j = 0;
  p = c + 1; xp = x + 2;
  while (--i) {
    *xp++ = (j += *p++);
  }



  p = b; i = 0;
  do {
    if ((j = *p++) != 0)
      v[x[j]++] = i;
  } while (++i < n);
  n = x[g];



  x[0] = i = 0;
  p = v;
  h = -1;
  w = -l;
  u[0] = (inflate_huft *)0;
  q = (inflate_huft *)0;
  z = 0;


  for (; k <= g; k++)
  {
    a = c[k];
    while (a--)
    {


      while (k > w + l)
      {
        h++;
        w += l;


        z = g - w;
        z = z > (uInt)l ? l : z;
        if ((f = 1 << (j = k - w)) > a + 1)
        {
          f -= a + 1;
          xp = c + k;
          if (j < z)
            while (++j < z)
            {
              if ((f <<= 1) <= *++xp)
                break;
              f -= *xp;
            }
        }
        z = 1 << j;


        if ((q = (inflate_huft *)(*((zs)->zalloc))((zs)->opaque, (z + 1), (sizeof(inflate_huft)))
                                            ) == 0)
        {
          if (h)
            inflate_trees_free(u[0], zs);
          return (-4);
        }



        *t = q + 1;
        *(t = &(q->more.Next)) = 0;
        u[h] = ++q;


        if (h)
        {
          x[h] = i;
          r.word.what.Bits = (Byte)l;
          r.word.what.Exop = (Byte)j;
          r.more.Next = q;
          j = i >> (w - l);
          u[h-1][j] = r;
        }
      }


      r.word.what.Bits = (Byte)(k - w);
      if (p >= v + n)
        r.word.what.Exop = 128 + 64;
      else if (*p < s)
      {
        r.word.what.Exop = (Byte)(*p < 256 ? 0 : 32 + 64);
        r.more.Base = *p++;
      }
      else
      {
        r.word.what.Exop = (Byte)(e[*p - s] + 16 + 64);
        r.more.Base = d[*p++ - s];
      }


      f = 1 << (k - w);
      for (j = i >> w; j < z; j += f)
        q[j] = r;


      for (j = 1 << (k - 1); i & j; j >>= 1)
        i ^= j;
      i ^= j;


      while ((i & ((1 << w) - 1)) != x[h])
      {
        h--;
        w -= l;
      }
    }
  }



  return y != 0 && g != 1 ? (-5) : 0;
}


int inflate_trees_bits(c, bb, tb, z)
uIntf *c;
uIntf *bb;
inflate_huft * *tb;
z_streamp z;
{
  int r;

  r = huft_build(c, 19, 19, (uIntf*)0, (uIntf*)0, tb, bb, z);
  if (r == (-3))
    z->msg = (char*)"oversubscribed dynamic bit lengths tree";
  else if (r == (-5) || *bb == 0)
  {
    inflate_trees_free(*tb, z);
    z->msg = (char*)"incomplete dynamic bit lengths tree";
    r = (-3);
  }
  return r;
}


int inflate_trees_dynamic(nl, nd, c, bl, bd, tl, td, z)
uInt nl;
uInt nd;
uIntf *c;
uIntf *bl;
uIntf *bd;
inflate_huft * *tl;
inflate_huft * *td;
z_streamp z;
{
  int r;


  r = huft_build(c, nl, 257, (*_GLOBAL_cplens_33_A[get_stack_id()]), (*_GLOBAL_cplext_34_A[get_stack_id()]), tl, bl, z);
  if (r != 0 || *bl == 0)
  {
    if (r == (-3))
      z->msg = (char*)"oversubscribed literal/length tree";
    else if (r != (-4))
    {
      inflate_trees_free(*tl, z);
      z->msg = (char*)"incomplete literal/length tree";
      r = (-3);
    }
    return r;
  }


  r = huft_build(c + nl, nd, 0, (*_GLOBAL_cpdist_35_A[get_stack_id()]), (*_GLOBAL_cpdext_36_A[get_stack_id()]), td, bd, z);
  if (r != 0 || (*bd == 0 && nl > 257))
  {
    if (r == (-3))
      z->msg = (char*)"oversubscribed distance tree";
    else if (r == (-5)) {




      inflate_trees_free(*td, z);
      z->msg = (char*)"incomplete distance tree";
      r = (-3);
    }
    else if (r != (-4))
    {
      z->msg = (char*)"empty distance tree with lengths";
      r = (-3);
    }
    inflate_trees_free(*tl, z);
    return r;

  }


  return 0;
}



typedef  int  _GLOBAL_82_T; static  _GLOBAL_82_T  global_fixed_built[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     

typedef  inflate_huft  _GLOBAL_83_T; static  _GLOBAL_83_T  _GLOBAL_0_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_1_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_2_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_3_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_4_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_5_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_6_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_7_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_8_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_9_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_10_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_11_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_12_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_13_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_14_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_15_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_16_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_17_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_18_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_19_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_20_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_21_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_22_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_23_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_24_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_25_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_26_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_27_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_28_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_29_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_30_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_31_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_32_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_33_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_34_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_35_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_36_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_37_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_38_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_39_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_40_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_41_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_42_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_43_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_44_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_45_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_46_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_47_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_48_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_49_fixed_mem_I [ 530 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fixed_mem_I) *_GLOBAL_fixed_mem_37_A[NUM_STACKS] = { &_GLOBAL_0_fixed_mem_I, &_GLOBAL_1_fixed_mem_I, &_GLOBAL_2_fixed_mem_I, &_GLOBAL_3_fixed_mem_I, &_GLOBAL_4_fixed_mem_I, &_GLOBAL_5_fixed_mem_I, &_GLOBAL_6_fixed_mem_I, &_GLOBAL_7_fixed_mem_I, &_GLOBAL_8_fixed_mem_I, &_GLOBAL_9_fixed_mem_I, &_GLOBAL_10_fixed_mem_I, &_GLOBAL_11_fixed_mem_I, &_GLOBAL_12_fixed_mem_I, &_GLOBAL_13_fixed_mem_I, &_GLOBAL_14_fixed_mem_I, &_GLOBAL_15_fixed_mem_I, &_GLOBAL_16_fixed_mem_I, &_GLOBAL_17_fixed_mem_I, &_GLOBAL_18_fixed_mem_I, &_GLOBAL_19_fixed_mem_I, &_GLOBAL_20_fixed_mem_I, &_GLOBAL_21_fixed_mem_I, &_GLOBAL_22_fixed_mem_I, &_GLOBAL_23_fixed_mem_I, &_GLOBAL_24_fixed_mem_I, &_GLOBAL_25_fixed_mem_I, &_GLOBAL_26_fixed_mem_I, &_GLOBAL_27_fixed_mem_I, &_GLOBAL_28_fixed_mem_I, &_GLOBAL_29_fixed_mem_I, &_GLOBAL_30_fixed_mem_I, &_GLOBAL_31_fixed_mem_I, &_GLOBAL_32_fixed_mem_I, &_GLOBAL_33_fixed_mem_I, &_GLOBAL_34_fixed_mem_I, &_GLOBAL_35_fixed_mem_I, &_GLOBAL_36_fixed_mem_I, &_GLOBAL_37_fixed_mem_I, &_GLOBAL_38_fixed_mem_I, &_GLOBAL_39_fixed_mem_I, &_GLOBAL_40_fixed_mem_I, &_GLOBAL_41_fixed_mem_I, &_GLOBAL_42_fixed_mem_I, &_GLOBAL_43_fixed_mem_I, &_GLOBAL_44_fixed_mem_I, &_GLOBAL_45_fixed_mem_I, &_GLOBAL_46_fixed_mem_I, &_GLOBAL_47_fixed_mem_I, &_GLOBAL_48_fixed_mem_I, &_GLOBAL_49_fixed_mem_I, };  
typedef  uInt  _GLOBAL_84_T; static  _GLOBAL_84_T  global_fixed_bl[NUM_STACKS];   
typedef  uInt  _GLOBAL_85_T; static  _GLOBAL_85_T  global_fixed_bd[NUM_STACKS];   
typedef  inflate_huft  _GLOBAL_86_T; static  _GLOBAL_86_T  * global_fixed_tl[NUM_STACKS];   
typedef  inflate_huft  _GLOBAL_87_T; static  _GLOBAL_87_T  * global_fixed_td[NUM_STACKS];   


static voidpf falloc(q, n, s)
voidpf q;
uInt n;
uInt s;
{
 
                                         ;
  *(intf *)q -= n+s-s;
  return (voidpf)((*_GLOBAL_fixed_mem_37_A[get_stack_id()]) + *(intf *)q);
}


int inflate_trees_fixed(bl, bd, tl, td)
uIntf *bl;
uIntf *bd;
inflate_huft * *tl;
inflate_huft * *td;
{

  if (!global_fixed_built[get_stack_id()])
  {
    int k;
    unsigned c[288];
    z_stream z;
    int f = 530;


    z.zalloc = falloc;
    z.zfree = 0;
    z.opaque = (voidpf)&f;


    for (k = 0; k < 144; k++)
      c[k] = 8;
    for (; k < 256; k++)
      c[k] = 9;
    for (; k < 280; k++)
      c[k] = 7;
    for (; k < 288; k++)
      c[k] = 8;
    global_fixed_bl[get_stack_id()] = 7;
    huft_build(c, 288, 257, (*_GLOBAL_cplens_33_A[get_stack_id()]), (*_GLOBAL_cplext_34_A[get_stack_id()]), &global_fixed_tl[get_stack_id()], &global_fixed_bl[get_stack_id()], &z);


    for (k = 0; k < 30; k++)
      c[k] = 5;
    global_fixed_bd[get_stack_id()] = 5;
    huft_build(c, 30, 0, (*_GLOBAL_cpdist_35_A[get_stack_id()]), (*_GLOBAL_cpdext_36_A[get_stack_id()]), &global_fixed_td[get_stack_id()], &global_fixed_bd[get_stack_id()], &z);


    ;
    global_fixed_built[get_stack_id()] = 1;
  }
  *bl = global_fixed_bl[get_stack_id()];
  *bd = global_fixed_bd[get_stack_id()];
  *tl = global_fixed_tl[get_stack_id()];
  *td = global_fixed_td[get_stack_id()];
  return 0;
}


int inflate_trees_free(t, z)
inflate_huft *t;
z_streamp z;



{
  register inflate_huft *p, *q, *r;


  p = 0;
  q = t;
  while (q != 0)
  {
    r = (q - 1)->more.Next;
    (q - 1)->more.Next = p;
    p = q;
    q = r;
  }

  while (p != 0)
  {
    q = (--p)->more.Next;
    (*((z)->zfree))((z)->opaque, (voidpf)(p));
    p = q;
  }
  return 0;
}
# 4602 "freebsd5/net/zlib.c"
extern int inflate_fast ( uInt, uInt, inflate_huft *, inflate_huft *, inflate_blocks_statef *, z_streamp )





                ;
# 4618 "freebsd5/net/zlib.c"
struct inflate_codes_state {


  enum {
      START,
      LEN,
      LENEXT,
      DIST,
      DISTEXT,
      COPY,
      LIT,
      WASH,
      END,
      BADCODE}
    mode;


  uInt len;
  union {
    struct {
      inflate_huft *tree;
      uInt need;
    } code;
    uInt lit;
    struct {
      uInt get;
      uInt dist;
    } copy;
  } sub;


  Byte lbits;
  Byte dbits;
  inflate_huft *ltree;
  inflate_huft *dtree;

};


inflate_codes_statef *inflate_codes_new(bl, bd, tl, td, z)
uInt bl, bd;
inflate_huft *tl;
inflate_huft *td;
z_streamp z;
{
  inflate_codes_statef *c;

  if ((c = (inflate_codes_statef *)
       (*((z)->zalloc))((z)->opaque, (1), (sizeof(struct inflate_codes_state)))) != 0)
  {
    c->mode = START;
    c->lbits = (Byte)bl;
    c->dbits = (Byte)bd;
    c->ltree = tl;
    c->dtree = td;
    ;
  }
  return c;
}


int inflate_codes(s, z, r)
inflate_blocks_statef *s;
z_streamp z;
int r;
{
  uInt j;
  inflate_huft *t;
  uInt e;
  uLong b;
  uInt k;
  Bytef *p;
  uInt n;
  Bytef *q;
  uInt m;
  Bytef *f;
  inflate_codes_statef *c = s->sub.decode.codes;


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}


  while (1) switch (c->mode)
  {
    case START:

      if (m >= 258 && n >= 10)
      {
        {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
        r = inflate_fast(c->lbits, c->dbits, c->ltree, c->dtree, s, z);
        {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}
        if (r != 0)
        {
          c->mode = r == 1 ? WASH : BADCODE;
          break;
        }
      }

      c->sub.code.need = c->lbits;
      c->sub.code.tree = c->ltree;
      c->mode = LEN;
    case LEN:
      j = c->sub.code.need;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      t = c->sub.code.tree + ((uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[j]);
      {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
      e = (uInt)(t->word.what.Exop);
      if (e == 0)
      {
        c->sub.lit = t->more.Base;
       

                                                               ;
        c->mode = LIT;
        break;
      }
      if (e & 16)
      {
        c->sub.copy.get = e & 15;
        c->len = t->more.Base;
        c->mode = LENEXT;
        break;
      }
      if ((e & 64) == 0)
      {
        c->sub.code.need = e;
        c->sub.code.tree = t->more.Next;
        break;
      }
      if (e & 32)
      {
        ;
        c->mode = WASH;
        break;
      }
      c->mode = BADCODE;
      z->msg = (char*)"invalid literal/length code";
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case LENEXT:
      j = c->sub.copy.get;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      c->len += (uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[j];
      {b>>=(j);k-=(j);}
      c->sub.code.need = c->dbits;
      c->sub.code.tree = c->dtree;
      ;
      c->mode = DIST;
    case DIST:
      j = c->sub.code.need;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      t = c->sub.code.tree + ((uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[j]);
      {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
      e = (uInt)(t->word.what.Exop);
      if (e & 16)
      {
        c->sub.copy.get = e & 15;
        c->sub.copy.dist = t->more.Base;
        c->mode = DISTEXT;
        break;
      }
      if ((e & 64) == 0)
      {
        c->sub.code.need = e;
        c->sub.code.tree = t->more.Next;
        break;
      }
      c->mode = BADCODE;
      z->msg = (char*)"invalid distance code";
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case DISTEXT:
      j = c->sub.copy.get;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      c->sub.copy.dist += (uInt)b & (*_GLOBAL_inflate_mask_30_A[get_stack_id()])[j];
      {b>>=(j);k-=(j);}
      ;
      c->mode = COPY;
    case COPY:

      f = (uInt)(q - s->window) < c->sub.copy.dist ?
          s->end - (c->sub.copy.dist - (q - s->window)) :
          q - c->sub.copy.dist;





      while (c->len)
      {
        {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
        {*q++=(Byte)(*f++);m--;}
        if (f == s->end)
          f = s->window;
        c->len--;
      }
      c->mode = START;
      break;
    case LIT:
      {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
      {*q++=(Byte)(c->sub.lit);m--;}
      c->mode = START;
      break;
    case WASH:
      {{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}
      if (s->read != s->write)
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      c->mode = END;
    case END:
      r = 1;
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case BADCODE:
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    default:
      r = (-2);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
  }
}


void inflate_codes_free(c, z)
inflate_codes_statef *c;
z_streamp z;
{
  (*((z)->zfree))((z)->opaque, (voidpf)(c));
  ;
}
# 4865 "freebsd5/net/zlib.c"
typedef  uInt _GLOBAL_88_T;  _GLOBAL_88_T  _GLOBAL_0_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_1_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_2_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_3_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_4_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_5_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_6_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_7_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_8_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_9_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_10_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_11_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_12_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_13_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_14_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_15_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_16_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_17_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_18_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_19_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_20_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_21_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_22_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_23_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_24_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_25_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_26_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_27_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_28_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_29_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_30_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_31_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_32_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_33_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_34_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_35_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_36_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_37_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_38_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_39_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_40_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_41_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_42_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_43_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_44_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_45_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_46_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_47_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_48_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ;  _GLOBAL_88_T  _GLOBAL_49_inflate_mask_I [ 17 ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inflate_mask_I) *_GLOBAL_inflate_mask_38_A[NUM_STACKS] = { &_GLOBAL_0_inflate_mask_I, &_GLOBAL_1_inflate_mask_I, &_GLOBAL_2_inflate_mask_I, &_GLOBAL_3_inflate_mask_I, &_GLOBAL_4_inflate_mask_I, &_GLOBAL_5_inflate_mask_I, &_GLOBAL_6_inflate_mask_I, &_GLOBAL_7_inflate_mask_I, &_GLOBAL_8_inflate_mask_I, &_GLOBAL_9_inflate_mask_I, &_GLOBAL_10_inflate_mask_I, &_GLOBAL_11_inflate_mask_I, &_GLOBAL_12_inflate_mask_I, &_GLOBAL_13_inflate_mask_I, &_GLOBAL_14_inflate_mask_I, &_GLOBAL_15_inflate_mask_I, &_GLOBAL_16_inflate_mask_I, &_GLOBAL_17_inflate_mask_I, &_GLOBAL_18_inflate_mask_I, &_GLOBAL_19_inflate_mask_I, &_GLOBAL_20_inflate_mask_I, &_GLOBAL_21_inflate_mask_I, &_GLOBAL_22_inflate_mask_I, &_GLOBAL_23_inflate_mask_I, &_GLOBAL_24_inflate_mask_I, &_GLOBAL_25_inflate_mask_I, &_GLOBAL_26_inflate_mask_I, &_GLOBAL_27_inflate_mask_I, &_GLOBAL_28_inflate_mask_I, &_GLOBAL_29_inflate_mask_I, &_GLOBAL_30_inflate_mask_I, &_GLOBAL_31_inflate_mask_I, &_GLOBAL_32_inflate_mask_I, &_GLOBAL_33_inflate_mask_I, &_GLOBAL_34_inflate_mask_I, &_GLOBAL_35_inflate_mask_I, &_GLOBAL_36_inflate_mask_I, &_GLOBAL_37_inflate_mask_I, &_GLOBAL_38_inflate_mask_I, &_GLOBAL_39_inflate_mask_I, &_GLOBAL_40_inflate_mask_I, &_GLOBAL_41_inflate_mask_I, &_GLOBAL_42_inflate_mask_I, &_GLOBAL_43_inflate_mask_I, &_GLOBAL_44_inflate_mask_I, &_GLOBAL_45_inflate_mask_I, &_GLOBAL_46_inflate_mask_I, &_GLOBAL_47_inflate_mask_I, &_GLOBAL_48_inflate_mask_I, &_GLOBAL_49_inflate_mask_I, };   
    
           
           




int inflate_flush(s, z, r)
inflate_blocks_statef *s;
z_streamp z;
int r;
{
  uInt n;
  Bytef *p;
  Bytef *q;


  p = z->next_out;
  q = s->read;


  n = (uInt)((q <= s->write ? s->write : s->end) - q);
  if (n > z->avail_out) n = z->avail_out;
  if (n && r == (-5)) r = 0;


  z->avail_out -= n;
  z->total_out += n;


  if (s->checkfn != 0)
    z->adler = s->check = (*s->checkfn)(s->check, q, n);


  if (p != 0) {
    memcpy(p, q, n);
    p += n;
  }
  q += n;


  if (q == s->end)
  {

    q = s->window;
    if (s->write == s->end)
      s->write = s->window;


    n = (uInt)(s->write - q);
    if (n > z->avail_out) n = z->avail_out;
    if (n && r == (-5)) r = 0;


    z->avail_out -= n;
    z->total_out += n;


    if (s->checkfn != 0)
      z->adler = s->check = (*s->checkfn)(s->check, q, n);


    if (p != 0) {
      memcpy(p, q, n);
      p += n;
    }
    q += n;
  }


  z->next_out = p;
  s->read = q;


  return r;
}
# 4976 "freebsd5/net/zlib.c"
int inflate_fast(bl, bd, tl, td, s, z)
uInt bl, bd;
inflate_huft *tl;
inflate_huft *td;
inflate_blocks_statef *s;
z_streamp z;
{
  inflate_huft *t;
  uInt e;
  uLong b;
  uInt k;
  Bytef *p;
  uInt n;
  Bytef *q;
  uInt m;
  uInt ml;
  uInt md;
  uInt c;
  uInt d;
  Bytef *r;


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(uInt)(uInt)(q<s->read?s->read-q-1:s->end-q);}}


  ml = (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[bl];
  md = (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[bd];


  do {

    {while(k<(20)){b|=((uLong)(n--,*p++))<<k;k+=8;}}
    if ((e = (t = tl + ((uInt)b & ml))->word.what.Exop) == 0)
    {
      {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
     

                                                                ;
      *q++ = (Byte)t->more.Base;
      m--;
      continue;
    }
    do {
      {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
      if (e & 16)
      {

        e &= 15;
        c = t->more.Base + ((uInt)b & (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[e]);
        {b>>=(e);k-=(e);}
        ;


        {while(k<(15)){b|=((uLong)(n--,*p++))<<k;k+=8;}};
        e = (t = td + ((uInt)b & md))->word.what.Exop;
        do {
          {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
          if (e & 16)
          {

            e &= 15;
            {while(k<(e)){b|=((uLong)(n--,*p++))<<k;k+=8;}}
            d = t->more.Base + ((uInt)b & (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[e]);
            {b>>=(e);k-=(e);}
            ;


            m -= c;
            if ((uInt)(q - s->window) >= d)
            {
              r = q - d;
              *q++ = *r++; c--;
              *q++ = *r++; c--;
            }
            else
            {
              e = d - (uInt)(q - s->window);
              r = s->end - e;
              if (c > e)
              {
                c -= e;
                do {
                  *q++ = *r++;
                } while (--e);
                r = s->window;
              }
            }
            do {
              *q++ = *r++;
            } while (--c);
            break;
          }
          else if ((e & 64) == 0)
            e = (t = t->more.Next + ((uInt)b & (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[e]))->word.what.Exop;
          else
          {
            z->msg = (char*)"invalid distance code";
            {n+=(c=k>>3);p-=c;k&=7;}
            {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
            return (-3);
          }
        } while (1);
        break;
      }
      if ((e & 64) == 0)
      {
        if ((e = (t = t->more.Next + ((uInt)b & (*_GLOBAL_inflate_mask_38_A[get_stack_id()])[e]))->word.what.Exop) == 0)
        {
          {b>>=(t->word.what.Bits);k-=(t->word.what.Bits);}
         

                                                                    ;
          *q++ = (Byte)t->more.Base;
          m--;
          break;
        }
      }
      else if (e & 32)
      {
        ;
        {n+=(c=k>>3);p-=c;k&=7;}
        {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
        return 1;
      }
      else
      {
        z->msg = (char*)"invalid literal/length code";
        {n+=(c=k>>3);p-=c;k&=7;}
        {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
        return (-3);
      }
    } while (1);
  } while (m >= 258 && n >= 10);


  {n+=(c=k>>3);p-=c;k&=7;}
  {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
  return 0;
}
# 5139 "freebsd5/net/zlib.c"
                             typedef  const char  _GLOBAL_89_T;  _GLOBAL_89_T  * _GLOBAL_0_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_1_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_2_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_3_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_4_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_5_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_6_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_7_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_8_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_9_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_10_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_11_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_12_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_13_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_14_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_15_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_16_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_17_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_18_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_19_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_20_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_21_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_22_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_23_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_24_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_25_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_26_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_27_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_28_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_29_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_30_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_31_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_32_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_33_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_34_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_35_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_36_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_37_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_38_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_39_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_40_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_41_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_42_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_43_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_44_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_45_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_46_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_47_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_48_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_49_z_errmsg_I [ 10 ]   = { "need dictionary" , "stream end"  , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , "incompatible version"  , ""  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_z_errmsg_I) *_GLOBAL_z_errmsg_39_A[NUM_STACKS] = { &_GLOBAL_0_z_errmsg_I, &_GLOBAL_1_z_errmsg_I, &_GLOBAL_2_z_errmsg_I, &_GLOBAL_3_z_errmsg_I, &_GLOBAL_4_z_errmsg_I, &_GLOBAL_5_z_errmsg_I, &_GLOBAL_6_z_errmsg_I, &_GLOBAL_7_z_errmsg_I, &_GLOBAL_8_z_errmsg_I, &_GLOBAL_9_z_errmsg_I, &_GLOBAL_10_z_errmsg_I, &_GLOBAL_11_z_errmsg_I, &_GLOBAL_12_z_errmsg_I, &_GLOBAL_13_z_errmsg_I, &_GLOBAL_14_z_errmsg_I, &_GLOBAL_15_z_errmsg_I, &_GLOBAL_16_z_errmsg_I, &_GLOBAL_17_z_errmsg_I, &_GLOBAL_18_z_errmsg_I, &_GLOBAL_19_z_errmsg_I, &_GLOBAL_20_z_errmsg_I, &_GLOBAL_21_z_errmsg_I, &_GLOBAL_22_z_errmsg_I, &_GLOBAL_23_z_errmsg_I, &_GLOBAL_24_z_errmsg_I, &_GLOBAL_25_z_errmsg_I, &_GLOBAL_26_z_errmsg_I, &_GLOBAL_27_z_errmsg_I, &_GLOBAL_28_z_errmsg_I, &_GLOBAL_29_z_errmsg_I, &_GLOBAL_30_z_errmsg_I, &_GLOBAL_31_z_errmsg_I, &_GLOBAL_32_z_errmsg_I, &_GLOBAL_33_z_errmsg_I, &_GLOBAL_34_z_errmsg_I, &_GLOBAL_35_z_errmsg_I, &_GLOBAL_36_z_errmsg_I, &_GLOBAL_37_z_errmsg_I, &_GLOBAL_38_z_errmsg_I, &_GLOBAL_39_z_errmsg_I, &_GLOBAL_40_z_errmsg_I, &_GLOBAL_41_z_errmsg_I, &_GLOBAL_42_z_errmsg_I, &_GLOBAL_43_z_errmsg_I, &_GLOBAL_44_z_errmsg_I, &_GLOBAL_45_z_errmsg_I, &_GLOBAL_46_z_errmsg_I, &_GLOBAL_47_z_errmsg_I, &_GLOBAL_48_z_errmsg_I, &_GLOBAL_49_z_errmsg_I, };    












const char *zlibVersion()
{
    return "1.0.4P";
}
# 5356 "freebsd5/net/zlib.c"
uLong adler32(adler, buf, len)
    uLong adler;
    const Bytef *buf;
    uInt len;
{
    unsigned long s1 = adler & 0xffff;
    unsigned long s2 = (adler >> 16) & 0xffff;
    int k;

    if (buf == 0) return 1L;

    while (len > 0) {
        k = len < 5552 ? len : 5552;
        len -= k;
        while (k >= 16) {
            {s1 += buf[(0)]; s2 += s1;}; {s1 += buf[((0)+1)]; s2 += s1;};; {s1 += buf[((0)+2)]; s2 += s1;}; {s1 += buf[(((0)+2)+1)]; s2 += s1;};;; {s1 += buf[((0)+4)]; s2 += s1;}; {s1 += buf[(((0)+4)+1)]; s2 += s1;};; {s1 += buf[(((0)+4)+2)]; s2 += s1;}; {s1 += buf[((((0)+4)+2)+1)]; s2 += s1;};;;; {s1 += buf[(8)]; s2 += s1;}; {s1 += buf[((8)+1)]; s2 += s1;};; {s1 += buf[((8)+2)]; s2 += s1;}; {s1 += buf[(((8)+2)+1)]; s2 += s1;};;; {s1 += buf[((8)+4)]; s2 += s1;}; {s1 += buf[(((8)+4)+1)]; s2 += s1;};; {s1 += buf[(((8)+4)+2)]; s2 += s1;}; {s1 += buf[((((8)+4)+2)+1)]; s2 += s1;};;;;;
     buf += 16;
            k -= 16;
        }
        if (k != 0) do {
            s1 += *buf++;
     s2 += s1;
        } while (--k);
        s1 %= 65521L;
        s2 %= 65521L;
    }
    return (s2 << 16) | s1;
}



static int
zlib_modevent(module_t mod, int type, void *unused)
{
 switch (type) {
 case MOD_LOAD:
  return 0;
 case MOD_UNLOAD:
  return 0;
 }
 return 22;
}

typedef  moduledata_t  _GLOBAL_90_T; static  _GLOBAL_90_T  global_zlib_mod[NUM_STACKS] = {  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  { "zlib" , zlib_modevent  , 0  } ,  };     
 
 
 

typedef  struct mod_metadata   _GLOBAL_91_T; static  _GLOBAL_91_T  global__mod_metadata_md_zlib[NUM_STACKS] = {  { 1 , 2  , & global_zlib_mod[0]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[1]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[2]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[3]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[4]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[5]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[6]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[7]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[8]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[9]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[10]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[11]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[12]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[13]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[14]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[15]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[16]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[17]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[18]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[19]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[20]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[21]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[22]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[23]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[24]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[25]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[26]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[27]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[28]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[29]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[30]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[31]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[32]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[33]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[34]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[35]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[36]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[37]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[38]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[39]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[40]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[41]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[42]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[43]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[44]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[45]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[46]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[47]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[48]   , "zlib"  } ,  { 1 , 2  , & global_zlib_mod[49]   , "zlib"  } ,  };            typedef  void const   _GLOBAL_92_T; static  _GLOBAL_92_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[0] ;static  _GLOBAL_92_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[1] ;static  _GLOBAL_92_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[2] ;static  _GLOBAL_92_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[3] ;static  _GLOBAL_92_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[4] ;static  _GLOBAL_92_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[5] ;static  _GLOBAL_92_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[6] ;static  _GLOBAL_92_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[7] ;static  _GLOBAL_92_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[8] ;static  _GLOBAL_92_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[9] ;static  _GLOBAL_92_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[10] ;static  _GLOBAL_92_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[11] ;static  _GLOBAL_92_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[12] ;static  _GLOBAL_92_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[13] ;static  _GLOBAL_92_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[14] ;static  _GLOBAL_92_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[15] ;static  _GLOBAL_92_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[16] ;static  _GLOBAL_92_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[17] ;static  _GLOBAL_92_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[18] ;static  _GLOBAL_92_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[19] ;static  _GLOBAL_92_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[20] ;static  _GLOBAL_92_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[21] ;static  _GLOBAL_92_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[22] ;static  _GLOBAL_92_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[23] ;static  _GLOBAL_92_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[24] ;static  _GLOBAL_92_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[25] ;static  _GLOBAL_92_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[26] ;static  _GLOBAL_92_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[27] ;static  _GLOBAL_92_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[28] ;static  _GLOBAL_92_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[29] ;static  _GLOBAL_92_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[30] ;static  _GLOBAL_92_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[31] ;static  _GLOBAL_92_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[32] ;static  _GLOBAL_92_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[33] ;static  _GLOBAL_92_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[34] ;static  _GLOBAL_92_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[35] ;static  _GLOBAL_92_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[36] ;static  _GLOBAL_92_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[37] ;static  _GLOBAL_92_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[38] ;static  _GLOBAL_92_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[39] ;static  _GLOBAL_92_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[40] ;static  _GLOBAL_92_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[41] ;static  _GLOBAL_92_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[42] ;static  _GLOBAL_92_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[43] ;static  _GLOBAL_92_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[44] ;static  _GLOBAL_92_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[45] ;static  _GLOBAL_92_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[46] ;static  _GLOBAL_92_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[47] ;static  _GLOBAL_92_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[48] ;static  _GLOBAL_92_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_zlib __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_zlib[49] ;          typedef  struct sysinit   _GLOBAL_93_T; static  _GLOBAL_93_T  global_zlibmodule_sys_init[NUM_STACKS] = {  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[0]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[1]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[2]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[3]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[4]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[5]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[6]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[7]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[8]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[9]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[10]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[11]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[12]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[13]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[14]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[15]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[16]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[17]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[18]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[19]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[20]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[21]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[22]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[23]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[24]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[25]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[26]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[27]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[28]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[29]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[30]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[31]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[32]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[33]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[34]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[35]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[36]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[37]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[38]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[39]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[40]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[41]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[42]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[43]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[44]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[45]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[46]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[47]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[48]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_zlib_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_94_T; static  _GLOBAL_94_T  * const  _global_section_0___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[0] ;static  _GLOBAL_94_T  * const  _global_section_1___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[1] ;static  _GLOBAL_94_T  * const  _global_section_2___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[2] ;static  _GLOBAL_94_T  * const  _global_section_3___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[3] ;static  _GLOBAL_94_T  * const  _global_section_4___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[4] ;static  _GLOBAL_94_T  * const  _global_section_5___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[5] ;static  _GLOBAL_94_T  * const  _global_section_6___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[6] ;static  _GLOBAL_94_T  * const  _global_section_7___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[7] ;static  _GLOBAL_94_T  * const  _global_section_8___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[8] ;static  _GLOBAL_94_T  * const  _global_section_9___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[9] ;static  _GLOBAL_94_T  * const  _global_section_10___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[10] ;static  _GLOBAL_94_T  * const  _global_section_11___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[11] ;static  _GLOBAL_94_T  * const  _global_section_12___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[12] ;static  _GLOBAL_94_T  * const  _global_section_13___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[13] ;static  _GLOBAL_94_T  * const  _global_section_14___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[14] ;static  _GLOBAL_94_T  * const  _global_section_15___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[15] ;static  _GLOBAL_94_T  * const  _global_section_16___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[16] ;static  _GLOBAL_94_T  * const  _global_section_17___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[17] ;static  _GLOBAL_94_T  * const  _global_section_18___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[18] ;static  _GLOBAL_94_T  * const  _global_section_19___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[19] ;static  _GLOBAL_94_T  * const  _global_section_20___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[20] ;static  _GLOBAL_94_T  * const  _global_section_21___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[21] ;static  _GLOBAL_94_T  * const  _global_section_22___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[22] ;static  _GLOBAL_94_T  * const  _global_section_23___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[23] ;static  _GLOBAL_94_T  * const  _global_section_24___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[24] ;static  _GLOBAL_94_T  * const  _global_section_25___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[25] ;static  _GLOBAL_94_T  * const  _global_section_26___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[26] ;static  _GLOBAL_94_T  * const  _global_section_27___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[27] ;static  _GLOBAL_94_T  * const  _global_section_28___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[28] ;static  _GLOBAL_94_T  * const  _global_section_29___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[29] ;static  _GLOBAL_94_T  * const  _global_section_30___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[30] ;static  _GLOBAL_94_T  * const  _global_section_31___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[31] ;static  _GLOBAL_94_T  * const  _global_section_32___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[32] ;static  _GLOBAL_94_T  * const  _global_section_33___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[33] ;static  _GLOBAL_94_T  * const  _global_section_34___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[34] ;static  _GLOBAL_94_T  * const  _global_section_35___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[35] ;static  _GLOBAL_94_T  * const  _global_section_36___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[36] ;static  _GLOBAL_94_T  * const  _global_section_37___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[37] ;static  _GLOBAL_94_T  * const  _global_section_38___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[38] ;static  _GLOBAL_94_T  * const  _global_section_39___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[39] ;static  _GLOBAL_94_T  * const  _global_section_40___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[40] ;static  _GLOBAL_94_T  * const  _global_section_41___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[41] ;static  _GLOBAL_94_T  * const  _global_section_42___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[42] ;static  _GLOBAL_94_T  * const  _global_section_43___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[43] ;static  _GLOBAL_94_T  * const  _global_section_44___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[44] ;static  _GLOBAL_94_T  * const  _global_section_45___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[45] ;static  _GLOBAL_94_T  * const  _global_section_46___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[46] ;static  _GLOBAL_94_T  * const  _global_section_47___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[47] ;static  _GLOBAL_94_T  * const  _global_section_48___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[48] ;static  _GLOBAL_94_T  * const  _global_section_49___set_sysinit_set_sym_zlibmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_zlibmodule_sys_init[49] ;          struct __hack;
typedef  struct mod_version   _GLOBAL_95_T; static  _GLOBAL_95_T  global__zlib_version[NUM_STACKS] = {  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  };         typedef  struct mod_metadata   _GLOBAL_96_T; static  _GLOBAL_96_T  global__mod_metadata_zlib_version[NUM_STACKS] = {  { 1 , 3  , & global__zlib_version[0]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[1]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[2]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[3]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[4]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[5]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[6]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[7]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[8]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[9]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[10]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[11]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[12]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[13]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[14]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[15]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[16]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[17]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[18]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[19]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[20]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[21]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[22]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[23]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[24]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[25]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[26]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[27]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[28]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[29]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[30]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[31]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[32]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[33]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[34]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[35]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[36]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[37]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[38]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[39]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[40]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[41]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[42]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[43]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[44]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[45]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[46]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[47]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[48]   , "zlib"  } ,  { 1 , 3  , & global__zlib_version[49]   , "zlib"  } ,  };            typedef  void const   _GLOBAL_97_T; static  _GLOBAL_97_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[0] ;static  _GLOBAL_97_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[1] ;static  _GLOBAL_97_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[2] ;static  _GLOBAL_97_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[3] ;static  _GLOBAL_97_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[4] ;static  _GLOBAL_97_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[5] ;static  _GLOBAL_97_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[6] ;static  _GLOBAL_97_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[7] ;static  _GLOBAL_97_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[8] ;static  _GLOBAL_97_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[9] ;static  _GLOBAL_97_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[10] ;static  _GLOBAL_97_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[11] ;static  _GLOBAL_97_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[12] ;static  _GLOBAL_97_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[13] ;static  _GLOBAL_97_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[14] ;static  _GLOBAL_97_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[15] ;static  _GLOBAL_97_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[16] ;static  _GLOBAL_97_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[17] ;static  _GLOBAL_97_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[18] ;static  _GLOBAL_97_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[19] ;static  _GLOBAL_97_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[20] ;static  _GLOBAL_97_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[21] ;static  _GLOBAL_97_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[22] ;static  _GLOBAL_97_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[23] ;static  _GLOBAL_97_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[24] ;static  _GLOBAL_97_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[25] ;static  _GLOBAL_97_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[26] ;static  _GLOBAL_97_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[27] ;static  _GLOBAL_97_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[28] ;static  _GLOBAL_97_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[29] ;static  _GLOBAL_97_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[30] ;static  _GLOBAL_97_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[31] ;static  _GLOBAL_97_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[32] ;static  _GLOBAL_97_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[33] ;static  _GLOBAL_97_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[34] ;static  _GLOBAL_97_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[35] ;static  _GLOBAL_97_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[36] ;static  _GLOBAL_97_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[37] ;static  _GLOBAL_97_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[38] ;static  _GLOBAL_97_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[39] ;static  _GLOBAL_97_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[40] ;static  _GLOBAL_97_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[41] ;static  _GLOBAL_97_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[42] ;static  _GLOBAL_97_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[43] ;static  _GLOBAL_97_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[44] ;static  _GLOBAL_97_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[45] ;static  _GLOBAL_97_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[46] ;static  _GLOBAL_97_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[47] ;static  _GLOBAL_97_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[48] ;static  _GLOBAL_97_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_zlib_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_zlib_version[49] ;         

