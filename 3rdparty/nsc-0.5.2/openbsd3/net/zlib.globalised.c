# 1 "openbsd3/net/zlib.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/zlib.c"
# 34 "openbsd3/net/zlib.c"
# 1 "openbsd3/net/zlib.h" 1
# 114 "openbsd3/net/zlib.h"
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
# 155 "openbsd3/net/zlib.h"
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void (*free_func) (voidpf opaque, voidpf address, uInt nbytes);

struct internal_state;

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

    char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidp opaque;

    Byte data_type;

} z_stream;
# 244 "openbsd3/net/zlib.h"
typedef  char  _GLOBAL_0_T; extern  _GLOBAL_0_T  * global_zlib_version[NUM_STACKS];   







extern int deflateInit (z_stream *strm, int level);
# 271 "openbsd3/net/zlib.h"
extern int deflate (z_stream *strm, int flush);
# 348 "openbsd3/net/zlib.h"
extern int deflateEnd (z_stream *strm);
# 360 "openbsd3/net/zlib.h"
extern int inflateInit (z_stream *strm);
# 374 "openbsd3/net/zlib.h"
extern int inflate (z_stream *strm, int flush);
# 425 "openbsd3/net/zlib.h"
extern int inflateEnd (z_stream *strm);
# 442 "openbsd3/net/zlib.h"
extern int deflateInit2 (z_stream *strm, int level, int method, int windowBits, int memLevel, int strategy, int minCompression)





                            ;
# 502 "openbsd3/net/zlib.h"
extern int deflateCopy (z_stream *dest, z_stream *source)
                                             ;
# 525 "openbsd3/net/zlib.h"
extern int deflateReset (z_stream *strm);
# 536 "openbsd3/net/zlib.h"
extern int inflateInit2 (z_stream *strm, int windowBits)
                                             ;
# 569 "openbsd3/net/zlib.h"
extern int inflateSync (z_stream *strm);
# 584 "openbsd3/net/zlib.h"
extern int inflateReset (z_stream *strm);
# 594 "openbsd3/net/zlib.h"
extern int inflateIncomp (z_stream *strm);
# 611 "openbsd3/net/zlib.h"
extern uLong adler32 (uLong adler, Bytef *buf, uInt len);
# 35 "openbsd3/net/zlib.c" 2

# 1 "openbsd3/sys/param.h" 1
# 56 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/types.h" 1
# 44 "openbsd3/sys/types.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h"
# 1 "openbsd3/sys/cdefs.h" 1
# 41 "openbsd3/sys/cdefs.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cdefs.h" 1
# 42 "openbsd3/sys/cdefs.h" 2
# 39 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 2


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
# 57 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/simplelock.h" 1
# 14 "openbsd3/sys/simplelock.h"
struct simplelock {
 int lock_data;
};
# 45 "openbsd3/sys/simplelock.h"
static __inline void simple_lock_init(struct simplelock *);

static __inline void
simple_lock_init(lkp)
 struct simplelock *lkp;
{

 lkp->lock_data = 0;
}
# 58 "openbsd3/sys/param.h" 2
# 67 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/syslimits.h" 1
# 68 "openbsd3/sys/param.h" 2
# 83 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/errno.h" 1
# 84 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/time.h" 1
# 44 "openbsd3/sys/time.h"
struct timeval {
 long tv_sec;
 long tv_usec;
};




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 66 "openbsd3/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 138 "openbsd3/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
# 172 "openbsd3/sys/time.h"
int itimerfix(struct timeval *tv);
int itimerdecr(struct itimerval *itp, int usec);
void microtime(struct timeval *tv);
int settime(struct timeval *tv);
int ratecheck(struct timeval *, const struct timeval *);
int ppsratecheck(struct timeval *, int *, int);
# 85 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/resource.h" 1
# 55 "openbsd3/sys/resource.h"
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
# 95 "openbsd3/sys/resource.h"
struct orlimit {
 int32_t rlim_cur;
 int32_t rlim_max;
};

struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};


struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};


typedef  struct loadavg   _GLOBAL_1_T; extern  _GLOBAL_1_T  global_averunnable[NUM_STACKS];    
int dosetrlimit(struct proc *, u_int, struct rlimit *);
int donice(struct proc *, struct proc *, int);
# 86 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/ucred.h" 1
# 41 "openbsd3/sys/ucred.h"
struct ucred {
 u_int cr_ref;
 uid_t cr_uid;
 gid_t cr_gid;
 short cr_ngroups;
 gid_t cr_groups[16];
};
# 56 "openbsd3/sys/ucred.h"
struct ucred *crcopy(struct ucred *cr);
struct ucred *crdup(struct ucred *cr);
void crfree(struct ucred *cr);
struct ucred *crget(void);
int suser(struct proc *p, u_int flags);
int suser_ucred(struct ucred *cred);
# 87 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/uio.h" 1
# 38 "openbsd3/sys/uio.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};

enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE
};


struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 size_t uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct proc *uio_procp;
};
# 82 "openbsd3/sys/uio.h"
int ureadc(int c, struct uio *);

int dofilereadv(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
int dofilewritev(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
# 88 "openbsd3/sys/param.h" 2



# 1 "openbsd3/sys/signal.h" 1
# 44 "openbsd3/sys/signal.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
typedef int sig_atomic_t;





# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/trap.h" 1
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 2
# 53 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
struct sigcontext {
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;

 int sc_eip;
 int sc_cs;
 int sc_eflags;
 int sc_esp;
 int sc_ss;

 int sc_onstack;
 int sc_mask;

 int sc_trapno;
 int sc_err;
};
# 45 "openbsd3/sys/signal.h" 2
# 106 "openbsd3/sys/signal.h"
typedef unsigned int sigset_t;

# 1 "openbsd3/sys/siginfo.h" 1
# 31 "openbsd3/sys/siginfo.h"
union sigval {
 int sival_int;
 void *sival_ptr;
};
# 130 "openbsd3/sys/siginfo.h"
typedef struct {
 int si_signo;
 int si_code;
 int si_errno;
 union {
  int _pad[((128 / sizeof (int)) - 3)];
  struct {
   pid_t _pid;
   union {
    struct {
     uid_t _uid;
     union sigval _value;
    } _kill;
    struct {
     clock_t _utime;
     int _status;
     clock_t _stime;
    } _cld;
   } _pdata;
  } _proc;
  struct {
   caddr_t _addr;
   int _trapno;
  } _fault;
# 170 "openbsd3/sys/siginfo.h"
 } _data;
} siginfo_t;
# 194 "openbsd3/sys/siginfo.h"
void initsiginfo(siginfo_t *, int, u_long, int, union sigval);
# 109 "openbsd3/sys/signal.h" 2




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, siginfo_t *, void *);
 } __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 147 "openbsd3/sys/signal.h"
typedef void (*sig_t)(int);




typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;






struct osigaltstack {
 void *ss_sp;
 int ss_size;
 int ss_flags;
};






struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 187 "openbsd3/sys/signal.h"
struct sigstack {
 void *ss_sp;
 int ss_onstack;
};

typedef struct sigcontext ucontext_t;
# 209 "openbsd3/sys/signal.h"

void (*signal(int, void (*)(int)))(int);

# 92 "openbsd3/sys/param.h" 2


# 1 "openbsd3/sys/limits.h" 1
# 42 "openbsd3/sys/limits.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/internal_types.h" 1
# 43 "openbsd3/sys/limits.h" 2


# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/limits.h" 1
# 46 "openbsd3/sys/limits.h" 2
# 95 "openbsd3/sys/param.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 1
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 1
# 74 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h" 1
# 100 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
typedef  int  _GLOBAL_2_T; volatile  _GLOBAL_2_T  global_cpl[NUM_STACKS];   
typedef  int  _GLOBAL_3_T; volatile  _GLOBAL_3_T  global_ipending[NUM_STACKS];   
typedef  int  _GLOBAL_4_T; volatile  _GLOBAL_4_T  global_astpending[NUM_STACKS];   
typedef  int _GLOBAL_5_T;  _GLOBAL_5_T  _GLOBAL_0_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_1_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_2_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_3_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_4_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_5_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_6_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_7_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_8_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_9_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_10_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_11_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_12_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_13_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_14_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_15_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_16_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_17_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_18_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_19_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_20_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_21_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_22_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_23_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_24_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_25_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_26_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_27_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_28_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_29_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_30_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_31_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_32_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_33_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_34_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_35_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_36_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_37_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_38_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_39_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_40_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_41_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_42_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_43_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_44_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_45_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_46_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_47_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_48_imask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_49_imask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_imask_I) *_GLOBAL_imask_0_A[NUM_STACKS] = { &_GLOBAL_0_imask_I, &_GLOBAL_1_imask_I, &_GLOBAL_2_imask_I, &_GLOBAL_3_imask_I, &_GLOBAL_4_imask_I, &_GLOBAL_5_imask_I, &_GLOBAL_6_imask_I, &_GLOBAL_7_imask_I, &_GLOBAL_8_imask_I, &_GLOBAL_9_imask_I, &_GLOBAL_10_imask_I, &_GLOBAL_11_imask_I, &_GLOBAL_12_imask_I, &_GLOBAL_13_imask_I, &_GLOBAL_14_imask_I, &_GLOBAL_15_imask_I, &_GLOBAL_16_imask_I, &_GLOBAL_17_imask_I, &_GLOBAL_18_imask_I, &_GLOBAL_19_imask_I, &_GLOBAL_20_imask_I, &_GLOBAL_21_imask_I, &_GLOBAL_22_imask_I, &_GLOBAL_23_imask_I, &_GLOBAL_24_imask_I, &_GLOBAL_25_imask_I, &_GLOBAL_26_imask_I, &_GLOBAL_27_imask_I, &_GLOBAL_28_imask_I, &_GLOBAL_29_imask_I, &_GLOBAL_30_imask_I, &_GLOBAL_31_imask_I, &_GLOBAL_32_imask_I, &_GLOBAL_33_imask_I, &_GLOBAL_34_imask_I, &_GLOBAL_35_imask_I, &_GLOBAL_36_imask_I, &_GLOBAL_37_imask_I, &_GLOBAL_38_imask_I, &_GLOBAL_39_imask_I, &_GLOBAL_40_imask_I, &_GLOBAL_41_imask_I, &_GLOBAL_42_imask_I, &_GLOBAL_43_imask_I, &_GLOBAL_44_imask_I, &_GLOBAL_45_imask_I, &_GLOBAL_46_imask_I, &_GLOBAL_47_imask_I, &_GLOBAL_48_imask_I, &_GLOBAL_49_imask_I, }; 
typedef  int _GLOBAL_6_T;  _GLOBAL_6_T  _GLOBAL_0_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_1_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_2_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_3_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_4_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_5_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_6_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_7_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_8_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_9_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_10_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_11_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_12_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_13_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_14_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_15_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_16_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_17_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_18_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_19_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_20_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_21_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_22_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_23_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_24_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_25_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_26_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_27_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_28_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_29_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_30_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_31_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_32_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_33_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_34_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_35_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_36_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_37_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_38_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_39_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_40_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_41_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_42_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_43_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_44_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_45_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_46_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_47_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_48_iunmask_I [ 16 ] ;  _GLOBAL_6_T  _GLOBAL_49_iunmask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iunmask_I) *_GLOBAL_iunmask_1_A[NUM_STACKS] = { &_GLOBAL_0_iunmask_I, &_GLOBAL_1_iunmask_I, &_GLOBAL_2_iunmask_I, &_GLOBAL_3_iunmask_I, &_GLOBAL_4_iunmask_I, &_GLOBAL_5_iunmask_I, &_GLOBAL_6_iunmask_I, &_GLOBAL_7_iunmask_I, &_GLOBAL_8_iunmask_I, &_GLOBAL_9_iunmask_I, &_GLOBAL_10_iunmask_I, &_GLOBAL_11_iunmask_I, &_GLOBAL_12_iunmask_I, &_GLOBAL_13_iunmask_I, &_GLOBAL_14_iunmask_I, &_GLOBAL_15_iunmask_I, &_GLOBAL_16_iunmask_I, &_GLOBAL_17_iunmask_I, &_GLOBAL_18_iunmask_I, &_GLOBAL_19_iunmask_I, &_GLOBAL_20_iunmask_I, &_GLOBAL_21_iunmask_I, &_GLOBAL_22_iunmask_I, &_GLOBAL_23_iunmask_I, &_GLOBAL_24_iunmask_I, &_GLOBAL_25_iunmask_I, &_GLOBAL_26_iunmask_I, &_GLOBAL_27_iunmask_I, &_GLOBAL_28_iunmask_I, &_GLOBAL_29_iunmask_I, &_GLOBAL_30_iunmask_I, &_GLOBAL_31_iunmask_I, &_GLOBAL_32_iunmask_I, &_GLOBAL_33_iunmask_I, &_GLOBAL_34_iunmask_I, &_GLOBAL_35_iunmask_I, &_GLOBAL_36_iunmask_I, &_GLOBAL_37_iunmask_I, &_GLOBAL_38_iunmask_I, &_GLOBAL_39_iunmask_I, &_GLOBAL_40_iunmask_I, &_GLOBAL_41_iunmask_I, &_GLOBAL_42_iunmask_I, &_GLOBAL_43_iunmask_I, &_GLOBAL_44_iunmask_I, &_GLOBAL_45_iunmask_I, &_GLOBAL_46_iunmask_I, &_GLOBAL_47_iunmask_I, &_GLOBAL_48_iunmask_I, &_GLOBAL_49_iunmask_I, }; 




extern void Xspllower(void);

static __inline int splraise(int);
static __inline int spllower(int);

static __inline void softintr(int);







void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_splassert_ctl[NUM_STACKS];   
void splassert_check(int, const char *);
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline int
splraise(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 if (ncpl > ocpl)
  global_cpl[get_stack_id()] = ncpl;
 __asm volatile("":::"memory");
 return (ocpl);
}
# 172 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void splx(int);


static __inline void splx(ncpl) int ncpl; { __asm volatile("":::"memory"); global_cpl[get_stack_id()] = ncpl; if (global_ipending[get_stack_id()] & (*_GLOBAL_iunmask_1_A[get_stack_id()])[((ncpl) >> 4)]) Xspllower(); }





static __inline int
spllower(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 splx(ncpl);
 return (ocpl);
}
# 225 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void
softintr(mask)
 int mask;
{
 __asm volatile("orl %1, %0" : "=m"(global_ipending[get_stack_id()]) : "ir" (mask));

}
# 75 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 2
# 83 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
struct intrhand {
 int (*ih_fun)(void *);
 void *ih_arg;
 u_long ih_count;
 struct intrhand *ih_next;
 int ih_level;
 int ih_irq;
 char *ih_what;
};
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h" 1
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h"
struct trapframe {
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
 int tf_ebx;
 int tf_edx;
 int tf_ecx;
 int tf_eax;
 int tf_trapno;

 int tf_err;
 int tf_eip;
 int tf_cs;
 int tf_eflags;

 int tf_esp;
 int tf_ss;

 int tf_vm86_es;
 int tf_vm86_ds;
 int tf_vm86_fs;
 int tf_vm86_gs;
};




struct intrframe {
 int if_ppl;
 int if_es;
 int if_ds;
 int if_edi;
 int if_esi;
 int if_ebp;
 int if_ebx;
 int if_edx;
 int if_ecx;
 int if_eax;
 int :32;
 int :32;

 int if_eip;
 int if_cs;
 int if_eflags;

 int if_esp;
 int if_ss;
};




struct switchframe {
 int sf_ppl;
 int sf_edi;
 int sf_esi;
 int sf_ebx;
 int sf_eip;
};




struct sigframe {
 int sf_signum;
 siginfo_t *sf_sip;
 struct sigcontext *sf_scp;
 sig_t sf_handler;
 struct sigcontext sf_sc;
 siginfo_t sf_si;
};
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h" 1
# 79 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16;
 unsigned sd_lobase:24;
 unsigned sd_type:5;
 unsigned sd_dpl:2;
 unsigned sd_p:1;
 unsigned sd_hilimit:4;
 unsigned sd_xx:2;
 unsigned sd_def32:1;
 unsigned sd_gran:1;
 unsigned sd_hibase:8;
} __attribute__((__packed__)) ;




struct gate_descriptor {
 unsigned gd_looffset:16;
 unsigned gd_selector:16;
 unsigned gd_stkcpy:5;
 unsigned gd_xx:3;
 unsigned gd_type:5;
 unsigned gd_dpl:2;
 unsigned gd_p:1;
 unsigned gd_hioffset:16;
} __attribute__((__packed__)) ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
} __attribute__((__packed__)) ;




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32;
} __attribute__((__packed__)) ;






typedef  union descriptor   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_2_A[NUM_STACKS];extern  _GLOBAL_8_T  _GLOBAL_0_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_ldt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_ldt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];    
typedef  struct gate_descriptor   _GLOBAL_9_T; extern  _GLOBAL_9_T  _GLOBAL_0_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_1_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_2_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_3_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_4_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_5_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_6_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_7_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_8_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_9_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_10_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_11_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_12_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_13_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_14_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_15_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_16_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_17_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_18_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_19_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_20_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_21_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_22_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_23_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_24_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_25_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_26_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_27_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_28_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_29_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_30_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_31_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_32_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_33_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_34_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_35_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_36_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_37_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_38_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_39_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_40_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_41_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_42_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_43_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_44_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_45_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_46_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_47_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_48_idt_region_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_49_idt_region_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_idt_region_I) *_GLOBAL_idt_region_4_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_10_T; extern  _GLOBAL_10_T  * global_idt[NUM_STACKS];    

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void setregion(struct region_descriptor *, void *, size_t);
void setsegment(struct segment_descriptor *, void *, size_t, int, int,
    int, int);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 71 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int _GLOBAL_11_T;  _GLOBAL_11_T  global_want_resched[NUM_STACKS];  
# 91 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
void delay(int);





void calibrate_cyclecounter(void);

typedef  u_quad_t  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_pentium_base_tsc[NUM_STACKS];   
# 116 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cputypes.h" 1
# 117 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2

struct cpu_nocpuid_nameclass {
 int cpu_vendor;
 const char *cpu_vendorname;
 const char *cpu_name;
 int cpu_class;
 void (*cpu_setup)(const char *, int, int);
};

struct cpu_cpuid_nameclass {
 const char *cpu_id;
 int cpu_vendor;
 const char *cpu_vendorname;
 struct cpu_cpuid_family {
  int cpu_class;
  const char *cpu_models[15 +2];
  void (*cpu_setup)(const char *, int, int);
 } cpu_family[0xf - 4 + 1];
};

struct cpu_cpuid_feature {
 int feature_bit;
 const char *feature_name;
};


typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_cpu[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_cpu_class[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_feature[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_ecxfeature[NUM_STACKS];   
typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_apmwarn[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpu_apmhalt[NUM_STACKS];   
typedef  int  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_cpuid_level[NUM_STACKS];   
typedef  const struct cpu_nocpuid_nameclass    _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_1_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_2_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_3_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_4_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_5_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_6_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_7_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_8_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_9_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_10_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_11_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_12_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_13_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_14_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_15_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_16_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_17_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_18_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_19_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_20_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_21_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_22_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_23_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_24_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_25_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_26_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_27_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_28_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_29_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_30_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_31_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_32_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_33_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_34_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_35_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_36_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_37_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_38_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_39_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_40_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_41_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_42_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_43_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_44_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_45_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_46_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_47_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_48_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_49_i386_nocpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_nocpuid_cpus_I) *_GLOBAL_i386_nocpuid_cpus_5_A[NUM_STACKS];    
typedef  const struct cpu_cpuid_nameclass    _GLOBAL_21_T; extern  _GLOBAL_21_T  _GLOBAL_0_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_1_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_2_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_3_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_4_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_5_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_6_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_7_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_8_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_9_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_10_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_11_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_12_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_13_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_14_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_15_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_16_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_17_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_18_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_19_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_20_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_21_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_22_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_23_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_24_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_25_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_26_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_27_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_28_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_29_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_30_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_31_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_32_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_33_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_34_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_35_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_36_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_37_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_38_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_39_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_40_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_41_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_42_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_43_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_44_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_45_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_46_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_47_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_48_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_49_i386_cpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_cpuid_cpus_I) *_GLOBAL_i386_cpuid_cpus_6_A[NUM_STACKS];    


typedef  int  _GLOBAL_22_T; extern  _GLOBAL_22_T  global_pentium_mhz[NUM_STACKS];   




typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_cpu_f00f_bug[NUM_STACKS];   
void fix_f00f(void);



void dkcsumattach(void);

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_i386_use_fxsave[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_i386_has_sse[NUM_STACKS];   
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_i386_has_sse2[NUM_STACKS];   


void dumpconf(void);
void cpu_reset(void);
void i386_proc0_tss_ldt_init(void);
void cpuid(u_int32_t, u_int32_t *);


struct region_descriptor;
void lgdt(struct region_descriptor *);
void fillw(short, void *, size_t);

struct pcb;
void savectx(struct pcb *);
void switch_exit(struct proc *);
void proc_trampoline(void);


void initrtclock(void);
void startrtclock(void);
void rtcdrain(void *);



void est_init(const char *);
int est_cpuspeed(int *);
int est_setperf(int);




void longrun_init(void);
int longrun_cpuspeed(int *);
int longrun_setperf(int);




void p4tcc_init(int, int);
int p4tcc_setperf(int);



void npxdrop(void);
void npxsave(void);
# 222 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_user_ldt_enable[NUM_STACKS];   
int i386_get_ldt(struct proc *, void *, register_t *);
int i386_set_ldt(struct proc *, void *, register_t *);



void isa_defaultirq(void);
int isa_nmi(void);


void pmap_bootstrap(vaddr_t);


int kvtop(caddr_t);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 2
# 96 "openbsd3/sys/param.h" 2
# 37 "openbsd3/net/zlib.c" 2




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
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_7_A[NUM_STACKS];   
typedef  const char   _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_8_A[NUM_STACKS];   
typedef  const char   _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_9_A[NUM_STACKS];   
typedef  const char   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_10_A[NUM_STACKS];   
typedef  const char   _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_11_A[NUM_STACKS];   
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_45_T; extern  _GLOBAL_45_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_47_T; extern  _GLOBAL_47_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_12_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_51_T  )  ( int  ) ; extern  _GLOBAL_51_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_splassert_ctl[NUM_STACKS];   

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

struct intrframe;
void hardclock(struct intrframe *);
void softclock(void);
void statclock(struct intrframe *);

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

typedef  struct hook_desc_head   _GLOBAL_53_T; extern  _GLOBAL_53_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_53_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_55_T  )  ( void  ) ; extern  _GLOBAL_55_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_57_T  )  ( void  ) ; extern  _GLOBAL_57_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_13_A[NUM_STACKS];extern  _GLOBAL_58_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_14_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 42 "openbsd3/net/zlib.c" 2
# 51 "openbsd3/net/zlib.c"
typedef unsigned char uch;
typedef uch uchf;
typedef unsigned short ush;
typedef ush ushf;
typedef unsigned long ulg;

typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  * _GLOBAL_0_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_1_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_2_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_3_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_4_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_5_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_6_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_7_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_8_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_9_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_10_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_11_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_12_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_13_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_14_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_15_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_16_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_17_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_18_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_19_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_20_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_21_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_22_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_23_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_24_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_25_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_26_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_27_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_28_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_29_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_30_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_31_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_32_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_33_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_34_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_35_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_36_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_37_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_38_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_39_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_40_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_41_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_42_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_43_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_44_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_45_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_46_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_47_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_48_z_errmsg_I [ ]  ; extern  _GLOBAL_59_T  * _GLOBAL_49_z_errmsg_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_z_errmsg_I) *_GLOBAL_z_errmsg_15_A[NUM_STACKS] = { &_GLOBAL_0_z_errmsg_I, &_GLOBAL_1_z_errmsg_I, &_GLOBAL_2_z_errmsg_I, &_GLOBAL_3_z_errmsg_I, &_GLOBAL_4_z_errmsg_I, &_GLOBAL_5_z_errmsg_I, &_GLOBAL_6_z_errmsg_I, &_GLOBAL_7_z_errmsg_I, &_GLOBAL_8_z_errmsg_I, &_GLOBAL_9_z_errmsg_I, &_GLOBAL_10_z_errmsg_I, &_GLOBAL_11_z_errmsg_I, &_GLOBAL_12_z_errmsg_I, &_GLOBAL_13_z_errmsg_I, &_GLOBAL_14_z_errmsg_I, &_GLOBAL_15_z_errmsg_I, &_GLOBAL_16_z_errmsg_I, &_GLOBAL_17_z_errmsg_I, &_GLOBAL_18_z_errmsg_I, &_GLOBAL_19_z_errmsg_I, &_GLOBAL_20_z_errmsg_I, &_GLOBAL_21_z_errmsg_I, &_GLOBAL_22_z_errmsg_I, &_GLOBAL_23_z_errmsg_I, &_GLOBAL_24_z_errmsg_I, &_GLOBAL_25_z_errmsg_I, &_GLOBAL_26_z_errmsg_I, &_GLOBAL_27_z_errmsg_I, &_GLOBAL_28_z_errmsg_I, &_GLOBAL_29_z_errmsg_I, &_GLOBAL_30_z_errmsg_I, &_GLOBAL_31_z_errmsg_I, &_GLOBAL_32_z_errmsg_I, &_GLOBAL_33_z_errmsg_I, &_GLOBAL_34_z_errmsg_I, &_GLOBAL_35_z_errmsg_I, &_GLOBAL_36_z_errmsg_I, &_GLOBAL_37_z_errmsg_I, &_GLOBAL_38_z_errmsg_I, &_GLOBAL_39_z_errmsg_I, &_GLOBAL_40_z_errmsg_I, &_GLOBAL_41_z_errmsg_I, &_GLOBAL_42_z_errmsg_I, &_GLOBAL_43_z_errmsg_I, &_GLOBAL_44_z_errmsg_I, &_GLOBAL_45_z_errmsg_I, &_GLOBAL_46_z_errmsg_I, &_GLOBAL_47_z_errmsg_I, &_GLOBAL_48_z_errmsg_I, &_GLOBAL_49_z_errmsg_I, };  
# 131 "openbsd3/net/zlib.c"
typedef uLong (*check_func) (uLong check, Bytef *buf, uInt len);
# 196 "openbsd3/net/zlib.c"
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
    const static_tree_desc *stat_desc;
} tree_desc;

typedef ush Pos;
typedef Pos Posf;
typedef unsigned IPos;





typedef struct deflate_state {
    z_stream *strm;
    int status;
    Bytef *pending_buf;
    Bytef *pending_out;
    int pending;
    uLong adler;
    int noheader;
    Byte data_type;
    Byte method;
    int minCompr;



    uInt w_size;
    uInt w_bits;
    uInt w_mask;

    Bytef *window;
# 256 "openbsd3/net/zlib.c"
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
# 315 "openbsd3/net/zlib.c"
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
# 369 "openbsd3/net/zlib.c"
    uInt last_lit;

    ushf *d_buf;





    ulg opt_len;
    ulg static_len;
    ulg compressed_len;
    uInt matches;
    int last_eob_len;





    ush bi_buf;



    int bi_valid;




    uInt blocks_in_packet;




} deflate_state;
# 420 "openbsd3/net/zlib.c"
static void ct_init (deflate_state *s);
static int ct_tally (deflate_state *s, int dist, int lc);
static ulg ct_flush_block (deflate_state *s, charf *buf, ulg stored_len, int flush)
                   ;
static void ct_align (deflate_state *s);
static void ct_stored_block (deflate_state *s, charf *buf, ulg stored_len, int eof)
                                   ;
static void ct_stored_type_only (deflate_state *s);
# 510 "openbsd3/net/zlib.c"
typedef struct config_s {
   ush good_length;
   ush max_lazy;
   ush nice_length;
   ush max_chain;
} config;

typedef  config  _GLOBAL_60_T; static  _GLOBAL_60_T  _GLOBAL_0_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_1_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_2_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_3_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_4_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_5_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_6_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_7_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_8_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_9_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_10_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_11_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_12_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_13_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_14_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_15_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_16_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_17_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_18_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_19_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_20_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_21_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_22_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_23_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_24_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_25_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_26_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_27_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_28_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_29_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_30_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_31_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_32_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_33_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_34_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_35_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_36_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_37_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_38_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_39_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_40_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_41_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_42_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_43_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_44_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_45_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_46_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_47_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_48_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static  _GLOBAL_60_T  _GLOBAL_49_configuration_table_I [ 10 ]  = { { 0 , 0  , 0  , 0  }  , { 4 , 4  , 8  , 4  }   , { 4 , 5  , 16  , 8  }   , { 4 , 6  , 32  , 32  }   , { 4 , 4  , 16  , 16  }   , { 8 , 16  , 32  , 32  }   , { 8 , 16  , 128  , 128  }   , { 8 , 32  , 128  , 256  }   , { 32 , 128  , 258  , 1024  }   , { 32 , 258  , 258  , 4096  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_configuration_table_I) *_GLOBAL_configuration_table_16_A[NUM_STACKS] = { &_GLOBAL_0_configuration_table_I, &_GLOBAL_1_configuration_table_I, &_GLOBAL_2_configuration_table_I, &_GLOBAL_3_configuration_table_I, &_GLOBAL_4_configuration_table_I, &_GLOBAL_5_configuration_table_I, &_GLOBAL_6_configuration_table_I, &_GLOBAL_7_configuration_table_I, &_GLOBAL_8_configuration_table_I, &_GLOBAL_9_configuration_table_I, &_GLOBAL_10_configuration_table_I, &_GLOBAL_11_configuration_table_I, &_GLOBAL_12_configuration_table_I, &_GLOBAL_13_configuration_table_I, &_GLOBAL_14_configuration_table_I, &_GLOBAL_15_configuration_table_I, &_GLOBAL_16_configuration_table_I, &_GLOBAL_17_configuration_table_I, &_GLOBAL_18_configuration_table_I, &_GLOBAL_19_configuration_table_I, &_GLOBAL_20_configuration_table_I, &_GLOBAL_21_configuration_table_I, &_GLOBAL_22_configuration_table_I, &_GLOBAL_23_configuration_table_I, &_GLOBAL_24_configuration_table_I, &_GLOBAL_25_configuration_table_I, &_GLOBAL_26_configuration_table_I, &_GLOBAL_27_configuration_table_I, &_GLOBAL_28_configuration_table_I, &_GLOBAL_29_configuration_table_I, &_GLOBAL_30_configuration_table_I, &_GLOBAL_31_configuration_table_I, &_GLOBAL_32_configuration_table_I, &_GLOBAL_33_configuration_table_I, &_GLOBAL_34_configuration_table_I, &_GLOBAL_35_configuration_table_I, &_GLOBAL_36_configuration_table_I, &_GLOBAL_37_configuration_table_I, &_GLOBAL_38_configuration_table_I, &_GLOBAL_39_configuration_table_I, &_GLOBAL_40_configuration_table_I, &_GLOBAL_41_configuration_table_I, &_GLOBAL_42_configuration_table_I, &_GLOBAL_43_configuration_table_I, &_GLOBAL_44_configuration_table_I, &_GLOBAL_45_configuration_table_I, &_GLOBAL_46_configuration_table_I, &_GLOBAL_47_configuration_table_I, &_GLOBAL_48_configuration_table_I, &_GLOBAL_49_configuration_table_I, };    

           
           
           
           

           
           
           
           
           
           
# 543 "openbsd3/net/zlib.c"
static void fill_window (deflate_state *s);
static int deflate_fast (deflate_state *s, int flush);
static int deflate_slow (deflate_state *s, int flush);
static void lm_init (deflate_state *s);
static int longest_match (deflate_state *s, IPos cur_match);
static void putShortMSB (deflate_state *s, uInt b);
static void flush_pending (z_stream *strm);
static int read_buf (z_stream *strm, charf *buf, unsigned size);
# 592 "openbsd3/net/zlib.c"
int deflateInit (strm, level)
    z_stream *strm;
    int level;
{
    return deflateInit2 (strm, level, 8, 15, 8,
    0, 0);

}


int deflateInit2 (strm, level, method, windowBits, memLevel,
    strategy, minCompression)
    z_stream *strm;
    int level;
    int method;
    int windowBits;
    int memLevel;
    int strategy;
    int minCompression;
{
    deflate_state *s;
    int noheader = 0;

    if (strm == 0) return (-2);

    strm->msg = 0;



    if (level == (-1)) level = 6;

    if (windowBits < 0) {
        noheader = 1;
        windowBits = -windowBits;
    }
    if (memLevel < 1 || memLevel > 9 || method != 8 ||
        windowBits < 8 || windowBits > 15 || level < 1 || level > 9) {
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

    s->pending_buf = (uchf *) (*((strm)->zalloc))((strm)->opaque, (s->lit_bufsize), (2*sizeof(ush)));

    if (s->window == 0 || s->prev == 0 || s->head == 0 ||
        s->pending_buf == 0) {
        strm->msg = (*_GLOBAL_z_errmsg_15_A[get_stack_id()])[1-(-4)];
        deflateEnd (strm);
        return (-4);
    }
    s->d_buf = (ushf *) &(s->pending_buf[s->lit_bufsize]);
    s->l_buf = (uchf *) &(s->pending_buf[3*s->lit_bufsize]);





    s->level = level;
    s->strategy = strategy;
    s->method = (Byte)method;
    s->minCompr = minCompression;
    s->blocks_in_packet = 0;

    return deflateReset(strm);
}


int deflateReset (strm)
    z_stream *strm;
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
    s->adler = 1;

    ct_init(s);
    lm_init(s);

    return 0;
}






static void putShortMSB (s, b)
    deflate_state *s;
    uInt b;
{
    {s->pending_buf[s->pending++] = ((Byte)(b >> 8));};
    {s->pending_buf[s->pending++] = ((Byte)(b & 0xff));};
}




static void flush_pending(strm)
    z_stream *strm;
{
    deflate_state *state = (deflate_state *) strm->state;
    unsigned len = state->pending;

    if (len > strm->avail_out) len = strm->avail_out;
    if (len == 0) return;

    if (strm->next_out != 0L) {
 bcopy((state->pending_out), (strm->next_out), (len));
 strm->next_out += len;
    }
    state->pending_out += len;
    strm->total_out += len;
    strm->avail_out -= len;
    state->pending -= len;
    if (state->pending == 0) {
        state->pending_out = state->pending_buf;
    }
}


int deflate (strm, flush)
    z_stream *strm;
    int flush;
{
    deflate_state *state = (deflate_state *) strm->state;

    if (strm == 0 || state == 0) return (-2);

    if (strm->next_in == 0 && strm->avail_in != 0) {
        return (strm->msg=(*_GLOBAL_z_errmsg_15_A[get_stack_id()])[1-(-2)], (-2));
    }
    if (strm->avail_out == 0) return (strm->msg=(*_GLOBAL_z_errmsg_15_A[get_stack_id()])[1-(-5)], (-5));

    state->strm = strm;


    if (state->status == 42) {

        uInt header = (8 + ((state->w_bits-8)<<4)) << 8;
        uInt level_flags = (state->level-1) >> 1;

        if (level_flags > 3) level_flags = 3;
        header |= (level_flags << 6);
        header += 31 - (header % 31);

        state->status = 113;
        putShortMSB(state, header);
    }


    if (state->pending != 0) {
        flush_pending(strm);
        if (strm->avail_out == 0) return 0;
    }




    if (state->status == 124) {
 state->status = 113;
 if (flush != 0 && flush != 4)
     return 0;
    }


    if (state->status == 666 && strm->avail_in != 0) {
        return (strm->msg=(*_GLOBAL_z_errmsg_15_A[get_stack_id()])[1-(-5)], (-5));
    }



    if (strm->avail_in != 0 || state->lookahead != 0 ||
        (flush == 4 && state->status != 666)) {
        int quit;

        if (flush == 4) {
            state->status = 666;
        }
        if (state->level <= 3) {
            quit = deflate_fast(state, flush);
        } else {
            quit = deflate_slow(state, flush);
        }
        if (quit || strm->avail_out == 0)
     return 0;







    }


    if (flush != 0 && flush != 4
 && state->status != 666) {
 switch (flush) {
 case 1:
     ct_align(state);
     break;
 case 5:


     ct_stored_type_only(state);
     break;
 default:
     ct_stored_block(state, (char*)0, 0L, 0);



     if (flush == 2) {
  state->head[state->hash_size-1] = 0; bzero((charf *)state->head, (unsigned)(state->hash_size-1)*sizeof(*state->head));;
     }
 }
 flush_pending(strm);
 if (strm->avail_out == 0) {




     state->status = 124;
     return 0;
 }
    }

    ;

    if (flush != 4) return 0;
    if (state->noheader) return 1;


    putShortMSB(state, (uInt)(state->adler >> 16));
    putShortMSB(state, (uInt)(state->adler & 0xffff));
    flush_pending(strm);



    state->noheader = -1;
    return state->pending != 0 ? 0 : 1;
}


int deflateEnd (strm)
    z_stream *strm;
{
    deflate_state *state = (deflate_state *) strm->state;

    if (strm == 0 || state == 0) return (-2);

    {if (state->window) (*((strm)->zfree))((strm)->opaque, (voidpf)(state->window), (state->w_size * 2 * sizeof(Byte)));};
    {if (state->prev) (*((strm)->zfree))((strm)->opaque, (voidpf)(state->prev), (state->w_size * sizeof(Pos)));};
    {if (state->head) (*((strm)->zfree))((strm)->opaque, (voidpf)(state->head), (state->hash_size * sizeof(Pos)));};
    {if (state->pending_buf) (*((strm)->zfree))((strm)->opaque, (voidpf)(state->pending_buf), (state->lit_bufsize * 2 * sizeof(ush)));};

    (*((strm)->zfree))((strm)->opaque, (voidpf)(state), (sizeof(deflate_state)));
    strm->state = 0;

    return 0;
}





static int read_buf(strm, buf, size)
    z_stream *strm;
    charf *buf;
    unsigned size;
{
    unsigned len = strm->avail_in;
    deflate_state *state = (deflate_state *) strm->state;

    if (len > size) len = size;
    if (len == 0) return 0;

    strm->avail_in -= len;

    if (!state->noheader) {
        state->adler = adler32(state->adler, strm->next_in, len);
    }
    bcopy((strm->next_in), (buf), (len));
    strm->next_in += len;
    strm->total_in += len;

    return (int)len;
}




static void lm_init (s)
    deflate_state *s;
{
    s->window_size = (ulg)2L*s->w_size;

    s->head[s->hash_size-1] = 0; bzero((charf *)s->head, (unsigned)(s->hash_size-1)*sizeof(*s->head));;



    s->max_lazy_match = (*_GLOBAL_configuration_table_16_A[get_stack_id()])[s->level].max_lazy;
    s->good_match = (*_GLOBAL_configuration_table_16_A[get_stack_id()])[s->level].good_length;
    s->nice_match = (*_GLOBAL_configuration_table_16_A[get_stack_id()])[s->level].nice_length;
    s->max_chain_length = (*_GLOBAL_configuration_table_16_A[get_stack_id()])[s->level].max_chain;

    s->strstart = 0;
    s->block_start = 0L;
    s->lookahead = 0;
    s->match_length = 3 -1;
    s->match_available = 0;
    s->ins_h = 0;



}
# 952 "openbsd3/net/zlib.c"
static int longest_match(s, cur_match)
    deflate_state *s;
    IPos cur_match;
{
    unsigned chain_length = s->max_chain_length;
    Bytef *scan = s->window + s->strstart;
    Bytef *match;
    int len;
    int best_len = s->prev_length;
    IPos limit = s->strstart > (IPos)((s)->w_size-(258 +3 +1)) ?
        s->strstart - (IPos)((s)->w_size-(258 +3 +1)) : 0;



    Posf *prev = s->prev;
    uInt wmask = s->w_mask;
# 977 "openbsd3/net/zlib.c"
    Bytef *strend = s->window + s->strstart + 258;
    Byte scan_end1 = scan[best_len-1];
    Byte scan_end = scan[best_len];





    ;


    if (s->prev_length >= s->good_match) {
        chain_length >>= 2;
    }
    ;

    do {
        ;
        match = s->window + cur_match;
# 1035 "openbsd3/net/zlib.c"
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
            if (len >= s->nice_match) break;



            scan_end1 = scan[best_len-1];
            scan_end = scan[best_len];

        }
    } while ((cur_match = prev[cur_match & wmask]) > limit
             && --chain_length != 0);

    return best_len;
}
# 1122 "openbsd3/net/zlib.c"
static void fill_window(s)
    deflate_state *s;
{
    unsigned n, m;
    Posf *p;
    unsigned more;
    uInt wsize = s->w_size;

    do {
        more = (unsigned)(s->window_size -(ulg)s->lookahead -(ulg)s->strstart);


        if (more == 0 && s->strstart == 0 && s->lookahead == 0) {
            more = wsize;
        } else if (more == (unsigned)(-1)) {



            more--;




        } else if (s->strstart >= wsize+((s)->w_size-(258 +3 +1))) {




            bcopy(((charf *)s->window+wsize), ((charf *)s->window), ((unsigned)wsize))
                                   ;
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
# 1192 "openbsd3/net/zlib.c"
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
# 1239 "openbsd3/net/zlib.c"
static int deflate_fast(s, flush)
    deflate_state *s;
    int flush;
{
    IPos hash_head = 0;
    int bflush;

    s->prev_length = 3 -1;

    for (;;) {





        if (s->lookahead < (258 +3 +1)) {
            fill_window(s);
            if (s->lookahead < (258 +3 +1) && flush == 0) return 1;

            if (s->lookahead == 0) break;
        }




        if (s->lookahead >= 3) {
            ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (s->strstart));
        }




        if (hash_head != 0 && s->strstart - hash_head <= ((s)->w_size-(258 +3 +1))) {




            if (s->strategy != 2) {
                s->match_length = longest_match (s, hash_head);
            }


            if (s->match_length > s->lookahead) s->match_length = s->lookahead;
        }
        if (s->match_length >= 3) {
            ;

            bflush = ct_tally(s, s->strstart - s->match_start,
                              s->match_length - 3);

            s->lookahead -= s->match_length;




            if (s->match_length <= s->max_lazy_match &&
                s->lookahead >= 3) {
                s->match_length--;
                do {
                    s->strstart++;
                    ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (s->strstart));



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
            bflush = ct_tally (s, 0, s->window[s->strstart]);
            s->lookahead--;
            s->strstart++;
        }
        if (bflush) { { ct_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (long)s->strstart - s->block_start, (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return 1; };
    }
    { { ct_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (long)s->strstart - s->block_start, (flush)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return 1; };
    return 0;
}






static int deflate_slow(s, flush)
    deflate_state *s;
    int flush;
{
    IPos hash_head = 0;
    int bflush;


    for (;;) {





        if (s->lookahead < (258 +3 +1)) {
            fill_window(s);
            if (s->lookahead < (258 +3 +1) && flush == 0) return 1;

            if (s->lookahead == 0) break;
        }




        if (s->lookahead >= 3) {
            ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (s->strstart));
        }



        s->prev_length = s->match_length, s->prev_match = s->match_start;
        s->match_length = 3 -1;

        if (hash_head != 0 && s->prev_length < s->max_lazy_match &&
            s->strstart - hash_head <= ((s)->w_size-(258 +3 +1))) {




            if (s->strategy != 2) {
                s->match_length = longest_match (s, hash_head);
            }

            if (s->match_length > s->lookahead) s->match_length = s->lookahead;

            if (s->match_length <= 5 && (s->strategy == 1 ||
                 (s->match_length == 3 &&
                  s->strstart - s->match_start > 4096))) {




                s->match_length = 3 -1;
            }
        }



        if (s->prev_length >= 3 && s->match_length <= s->prev_length) {
            uInt max_insert = s->strstart + s->lookahead - 3;


            ;

            bflush = ct_tally(s, s->strstart -1 - s->prev_match,
                              s->prev_length - 3);






            s->lookahead -= s->prev_length-1;
            s->prev_length -= 2;
            do {
                if (++s->strstart <= max_insert) {
                    ((s->ins_h = (((s->ins_h)<<s->hash_shift) ^ (s->window[(s->strstart) + (3 -1)])) & s->hash_mask), s->prev[(s->strstart) & s->w_mask] = hash_head = s->head[s->ins_h], s->head[s->ins_h] = (s->strstart));
                }
            } while (--s->prev_length != 0);
            s->match_available = 0;
            s->match_length = 3 -1;
            s->strstart++;

            if (bflush) { { ct_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (long)s->strstart - s->block_start, (0)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return 1; };

        } else if (s->match_available) {




            ;
            if (ct_tally (s, 0, s->window[s->strstart-1])) {
                { ct_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (long)s->strstart - s->block_start, (0)); s->block_start = s->strstart; flush_pending(s->strm); ; };
            }
            s->strstart++;
            s->lookahead--;
            if (s->strm->avail_out == 0) return 1;
        } else {



            s->match_available = 1;
            s->strstart++;
            s->lookahead--;
        }
    }
    ;
    if (s->match_available) {
        ;
        ct_tally (s, 0, s->window[s->strstart-1]);
        s->match_available = 0;
    }
    { { ct_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), (long)s->strstart - s->block_start, (flush)); s->block_start = s->strstart; flush_pending(s->strm); ; }; if (s->strm->avail_out == 0) return 1; };
    return 0;
}
# 1509 "openbsd3/net/zlib.c"
typedef  const int   _GLOBAL_61_T; static  _GLOBAL_61_T  _GLOBAL_0_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_1_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_2_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_3_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_4_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_5_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_6_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_7_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_8_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_9_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_10_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_11_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_12_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_13_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_14_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_15_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_16_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_17_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_18_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_19_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_20_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_21_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_22_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_23_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_24_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_25_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_26_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_27_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_28_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_29_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_30_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_31_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_32_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_33_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_34_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_35_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_36_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_37_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_38_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_39_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_40_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_41_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_42_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_43_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_44_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_45_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_46_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_47_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_48_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static  _GLOBAL_61_T  _GLOBAL_49_extra_lbits_I [ 29 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_lbits_I) *_GLOBAL_extra_lbits_17_A[NUM_STACKS] = { &_GLOBAL_0_extra_lbits_I, &_GLOBAL_1_extra_lbits_I, &_GLOBAL_2_extra_lbits_I, &_GLOBAL_3_extra_lbits_I, &_GLOBAL_4_extra_lbits_I, &_GLOBAL_5_extra_lbits_I, &_GLOBAL_6_extra_lbits_I, &_GLOBAL_7_extra_lbits_I, &_GLOBAL_8_extra_lbits_I, &_GLOBAL_9_extra_lbits_I, &_GLOBAL_10_extra_lbits_I, &_GLOBAL_11_extra_lbits_I, &_GLOBAL_12_extra_lbits_I, &_GLOBAL_13_extra_lbits_I, &_GLOBAL_14_extra_lbits_I, &_GLOBAL_15_extra_lbits_I, &_GLOBAL_16_extra_lbits_I, &_GLOBAL_17_extra_lbits_I, &_GLOBAL_18_extra_lbits_I, &_GLOBAL_19_extra_lbits_I, &_GLOBAL_20_extra_lbits_I, &_GLOBAL_21_extra_lbits_I, &_GLOBAL_22_extra_lbits_I, &_GLOBAL_23_extra_lbits_I, &_GLOBAL_24_extra_lbits_I, &_GLOBAL_25_extra_lbits_I, &_GLOBAL_26_extra_lbits_I, &_GLOBAL_27_extra_lbits_I, &_GLOBAL_28_extra_lbits_I, &_GLOBAL_29_extra_lbits_I, &_GLOBAL_30_extra_lbits_I, &_GLOBAL_31_extra_lbits_I, &_GLOBAL_32_extra_lbits_I, &_GLOBAL_33_extra_lbits_I, &_GLOBAL_34_extra_lbits_I, &_GLOBAL_35_extra_lbits_I, &_GLOBAL_36_extra_lbits_I, &_GLOBAL_37_extra_lbits_I, &_GLOBAL_38_extra_lbits_I, &_GLOBAL_39_extra_lbits_I, &_GLOBAL_40_extra_lbits_I, &_GLOBAL_41_extra_lbits_I, &_GLOBAL_42_extra_lbits_I, &_GLOBAL_43_extra_lbits_I, &_GLOBAL_44_extra_lbits_I, &_GLOBAL_45_extra_lbits_I, &_GLOBAL_46_extra_lbits_I, &_GLOBAL_47_extra_lbits_I, &_GLOBAL_48_extra_lbits_I, &_GLOBAL_49_extra_lbits_I, };   
    

typedef  const int   _GLOBAL_62_T; static  _GLOBAL_62_T  _GLOBAL_0_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_1_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_2_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_3_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_4_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_5_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_6_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_7_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_8_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_9_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_10_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_11_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_12_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_13_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_14_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_15_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_16_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_17_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_18_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_19_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_20_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_21_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_22_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_23_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_24_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_25_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_26_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_27_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_28_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_29_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_30_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_31_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_32_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_33_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_34_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_35_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_36_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_37_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_38_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_39_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_40_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_41_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_42_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_43_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_44_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_45_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_46_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_47_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_48_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_62_T  _GLOBAL_49_extra_dbits_I [ 30 ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_dbits_I) *_GLOBAL_extra_dbits_18_A[NUM_STACKS] = { &_GLOBAL_0_extra_dbits_I, &_GLOBAL_1_extra_dbits_I, &_GLOBAL_2_extra_dbits_I, &_GLOBAL_3_extra_dbits_I, &_GLOBAL_4_extra_dbits_I, &_GLOBAL_5_extra_dbits_I, &_GLOBAL_6_extra_dbits_I, &_GLOBAL_7_extra_dbits_I, &_GLOBAL_8_extra_dbits_I, &_GLOBAL_9_extra_dbits_I, &_GLOBAL_10_extra_dbits_I, &_GLOBAL_11_extra_dbits_I, &_GLOBAL_12_extra_dbits_I, &_GLOBAL_13_extra_dbits_I, &_GLOBAL_14_extra_dbits_I, &_GLOBAL_15_extra_dbits_I, &_GLOBAL_16_extra_dbits_I, &_GLOBAL_17_extra_dbits_I, &_GLOBAL_18_extra_dbits_I, &_GLOBAL_19_extra_dbits_I, &_GLOBAL_20_extra_dbits_I, &_GLOBAL_21_extra_dbits_I, &_GLOBAL_22_extra_dbits_I, &_GLOBAL_23_extra_dbits_I, &_GLOBAL_24_extra_dbits_I, &_GLOBAL_25_extra_dbits_I, &_GLOBAL_26_extra_dbits_I, &_GLOBAL_27_extra_dbits_I, &_GLOBAL_28_extra_dbits_I, &_GLOBAL_29_extra_dbits_I, &_GLOBAL_30_extra_dbits_I, &_GLOBAL_31_extra_dbits_I, &_GLOBAL_32_extra_dbits_I, &_GLOBAL_33_extra_dbits_I, &_GLOBAL_34_extra_dbits_I, &_GLOBAL_35_extra_dbits_I, &_GLOBAL_36_extra_dbits_I, &_GLOBAL_37_extra_dbits_I, &_GLOBAL_38_extra_dbits_I, &_GLOBAL_39_extra_dbits_I, &_GLOBAL_40_extra_dbits_I, &_GLOBAL_41_extra_dbits_I, &_GLOBAL_42_extra_dbits_I, &_GLOBAL_43_extra_dbits_I, &_GLOBAL_44_extra_dbits_I, &_GLOBAL_45_extra_dbits_I, &_GLOBAL_46_extra_dbits_I, &_GLOBAL_47_extra_dbits_I, &_GLOBAL_48_extra_dbits_I, &_GLOBAL_49_extra_dbits_I, };   
    

typedef  const int   _GLOBAL_63_T; static  _GLOBAL_63_T  _GLOBAL_0_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_1_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_2_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_3_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_4_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_5_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_6_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_7_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_8_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_9_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_10_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_11_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_12_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_13_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_14_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_15_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_16_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_17_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_18_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_19_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_20_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_21_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_22_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_23_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_24_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_25_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_26_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_27_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_28_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_29_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_30_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_31_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_32_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_33_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_34_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_35_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_36_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_37_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_38_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_39_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_40_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_41_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_42_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_43_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_44_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_45_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_46_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_47_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_48_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static  _GLOBAL_63_T  _GLOBAL_49_extra_blbits_I [ 19 ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 2  , 3  , 7  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_extra_blbits_I) *_GLOBAL_extra_blbits_19_A[NUM_STACKS] = { &_GLOBAL_0_extra_blbits_I, &_GLOBAL_1_extra_blbits_I, &_GLOBAL_2_extra_blbits_I, &_GLOBAL_3_extra_blbits_I, &_GLOBAL_4_extra_blbits_I, &_GLOBAL_5_extra_blbits_I, &_GLOBAL_6_extra_blbits_I, &_GLOBAL_7_extra_blbits_I, &_GLOBAL_8_extra_blbits_I, &_GLOBAL_9_extra_blbits_I, &_GLOBAL_10_extra_blbits_I, &_GLOBAL_11_extra_blbits_I, &_GLOBAL_12_extra_blbits_I, &_GLOBAL_13_extra_blbits_I, &_GLOBAL_14_extra_blbits_I, &_GLOBAL_15_extra_blbits_I, &_GLOBAL_16_extra_blbits_I, &_GLOBAL_17_extra_blbits_I, &_GLOBAL_18_extra_blbits_I, &_GLOBAL_19_extra_blbits_I, &_GLOBAL_20_extra_blbits_I, &_GLOBAL_21_extra_blbits_I, &_GLOBAL_22_extra_blbits_I, &_GLOBAL_23_extra_blbits_I, &_GLOBAL_24_extra_blbits_I, &_GLOBAL_25_extra_blbits_I, &_GLOBAL_26_extra_blbits_I, &_GLOBAL_27_extra_blbits_I, &_GLOBAL_28_extra_blbits_I, &_GLOBAL_29_extra_blbits_I, &_GLOBAL_30_extra_blbits_I, &_GLOBAL_31_extra_blbits_I, &_GLOBAL_32_extra_blbits_I, &_GLOBAL_33_extra_blbits_I, &_GLOBAL_34_extra_blbits_I, &_GLOBAL_35_extra_blbits_I, &_GLOBAL_36_extra_blbits_I, &_GLOBAL_37_extra_blbits_I, &_GLOBAL_38_extra_blbits_I, &_GLOBAL_39_extra_blbits_I, &_GLOBAL_40_extra_blbits_I, &_GLOBAL_41_extra_blbits_I, &_GLOBAL_42_extra_blbits_I, &_GLOBAL_43_extra_blbits_I, &_GLOBAL_44_extra_blbits_I, &_GLOBAL_45_extra_blbits_I, &_GLOBAL_46_extra_blbits_I, &_GLOBAL_47_extra_blbits_I, &_GLOBAL_48_extra_blbits_I, &_GLOBAL_49_extra_blbits_I, };   
    

typedef  const uch   _GLOBAL_64_T; static  _GLOBAL_64_T  _GLOBAL_0_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_1_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_2_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_3_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_4_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_5_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_6_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_7_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_8_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_9_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_10_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_11_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_12_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_13_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_14_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_15_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_16_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_17_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_18_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_19_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_20_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_21_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_22_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_23_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_24_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_25_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_26_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_27_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_28_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_29_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_30_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_31_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_32_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_33_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_34_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_35_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_36_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_37_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_38_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_39_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_40_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_41_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_42_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_43_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_44_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_45_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_46_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_47_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_48_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_64_T  _GLOBAL_49_bl_order_I [ 19 ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bl_order_I) *_GLOBAL_bl_order_20_A[NUM_STACKS] = { &_GLOBAL_0_bl_order_I, &_GLOBAL_1_bl_order_I, &_GLOBAL_2_bl_order_I, &_GLOBAL_3_bl_order_I, &_GLOBAL_4_bl_order_I, &_GLOBAL_5_bl_order_I, &_GLOBAL_6_bl_order_I, &_GLOBAL_7_bl_order_I, &_GLOBAL_8_bl_order_I, &_GLOBAL_9_bl_order_I, &_GLOBAL_10_bl_order_I, &_GLOBAL_11_bl_order_I, &_GLOBAL_12_bl_order_I, &_GLOBAL_13_bl_order_I, &_GLOBAL_14_bl_order_I, &_GLOBAL_15_bl_order_I, &_GLOBAL_16_bl_order_I, &_GLOBAL_17_bl_order_I, &_GLOBAL_18_bl_order_I, &_GLOBAL_19_bl_order_I, &_GLOBAL_20_bl_order_I, &_GLOBAL_21_bl_order_I, &_GLOBAL_22_bl_order_I, &_GLOBAL_23_bl_order_I, &_GLOBAL_24_bl_order_I, &_GLOBAL_25_bl_order_I, &_GLOBAL_26_bl_order_I, &_GLOBAL_27_bl_order_I, &_GLOBAL_28_bl_order_I, &_GLOBAL_29_bl_order_I, &_GLOBAL_30_bl_order_I, &_GLOBAL_31_bl_order_I, &_GLOBAL_32_bl_order_I, &_GLOBAL_33_bl_order_I, &_GLOBAL_34_bl_order_I, &_GLOBAL_35_bl_order_I, &_GLOBAL_36_bl_order_I, &_GLOBAL_37_bl_order_I, &_GLOBAL_38_bl_order_I, &_GLOBAL_39_bl_order_I, &_GLOBAL_40_bl_order_I, &_GLOBAL_41_bl_order_I, &_GLOBAL_42_bl_order_I, &_GLOBAL_43_bl_order_I, &_GLOBAL_44_bl_order_I, &_GLOBAL_45_bl_order_I, &_GLOBAL_46_bl_order_I, &_GLOBAL_47_bl_order_I, &_GLOBAL_48_bl_order_I, &_GLOBAL_49_bl_order_I, };   
    
# 1534 "openbsd3/net/zlib.c"
typedef  ct_data  _GLOBAL_65_T; static  _GLOBAL_65_T  _GLOBAL_0_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_1_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_2_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_3_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_4_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_5_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_6_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_7_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_8_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_9_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_10_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_11_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_12_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_13_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_14_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_15_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_16_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_17_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_18_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_19_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_20_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_21_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_22_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_23_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_24_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_25_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_26_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_27_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_28_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_29_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_30_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_31_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_32_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_33_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_34_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_35_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_36_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_37_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_38_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_39_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_40_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_41_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_42_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_43_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_44_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_45_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_46_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_47_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_48_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static  _GLOBAL_65_T  _GLOBAL_49_static_ltree_I [ ( 256 + 1  + 29  )  + 2  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_ltree_I) *_GLOBAL_static_ltree_21_A[NUM_STACKS] = { &_GLOBAL_0_static_ltree_I, &_GLOBAL_1_static_ltree_I, &_GLOBAL_2_static_ltree_I, &_GLOBAL_3_static_ltree_I, &_GLOBAL_4_static_ltree_I, &_GLOBAL_5_static_ltree_I, &_GLOBAL_6_static_ltree_I, &_GLOBAL_7_static_ltree_I, &_GLOBAL_8_static_ltree_I, &_GLOBAL_9_static_ltree_I, &_GLOBAL_10_static_ltree_I, &_GLOBAL_11_static_ltree_I, &_GLOBAL_12_static_ltree_I, &_GLOBAL_13_static_ltree_I, &_GLOBAL_14_static_ltree_I, &_GLOBAL_15_static_ltree_I, &_GLOBAL_16_static_ltree_I, &_GLOBAL_17_static_ltree_I, &_GLOBAL_18_static_ltree_I, &_GLOBAL_19_static_ltree_I, &_GLOBAL_20_static_ltree_I, &_GLOBAL_21_static_ltree_I, &_GLOBAL_22_static_ltree_I, &_GLOBAL_23_static_ltree_I, &_GLOBAL_24_static_ltree_I, &_GLOBAL_25_static_ltree_I, &_GLOBAL_26_static_ltree_I, &_GLOBAL_27_static_ltree_I, &_GLOBAL_28_static_ltree_I, &_GLOBAL_29_static_ltree_I, &_GLOBAL_30_static_ltree_I, &_GLOBAL_31_static_ltree_I, &_GLOBAL_32_static_ltree_I, &_GLOBAL_33_static_ltree_I, &_GLOBAL_34_static_ltree_I, &_GLOBAL_35_static_ltree_I, &_GLOBAL_36_static_ltree_I, &_GLOBAL_37_static_ltree_I, &_GLOBAL_38_static_ltree_I, &_GLOBAL_39_static_ltree_I, &_GLOBAL_40_static_ltree_I, &_GLOBAL_41_static_ltree_I, &_GLOBAL_42_static_ltree_I, &_GLOBAL_43_static_ltree_I, &_GLOBAL_44_static_ltree_I, &_GLOBAL_45_static_ltree_I, &_GLOBAL_46_static_ltree_I, &_GLOBAL_47_static_ltree_I, &_GLOBAL_48_static_ltree_I, &_GLOBAL_49_static_ltree_I, };   






typedef  ct_data  _GLOBAL_66_T; static  _GLOBAL_66_T  _GLOBAL_0_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_1_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_2_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_3_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_4_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_5_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_6_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_7_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_8_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_9_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_10_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_11_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_12_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_13_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_14_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_15_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_16_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_17_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_18_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_19_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_20_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_21_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_22_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_23_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_24_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_25_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_26_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_27_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_28_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_29_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_30_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_31_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_32_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_33_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_34_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_35_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_36_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_37_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_38_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_39_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_40_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_41_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_42_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_43_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_44_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_45_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_46_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_47_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_48_static_dtree_I [ 30 ] ; static  _GLOBAL_66_T  _GLOBAL_49_static_dtree_I [ 30 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_dtree_I) *_GLOBAL_static_dtree_22_A[NUM_STACKS] = { &_GLOBAL_0_static_dtree_I, &_GLOBAL_1_static_dtree_I, &_GLOBAL_2_static_dtree_I, &_GLOBAL_3_static_dtree_I, &_GLOBAL_4_static_dtree_I, &_GLOBAL_5_static_dtree_I, &_GLOBAL_6_static_dtree_I, &_GLOBAL_7_static_dtree_I, &_GLOBAL_8_static_dtree_I, &_GLOBAL_9_static_dtree_I, &_GLOBAL_10_static_dtree_I, &_GLOBAL_11_static_dtree_I, &_GLOBAL_12_static_dtree_I, &_GLOBAL_13_static_dtree_I, &_GLOBAL_14_static_dtree_I, &_GLOBAL_15_static_dtree_I, &_GLOBAL_16_static_dtree_I, &_GLOBAL_17_static_dtree_I, &_GLOBAL_18_static_dtree_I, &_GLOBAL_19_static_dtree_I, &_GLOBAL_20_static_dtree_I, &_GLOBAL_21_static_dtree_I, &_GLOBAL_22_static_dtree_I, &_GLOBAL_23_static_dtree_I, &_GLOBAL_24_static_dtree_I, &_GLOBAL_25_static_dtree_I, &_GLOBAL_26_static_dtree_I, &_GLOBAL_27_static_dtree_I, &_GLOBAL_28_static_dtree_I, &_GLOBAL_29_static_dtree_I, &_GLOBAL_30_static_dtree_I, &_GLOBAL_31_static_dtree_I, &_GLOBAL_32_static_dtree_I, &_GLOBAL_33_static_dtree_I, &_GLOBAL_34_static_dtree_I, &_GLOBAL_35_static_dtree_I, &_GLOBAL_36_static_dtree_I, &_GLOBAL_37_static_dtree_I, &_GLOBAL_38_static_dtree_I, &_GLOBAL_39_static_dtree_I, &_GLOBAL_40_static_dtree_I, &_GLOBAL_41_static_dtree_I, &_GLOBAL_42_static_dtree_I, &_GLOBAL_43_static_dtree_I, &_GLOBAL_44_static_dtree_I, &_GLOBAL_45_static_dtree_I, &_GLOBAL_46_static_dtree_I, &_GLOBAL_47_static_dtree_I, &_GLOBAL_48_static_dtree_I, &_GLOBAL_49_static_dtree_I, };  




typedef  uch  _GLOBAL_67_T; static  _GLOBAL_67_T  _GLOBAL_0_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_1_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_2_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_3_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_4_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_5_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_6_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_7_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_8_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_9_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_10_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_11_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_12_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_13_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_14_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_15_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_16_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_17_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_18_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_19_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_20_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_21_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_22_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_23_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_24_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_25_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_26_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_27_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_28_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_29_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_30_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_31_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_32_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_33_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_34_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_35_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_36_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_37_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_38_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_39_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_40_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_41_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_42_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_43_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_44_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_45_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_46_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_47_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_48_dist_code_I [ 512 ] ; static  _GLOBAL_67_T  _GLOBAL_49_dist_code_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_dist_code_I) *_GLOBAL_dist_code_23_A[NUM_STACKS] = { &_GLOBAL_0_dist_code_I, &_GLOBAL_1_dist_code_I, &_GLOBAL_2_dist_code_I, &_GLOBAL_3_dist_code_I, &_GLOBAL_4_dist_code_I, &_GLOBAL_5_dist_code_I, &_GLOBAL_6_dist_code_I, &_GLOBAL_7_dist_code_I, &_GLOBAL_8_dist_code_I, &_GLOBAL_9_dist_code_I, &_GLOBAL_10_dist_code_I, &_GLOBAL_11_dist_code_I, &_GLOBAL_12_dist_code_I, &_GLOBAL_13_dist_code_I, &_GLOBAL_14_dist_code_I, &_GLOBAL_15_dist_code_I, &_GLOBAL_16_dist_code_I, &_GLOBAL_17_dist_code_I, &_GLOBAL_18_dist_code_I, &_GLOBAL_19_dist_code_I, &_GLOBAL_20_dist_code_I, &_GLOBAL_21_dist_code_I, &_GLOBAL_22_dist_code_I, &_GLOBAL_23_dist_code_I, &_GLOBAL_24_dist_code_I, &_GLOBAL_25_dist_code_I, &_GLOBAL_26_dist_code_I, &_GLOBAL_27_dist_code_I, &_GLOBAL_28_dist_code_I, &_GLOBAL_29_dist_code_I, &_GLOBAL_30_dist_code_I, &_GLOBAL_31_dist_code_I, &_GLOBAL_32_dist_code_I, &_GLOBAL_33_dist_code_I, &_GLOBAL_34_dist_code_I, &_GLOBAL_35_dist_code_I, &_GLOBAL_36_dist_code_I, &_GLOBAL_37_dist_code_I, &_GLOBAL_38_dist_code_I, &_GLOBAL_39_dist_code_I, &_GLOBAL_40_dist_code_I, &_GLOBAL_41_dist_code_I, &_GLOBAL_42_dist_code_I, &_GLOBAL_43_dist_code_I, &_GLOBAL_44_dist_code_I, &_GLOBAL_45_dist_code_I, &_GLOBAL_46_dist_code_I, &_GLOBAL_47_dist_code_I, &_GLOBAL_48_dist_code_I, &_GLOBAL_49_dist_code_I, };  





typedef  uch  _GLOBAL_68_T; static  _GLOBAL_68_T  _GLOBAL_0_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_1_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_2_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_3_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_4_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_5_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_6_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_7_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_8_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_9_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_10_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_11_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_12_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_13_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_14_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_15_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_16_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_17_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_18_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_19_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_20_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_21_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_22_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_23_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_24_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_25_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_26_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_27_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_28_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_29_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_30_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_31_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_32_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_33_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_34_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_35_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_36_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_37_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_38_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_39_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_40_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_41_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_42_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_43_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_44_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_45_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_46_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_47_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_48_length_code_I [ 258 - 3  + 1  ] ; static  _GLOBAL_68_T  _GLOBAL_49_length_code_I [ 258 - 3  + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_length_code_I) *_GLOBAL_length_code_24_A[NUM_STACKS] = { &_GLOBAL_0_length_code_I, &_GLOBAL_1_length_code_I, &_GLOBAL_2_length_code_I, &_GLOBAL_3_length_code_I, &_GLOBAL_4_length_code_I, &_GLOBAL_5_length_code_I, &_GLOBAL_6_length_code_I, &_GLOBAL_7_length_code_I, &_GLOBAL_8_length_code_I, &_GLOBAL_9_length_code_I, &_GLOBAL_10_length_code_I, &_GLOBAL_11_length_code_I, &_GLOBAL_12_length_code_I, &_GLOBAL_13_length_code_I, &_GLOBAL_14_length_code_I, &_GLOBAL_15_length_code_I, &_GLOBAL_16_length_code_I, &_GLOBAL_17_length_code_I, &_GLOBAL_18_length_code_I, &_GLOBAL_19_length_code_I, &_GLOBAL_20_length_code_I, &_GLOBAL_21_length_code_I, &_GLOBAL_22_length_code_I, &_GLOBAL_23_length_code_I, &_GLOBAL_24_length_code_I, &_GLOBAL_25_length_code_I, &_GLOBAL_26_length_code_I, &_GLOBAL_27_length_code_I, &_GLOBAL_28_length_code_I, &_GLOBAL_29_length_code_I, &_GLOBAL_30_length_code_I, &_GLOBAL_31_length_code_I, &_GLOBAL_32_length_code_I, &_GLOBAL_33_length_code_I, &_GLOBAL_34_length_code_I, &_GLOBAL_35_length_code_I, &_GLOBAL_36_length_code_I, &_GLOBAL_37_length_code_I, &_GLOBAL_38_length_code_I, &_GLOBAL_39_length_code_I, &_GLOBAL_40_length_code_I, &_GLOBAL_41_length_code_I, &_GLOBAL_42_length_code_I, &_GLOBAL_43_length_code_I, &_GLOBAL_44_length_code_I, &_GLOBAL_45_length_code_I, &_GLOBAL_46_length_code_I, &_GLOBAL_47_length_code_I, &_GLOBAL_48_length_code_I, &_GLOBAL_49_length_code_I, };    


typedef  int  _GLOBAL_69_T; static  _GLOBAL_69_T  _GLOBAL_0_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_1_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_2_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_3_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_4_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_5_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_6_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_7_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_8_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_9_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_10_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_11_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_12_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_13_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_14_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_15_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_16_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_17_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_18_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_19_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_20_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_21_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_22_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_23_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_24_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_25_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_26_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_27_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_28_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_29_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_30_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_31_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_32_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_33_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_34_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_35_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_36_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_37_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_38_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_39_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_40_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_41_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_42_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_43_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_44_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_45_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_46_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_47_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_48_base_length_I [ 29 ] ; static  _GLOBAL_69_T  _GLOBAL_49_base_length_I [ 29 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_base_length_I) *_GLOBAL_base_length_25_A[NUM_STACKS] = { &_GLOBAL_0_base_length_I, &_GLOBAL_1_base_length_I, &_GLOBAL_2_base_length_I, &_GLOBAL_3_base_length_I, &_GLOBAL_4_base_length_I, &_GLOBAL_5_base_length_I, &_GLOBAL_6_base_length_I, &_GLOBAL_7_base_length_I, &_GLOBAL_8_base_length_I, &_GLOBAL_9_base_length_I, &_GLOBAL_10_base_length_I, &_GLOBAL_11_base_length_I, &_GLOBAL_12_base_length_I, &_GLOBAL_13_base_length_I, &_GLOBAL_14_base_length_I, &_GLOBAL_15_base_length_I, &_GLOBAL_16_base_length_I, &_GLOBAL_17_base_length_I, &_GLOBAL_18_base_length_I, &_GLOBAL_19_base_length_I, &_GLOBAL_20_base_length_I, &_GLOBAL_21_base_length_I, &_GLOBAL_22_base_length_I, &_GLOBAL_23_base_length_I, &_GLOBAL_24_base_length_I, &_GLOBAL_25_base_length_I, &_GLOBAL_26_base_length_I, &_GLOBAL_27_base_length_I, &_GLOBAL_28_base_length_I, &_GLOBAL_29_base_length_I, &_GLOBAL_30_base_length_I, &_GLOBAL_31_base_length_I, &_GLOBAL_32_base_length_I, &_GLOBAL_33_base_length_I, &_GLOBAL_34_base_length_I, &_GLOBAL_35_base_length_I, &_GLOBAL_36_base_length_I, &_GLOBAL_37_base_length_I, &_GLOBAL_38_base_length_I, &_GLOBAL_39_base_length_I, &_GLOBAL_40_base_length_I, &_GLOBAL_41_base_length_I, &_GLOBAL_42_base_length_I, &_GLOBAL_43_base_length_I, &_GLOBAL_44_base_length_I, &_GLOBAL_45_base_length_I, &_GLOBAL_46_base_length_I, &_GLOBAL_47_base_length_I, &_GLOBAL_48_base_length_I, &_GLOBAL_49_base_length_I, };  


typedef  int  _GLOBAL_70_T; static  _GLOBAL_70_T  _GLOBAL_0_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_1_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_2_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_3_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_4_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_5_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_6_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_7_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_8_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_9_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_10_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_11_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_12_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_13_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_14_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_15_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_16_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_17_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_18_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_19_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_20_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_21_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_22_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_23_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_24_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_25_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_26_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_27_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_28_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_29_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_30_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_31_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_32_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_33_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_34_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_35_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_36_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_37_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_38_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_39_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_40_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_41_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_42_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_43_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_44_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_45_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_46_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_47_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_48_base_dist_I [ 30 ] ; static  _GLOBAL_70_T  _GLOBAL_49_base_dist_I [ 30 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_base_dist_I) *_GLOBAL_base_dist_26_A[NUM_STACKS] = { &_GLOBAL_0_base_dist_I, &_GLOBAL_1_base_dist_I, &_GLOBAL_2_base_dist_I, &_GLOBAL_3_base_dist_I, &_GLOBAL_4_base_dist_I, &_GLOBAL_5_base_dist_I, &_GLOBAL_6_base_dist_I, &_GLOBAL_7_base_dist_I, &_GLOBAL_8_base_dist_I, &_GLOBAL_9_base_dist_I, &_GLOBAL_10_base_dist_I, &_GLOBAL_11_base_dist_I, &_GLOBAL_12_base_dist_I, &_GLOBAL_13_base_dist_I, &_GLOBAL_14_base_dist_I, &_GLOBAL_15_base_dist_I, &_GLOBAL_16_base_dist_I, &_GLOBAL_17_base_dist_I, &_GLOBAL_18_base_dist_I, &_GLOBAL_19_base_dist_I, &_GLOBAL_20_base_dist_I, &_GLOBAL_21_base_dist_I, &_GLOBAL_22_base_dist_I, &_GLOBAL_23_base_dist_I, &_GLOBAL_24_base_dist_I, &_GLOBAL_25_base_dist_I, &_GLOBAL_26_base_dist_I, &_GLOBAL_27_base_dist_I, &_GLOBAL_28_base_dist_I, &_GLOBAL_29_base_dist_I, &_GLOBAL_30_base_dist_I, &_GLOBAL_31_base_dist_I, &_GLOBAL_32_base_dist_I, &_GLOBAL_33_base_dist_I, &_GLOBAL_34_base_dist_I, &_GLOBAL_35_base_dist_I, &_GLOBAL_36_base_dist_I, &_GLOBAL_37_base_dist_I, &_GLOBAL_38_base_dist_I, &_GLOBAL_39_base_dist_I, &_GLOBAL_40_base_dist_I, &_GLOBAL_41_base_dist_I, &_GLOBAL_42_base_dist_I, &_GLOBAL_43_base_dist_I, &_GLOBAL_44_base_dist_I, &_GLOBAL_45_base_dist_I, &_GLOBAL_46_base_dist_I, &_GLOBAL_47_base_dist_I, &_GLOBAL_48_base_dist_I, &_GLOBAL_49_base_dist_I, };  


struct static_tree_desc_s {
    ct_data *static_tree;
    const intf *extra_bits;
    int extra_base;
    int elems;
    int max_length;
};

typedef  const static_tree_desc   _GLOBAL_71_T; static  _GLOBAL_71_T  global_static_l_desc[NUM_STACKS] = {  { _GLOBAL_0_static_ltree_I , _GLOBAL_0_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_1_static_ltree_I , _GLOBAL_1_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_2_static_ltree_I , _GLOBAL_2_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_3_static_ltree_I , _GLOBAL_3_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_4_static_ltree_I , _GLOBAL_4_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_5_static_ltree_I , _GLOBAL_5_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_6_static_ltree_I , _GLOBAL_6_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_7_static_ltree_I , _GLOBAL_7_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_8_static_ltree_I , _GLOBAL_8_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_9_static_ltree_I , _GLOBAL_9_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_10_static_ltree_I , _GLOBAL_10_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_11_static_ltree_I , _GLOBAL_11_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_12_static_ltree_I , _GLOBAL_12_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_13_static_ltree_I , _GLOBAL_13_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_14_static_ltree_I , _GLOBAL_14_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_15_static_ltree_I , _GLOBAL_15_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_16_static_ltree_I , _GLOBAL_16_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_17_static_ltree_I , _GLOBAL_17_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_18_static_ltree_I , _GLOBAL_18_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_19_static_ltree_I , _GLOBAL_19_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_20_static_ltree_I , _GLOBAL_20_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_21_static_ltree_I , _GLOBAL_21_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_22_static_ltree_I , _GLOBAL_22_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_23_static_ltree_I , _GLOBAL_23_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_24_static_ltree_I , _GLOBAL_24_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_25_static_ltree_I , _GLOBAL_25_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_26_static_ltree_I , _GLOBAL_26_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_27_static_ltree_I , _GLOBAL_27_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_28_static_ltree_I , _GLOBAL_28_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_29_static_ltree_I , _GLOBAL_29_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_30_static_ltree_I , _GLOBAL_30_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_31_static_ltree_I , _GLOBAL_31_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_32_static_ltree_I , _GLOBAL_32_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_33_static_ltree_I , _GLOBAL_33_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_34_static_ltree_I , _GLOBAL_34_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_35_static_ltree_I , _GLOBAL_35_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_36_static_ltree_I , _GLOBAL_36_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_37_static_ltree_I , _GLOBAL_37_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_38_static_ltree_I , _GLOBAL_38_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_39_static_ltree_I , _GLOBAL_39_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_40_static_ltree_I , _GLOBAL_40_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_41_static_ltree_I , _GLOBAL_41_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_42_static_ltree_I , _GLOBAL_42_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_43_static_ltree_I , _GLOBAL_43_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_44_static_ltree_I , _GLOBAL_44_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_45_static_ltree_I , _GLOBAL_45_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_46_static_ltree_I , _GLOBAL_46_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_47_static_ltree_I , _GLOBAL_47_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_48_static_ltree_I , _GLOBAL_48_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  { _GLOBAL_49_static_ltree_I , _GLOBAL_49_extra_lbits_I  , 256 + 1   , ( 256 + 1  + 29  )   , 15  } ,  };     
      

typedef  const static_tree_desc   _GLOBAL_72_T; static  _GLOBAL_72_T  global_static_d_desc[NUM_STACKS] = {  { _GLOBAL_0_static_dtree_I , _GLOBAL_0_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_1_static_dtree_I , _GLOBAL_1_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_2_static_dtree_I , _GLOBAL_2_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_3_static_dtree_I , _GLOBAL_3_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_4_static_dtree_I , _GLOBAL_4_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_5_static_dtree_I , _GLOBAL_5_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_6_static_dtree_I , _GLOBAL_6_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_7_static_dtree_I , _GLOBAL_7_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_8_static_dtree_I , _GLOBAL_8_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_9_static_dtree_I , _GLOBAL_9_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_10_static_dtree_I , _GLOBAL_10_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_11_static_dtree_I , _GLOBAL_11_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_12_static_dtree_I , _GLOBAL_12_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_13_static_dtree_I , _GLOBAL_13_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_14_static_dtree_I , _GLOBAL_14_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_15_static_dtree_I , _GLOBAL_15_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_16_static_dtree_I , _GLOBAL_16_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_17_static_dtree_I , _GLOBAL_17_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_18_static_dtree_I , _GLOBAL_18_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_19_static_dtree_I , _GLOBAL_19_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_20_static_dtree_I , _GLOBAL_20_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_21_static_dtree_I , _GLOBAL_21_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_22_static_dtree_I , _GLOBAL_22_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_23_static_dtree_I , _GLOBAL_23_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_24_static_dtree_I , _GLOBAL_24_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_25_static_dtree_I , _GLOBAL_25_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_26_static_dtree_I , _GLOBAL_26_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_27_static_dtree_I , _GLOBAL_27_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_28_static_dtree_I , _GLOBAL_28_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_29_static_dtree_I , _GLOBAL_29_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_30_static_dtree_I , _GLOBAL_30_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_31_static_dtree_I , _GLOBAL_31_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_32_static_dtree_I , _GLOBAL_32_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_33_static_dtree_I , _GLOBAL_33_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_34_static_dtree_I , _GLOBAL_34_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_35_static_dtree_I , _GLOBAL_35_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_36_static_dtree_I , _GLOBAL_36_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_37_static_dtree_I , _GLOBAL_37_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_38_static_dtree_I , _GLOBAL_38_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_39_static_dtree_I , _GLOBAL_39_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_40_static_dtree_I , _GLOBAL_40_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_41_static_dtree_I , _GLOBAL_41_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_42_static_dtree_I , _GLOBAL_42_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_43_static_dtree_I , _GLOBAL_43_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_44_static_dtree_I , _GLOBAL_44_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_45_static_dtree_I , _GLOBAL_45_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_46_static_dtree_I , _GLOBAL_46_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_47_static_dtree_I , _GLOBAL_47_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_48_static_dtree_I , _GLOBAL_48_extra_dbits_I  , 0  , 30  , 15  } ,  { _GLOBAL_49_static_dtree_I , _GLOBAL_49_extra_dbits_I  , 0  , 30  , 15  } ,  };     
    

typedef  const static_tree_desc   _GLOBAL_73_T; static  _GLOBAL_73_T  global_static_bl_desc[NUM_STACKS] = {  { ( ct_data *  ) 0  , _GLOBAL_0_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_1_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_2_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_3_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_4_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_5_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_6_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_7_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_8_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_9_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_10_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_11_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_12_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_13_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_14_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_15_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_16_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_17_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_18_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_19_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_20_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_21_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_22_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_23_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_24_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_25_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_26_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_27_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_28_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_29_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_30_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_31_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_32_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_33_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_34_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_35_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_36_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_37_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_38_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_39_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_40_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_41_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_42_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_43_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_44_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_45_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_46_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_47_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_48_extra_blbits_I  , 0  , 19  , 7  } ,  { ( ct_data *  ) 0  , _GLOBAL_49_extra_blbits_I  , 0  , 19  , 7  } ,  };     
     





static void ct_static_init (void);
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
# 1682 "openbsd3/net/zlib.c"
static void ct_static_init()
{
    int n;
    int bits;
    int length;
    int code;
    int dist;
    ush bl_count[15 +1];



    length = 0;
    for (code = 0; code < 29 -1; code++) {
        (*_GLOBAL_base_length_25_A[get_stack_id()])[code] = length;
        for (n = 0; n < (1<<(*_GLOBAL_extra_lbits_17_A[get_stack_id()])[code]); n++) {
            (*_GLOBAL_length_code_24_A[get_stack_id()])[length++] = (uch)code;
        }
    }
    ;




    (*_GLOBAL_length_code_24_A[get_stack_id()])[length-1] = (uch)code;


    dist = 0;
    for (code = 0 ; code < 16; code++) {
        (*_GLOBAL_base_dist_26_A[get_stack_id()])[code] = dist;
        for (n = 0; n < (1<<(*_GLOBAL_extra_dbits_18_A[get_stack_id()])[code]); n++) {
            (*_GLOBAL_dist_code_23_A[get_stack_id()])[dist++] = (uch)code;
        }
    }
    ;
    dist >>= 7;
    for ( ; code < 30; code++) {
        (*_GLOBAL_base_dist_26_A[get_stack_id()])[code] = dist << 7;
        for (n = 0; n < (1<<((*_GLOBAL_extra_dbits_18_A[get_stack_id()])[code]-7)); n++) {
            (*_GLOBAL_dist_code_23_A[get_stack_id()])[256 + dist++] = (uch)code;
        }
    }
    ;


    for (bits = 0; bits <= 15; bits++) bl_count[bits] = 0;
    n = 0;
    while (n <= 143) (*_GLOBAL_static_ltree_21_A[get_stack_id()])[n++].dl.len = 8, bl_count[8]++;
    while (n <= 255) (*_GLOBAL_static_ltree_21_A[get_stack_id()])[n++].dl.len = 9, bl_count[9]++;
    while (n <= 279) (*_GLOBAL_static_ltree_21_A[get_stack_id()])[n++].dl.len = 7, bl_count[7]++;
    while (n <= 287) (*_GLOBAL_static_ltree_21_A[get_stack_id()])[n++].dl.len = 8, bl_count[8]++;




    gen_codes((ct_data *)(*_GLOBAL_static_ltree_21_A[get_stack_id()]), (256 +1+29)+1, bl_count);


    for (n = 0; n < 30; n++) {
        (*_GLOBAL_static_dtree_22_A[get_stack_id()])[n].dl.len = 5;
        (*_GLOBAL_static_dtree_22_A[get_stack_id()])[n].fc.code = bi_reverse(n, 5);
    }
}




static void ct_init(s)
    deflate_state *s;
{
    if ((*_GLOBAL_static_dtree_22_A[get_stack_id()])[0].dl.len == 0) {
        ct_static_init();
    }

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



    s->blocks_in_packet = 0;


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
# 1825 "openbsd3/net/zlib.c"
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
# 1860 "openbsd3/net/zlib.c"
static void gen_bitlen(s, desc)
    deflate_state *s;
    tree_desc *desc;
{
    ct_data *tree = desc->dyn_tree;
    int max_code = desc->max_code;
    ct_data *stree = desc->stat_desc->static_tree;
    const intf *extra = desc->stat_desc->extra_bits;
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
# 1947 "openbsd3/net/zlib.c"
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
# 1989 "openbsd3/net/zlib.c"
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
            do { { int len = s->bl_tree[curlen].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[curlen].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[curlen].fc.code) << s->bi_valid; s->bi_valid += len; }}; } while (--count != 0);

        } else if (curlen != 0) {
            if (curlen != prevlen) {
                { int len = s->bl_tree[curlen].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[curlen].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[curlen].fc.code) << s->bi_valid; s->bi_valid += len; }}; count--;
            }
            ;
            { int len = s->bl_tree[16].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[16].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[16].fc.code) << s->bi_valid; s->bi_valid += len; }}; { int len = 2; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = count-3; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (count-3) << s->bi_valid; s->bi_valid += len; }};

        } else if (count <= 10) {
            { int len = s->bl_tree[17].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[17].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[17].fc.code) << s->bi_valid; s->bi_valid += len; }}; { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = count-3; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (count-3) << s->bi_valid; s->bi_valid += len; }};

        } else {
            { int len = s->bl_tree[18].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[18].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[18].fc.code) << s->bi_valid; s->bi_valid += len; }}; { int len = 7; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = count-11; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (count-11) << s->bi_valid; s->bi_valid += len; }};
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
# 2191 "openbsd3/net/zlib.c"
    for (max_blindex = 19 -1; max_blindex >= 3; max_blindex--) {
        if (s->bl_tree[(*_GLOBAL_bl_order_20_A[get_stack_id()])[max_blindex]].dl.len != 0) break;
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
    { int len = 5; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = lcodes-257; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (lcodes-257) << s->bi_valid; s->bi_valid += len; }};
    { int len = 5; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = dcodes-1; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (dcodes-1) << s->bi_valid; s->bi_valid += len; }};
    { int len = 4; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = blcodes-4; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (blcodes-4) << s->bi_valid; s->bi_valid += len; }};
    for (rank = 0; rank < blcodes; rank++) {
        ;
        { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = s->bl_tree[(*_GLOBAL_bl_order_20_A[get_stack_id()])[rank]].dl.len; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (s->bl_tree[(*_GLOBAL_bl_order_20_A[get_stack_id()])[rank]].dl.len) << s->bi_valid; s->bi_valid += len; }};
    }
    ;

    send_tree(s, (ct_data *)s->dyn_ltree, lcodes-1);
    ;

    send_tree(s, (ct_data *)s->dyn_dtree, dcodes-1);
    ;
}




static void ct_stored_block(s, buf, stored_len, eof)
    deflate_state *s;
    charf *buf;
    ulg stored_len;
    int eof;
{
    { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (0<<1)+eof; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((0<<1)+eof) << s->bi_valid; s->bi_valid += len; }};
    s->compressed_len = (s->compressed_len + 3 + 7) & ~7L;
    s->compressed_len += (stored_len + 4) << 3;

    copy_block(s, buf, (unsigned)stored_len, 1);
}



static void ct_stored_type_only(s)
    deflate_state *s;
{
    { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (0 << 1); s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((0 << 1)) << s->bi_valid; s->bi_valid += len; }};
    bi_windup(s);
    s->compressed_len = (s->compressed_len + 3) & ~7L;
}
# 2268 "openbsd3/net/zlib.c"
static void ct_align(s)
    deflate_state *s;
{
    { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = 1<<1; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (1<<1) << s->bi_valid; s->bi_valid += len; }};
    { int len = (*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].fc.code) << s->bi_valid; s->bi_valid += len; }};
    s->compressed_len += 10L;
    bi_flush(s);




    if (s->last_eob_len + 10 - s->bi_valid < 9) {
        { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = 1<<1; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (1<<1) << s->bi_valid; s->bi_valid += len; }};
        { int len = (*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((*_GLOBAL_static_ltree_21_A[get_stack_id()])[256].fc.code) << s->bi_valid; s->bi_valid += len; }};
        s->compressed_len += 10L;
        bi_flush(s);
    }
    s->last_eob_len = 7;
}






static ulg ct_flush_block(s, buf, stored_len, flush)
    deflate_state *s;
    charf *buf;
    ulg stored_len;
    int flush;
{
    ulg opt_lenb, static_lenb;
    int max_blindex;
    int eof = flush == 4;

    ++s->blocks_in_packet;


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
# 2360 "openbsd3/net/zlib.c"
    if (flush == 5 && s->blocks_in_packet == 1
 && opt_lenb > stored_len - s->minCompr) {
 s->blocks_in_packet = 0;

    } else




    if (stored_len+4 <= opt_lenb && buf != (char*)0)


    {






        ct_stored_block(s, buf, stored_len, eof);
    } else




    if (static_lenb == opt_lenb)

    {
        { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (1<<1)+eof; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((1<<1)+eof) << s->bi_valid; s->bi_valid += len; }};
        compress_block(s, (ct_data *)(*_GLOBAL_static_ltree_21_A[get_stack_id()]), (ct_data *)(*_GLOBAL_static_dtree_22_A[get_stack_id()]));
        s->compressed_len += 3 + s->static_len;
    } else {
        { int len = 3; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = (2<<1)+eof; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= ((2<<1)+eof) << s->bi_valid; s->bi_valid += len; }};
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





static int ct_tally (s, dist, lc)
    deflate_state *s;
    int dist;
    int lc;
{
    s->d_buf[s->last_lit] = (ush)dist;
    s->l_buf[s->last_lit++] = (uch)lc;
    if (dist == 0) {

        s->dyn_ltree[lc].fc.freq++;
    } else {
        s->matches++;

        dist--;
       

                                                                        ;

        s->dyn_ltree[(*_GLOBAL_length_code_24_A[get_stack_id()])[lc]+256 +1].fc.freq++;
        s->dyn_dtree[((dist) < 256 ? (*_GLOBAL_dist_code_23_A[get_stack_id()])[dist] : (*_GLOBAL_dist_code_23_A[get_stack_id()])[256+((dist)>>7)])].fc.freq++;
    }


    if (s->level > 2 && (s->last_lit & 0xfff) == 0) {

        ulg out_length = (ulg)s->last_lit*8L;
        ulg in_length = (ulg)s->strstart - s->block_start;
        int dcode;
        for (dcode = 0; dcode < 30; dcode++) {
            out_length += (ulg)s->dyn_dtree[dcode].fc.freq *
                (5L+(*_GLOBAL_extra_dbits_18_A[get_stack_id()])[dcode]);
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
            { int len = ltree[lc].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ltree[lc].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (ltree[lc].fc.code) << s->bi_valid; s->bi_valid += len; }};
            ;
        } else {

            code = (*_GLOBAL_length_code_24_A[get_stack_id()])[lc];
            { int len = ltree[code+256 +1].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ltree[code+256 +1].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (ltree[code+256 +1].fc.code) << s->bi_valid; s->bi_valid += len; }};
            extra = (*_GLOBAL_extra_lbits_17_A[get_stack_id()])[code];
            if (extra != 0) {
                lc -= (*_GLOBAL_base_length_25_A[get_stack_id()])[code];
                { int len = extra; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = lc; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (lc) << s->bi_valid; s->bi_valid += len; }};
            }
            dist--;
            code = ((dist) < 256 ? (*_GLOBAL_dist_code_23_A[get_stack_id()])[dist] : (*_GLOBAL_dist_code_23_A[get_stack_id()])[256+((dist)>>7)]);
            ;

            { int len = dtree[code].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = dtree[code].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (dtree[code].fc.code) << s->bi_valid; s->bi_valid += len; }};
            extra = (*_GLOBAL_extra_dbits_18_A[get_stack_id()])[code];
            if (extra != 0) {
                dist -= (*_GLOBAL_base_dist_26_A[get_stack_id()])[code];
                { int len = extra; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = dist; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (dist) << s->bi_valid; s->bi_valid += len; }};
            }
        }


        ;

    } while (lx < s->last_lit);

    { int len = ltree[256].dl.len; if (s->bi_valid > (int)(8 * 2*sizeof(char)) - len) { int val = ltree[256].fc.code; s->bi_buf |= (val << s->bi_valid); { {s->pending_buf[s->pending++] = ((uch)((s->bi_buf) & 0xff));}; {s->pending_buf[s->pending++] = ((uch)((ush)(s->bi_buf) >> 8));}; }; s->bi_buf = (ush)val >> ((8 * 2*sizeof(char)) - s->bi_valid); s->bi_valid += len - (8 * 2*sizeof(char)); } else { s->bi_buf |= (ltree[256].fc.code) << s->bi_valid; s->bi_valid += len; }};
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
    unsigned res = 0;
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



    while (len--) {
        {s->pending_buf[s->pending++] = (*buf++);};
    }
}
# 2620 "openbsd3/net/zlib.c"
struct inflate_blocks_state;
typedef struct inflate_blocks_state inflate_blocks_statef;

static inflate_blocks_statef * inflate_blocks_new ( z_stream *z, check_func c, uInt w)


            ;

static int inflate_blocks ( inflate_blocks_statef *, z_stream *, int)


         ;

static void inflate_blocks_reset ( inflate_blocks_statef *, z_stream *, uLongf *)


              ;

static int inflate_blocks_free ( inflate_blocks_statef *, z_stream *, uLongf *)


              ;

static int inflate_addhistory ( inflate_blocks_statef *, z_stream *)

                ;

static int inflate_packet_flush ( inflate_blocks_statef *)
                             ;
# 2664 "openbsd3/net/zlib.c"
typedef struct inflate_huft_s inflate_huft;

struct inflate_huft_s {
  union {
    struct {
      Byte Exop;
      Byte Bits;
    } what;
    uInt Nalloc;
    Bytef *pad;
  } word;
  union {
    uInt Base;
    inflate_huft *Next;
  } more;
};





static int inflate_trees_bits ( uIntf *, uIntf *, inflate_huft * *, z_stream *)



                ;

static int inflate_trees_dynamic ( uInt, uInt, uIntf *, uIntf *, uIntf *, inflate_huft * *, inflate_huft * *, z_stream *)







                ;

static int inflate_trees_fixed ( uIntf *, uIntf *, inflate_huft * *, inflate_huft * *)



                          ;

static int inflate_trees_free ( inflate_huft *, z_stream *)

                ;
# 2723 "openbsd3/net/zlib.c"
struct inflate_codes_state;
typedef struct inflate_codes_state inflate_codes_statef;

static inflate_codes_statef *inflate_codes_new ( uInt, uInt, inflate_huft *, inflate_huft *, z_stream *)


                ;

static int inflate_codes ( inflate_blocks_statef *, z_stream *, int)


         ;

static void inflate_codes_free ( inflate_codes_statef *, z_stream *)

                ;
# 2748 "openbsd3/net/zlib.c"
struct internal_state {


  enum {
      METHOD,
      FLAG,
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
z_stream *z;
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
z_stream *z;
{
  uLong c;

  if (z == 0 || z->state == 0 || z->zfree == 0)
    return (-2);
  if (z->state->blocks != 0)
    inflate_blocks_free(z->state->blocks, z, &c);
  (*((z)->zfree))((z)->opaque, (voidpf)(z->state), (sizeof(struct internal_state)));
  z->state = 0;
  ;
  return 0;
}


int inflateInit2(z, w)
z_stream *z;
int w;
{

  if (z == 0)
    return (-2);


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
       inflate_blocks_new(z, z->state->nowrap ? 0 : adler32, 1 << w))
      == 0)
  {
    inflateEnd(z);
    return (-4);
  }
  ;


  inflateReset(z);
  return 0;
}


int inflateInit(z)
z_stream *z;
{
  return inflateInit2(z, 15);
}





int inflate(z, f)
z_stream *z;
int f;
{
  int r;
  uInt b;

  if (z == 0 || z->next_in == 0)
    return (-2);
  r = (-5);
  while (1) switch (z->state->mode)
  {
    case METHOD:
      {if(z->avail_in==0)goto empty;r=0;}
      if (((z->state->sub.method = (z->avail_in--,z->total_in++,*z->next_in++)) & 0xf) != 8)
      {
        z->state->mode = BAD;
        z->msg = "unknown compression method";
        z->state->sub.marker = 5;
        break;
      }
      if ((z->state->sub.method >> 4) + 8 > z->state->wbits)
      {
        z->state->mode = BAD;
        z->msg = "invalid window size";
        z->state->sub.marker = 5;
        break;
      }
      z->state->mode = FLAG;
    case FLAG:
      {if(z->avail_in==0)goto empty;r=0;}
      if ((b = (z->avail_in--,z->total_in++,*z->next_in++)) & 0x20)
      {
        z->state->mode = BAD;
        z->msg = "invalid reserved bit";
        z->state->sub.marker = 5;
        break;
      }
      if (((z->state->sub.method << 8) + b) % 31)
      {
        z->state->mode = BAD;
        z->msg = "incorrect header check";
        z->state->sub.marker = 5;
        break;
      }
      ;
      z->state->mode = BLOCKS;
    case BLOCKS:
      r = inflate_blocks(z->state->blocks, z, r);
      if (f == 5 && z->avail_in == 0 && z->avail_out != 0)
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
        z->msg = "incorrect data check";
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
  if (f != 5)
    return r;
  z->state->mode = BAD;
  z->state->sub.marker = 0;
  return (-3);
}
# 2987 "openbsd3/net/zlib.c"
int inflateIncomp(z)
z_stream *z;
{
    if (z->state->mode != BLOCKS)
 return (-3);
    return inflate_addhistory(z->state->blocks, z);
}


int inflateSync(z)
z_stream *z;
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
# 3060 "openbsd3/net/zlib.c"
struct inflate_blocks_state {


  enum {
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
    mode;


  union {
    uInt left;
    struct {
      uInt table;
      uInt index;
      uIntf *blens;
      uInt bb;
      inflate_huft *tb;
      int nblens;
    } trees;
    struct {
      inflate_huft *tl, *td;
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
# 3132 "openbsd3/net/zlib.c"
typedef  const uInt   _GLOBAL_74_T; static  _GLOBAL_74_T  _GLOBAL_0_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_1_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_2_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_3_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_4_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_5_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_6_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_7_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_8_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_9_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_10_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_11_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_12_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_13_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_14_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_15_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_16_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_17_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_18_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_19_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_20_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_21_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_22_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_23_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_24_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_25_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_26_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_27_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_28_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_29_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_30_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_31_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_32_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_33_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_34_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_35_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_36_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_37_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_38_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_39_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_40_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_41_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_42_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_43_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_44_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_45_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_46_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_47_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_48_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static  _GLOBAL_74_T  _GLOBAL_49_inflate_mask_I [ ]  = { 0x0000 , 0x0001  , 0x0003  , 0x0007  , 0x000f  , 0x001f  , 0x003f  , 0x007f  , 0x00ff  , 0x01ff  , 0x03ff  , 0x07ff  , 0x0fff  , 0x1fff  , 0x3fff  , 0x7fff  , 0xffff  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inflate_mask_I) *_GLOBAL_inflate_mask_27_A[NUM_STACKS] = { &_GLOBAL_0_inflate_mask_I, &_GLOBAL_1_inflate_mask_I, &_GLOBAL_2_inflate_mask_I, &_GLOBAL_3_inflate_mask_I, &_GLOBAL_4_inflate_mask_I, &_GLOBAL_5_inflate_mask_I, &_GLOBAL_6_inflate_mask_I, &_GLOBAL_7_inflate_mask_I, &_GLOBAL_8_inflate_mask_I, &_GLOBAL_9_inflate_mask_I, &_GLOBAL_10_inflate_mask_I, &_GLOBAL_11_inflate_mask_I, &_GLOBAL_12_inflate_mask_I, &_GLOBAL_13_inflate_mask_I, &_GLOBAL_14_inflate_mask_I, &_GLOBAL_15_inflate_mask_I, &_GLOBAL_16_inflate_mask_I, &_GLOBAL_17_inflate_mask_I, &_GLOBAL_18_inflate_mask_I, &_GLOBAL_19_inflate_mask_I, &_GLOBAL_20_inflate_mask_I, &_GLOBAL_21_inflate_mask_I, &_GLOBAL_22_inflate_mask_I, &_GLOBAL_23_inflate_mask_I, &_GLOBAL_24_inflate_mask_I, &_GLOBAL_25_inflate_mask_I, &_GLOBAL_26_inflate_mask_I, &_GLOBAL_27_inflate_mask_I, &_GLOBAL_28_inflate_mask_I, &_GLOBAL_29_inflate_mask_I, &_GLOBAL_30_inflate_mask_I, &_GLOBAL_31_inflate_mask_I, &_GLOBAL_32_inflate_mask_I, &_GLOBAL_33_inflate_mask_I, &_GLOBAL_34_inflate_mask_I, &_GLOBAL_35_inflate_mask_I, &_GLOBAL_36_inflate_mask_I, &_GLOBAL_37_inflate_mask_I, &_GLOBAL_38_inflate_mask_I, &_GLOBAL_39_inflate_mask_I, &_GLOBAL_40_inflate_mask_I, &_GLOBAL_41_inflate_mask_I, &_GLOBAL_42_inflate_mask_I, &_GLOBAL_43_inflate_mask_I, &_GLOBAL_44_inflate_mask_I, &_GLOBAL_45_inflate_mask_I, &_GLOBAL_46_inflate_mask_I, &_GLOBAL_47_inflate_mask_I, &_GLOBAL_48_inflate_mask_I, &_GLOBAL_49_inflate_mask_I, };     
    
           
           



static int inflate_flush ( inflate_blocks_statef *, z_stream *, int)


         ;
# 3155 "openbsd3/net/zlib.c"
static int inflate_fast ( uInt, uInt, inflate_huft *, inflate_huft *, inflate_blocks_statef *, z_stream *)





                ;
# 3171 "openbsd3/net/zlib.c"
typedef  uInt  _GLOBAL_75_T; static  _GLOBAL_75_T  _GLOBAL_0_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_1_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_2_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_3_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_4_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_5_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_6_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_7_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_8_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_9_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_10_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_11_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_12_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_13_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_14_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_15_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_16_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_17_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_18_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_19_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_20_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_21_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_22_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_23_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_24_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_25_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_26_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_27_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_28_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_29_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_30_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_31_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_32_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_33_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_34_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_35_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_36_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_37_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_38_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_39_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_40_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_41_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_42_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_43_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_44_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_45_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_46_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_47_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_48_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static  _GLOBAL_75_T  _GLOBAL_49_border_I [ ]  = { 16 , 17  , 18  , 0  , 8  , 7  , 9  , 6  , 10  , 5  , 11  , 4  , 12  , 3  , 13  , 2  , 14  , 1  , 15  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_border_I) *_GLOBAL_border_28_A[NUM_STACKS] = { &_GLOBAL_0_border_I, &_GLOBAL_1_border_I, &_GLOBAL_2_border_I, &_GLOBAL_3_border_I, &_GLOBAL_4_border_I, &_GLOBAL_5_border_I, &_GLOBAL_6_border_I, &_GLOBAL_7_border_I, &_GLOBAL_8_border_I, &_GLOBAL_9_border_I, &_GLOBAL_10_border_I, &_GLOBAL_11_border_I, &_GLOBAL_12_border_I, &_GLOBAL_13_border_I, &_GLOBAL_14_border_I, &_GLOBAL_15_border_I, &_GLOBAL_16_border_I, &_GLOBAL_17_border_I, &_GLOBAL_18_border_I, &_GLOBAL_19_border_I, &_GLOBAL_20_border_I, &_GLOBAL_21_border_I, &_GLOBAL_22_border_I, &_GLOBAL_23_border_I, &_GLOBAL_24_border_I, &_GLOBAL_25_border_I, &_GLOBAL_26_border_I, &_GLOBAL_27_border_I, &_GLOBAL_28_border_I, &_GLOBAL_29_border_I, &_GLOBAL_30_border_I, &_GLOBAL_31_border_I, &_GLOBAL_32_border_I, &_GLOBAL_33_border_I, &_GLOBAL_34_border_I, &_GLOBAL_35_border_I, &_GLOBAL_36_border_I, &_GLOBAL_37_border_I, &_GLOBAL_38_border_I, &_GLOBAL_39_border_I, &_GLOBAL_40_border_I, &_GLOBAL_41_border_I, &_GLOBAL_42_border_I, &_GLOBAL_43_border_I, &_GLOBAL_44_border_I, &_GLOBAL_45_border_I, &_GLOBAL_46_border_I, &_GLOBAL_47_border_I, &_GLOBAL_48_border_I, &_GLOBAL_49_border_I, };    
                          
# 3220 "openbsd3/net/zlib.c"
static void inflate_blocks_reset(s, z, c)
inflate_blocks_statef *s;
z_stream *z;
uLongf *c;
{
  if (s->checkfn != 0)
    *c = s->check;
  if (s->mode == BTREE || s->mode == DTREE)
    (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens), (s->sub.trees.nblens * sizeof(uInt)));
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
    s->check = (*s->checkfn)(0L, 0, 0);
  ;
}


static inflate_blocks_statef *inflate_blocks_new(z, c, w)
z_stream *z;
check_func c;
uInt w;
{
  inflate_blocks_statef *s;

  if ((s = (inflate_blocks_statef *)(*((z)->zalloc))((z)->opaque, (1), (sizeof(struct inflate_blocks_state)))
                                                ) == 0)
    return s;
  if ((s->window = (Bytef *)(*((z)->zalloc))((z)->opaque, (1), (w))) == 0)
  {
    (*((z)->zfree))((z)->opaque, (voidpf)(s), (sizeof(struct inflate_blocks_state)));
    return 0;
  }
  s->end = s->window + w;
  s->checkfn = c;
  s->mode = TYPE;
  ;
  inflate_blocks_reset(s, z, &s->check);
  return s;
}


static int inflate_blocks(s, z, r)
inflate_blocks_statef *s;
z_stream *z;
int r;
{
  uInt t;
  uLong b;
  uInt k;
  Bytef *p;
  uInt n;
  Bytef *q;
  uInt m;


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}


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
          z->msg = "invalid block type";
          r = (-3);
          {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      break;
    case LENS:
      {while(k<(32)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      if (((~b) >> 16) != (b & 0xffff))
      {
        s->mode = BADB;
        z->msg = "invalid stored block lengths";
        r = (-3);
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      }
      s->sub.left = (uInt)b & 0xffff;
      b = k = 0;
      ;
      s->mode = s->sub.left ? STORED : TYPE;
      break;
    case STORED:
      if (n == 0)
        {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
      {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
      t = s->sub.left;
      if (t > n) t = n;
      if (t > m) t = m;
      bcopy((p), (q), (t));
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
        z->msg = "too many length or distance symbols";
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
      s->sub.trees.nblens = t;
      {b>>=(14);k-=(14);}
      s->sub.trees.index = 0;
      ;
      s->mode = BTREE;
    case BTREE:
      while (s->sub.trees.index < 4 + (s->sub.trees.table >> 10))
      {
        {while(k<(3)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
        s->sub.trees.blens[(*_GLOBAL_border_28_A[get_stack_id()])[s->sub.trees.index++]] = (uInt)b & 7;
        {b>>=(3);k-=(3);}
      }
      while (s->sub.trees.index < 19)
        s->sub.trees.blens[(*_GLOBAL_border_28_A[get_stack_id()])[s->sub.trees.index++]] = 0;
      s->sub.trees.bb = 7;
      t = inflate_trees_bits(s->sub.trees.blens, &s->sub.trees.bb,
                             &s->sub.trees.tb, z);
      if (t != 0)
      {
        r = t;
        if (r == (-3))
        {
          (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens), (s->sub.trees.nblens * sizeof(uInt)));
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
        h = s->sub.trees.tb + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[t]);
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
          j += (uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[i];
          {b>>=(i);k-=(i);}
          i = s->sub.trees.index;
          t = s->sub.trees.table;
          if (i + j > 258 + (t & 0x1f) + ((t >> 5) & 0x1f) ||
              (c == 16 && i < 1))
          {
            s->mode = BADB;
            z->msg = "invalid bit length repeat";
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
          if (t == (uInt)(-3))
          {
            (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens), (s->sub.trees.nblens * sizeof(uInt)));
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
        (*((z)->zfree))((z)->opaque, (voidpf)(s->sub.trees.blens), (s->sub.trees.nblens * sizeof(uInt)));
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
      {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}
     

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
      {{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}
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


static int inflate_blocks_free(s, z, c)
inflate_blocks_statef *s;
z_stream *z;
uLongf *c;
{
  inflate_blocks_reset(s, z, c);
  (*((z)->zfree))((z)->opaque, (voidpf)(s->window), (s->end - s->window));
  (*((z)->zfree))((z)->opaque, (voidpf)(s), (sizeof(struct inflate_blocks_state)));
  ;
  return 0;
}
# 3558 "openbsd3/net/zlib.c"
static int inflate_addhistory(s, z)
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


    {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}



    while (n) {
 t = n;

 if (t > m) t = m;

 if (s->checkfn != 0)
     s->check = (*s->checkfn)(s->check, q, t);
 bcopy((p), (q), (t));
 q += t;
 p += t;
 n -= t;
 z->total_out += t;
 s->read = q;

 if (q == s->end) {
     s->read = q = s->window;
     m = (q<s->read?s->read-q-1:s->end-q);
 }
    }
    {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
    return 0;
}






static int inflate_packet_flush(s)
    inflate_blocks_statef *s;
{
    if (s->mode != LENS)
 return (-3);
    s->mode = TYPE;
    return 0;
}
# 3631 "openbsd3/net/zlib.c"
static int huft_build ( uIntf *, uInt, uInt, const uIntf *, const uIntf *, inflate_huft * *, uIntf *, z_stream *)







                ;

static voidpf falloc ( voidpf, uInt, uInt)


          ;

static void ffree ( voidpf q, voidpf p, uInt n)


            ;


typedef  const uInt   _GLOBAL_76_T; static  _GLOBAL_76_T  _GLOBAL_0_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_1_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_2_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_3_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_4_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_5_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_6_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_7_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_8_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_9_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_10_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_11_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_12_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_13_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_14_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_15_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_16_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_17_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_18_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_19_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_20_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_21_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_22_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_23_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_24_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_25_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_26_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_27_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_28_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_29_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_30_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_31_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_32_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_33_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_34_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_35_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_36_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_37_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_38_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_39_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_40_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_41_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_42_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_43_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_44_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_45_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_46_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_47_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_48_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static  _GLOBAL_76_T  _GLOBAL_49_cplens_I [ ]  = { 3 , 4  , 5  , 6  , 7  , 8  , 9  , 10  , 11  , 13  , 15  , 17  , 19  , 23  , 27  , 31  , 35  , 43  , 51  , 59  , 67  , 83  , 99  , 115  , 131  , 163  , 195  , 227  , 258  , 0  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cplens_I) *_GLOBAL_cplens_29_A[NUM_STACKS] = { &_GLOBAL_0_cplens_I, &_GLOBAL_1_cplens_I, &_GLOBAL_2_cplens_I, &_GLOBAL_3_cplens_I, &_GLOBAL_4_cplens_I, &_GLOBAL_5_cplens_I, &_GLOBAL_6_cplens_I, &_GLOBAL_7_cplens_I, &_GLOBAL_8_cplens_I, &_GLOBAL_9_cplens_I, &_GLOBAL_10_cplens_I, &_GLOBAL_11_cplens_I, &_GLOBAL_12_cplens_I, &_GLOBAL_13_cplens_I, &_GLOBAL_14_cplens_I, &_GLOBAL_15_cplens_I, &_GLOBAL_16_cplens_I, &_GLOBAL_17_cplens_I, &_GLOBAL_18_cplens_I, &_GLOBAL_19_cplens_I, &_GLOBAL_20_cplens_I, &_GLOBAL_21_cplens_I, &_GLOBAL_22_cplens_I, &_GLOBAL_23_cplens_I, &_GLOBAL_24_cplens_I, &_GLOBAL_25_cplens_I, &_GLOBAL_26_cplens_I, &_GLOBAL_27_cplens_I, &_GLOBAL_28_cplens_I, &_GLOBAL_29_cplens_I, &_GLOBAL_30_cplens_I, &_GLOBAL_31_cplens_I, &_GLOBAL_32_cplens_I, &_GLOBAL_33_cplens_I, &_GLOBAL_34_cplens_I, &_GLOBAL_35_cplens_I, &_GLOBAL_36_cplens_I, &_GLOBAL_37_cplens_I, &_GLOBAL_38_cplens_I, &_GLOBAL_39_cplens_I, &_GLOBAL_40_cplens_I, &_GLOBAL_41_cplens_I, &_GLOBAL_42_cplens_I, &_GLOBAL_43_cplens_I, &_GLOBAL_44_cplens_I, &_GLOBAL_45_cplens_I, &_GLOBAL_46_cplens_I, &_GLOBAL_47_cplens_I, &_GLOBAL_48_cplens_I, &_GLOBAL_49_cplens_I, };     
                       
                      

typedef  const uInt   _GLOBAL_77_T; static  _GLOBAL_77_T  _GLOBAL_0_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_1_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_2_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_3_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_4_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_5_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_6_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_7_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_8_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_9_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_10_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_11_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_12_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_13_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_14_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_15_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_16_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_17_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_18_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_19_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_20_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_21_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_22_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_23_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_24_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_25_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_26_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_27_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_28_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_29_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_30_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_31_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_32_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_33_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_34_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_35_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_36_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_37_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_38_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_39_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_40_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_41_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_42_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_43_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_44_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_45_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_46_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_47_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_48_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static  _GLOBAL_77_T  _GLOBAL_49_cplext_I [ ]  = { 0 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1  , 1  , 1  , 1  , 2  , 2  , 2  , 2  , 3  , 3  , 3  , 3  , 4  , 4  , 4  , 4  , 5  , 5  , 5  , 5  , 0  , 192  , 192  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cplext_I) *_GLOBAL_cplext_30_A[NUM_STACKS] = { &_GLOBAL_0_cplext_I, &_GLOBAL_1_cplext_I, &_GLOBAL_2_cplext_I, &_GLOBAL_3_cplext_I, &_GLOBAL_4_cplext_I, &_GLOBAL_5_cplext_I, &_GLOBAL_6_cplext_I, &_GLOBAL_7_cplext_I, &_GLOBAL_8_cplext_I, &_GLOBAL_9_cplext_I, &_GLOBAL_10_cplext_I, &_GLOBAL_11_cplext_I, &_GLOBAL_12_cplext_I, &_GLOBAL_13_cplext_I, &_GLOBAL_14_cplext_I, &_GLOBAL_15_cplext_I, &_GLOBAL_16_cplext_I, &_GLOBAL_17_cplext_I, &_GLOBAL_18_cplext_I, &_GLOBAL_19_cplext_I, &_GLOBAL_20_cplext_I, &_GLOBAL_21_cplext_I, &_GLOBAL_22_cplext_I, &_GLOBAL_23_cplext_I, &_GLOBAL_24_cplext_I, &_GLOBAL_25_cplext_I, &_GLOBAL_26_cplext_I, &_GLOBAL_27_cplext_I, &_GLOBAL_28_cplext_I, &_GLOBAL_29_cplext_I, &_GLOBAL_30_cplext_I, &_GLOBAL_31_cplext_I, &_GLOBAL_32_cplext_I, &_GLOBAL_33_cplext_I, &_GLOBAL_34_cplext_I, &_GLOBAL_35_cplext_I, &_GLOBAL_36_cplext_I, &_GLOBAL_37_cplext_I, &_GLOBAL_38_cplext_I, &_GLOBAL_39_cplext_I, &_GLOBAL_40_cplext_I, &_GLOBAL_41_cplext_I, &_GLOBAL_42_cplext_I, &_GLOBAL_43_cplext_I, &_GLOBAL_44_cplext_I, &_GLOBAL_45_cplext_I, &_GLOBAL_46_cplext_I, &_GLOBAL_47_cplext_I, &_GLOBAL_48_cplext_I, &_GLOBAL_49_cplext_I, };     
                       
                      
typedef  const uInt   _GLOBAL_78_T; static  _GLOBAL_78_T  _GLOBAL_0_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_1_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_2_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_3_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_4_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_5_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_6_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_7_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_8_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_9_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_10_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_11_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_12_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_13_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_14_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_15_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_16_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_17_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_18_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_19_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_20_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_21_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_22_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_23_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_24_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_25_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_26_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_27_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_28_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_29_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_30_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_31_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_32_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_33_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_34_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_35_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_36_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_37_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_38_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_39_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_40_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_41_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_42_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_43_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_44_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_45_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_46_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_47_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_48_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static  _GLOBAL_78_T  _GLOBAL_49_cpdist_I [ ]  = { 1 , 2  , 3  , 4  , 5  , 7  , 9  , 13  , 17  , 25  , 33  , 49  , 65  , 97  , 129  , 193  , 257  , 385  , 513  , 769  , 1025  , 1537  , 2049  , 3073  , 4097  , 6145  , 8193  , 12289  , 16385  , 24577  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpdist_I) *_GLOBAL_cpdist_31_A[NUM_STACKS] = { &_GLOBAL_0_cpdist_I, &_GLOBAL_1_cpdist_I, &_GLOBAL_2_cpdist_I, &_GLOBAL_3_cpdist_I, &_GLOBAL_4_cpdist_I, &_GLOBAL_5_cpdist_I, &_GLOBAL_6_cpdist_I, &_GLOBAL_7_cpdist_I, &_GLOBAL_8_cpdist_I, &_GLOBAL_9_cpdist_I, &_GLOBAL_10_cpdist_I, &_GLOBAL_11_cpdist_I, &_GLOBAL_12_cpdist_I, &_GLOBAL_13_cpdist_I, &_GLOBAL_14_cpdist_I, &_GLOBAL_15_cpdist_I, &_GLOBAL_16_cpdist_I, &_GLOBAL_17_cpdist_I, &_GLOBAL_18_cpdist_I, &_GLOBAL_19_cpdist_I, &_GLOBAL_20_cpdist_I, &_GLOBAL_21_cpdist_I, &_GLOBAL_22_cpdist_I, &_GLOBAL_23_cpdist_I, &_GLOBAL_24_cpdist_I, &_GLOBAL_25_cpdist_I, &_GLOBAL_26_cpdist_I, &_GLOBAL_27_cpdist_I, &_GLOBAL_28_cpdist_I, &_GLOBAL_29_cpdist_I, &_GLOBAL_30_cpdist_I, &_GLOBAL_31_cpdist_I, &_GLOBAL_32_cpdist_I, &_GLOBAL_33_cpdist_I, &_GLOBAL_34_cpdist_I, &_GLOBAL_35_cpdist_I, &_GLOBAL_36_cpdist_I, &_GLOBAL_37_cpdist_I, &_GLOBAL_38_cpdist_I, &_GLOBAL_39_cpdist_I, &_GLOBAL_40_cpdist_I, &_GLOBAL_41_cpdist_I, &_GLOBAL_42_cpdist_I, &_GLOBAL_43_cpdist_I, &_GLOBAL_44_cpdist_I, &_GLOBAL_45_cpdist_I, &_GLOBAL_46_cpdist_I, &_GLOBAL_47_cpdist_I, &_GLOBAL_48_cpdist_I, &_GLOBAL_49_cpdist_I, };     
                       
                 
           
typedef  const uInt   _GLOBAL_79_T; static  _GLOBAL_79_T  _GLOBAL_0_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_1_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_2_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_3_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_4_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_5_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_6_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_7_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_8_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_9_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_10_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_11_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_12_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_13_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_14_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_15_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_16_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_17_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_18_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_19_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_20_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_21_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_22_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_23_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_24_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_25_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_26_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_27_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_28_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_29_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_30_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_31_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_32_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_33_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_34_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_35_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_36_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_37_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_38_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_39_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_40_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_41_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_42_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_43_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_44_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_45_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_46_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_47_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_48_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static  _GLOBAL_79_T  _GLOBAL_49_cpdext_I [ ]  = { 0 , 0  , 0  , 0  , 1  , 1  , 2  , 2  , 3  , 3  , 4  , 4  , 5  , 5  , 6  , 6  , 7  , 7  , 8  , 8  , 9  , 9  , 10  , 10  , 11  , 11  , 12  , 12  , 13  , 13  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpdext_I) *_GLOBAL_cpdext_32_A[NUM_STACKS] = { &_GLOBAL_0_cpdext_I, &_GLOBAL_1_cpdext_I, &_GLOBAL_2_cpdext_I, &_GLOBAL_3_cpdext_I, &_GLOBAL_4_cpdext_I, &_GLOBAL_5_cpdext_I, &_GLOBAL_6_cpdext_I, &_GLOBAL_7_cpdext_I, &_GLOBAL_8_cpdext_I, &_GLOBAL_9_cpdext_I, &_GLOBAL_10_cpdext_I, &_GLOBAL_11_cpdext_I, &_GLOBAL_12_cpdext_I, &_GLOBAL_13_cpdext_I, &_GLOBAL_14_cpdext_I, &_GLOBAL_15_cpdext_I, &_GLOBAL_16_cpdext_I, &_GLOBAL_17_cpdext_I, &_GLOBAL_18_cpdext_I, &_GLOBAL_19_cpdext_I, &_GLOBAL_20_cpdext_I, &_GLOBAL_21_cpdext_I, &_GLOBAL_22_cpdext_I, &_GLOBAL_23_cpdext_I, &_GLOBAL_24_cpdext_I, &_GLOBAL_25_cpdext_I, &_GLOBAL_26_cpdext_I, &_GLOBAL_27_cpdext_I, &_GLOBAL_28_cpdext_I, &_GLOBAL_29_cpdext_I, &_GLOBAL_30_cpdext_I, &_GLOBAL_31_cpdext_I, &_GLOBAL_32_cpdext_I, &_GLOBAL_33_cpdext_I, &_GLOBAL_34_cpdext_I, &_GLOBAL_35_cpdext_I, &_GLOBAL_36_cpdext_I, &_GLOBAL_37_cpdext_I, &_GLOBAL_38_cpdext_I, &_GLOBAL_39_cpdext_I, &_GLOBAL_40_cpdext_I, &_GLOBAL_41_cpdext_I, &_GLOBAL_42_cpdext_I, &_GLOBAL_43_cpdext_I, &_GLOBAL_44_cpdext_I, &_GLOBAL_45_cpdext_I, &_GLOBAL_46_cpdext_I, &_GLOBAL_47_cpdext_I, &_GLOBAL_48_cpdext_I, &_GLOBAL_49_cpdext_I, };     
                       
                 
           
# 3709 "openbsd3/net/zlib.c"
static int huft_build(b, n, s, d, e, t, m, zs)
uIntf *b;
uInt n;
uInt s;
const uIntf *d;
const uIntf *e;
inflate_huft * *t;
uIntf *m;
z_stream *zs;





{

  uInt a;
  uInt c[15 +1];
  uInt f;
  int g;
  int h;
  uInt i;
  uInt j;
  int k;
  int l;
  uIntf *p;
  inflate_huft *q;
  struct inflate_huft_s r;
  inflate_huft *u[15];
  uInt v[288];
  int w;
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


        z = (z = g - w) > (uInt)l ? l : z;
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
 q->word.Nalloc = z + 1;



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
        r.word.what.Exop = (Byte)e[*p - s] + 16 + 64;
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


static int inflate_trees_bits(c, bb, tb, z)
uIntf *c;
uIntf *bb;
inflate_huft * *tb;
z_stream *z;
{
  int r;

  r = huft_build(c, 19, 19, (uIntf*)0, (uIntf*)0, tb, bb, z);
  if (r == (-3))
    z->msg = "oversubscribed dynamic bit lengths tree";
  else if (r == (-5))
  {
    inflate_trees_free(*tb, z);
    z->msg = "incomplete dynamic bit lengths tree";
    r = (-3);
  }
  return r;
}


static int inflate_trees_dynamic(nl, nd, c, bl, bd, tl, td, z)
uInt nl;
uInt nd;
uIntf *c;
uIntf *bl;
uIntf *bd;
inflate_huft * *tl;
inflate_huft * *td;
z_stream *z;
{
  int r;


  if ((r = huft_build(c, nl, 257, (*_GLOBAL_cplens_29_A[get_stack_id()]), (*_GLOBAL_cplext_30_A[get_stack_id()]), tl, bl, z)) != 0)
  {
    if (r == (-3))
      z->msg = "oversubscribed literal/length tree";
    else if (r == (-5))
    {
      inflate_trees_free(*tl, z);
      z->msg = "incomplete literal/length tree";
      r = (-3);
    }
    return r;
  }


  if ((r = huft_build(c + nl, nd, 0, (*_GLOBAL_cpdist_31_A[get_stack_id()]), (*_GLOBAL_cpdext_32_A[get_stack_id()]), td, bd, z)) != 0)
  {
    if (r == (-3))
      z->msg = "oversubscribed literal/length tree";
    else if (r == (-5)) {




      inflate_trees_free(*td, z);
      z->msg = "incomplete literal/length tree";
      r = (-3);
    }
    inflate_trees_free(*tl, z);
    return r;

  }


  return 0;
}



typedef  int  _GLOBAL_80_T; static  _GLOBAL_80_T  global_fixed_lock[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  int  _GLOBAL_81_T; static  _GLOBAL_81_T  global_fixed_built[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     

typedef  uInt  _GLOBAL_82_T; static  _GLOBAL_82_T  global_fixed_left[NUM_STACKS] = {  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  530,  };     
typedef  inflate_huft  _GLOBAL_83_T; static  _GLOBAL_83_T  _GLOBAL_0_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_1_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_2_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_3_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_4_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_5_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_6_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_7_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_8_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_9_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_10_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_11_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_12_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_13_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_14_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_15_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_16_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_17_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_18_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_19_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_20_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_21_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_22_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_23_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_24_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_25_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_26_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_27_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_28_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_29_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_30_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_31_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_32_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_33_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_34_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_35_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_36_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_37_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_38_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_39_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_40_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_41_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_42_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_43_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_44_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_45_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_46_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_47_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_48_fixed_mem_I [ 530 ] ; static  _GLOBAL_83_T  _GLOBAL_49_fixed_mem_I [ 530 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fixed_mem_I) *_GLOBAL_fixed_mem_33_A[NUM_STACKS] = { &_GLOBAL_0_fixed_mem_I, &_GLOBAL_1_fixed_mem_I, &_GLOBAL_2_fixed_mem_I, &_GLOBAL_3_fixed_mem_I, &_GLOBAL_4_fixed_mem_I, &_GLOBAL_5_fixed_mem_I, &_GLOBAL_6_fixed_mem_I, &_GLOBAL_7_fixed_mem_I, &_GLOBAL_8_fixed_mem_I, &_GLOBAL_9_fixed_mem_I, &_GLOBAL_10_fixed_mem_I, &_GLOBAL_11_fixed_mem_I, &_GLOBAL_12_fixed_mem_I, &_GLOBAL_13_fixed_mem_I, &_GLOBAL_14_fixed_mem_I, &_GLOBAL_15_fixed_mem_I, &_GLOBAL_16_fixed_mem_I, &_GLOBAL_17_fixed_mem_I, &_GLOBAL_18_fixed_mem_I, &_GLOBAL_19_fixed_mem_I, &_GLOBAL_20_fixed_mem_I, &_GLOBAL_21_fixed_mem_I, &_GLOBAL_22_fixed_mem_I, &_GLOBAL_23_fixed_mem_I, &_GLOBAL_24_fixed_mem_I, &_GLOBAL_25_fixed_mem_I, &_GLOBAL_26_fixed_mem_I, &_GLOBAL_27_fixed_mem_I, &_GLOBAL_28_fixed_mem_I, &_GLOBAL_29_fixed_mem_I, &_GLOBAL_30_fixed_mem_I, &_GLOBAL_31_fixed_mem_I, &_GLOBAL_32_fixed_mem_I, &_GLOBAL_33_fixed_mem_I, &_GLOBAL_34_fixed_mem_I, &_GLOBAL_35_fixed_mem_I, &_GLOBAL_36_fixed_mem_I, &_GLOBAL_37_fixed_mem_I, &_GLOBAL_38_fixed_mem_I, &_GLOBAL_39_fixed_mem_I, &_GLOBAL_40_fixed_mem_I, &_GLOBAL_41_fixed_mem_I, &_GLOBAL_42_fixed_mem_I, &_GLOBAL_43_fixed_mem_I, &_GLOBAL_44_fixed_mem_I, &_GLOBAL_45_fixed_mem_I, &_GLOBAL_46_fixed_mem_I, &_GLOBAL_47_fixed_mem_I, &_GLOBAL_48_fixed_mem_I, &_GLOBAL_49_fixed_mem_I, };  
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
  if (q) s++;
  global_fixed_left[get_stack_id()] -= n;
  return (voidpf)((*_GLOBAL_fixed_mem_33_A[get_stack_id()]) + global_fixed_left[get_stack_id()]);
}


static void ffree(q, p, n)
voidpf q;
voidpf p;
uInt n;
{
  ;
  if (q) q = p;
}


static int inflate_trees_fixed(bl, bd, tl, td)
uIntf *bl;
uIntf *bd;
inflate_huft * *tl;
inflate_huft * *td;
{

  while (++global_fixed_lock[get_stack_id()] > 1)
    global_fixed_lock[get_stack_id()]--;
  if (!global_fixed_built[get_stack_id()])
  {
    int k;
    unsigned c[288];
    z_stream z;


    z.zalloc = falloc;
    z.zfree = ffree;
    z.opaque = 0;


    for (k = 0; k < 144; k++)
      c[k] = 8;
    for (; k < 256; k++)
      c[k] = 9;
    for (; k < 280; k++)
      c[k] = 7;
    for (; k < 288; k++)
      c[k] = 8;
    global_fixed_bl[get_stack_id()] = 7;
    huft_build(c, 288, 257, (*_GLOBAL_cplens_29_A[get_stack_id()]), (*_GLOBAL_cplext_30_A[get_stack_id()]), &global_fixed_tl[get_stack_id()], &global_fixed_bl[get_stack_id()], &z);


    for (k = 0; k < 30; k++)
      c[k] = 5;
    global_fixed_bd[get_stack_id()] = 5;
    huft_build(c, 30, 0, (*_GLOBAL_cpdist_31_A[get_stack_id()]), (*_GLOBAL_cpdext_32_A[get_stack_id()]), &global_fixed_td[get_stack_id()], &global_fixed_bd[get_stack_id()], &z);


    global_fixed_built[get_stack_id()] = 1;
  }
  global_fixed_lock[get_stack_id()]--;
  *bl = global_fixed_bl[get_stack_id()];
  *bd = global_fixed_bd[get_stack_id()];
  *tl = global_fixed_tl[get_stack_id()];
  *td = global_fixed_td[get_stack_id()];
  return 0;
}


static int inflate_trees_free(t, z)
inflate_huft *t;
z_stream *z;



{
  inflate_huft *p, *q;


  p = t;
  while (p != 0)
  {
    q = (--p)->more.Next;
    (*((z)->zfree))((z)->opaque, (voidpf)(p), (p->word.Nalloc * sizeof(inflate_huft)));
    p = q;
  }
  return 0;
}
# 4101 "openbsd3/net/zlib.c"
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


static inflate_codes_statef *inflate_codes_new(bl, bd, tl, td, z)
uInt bl, bd;
inflate_huft *tl, *td;
z_stream *z;
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


static int inflate_codes(s, z, r)
inflate_blocks_statef *s;
z_stream *z;
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


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}


  while (1) switch (c->mode)
  {
    case START:

      if (m >= 258 && n >= 10)
      {
        {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
        r = inflate_fast(c->lbits, c->dbits, c->ltree, c->dtree, s, z);
        {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}
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
      t = c->sub.code.tree + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[j]);
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
      z->msg = "invalid literal/length code";
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case LENEXT:
      j = c->sub.copy.get;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      c->len += (uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[j];
      {b>>=(j);k-=(j);}
      c->sub.code.need = c->dbits;
      c->sub.code.tree = c->dtree;
      ;
      c->mode = DIST;
    case DIST:
      j = c->sub.code.need;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      t = c->sub.code.tree + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[j]);
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
      z->msg = "invalid distance code";
      r = (-3);
      {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}
    case DISTEXT:
      j = c->sub.copy.get;
      {while(k<(j)){{if(n)r=0;else {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}};b|=((uLong)(n--,*p++))<<k;k+=8;}}
      c->sub.copy.dist += (uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[j];
      {b>>=(j);k-=(j);}
      ;
      c->mode = COPY;
    case COPY:

      f = (uInt)(q - s->window) < c->sub.copy.dist ?
          s->end - (c->sub.copy.dist - (q - s->window)) :
          q - c->sub.copy.dist;





      while (c->len)
      {
        {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
        {*q++=(Byte)(*f++);m--;}
        if (f == s->end)
          f = s->window;
        c->len--;
      }
      c->mode = START;
      break;
    case LIT:
      {if(m==0){{if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0){{{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}} {if(q==s->end&&s->read!=s->window){q=s->window;m=(q<s->read?s->read-q-1:s->end-q);}} if(m==0) {{{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}} return inflate_flush(s,z,r);}}}r=0;}
      {*q++=(Byte)(c->sub.lit);m--;}
      c->mode = START;
      break;
    case WASH:
      {{s->write=q;} r=inflate_flush(s,z,r); {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}
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


static void inflate_codes_free(c, z)
inflate_codes_statef *c;
z_stream *z;
{
  (*((z)->zfree))((z)->opaque, (voidpf)(c), (sizeof(struct inflate_codes_state)));
  ;
}
# 4336 "openbsd3/net/zlib.c"
static int inflate_flush(s, z, r)
inflate_blocks_statef *s;
z_stream *z;
int r;
{
  uInt n;
  Bytef *p, *q;


  p = z->next_out;
  q = s->read;


  n = (uInt)((q <= s->write ? s->write : s->end) - q);
  if (n > z->avail_out) n = z->avail_out;
  if (n && r == (-5)) r = 0;


  z->avail_out -= n;
  z->total_out += n;


  if (s->checkfn != 0)
    s->check = (*s->checkfn)(s->check, q, n);


  if (p != 0L) {
    bcopy((q), (p), (n));
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
      s->check = (*s->checkfn)(s->check, q, n);


    if (p != 0L) {
      bcopy((q), (p), (n));
      p += n;
    }
    q += n;
  }


  z->next_out = p;
  s->read = q;


  return r;
}
# 4427 "openbsd3/net/zlib.c"
static int inflate_fast(bl, bd, tl, td, s, z)
uInt bl, bd;
inflate_huft *tl, *td;
inflate_blocks_statef *s;
z_stream *z;
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


  {{p=z->next_in;n=z->avail_in;b=s->bitb;k=s->bitk;} {q=s->write;m=(q<s->read?s->read-q-1:s->end-q);}}


  ml = (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[bl];
  md = (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[bd];


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
        c = t->more.Base + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[e]);
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
            d = t->more.Base + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[e]);
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
              e = d - (q - s->window);
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
            e = (t = t->more.Next + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[e]))->word.what.Exop;
          else
          {
            z->msg = "invalid distance code";
            {n+=(c=k>>3);p-=c;k&=7;}
            {{s->bitb=b;s->bitk=k;} {z->avail_in=n;z->total_in+=p-z->next_in;z->next_in=p;} {s->write=q;}}
            return (-3);
          }
        } while (1);
        break;
      }
      if ((e & 64) == 0)
      {
        if ((e = (t = t->more.Next + ((uInt)b & (*_GLOBAL_inflate_mask_27_A[get_stack_id()])[e]))->word.what.Exop) == 0)
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
        z->msg = "invalid literal/length code";
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
# 4575 "openbsd3/net/zlib.c"
typedef  char _GLOBAL_88_T;  _GLOBAL_88_T  * global_zlib_version[NUM_STACKS] = {  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  "0.95P",  };    


typedef  char _GLOBAL_89_T;  _GLOBAL_89_T  * _GLOBAL_0_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_1_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_2_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_3_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_4_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_5_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_6_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_7_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_8_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_9_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_10_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_11_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_12_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_13_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_14_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_15_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_16_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_17_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_18_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_19_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_20_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_21_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_22_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_23_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_24_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_25_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_26_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_27_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_28_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_29_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_30_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_31_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_32_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_33_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_34_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_35_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_36_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_37_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_38_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_39_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_40_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_41_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_42_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_43_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_44_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_45_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_46_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_47_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_48_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ;  _GLOBAL_89_T  * _GLOBAL_49_z_errmsg_I [ ]   = { "stream end" , ""  , "file error"  , "stream error"  , "data error"  , "insufficient memory"  , "buffer error"  , ""  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_z_errmsg_I) *_GLOBAL_z_errmsg_34_A[NUM_STACKS] = { &_GLOBAL_0_z_errmsg_I, &_GLOBAL_1_z_errmsg_I, &_GLOBAL_2_z_errmsg_I, &_GLOBAL_3_z_errmsg_I, &_GLOBAL_4_z_errmsg_I, &_GLOBAL_5_z_errmsg_I, &_GLOBAL_6_z_errmsg_I, &_GLOBAL_7_z_errmsg_I, &_GLOBAL_8_z_errmsg_I, &_GLOBAL_9_z_errmsg_I, &_GLOBAL_10_z_errmsg_I, &_GLOBAL_11_z_errmsg_I, &_GLOBAL_12_z_errmsg_I, &_GLOBAL_13_z_errmsg_I, &_GLOBAL_14_z_errmsg_I, &_GLOBAL_15_z_errmsg_I, &_GLOBAL_16_z_errmsg_I, &_GLOBAL_17_z_errmsg_I, &_GLOBAL_18_z_errmsg_I, &_GLOBAL_19_z_errmsg_I, &_GLOBAL_20_z_errmsg_I, &_GLOBAL_21_z_errmsg_I, &_GLOBAL_22_z_errmsg_I, &_GLOBAL_23_z_errmsg_I, &_GLOBAL_24_z_errmsg_I, &_GLOBAL_25_z_errmsg_I, &_GLOBAL_26_z_errmsg_I, &_GLOBAL_27_z_errmsg_I, &_GLOBAL_28_z_errmsg_I, &_GLOBAL_29_z_errmsg_I, &_GLOBAL_30_z_errmsg_I, &_GLOBAL_31_z_errmsg_I, &_GLOBAL_32_z_errmsg_I, &_GLOBAL_33_z_errmsg_I, &_GLOBAL_34_z_errmsg_I, &_GLOBAL_35_z_errmsg_I, &_GLOBAL_36_z_errmsg_I, &_GLOBAL_37_z_errmsg_I, &_GLOBAL_38_z_errmsg_I, &_GLOBAL_39_z_errmsg_I, &_GLOBAL_40_z_errmsg_I, &_GLOBAL_41_z_errmsg_I, &_GLOBAL_42_z_errmsg_I, &_GLOBAL_43_z_errmsg_I, &_GLOBAL_44_z_errmsg_I, &_GLOBAL_45_z_errmsg_I, &_GLOBAL_46_z_errmsg_I, &_GLOBAL_47_z_errmsg_I, &_GLOBAL_48_z_errmsg_I, &_GLOBAL_49_z_errmsg_I, };   








# 4608 "openbsd3/net/zlib.c"
uLong adler32(adler, buf, len)
    uLong adler;
    Bytef *buf;
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
            {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};;; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};;;; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};;; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};; {s1 += *buf++; s2 += s1;}; {s1 += *buf++; s2 += s1;};;;;;
            k -= 16;
        }
        if (k != 0) do {
            {s1 += *buf++; s2 += s1;};
        } while (--k);
        s1 %= 65521L;
        s2 %= 65521L;
    }
    return (s2 << 16) | s1;
}

