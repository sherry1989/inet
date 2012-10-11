# 1 "openbsd3/crypto/rmd160.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/crypto/rmd160.c"
# 30 "openbsd3/crypto/rmd160.c"
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


#include "num_stacks.h"
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


typedef  struct loadavg   _GLOBAL_0_T; extern  _GLOBAL_0_T  global_averunnable[NUM_STACKS];    
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
typedef  int  _GLOBAL_1_T; volatile  _GLOBAL_1_T  global_cpl[NUM_STACKS];   
typedef  int  _GLOBAL_2_T; volatile  _GLOBAL_2_T  global_ipending[NUM_STACKS];   
typedef  int  _GLOBAL_3_T; volatile  _GLOBAL_3_T  global_astpending[NUM_STACKS];   
typedef  int _GLOBAL_4_T;  _GLOBAL_4_T  _GLOBAL_0_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_1_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_2_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_3_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_4_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_5_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_6_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_7_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_8_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_9_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_10_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_11_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_12_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_13_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_14_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_15_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_16_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_17_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_18_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_19_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_20_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_21_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_22_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_23_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_24_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_25_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_26_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_27_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_28_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_29_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_30_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_31_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_32_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_33_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_34_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_35_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_36_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_37_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_38_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_39_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_40_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_41_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_42_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_43_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_44_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_45_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_46_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_47_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_48_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_49_imask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_imask_I) *_GLOBAL_imask_0_A[NUM_STACKS] = { &_GLOBAL_0_imask_I, &_GLOBAL_1_imask_I, &_GLOBAL_2_imask_I, &_GLOBAL_3_imask_I, &_GLOBAL_4_imask_I, &_GLOBAL_5_imask_I, &_GLOBAL_6_imask_I, &_GLOBAL_7_imask_I, &_GLOBAL_8_imask_I, &_GLOBAL_9_imask_I, &_GLOBAL_10_imask_I, &_GLOBAL_11_imask_I, &_GLOBAL_12_imask_I, &_GLOBAL_13_imask_I, &_GLOBAL_14_imask_I, &_GLOBAL_15_imask_I, &_GLOBAL_16_imask_I, &_GLOBAL_17_imask_I, &_GLOBAL_18_imask_I, &_GLOBAL_19_imask_I, &_GLOBAL_20_imask_I, &_GLOBAL_21_imask_I, &_GLOBAL_22_imask_I, &_GLOBAL_23_imask_I, &_GLOBAL_24_imask_I, &_GLOBAL_25_imask_I, &_GLOBAL_26_imask_I, &_GLOBAL_27_imask_I, &_GLOBAL_28_imask_I, &_GLOBAL_29_imask_I, &_GLOBAL_30_imask_I, &_GLOBAL_31_imask_I, &_GLOBAL_32_imask_I, &_GLOBAL_33_imask_I, &_GLOBAL_34_imask_I, &_GLOBAL_35_imask_I, &_GLOBAL_36_imask_I, &_GLOBAL_37_imask_I, &_GLOBAL_38_imask_I, &_GLOBAL_39_imask_I, &_GLOBAL_40_imask_I, &_GLOBAL_41_imask_I, &_GLOBAL_42_imask_I, &_GLOBAL_43_imask_I, &_GLOBAL_44_imask_I, &_GLOBAL_45_imask_I, &_GLOBAL_46_imask_I, &_GLOBAL_47_imask_I, &_GLOBAL_48_imask_I, &_GLOBAL_49_imask_I, }; 
typedef  int _GLOBAL_5_T;  _GLOBAL_5_T  _GLOBAL_0_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_1_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_2_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_3_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_4_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_5_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_6_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_7_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_8_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_9_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_10_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_11_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_12_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_13_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_14_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_15_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_16_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_17_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_18_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_19_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_20_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_21_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_22_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_23_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_24_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_25_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_26_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_27_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_28_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_29_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_30_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_31_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_32_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_33_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_34_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_35_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_36_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_37_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_38_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_39_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_40_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_41_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_42_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_43_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_44_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_45_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_46_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_47_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_48_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_49_iunmask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iunmask_I) *_GLOBAL_iunmask_1_A[NUM_STACKS] = { &_GLOBAL_0_iunmask_I, &_GLOBAL_1_iunmask_I, &_GLOBAL_2_iunmask_I, &_GLOBAL_3_iunmask_I, &_GLOBAL_4_iunmask_I, &_GLOBAL_5_iunmask_I, &_GLOBAL_6_iunmask_I, &_GLOBAL_7_iunmask_I, &_GLOBAL_8_iunmask_I, &_GLOBAL_9_iunmask_I, &_GLOBAL_10_iunmask_I, &_GLOBAL_11_iunmask_I, &_GLOBAL_12_iunmask_I, &_GLOBAL_13_iunmask_I, &_GLOBAL_14_iunmask_I, &_GLOBAL_15_iunmask_I, &_GLOBAL_16_iunmask_I, &_GLOBAL_17_iunmask_I, &_GLOBAL_18_iunmask_I, &_GLOBAL_19_iunmask_I, &_GLOBAL_20_iunmask_I, &_GLOBAL_21_iunmask_I, &_GLOBAL_22_iunmask_I, &_GLOBAL_23_iunmask_I, &_GLOBAL_24_iunmask_I, &_GLOBAL_25_iunmask_I, &_GLOBAL_26_iunmask_I, &_GLOBAL_27_iunmask_I, &_GLOBAL_28_iunmask_I, &_GLOBAL_29_iunmask_I, &_GLOBAL_30_iunmask_I, &_GLOBAL_31_iunmask_I, &_GLOBAL_32_iunmask_I, &_GLOBAL_33_iunmask_I, &_GLOBAL_34_iunmask_I, &_GLOBAL_35_iunmask_I, &_GLOBAL_36_iunmask_I, &_GLOBAL_37_iunmask_I, &_GLOBAL_38_iunmask_I, &_GLOBAL_39_iunmask_I, &_GLOBAL_40_iunmask_I, &_GLOBAL_41_iunmask_I, &_GLOBAL_42_iunmask_I, &_GLOBAL_43_iunmask_I, &_GLOBAL_44_iunmask_I, &_GLOBAL_45_iunmask_I, &_GLOBAL_46_iunmask_I, &_GLOBAL_47_iunmask_I, &_GLOBAL_48_iunmask_I, &_GLOBAL_49_iunmask_I, }; 




extern void Xspllower(void);

static __inline int splraise(int);
static __inline int spllower(int);

static __inline void softintr(int);







void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_6_T; extern  _GLOBAL_6_T  global_splassert_ctl[NUM_STACKS];   
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






typedef  union descriptor   _GLOBAL_7_T; extern  _GLOBAL_7_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_2_A[NUM_STACKS];extern  _GLOBAL_7_T  _GLOBAL_0_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_ldt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];    
typedef  struct gate_descriptor   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_idt_region_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_idt_region_I) *_GLOBAL_idt_region_4_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_9_T; extern  _GLOBAL_9_T  * global_idt[NUM_STACKS];    

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void setregion(struct region_descriptor *, void *, size_t);
void setsegment(struct segment_descriptor *, void *, size_t, int, int,
    int, int);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 71 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int _GLOBAL_10_T;  _GLOBAL_10_T  global_want_resched[NUM_STACKS];  
# 91 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
void delay(int);





void calibrate_cyclecounter(void);

typedef  u_quad_t  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_pentium_base_tsc[NUM_STACKS];   
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


typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_cpu[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_cpu_class[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_cpu_feature[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_ecxfeature[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_apmwarn[NUM_STACKS];   
typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_apmhalt[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpuid_level[NUM_STACKS];   
typedef  const struct cpu_nocpuid_nameclass    _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_1_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_2_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_3_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_4_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_5_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_6_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_7_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_8_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_9_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_10_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_11_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_12_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_13_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_14_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_15_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_16_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_17_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_18_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_19_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_20_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_21_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_22_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_23_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_24_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_25_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_26_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_27_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_28_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_29_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_30_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_31_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_32_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_33_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_34_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_35_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_36_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_37_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_38_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_39_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_40_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_41_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_42_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_43_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_44_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_45_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_46_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_47_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_48_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_49_i386_nocpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_nocpuid_cpus_I) *_GLOBAL_i386_nocpuid_cpus_5_A[NUM_STACKS];    
typedef  const struct cpu_cpuid_nameclass    _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_1_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_2_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_3_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_4_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_5_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_6_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_7_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_8_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_9_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_10_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_11_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_12_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_13_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_14_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_15_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_16_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_17_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_18_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_19_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_20_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_21_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_22_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_23_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_24_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_25_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_26_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_27_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_28_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_29_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_30_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_31_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_32_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_33_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_34_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_35_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_36_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_37_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_38_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_39_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_40_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_41_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_42_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_43_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_44_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_45_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_46_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_47_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_48_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_49_i386_cpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_cpuid_cpus_I) *_GLOBAL_i386_cpuid_cpus_6_A[NUM_STACKS];    


typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_pentium_mhz[NUM_STACKS];   




typedef  int  _GLOBAL_22_T; extern  _GLOBAL_22_T  global_cpu_f00f_bug[NUM_STACKS];   
void fix_f00f(void);



void dkcsumattach(void);

typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_i386_use_fxsave[NUM_STACKS];   
typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_i386_has_sse[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_i386_has_sse2[NUM_STACKS];   


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
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_user_ldt_enable[NUM_STACKS];   
int i386_get_ldt(struct proc *, void *, register_t *);
int i386_set_ldt(struct proc *, void *, register_t *);



void isa_defaultirq(void);
int isa_nmi(void);


void pmap_bootstrap(vaddr_t);


int kvtop(caddr_t);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 2
# 96 "openbsd3/sys/param.h" 2
# 31 "openbsd3/crypto/rmd160.c" 2
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
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_7_A[NUM_STACKS];   
typedef  const char   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_8_A[NUM_STACKS];   
typedef  const char   _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_9_A[NUM_STACKS];   
typedef  const char   _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_10_A[NUM_STACKS];   
typedef  const char   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_11_A[NUM_STACKS];   
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_44_T; extern  _GLOBAL_44_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_46_T; extern  _GLOBAL_46_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_12_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_50_T  )  ( int  ) ; extern  _GLOBAL_50_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_52_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_54_T  )  ( void  ) ; extern  _GLOBAL_54_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_56_T  )  ( void  ) ; extern  _GLOBAL_56_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_13_A[NUM_STACKS];extern  _GLOBAL_57_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_14_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 32 "openbsd3/crypto/rmd160.c" 2

# 1 "openbsd3/crypto/rmd160.h" 1
# 29 "openbsd3/crypto/rmd160.h"
typedef struct RMD160Context {
 u_int32_t state[5];
 u_int64_t count;
 u_char buffer[64];
} RMD160_CTX;

void RMD160Init(RMD160_CTX *);
void RMD160Transform(u_int32_t [5], const u_char [64]);
void RMD160Update(RMD160_CTX *, const u_char *, u_int32_t);
void RMD160Final(u_char [20], RMD160_CTX *);
# 34 "openbsd3/crypto/rmd160.c" 2
# 86 "openbsd3/crypto/rmd160.c"
typedef  u_char  _GLOBAL_58_T; static  _GLOBAL_58_T  _GLOBAL_0_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_1_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_2_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_3_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_4_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_5_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_6_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_7_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_8_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_9_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_10_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_11_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_12_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_13_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_14_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_15_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_16_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_17_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_18_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_19_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_20_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_21_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_22_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_23_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_24_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_25_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_26_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_27_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_28_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_29_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_30_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_31_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_32_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_33_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_34_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_35_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_36_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_37_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_38_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_39_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_40_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_41_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_42_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_43_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_44_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_45_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_46_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_47_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_48_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static  _GLOBAL_58_T  _GLOBAL_49_PADDING_I [ 64 ]  = { 0x80 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_PADDING_I) *_GLOBAL_PADDING_15_A[NUM_STACKS] = { &_GLOBAL_0_PADDING_I, &_GLOBAL_1_PADDING_I, &_GLOBAL_2_PADDING_I, &_GLOBAL_3_PADDING_I, &_GLOBAL_4_PADDING_I, &_GLOBAL_5_PADDING_I, &_GLOBAL_6_PADDING_I, &_GLOBAL_7_PADDING_I, &_GLOBAL_8_PADDING_I, &_GLOBAL_9_PADDING_I, &_GLOBAL_10_PADDING_I, &_GLOBAL_11_PADDING_I, &_GLOBAL_12_PADDING_I, &_GLOBAL_13_PADDING_I, &_GLOBAL_14_PADDING_I, &_GLOBAL_15_PADDING_I, &_GLOBAL_16_PADDING_I, &_GLOBAL_17_PADDING_I, &_GLOBAL_18_PADDING_I, &_GLOBAL_19_PADDING_I, &_GLOBAL_20_PADDING_I, &_GLOBAL_21_PADDING_I, &_GLOBAL_22_PADDING_I, &_GLOBAL_23_PADDING_I, &_GLOBAL_24_PADDING_I, &_GLOBAL_25_PADDING_I, &_GLOBAL_26_PADDING_I, &_GLOBAL_27_PADDING_I, &_GLOBAL_28_PADDING_I, &_GLOBAL_29_PADDING_I, &_GLOBAL_30_PADDING_I, &_GLOBAL_31_PADDING_I, &_GLOBAL_32_PADDING_I, &_GLOBAL_33_PADDING_I, &_GLOBAL_34_PADDING_I, &_GLOBAL_35_PADDING_I, &_GLOBAL_36_PADDING_I, &_GLOBAL_37_PADDING_I, &_GLOBAL_38_PADDING_I, &_GLOBAL_39_PADDING_I, &_GLOBAL_40_PADDING_I, &_GLOBAL_41_PADDING_I, &_GLOBAL_42_PADDING_I, &_GLOBAL_43_PADDING_I, &_GLOBAL_44_PADDING_I, &_GLOBAL_45_PADDING_I, &_GLOBAL_46_PADDING_I, &_GLOBAL_47_PADDING_I, &_GLOBAL_48_PADDING_I, &_GLOBAL_49_PADDING_I, };    
                      
                       
                   


void
RMD160Init(RMD160_CTX *ctx)
{
 ctx->count = 0;
 ctx->state[0] = 0x67452301U;
 ctx->state[1] = 0xEFCDAB89U;
 ctx->state[2] = 0x98BADCFEU;
 ctx->state[3] = 0x10325476U;
 ctx->state[4] = 0xC3D2E1F0U;
}

void
RMD160Update(RMD160_CTX *ctx, const u_char *input, u_int32_t len)
{
 u_int32_t have, off, need;

 have = (ctx->count/8) % 64;
 need = 64 - have;
 ctx->count += 8 * len;
 off = 0;

 if (len >= need) {
  if (have) {
   memcpy(ctx->buffer + have, input, need);
   RMD160Transform(ctx->state, ctx->buffer);
   off = need;
   have = 0;
  }

  while (off + 64 <= len) {
   RMD160Transform(ctx->state, input+off);
   off += 64;
  }
 }
 if (off < len)
  memcpy(ctx->buffer + have, input+off, len-off);
}

void
RMD160Final(u_char digest[20], RMD160_CTX *ctx)
{
 int i;
 u_char size[8];
 u_int32_t padlen;

 do { (size)[7] = (ctx->count) >> 56; (size)[6] = (ctx->count) >> 48; (size)[5] = (ctx->count) >> 40; (size)[4] = (ctx->count) >> 32; (size)[3] = (ctx->count) >> 24; (size)[2] = (ctx->count) >> 16; (size)[1] = (ctx->count) >> 8; (size)[0] = (ctx->count); } while (0);





 padlen = 64 - ((ctx->count/8) % 64);
 if (padlen < 1 + 8)
  padlen += 64;
 RMD160Update(ctx, (*_GLOBAL_PADDING_15_A[get_stack_id()]), padlen - 8);
 RMD160Update(ctx, size, 8);

 if (digest != 0L)
  for (i = 0; i < 5; i++)
   do { (digest + i*4)[3] = (ctx->state[i]) >> 24; (digest + i*4)[2] = (ctx->state[i]) >> 16; (digest + i*4)[1] = (ctx->state[i]) >> 8; (digest + i*4)[0] = (ctx->state[i]); } while (0);

 memset(ctx, 0, sizeof (*ctx));
}

void
RMD160Transform(u_int32_t state[5], const u_char block[64])
{
 u_int32_t a, b, c, d, e, aa, bb, cc, dd, ee, t, x[16];


 memcpy(x, block, 64);
# 174 "openbsd3/crypto/rmd160.c"
 a = state[0];
 b = state[1];
 c = state[2];
 d = state[3];
 e = state[4];


 do { a = (((a + ((b) ^ (c) ^ (d)) + x[0] + 0x00000000U) << (11)) | ((a + ((b) ^ (c) ^ (d)) + x[0] + 0x00000000U) >> (32-(11)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[1] + 0x00000000U) << (14)) | ((e + ((a) ^ (b) ^ (c)) + x[1] + 0x00000000U) >> (32-(14)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[2] + 0x00000000U) << (15)) | ((d + ((e) ^ (a) ^ (b)) + x[2] + 0x00000000U) >> (32-(15)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[3] + 0x00000000U) << (12)) | ((c + ((d) ^ (e) ^ (a)) + x[3] + 0x00000000U) >> (32-(12)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[4] + 0x00000000U) << (5)) | ((b + ((c) ^ (d) ^ (e)) + x[4] + 0x00000000U) >> (32-(5)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[5] + 0x00000000U) << (8)) | ((a + ((b) ^ (c) ^ (d)) + x[5] + 0x00000000U) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[6] + 0x00000000U) << (7)) | ((e + ((a) ^ (b) ^ (c)) + x[6] + 0x00000000U) >> (32-(7)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[7] + 0x00000000U) << (9)) | ((d + ((e) ^ (a) ^ (b)) + x[7] + 0x00000000U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[8] + 0x00000000U) << (11)) | ((c + ((d) ^ (e) ^ (a)) + x[8] + 0x00000000U) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[9] + 0x00000000U) << (13)) | ((b + ((c) ^ (d) ^ (e)) + x[9] + 0x00000000U) >> (32-(13)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[10] + 0x00000000U) << (14)) | ((a + ((b) ^ (c) ^ (d)) + x[10] + 0x00000000U) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[11] + 0x00000000U) << (15)) | ((e + ((a) ^ (b) ^ (c)) + x[11] + 0x00000000U) >> (32-(15)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[12] + 0x00000000U) << (6)) | ((d + ((e) ^ (a) ^ (b)) + x[12] + 0x00000000U) >> (32-(6)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[13] + 0x00000000U) << (7)) | ((c + ((d) ^ (e) ^ (a)) + x[13] + 0x00000000U) >> (32-(7)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[14] + 0x00000000U) << (9)) | ((b + ((c) ^ (d) ^ (e)) + x[14] + 0x00000000U) >> (32-(9)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[15] + 0x00000000U) << (8)) | ((a + ((b) ^ (c) ^ (d)) + x[15] + 0x00000000U) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);

 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[7] + 0x5A827999U) << (7)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[7] + 0x5A827999U) >> (32-(7)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[4] + 0x5A827999U) << (6)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[4] + 0x5A827999U) >> (32-(6)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[13] + 0x5A827999U) << (8)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[13] + 0x5A827999U) >> (32-(8)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[1] + 0x5A827999U) << (13)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[1] + 0x5A827999U) >> (32-(13)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[10] + 0x5A827999U) << (11)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[10] + 0x5A827999U) >> (32-(11)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[6] + 0x5A827999U) << (9)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[6] + 0x5A827999U) >> (32-(9)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[15] + 0x5A827999U) << (7)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[15] + 0x5A827999U) >> (32-(7)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[3] + 0x5A827999U) << (15)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[3] + 0x5A827999U) >> (32-(15)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[12] + 0x5A827999U) << (7)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[12] + 0x5A827999U) >> (32-(7)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[0] + 0x5A827999U) << (12)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[0] + 0x5A827999U) >> (32-(12)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[9] + 0x5A827999U) << (15)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[9] + 0x5A827999U) >> (32-(15)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[5] + 0x5A827999U) << (9)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[5] + 0x5A827999U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[2] + 0x5A827999U) << (11)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[2] + 0x5A827999U) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[14] + 0x5A827999U) << (7)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[14] + 0x5A827999U) >> (32-(7)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[11] + 0x5A827999U) << (13)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[11] + 0x5A827999U) >> (32-(13)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[8] + 0x5A827999U) << (12)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[8] + 0x5A827999U) >> (32-(12)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);

 do { d = (((d + (((e) | (~a)) ^ (b)) + x[3] + 0x6ED9EBA1U) << (11)) | ((d + (((e) | (~a)) ^ (b)) + x[3] + 0x6ED9EBA1U) >> (32-(11)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[10] + 0x6ED9EBA1U) << (13)) | ((c + (((d) | (~e)) ^ (a)) + x[10] + 0x6ED9EBA1U) >> (32-(13)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[14] + 0x6ED9EBA1U) << (6)) | ((b + (((c) | (~d)) ^ (e)) + x[14] + 0x6ED9EBA1U) >> (32-(6)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[4] + 0x6ED9EBA1U) << (7)) | ((a + (((b) | (~c)) ^ (d)) + x[4] + 0x6ED9EBA1U) >> (32-(7)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[9] + 0x6ED9EBA1U) << (14)) | ((e + (((a) | (~b)) ^ (c)) + x[9] + 0x6ED9EBA1U) >> (32-(14)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[15] + 0x6ED9EBA1U) << (9)) | ((d + (((e) | (~a)) ^ (b)) + x[15] + 0x6ED9EBA1U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[8] + 0x6ED9EBA1U) << (13)) | ((c + (((d) | (~e)) ^ (a)) + x[8] + 0x6ED9EBA1U) >> (32-(13)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[1] + 0x6ED9EBA1U) << (15)) | ((b + (((c) | (~d)) ^ (e)) + x[1] + 0x6ED9EBA1U) >> (32-(15)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[2] + 0x6ED9EBA1U) << (14)) | ((a + (((b) | (~c)) ^ (d)) + x[2] + 0x6ED9EBA1U) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[7] + 0x6ED9EBA1U) << (8)) | ((e + (((a) | (~b)) ^ (c)) + x[7] + 0x6ED9EBA1U) >> (32-(8)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[0] + 0x6ED9EBA1U) << (13)) | ((d + (((e) | (~a)) ^ (b)) + x[0] + 0x6ED9EBA1U) >> (32-(13)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[6] + 0x6ED9EBA1U) << (6)) | ((c + (((d) | (~e)) ^ (a)) + x[6] + 0x6ED9EBA1U) >> (32-(6)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[13] + 0x6ED9EBA1U) << (5)) | ((b + (((c) | (~d)) ^ (e)) + x[13] + 0x6ED9EBA1U) >> (32-(5)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[11] + 0x6ED9EBA1U) << (12)) | ((a + (((b) | (~c)) ^ (d)) + x[11] + 0x6ED9EBA1U) >> (32-(12)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[5] + 0x6ED9EBA1U) << (7)) | ((e + (((a) | (~b)) ^ (c)) + x[5] + 0x6ED9EBA1U) >> (32-(7)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[12] + 0x6ED9EBA1U) << (5)) | ((d + (((e) | (~a)) ^ (b)) + x[12] + 0x6ED9EBA1U) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);

 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[1] + 0x8F1BBCDCU) << (11)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[1] + 0x8F1BBCDCU) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[9] + 0x8F1BBCDCU) << (12)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[9] + 0x8F1BBCDCU) >> (32-(12)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[11] + 0x8F1BBCDCU) << (14)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[11] + 0x8F1BBCDCU) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[10] + 0x8F1BBCDCU) << (15)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[10] + 0x8F1BBCDCU) >> (32-(15)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[0] + 0x8F1BBCDCU) << (14)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[0] + 0x8F1BBCDCU) >> (32-(14)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[8] + 0x8F1BBCDCU) << (15)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[8] + 0x8F1BBCDCU) >> (32-(15)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[12] + 0x8F1BBCDCU) << (9)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[12] + 0x8F1BBCDCU) >> (32-(9)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[4] + 0x8F1BBCDCU) << (8)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[4] + 0x8F1BBCDCU) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[13] + 0x8F1BBCDCU) << (9)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[13] + 0x8F1BBCDCU) >> (32-(9)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[3] + 0x8F1BBCDCU) << (14)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[3] + 0x8F1BBCDCU) >> (32-(14)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[7] + 0x8F1BBCDCU) << (5)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[7] + 0x8F1BBCDCU) >> (32-(5)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[15] + 0x8F1BBCDCU) << (6)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[15] + 0x8F1BBCDCU) >> (32-(6)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[14] + 0x8F1BBCDCU) << (8)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[14] + 0x8F1BBCDCU) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[5] + 0x8F1BBCDCU) << (6)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[5] + 0x8F1BBCDCU) >> (32-(6)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[6] + 0x8F1BBCDCU) << (5)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[6] + 0x8F1BBCDCU) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[2] + 0x8F1BBCDCU) << (12)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[2] + 0x8F1BBCDCU) >> (32-(12)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);

 do { b = (((b + ((c) ^ ((d) | (~e))) + x[4] + 0xA953FD4EU) << (9)) | ((b + ((c) ^ ((d) | (~e))) + x[4] + 0xA953FD4EU) >> (32-(9)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[0] + 0xA953FD4EU) << (15)) | ((a + ((b) ^ ((c) | (~d))) + x[0] + 0xA953FD4EU) >> (32-(15)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[5] + 0xA953FD4EU) << (5)) | ((e + ((a) ^ ((b) | (~c))) + x[5] + 0xA953FD4EU) >> (32-(5)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[9] + 0xA953FD4EU) << (11)) | ((d + ((e) ^ ((a) | (~b))) + x[9] + 0xA953FD4EU) >> (32-(11)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[7] + 0xA953FD4EU) << (6)) | ((c + ((d) ^ ((e) | (~a))) + x[7] + 0xA953FD4EU) >> (32-(6)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[12] + 0xA953FD4EU) << (8)) | ((b + ((c) ^ ((d) | (~e))) + x[12] + 0xA953FD4EU) >> (32-(8)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[2] + 0xA953FD4EU) << (13)) | ((a + ((b) ^ ((c) | (~d))) + x[2] + 0xA953FD4EU) >> (32-(13)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[10] + 0xA953FD4EU) << (12)) | ((e + ((a) ^ ((b) | (~c))) + x[10] + 0xA953FD4EU) >> (32-(12)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[14] + 0xA953FD4EU) << (5)) | ((d + ((e) ^ ((a) | (~b))) + x[14] + 0xA953FD4EU) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[1] + 0xA953FD4EU) << (12)) | ((c + ((d) ^ ((e) | (~a))) + x[1] + 0xA953FD4EU) >> (32-(12)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[3] + 0xA953FD4EU) << (13)) | ((b + ((c) ^ ((d) | (~e))) + x[3] + 0xA953FD4EU) >> (32-(13)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[8] + 0xA953FD4EU) << (14)) | ((a + ((b) ^ ((c) | (~d))) + x[8] + 0xA953FD4EU) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[11] + 0xA953FD4EU) << (11)) | ((e + ((a) ^ ((b) | (~c))) + x[11] + 0xA953FD4EU) >> (32-(11)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[6] + 0xA953FD4EU) << (8)) | ((d + ((e) ^ ((a) | (~b))) + x[6] + 0xA953FD4EU) >> (32-(8)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[15] + 0xA953FD4EU) << (5)) | ((c + ((d) ^ ((e) | (~a))) + x[15] + 0xA953FD4EU) >> (32-(5)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[13] + 0xA953FD4EU) << (6)) | ((b + ((c) ^ ((d) | (~e))) + x[13] + 0xA953FD4EU) >> (32-(6)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);

 aa = a ; bb = b; cc = c; dd = d; ee = e;

 a = state[0];
 b = state[1];
 c = state[2];
 d = state[3];
 e = state[4];


 do { a = (((a + ((b) ^ ((c) | (~d))) + x[5] + 0x50A28BE6U) << (8)) | ((a + ((b) ^ ((c) | (~d))) + x[5] + 0x50A28BE6U) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[14] + 0x50A28BE6U) << (9)) | ((e + ((a) ^ ((b) | (~c))) + x[14] + 0x50A28BE6U) >> (32-(9)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[7] + 0x50A28BE6U) << (9)) | ((d + ((e) ^ ((a) | (~b))) + x[7] + 0x50A28BE6U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[0] + 0x50A28BE6U) << (11)) | ((c + ((d) ^ ((e) | (~a))) + x[0] + 0x50A28BE6U) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[9] + 0x50A28BE6U) << (13)) | ((b + ((c) ^ ((d) | (~e))) + x[9] + 0x50A28BE6U) >> (32-(13)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[2] + 0x50A28BE6U) << (15)) | ((a + ((b) ^ ((c) | (~d))) + x[2] + 0x50A28BE6U) >> (32-(15)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[11] + 0x50A28BE6U) << (15)) | ((e + ((a) ^ ((b) | (~c))) + x[11] + 0x50A28BE6U) >> (32-(15)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[4] + 0x50A28BE6U) << (5)) | ((d + ((e) ^ ((a) | (~b))) + x[4] + 0x50A28BE6U) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[13] + 0x50A28BE6U) << (7)) | ((c + ((d) ^ ((e) | (~a))) + x[13] + 0x50A28BE6U) >> (32-(7)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[6] + 0x50A28BE6U) << (7)) | ((b + ((c) ^ ((d) | (~e))) + x[6] + 0x50A28BE6U) >> (32-(7)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[15] + 0x50A28BE6U) << (8)) | ((a + ((b) ^ ((c) | (~d))) + x[15] + 0x50A28BE6U) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ ((b) | (~c))) + x[8] + 0x50A28BE6U) << (11)) | ((e + ((a) ^ ((b) | (~c))) + x[8] + 0x50A28BE6U) >> (32-(11)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ ((a) | (~b))) + x[1] + 0x50A28BE6U) << (14)) | ((d + ((e) ^ ((a) | (~b))) + x[1] + 0x50A28BE6U) >> (32-(14)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ ((e) | (~a))) + x[10] + 0x50A28BE6U) << (14)) | ((c + ((d) ^ ((e) | (~a))) + x[10] + 0x50A28BE6U) >> (32-(14)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ ((d) | (~e))) + x[3] + 0x50A28BE6U) << (12)) | ((b + ((c) ^ ((d) | (~e))) + x[3] + 0x50A28BE6U) >> (32-(12)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ ((c) | (~d))) + x[12] + 0x50A28BE6U) << (6)) | ((a + ((b) ^ ((c) | (~d))) + x[12] + 0x50A28BE6U) >> (32-(6)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);

 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[6] + 0x5C4DD124U) << (9)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[6] + 0x5C4DD124U) >> (32-(9)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[11] + 0x5C4DD124U) << (13)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[11] + 0x5C4DD124U) >> (32-(13)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[3] + 0x5C4DD124U) << (15)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[3] + 0x5C4DD124U) >> (32-(15)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[7] + 0x5C4DD124U) << (7)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[7] + 0x5C4DD124U) >> (32-(7)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[0] + 0x5C4DD124U) << (12)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[0] + 0x5C4DD124U) >> (32-(12)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[13] + 0x5C4DD124U) << (8)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[13] + 0x5C4DD124U) >> (32-(8)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[5] + 0x5C4DD124U) << (9)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[5] + 0x5C4DD124U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[10] + 0x5C4DD124U) << (11)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[10] + 0x5C4DD124U) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[14] + 0x5C4DD124U) << (7)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[14] + 0x5C4DD124U) >> (32-(7)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[15] + 0x5C4DD124U) << (7)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[15] + 0x5C4DD124U) >> (32-(7)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[8] + 0x5C4DD124U) << (12)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[8] + 0x5C4DD124U) >> (32-(12)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (b)) | ((a) & (~b))) + x[12] + 0x5C4DD124U) << (7)) | ((d + (((e) & (b)) | ((a) & (~b))) + x[12] + 0x5C4DD124U) >> (32-(7)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (a)) | ((e) & (~a))) + x[4] + 0x5C4DD124U) << (6)) | ((c + (((d) & (a)) | ((e) & (~a))) + x[4] + 0x5C4DD124U) >> (32-(6)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (e)) | ((d) & (~e))) + x[9] + 0x5C4DD124U) << (15)) | ((b + (((c) & (e)) | ((d) & (~e))) + x[9] + 0x5C4DD124U) >> (32-(15)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (d)) | ((c) & (~d))) + x[1] + 0x5C4DD124U) << (13)) | ((a + (((b) & (d)) | ((c) & (~d))) + x[1] + 0x5C4DD124U) >> (32-(13)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (c)) | ((b) & (~c))) + x[2] + 0x5C4DD124U) << (11)) | ((e + (((a) & (c)) | ((b) & (~c))) + x[2] + 0x5C4DD124U) >> (32-(11)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);

 do { d = (((d + (((e) | (~a)) ^ (b)) + x[15] + 0x6D703EF3U) << (9)) | ((d + (((e) | (~a)) ^ (b)) + x[15] + 0x6D703EF3U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[5] + 0x6D703EF3U) << (7)) | ((c + (((d) | (~e)) ^ (a)) + x[5] + 0x6D703EF3U) >> (32-(7)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[1] + 0x6D703EF3U) << (15)) | ((b + (((c) | (~d)) ^ (e)) + x[1] + 0x6D703EF3U) >> (32-(15)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[3] + 0x6D703EF3U) << (11)) | ((a + (((b) | (~c)) ^ (d)) + x[3] + 0x6D703EF3U) >> (32-(11)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[7] + 0x6D703EF3U) << (8)) | ((e + (((a) | (~b)) ^ (c)) + x[7] + 0x6D703EF3U) >> (32-(8)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[14] + 0x6D703EF3U) << (6)) | ((d + (((e) | (~a)) ^ (b)) + x[14] + 0x6D703EF3U) >> (32-(6)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[6] + 0x6D703EF3U) << (6)) | ((c + (((d) | (~e)) ^ (a)) + x[6] + 0x6D703EF3U) >> (32-(6)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[9] + 0x6D703EF3U) << (14)) | ((b + (((c) | (~d)) ^ (e)) + x[9] + 0x6D703EF3U) >> (32-(14)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[11] + 0x6D703EF3U) << (12)) | ((a + (((b) | (~c)) ^ (d)) + x[11] + 0x6D703EF3U) >> (32-(12)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[8] + 0x6D703EF3U) << (13)) | ((e + (((a) | (~b)) ^ (c)) + x[8] + 0x6D703EF3U) >> (32-(13)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[12] + 0x6D703EF3U) << (5)) | ((d + (((e) | (~a)) ^ (b)) + x[12] + 0x6D703EF3U) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) | (~e)) ^ (a)) + x[2] + 0x6D703EF3U) << (14)) | ((c + (((d) | (~e)) ^ (a)) + x[2] + 0x6D703EF3U) >> (32-(14)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) | (~d)) ^ (e)) + x[10] + 0x6D703EF3U) << (13)) | ((b + (((c) | (~d)) ^ (e)) + x[10] + 0x6D703EF3U) >> (32-(13)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) | (~c)) ^ (d)) + x[0] + 0x6D703EF3U) << (13)) | ((a + (((b) | (~c)) ^ (d)) + x[0] + 0x6D703EF3U) >> (32-(13)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) | (~b)) ^ (c)) + x[4] + 0x6D703EF3U) << (7)) | ((e + (((a) | (~b)) ^ (c)) + x[4] + 0x6D703EF3U) >> (32-(7)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) | (~a)) ^ (b)) + x[13] + 0x6D703EF3U) << (5)) | ((d + (((e) | (~a)) ^ (b)) + x[13] + 0x6D703EF3U) >> (32-(5)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);

 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[8] + 0x7A6D76E9U) << (15)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[8] + 0x7A6D76E9U) >> (32-(15)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[6] + 0x7A6D76E9U) << (5)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[6] + 0x7A6D76E9U) >> (32-(5)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[4] + 0x7A6D76E9U) << (8)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[4] + 0x7A6D76E9U) >> (32-(8)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[1] + 0x7A6D76E9U) << (11)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[1] + 0x7A6D76E9U) >> (32-(11)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[3] + 0x7A6D76E9U) << (14)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[3] + 0x7A6D76E9U) >> (32-(14)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[11] + 0x7A6D76E9U) << (14)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[11] + 0x7A6D76E9U) >> (32-(14)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[15] + 0x7A6D76E9U) << (6)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[15] + 0x7A6D76E9U) >> (32-(6)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[0] + 0x7A6D76E9U) << (14)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[0] + 0x7A6D76E9U) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[5] + 0x7A6D76E9U) << (6)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[5] + 0x7A6D76E9U) >> (32-(6)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[12] + 0x7A6D76E9U) << (9)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[12] + 0x7A6D76E9U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[2] + 0x7A6D76E9U) << (12)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[2] + 0x7A6D76E9U) >> (32-(12)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + (((c) & (d)) | ((~c) & (e))) + x[13] + 0x7A6D76E9U) << (9)) | ((b + (((c) & (d)) | ((~c) & (e))) + x[13] + 0x7A6D76E9U) >> (32-(9)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + (((b) & (c)) | ((~b) & (d))) + x[9] + 0x7A6D76E9U) << (12)) | ((a + (((b) & (c)) | ((~b) & (d))) + x[9] + 0x7A6D76E9U) >> (32-(12)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + (((a) & (b)) | ((~a) & (c))) + x[7] + 0x7A6D76E9U) << (5)) | ((e + (((a) & (b)) | ((~a) & (c))) + x[7] + 0x7A6D76E9U) >> (32-(5)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + (((e) & (a)) | ((~e) & (b))) + x[10] + 0x7A6D76E9U) << (15)) | ((d + (((e) & (a)) | ((~e) & (b))) + x[10] + 0x7A6D76E9U) >> (32-(15)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + (((d) & (e)) | ((~d) & (a))) + x[14] + 0x7A6D76E9U) << (8)) | ((c + (((d) & (e)) | ((~d) & (a))) + x[14] + 0x7A6D76E9U) >> (32-(8)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);

 do { b = (((b + ((c) ^ (d) ^ (e)) + x[12] + 0x00000000U) << (8)) | ((b + ((c) ^ (d) ^ (e)) + x[12] + 0x00000000U) >> (32-(8)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[15] + 0x00000000U) << (5)) | ((a + ((b) ^ (c) ^ (d)) + x[15] + 0x00000000U) >> (32-(5)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[10] + 0x00000000U) << (12)) | ((e + ((a) ^ (b) ^ (c)) + x[10] + 0x00000000U) >> (32-(12)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[4] + 0x00000000U) << (9)) | ((d + ((e) ^ (a) ^ (b)) + x[4] + 0x00000000U) >> (32-(9)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[1] + 0x00000000U) << (12)) | ((c + ((d) ^ (e) ^ (a)) + x[1] + 0x00000000U) >> (32-(12)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[5] + 0x00000000U) << (5)) | ((b + ((c) ^ (d) ^ (e)) + x[5] + 0x00000000U) >> (32-(5)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[8] + 0x00000000U) << (14)) | ((a + ((b) ^ (c) ^ (d)) + x[8] + 0x00000000U) >> (32-(14)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[7] + 0x00000000U) << (6)) | ((e + ((a) ^ (b) ^ (c)) + x[7] + 0x00000000U) >> (32-(6)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[6] + 0x00000000U) << (8)) | ((d + ((e) ^ (a) ^ (b)) + x[6] + 0x00000000U) >> (32-(8)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[2] + 0x00000000U) << (13)) | ((c + ((d) ^ (e) ^ (a)) + x[2] + 0x00000000U) >> (32-(13)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[13] + 0x00000000U) << (6)) | ((b + ((c) ^ (d) ^ (e)) + x[13] + 0x00000000U) >> (32-(6)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);
 do { a = (((a + ((b) ^ (c) ^ (d)) + x[14] + 0x00000000U) << (5)) | ((a + ((b) ^ (c) ^ (d)) + x[14] + 0x00000000U) >> (32-(5)))) + e; c = (((c) << (10)) | ((c) >> (32-(10)))); } while(0);
 do { e = (((e + ((a) ^ (b) ^ (c)) + x[0] + 0x00000000U) << (15)) | ((e + ((a) ^ (b) ^ (c)) + x[0] + 0x00000000U) >> (32-(15)))) + d; b = (((b) << (10)) | ((b) >> (32-(10)))); } while(0);
 do { d = (((d + ((e) ^ (a) ^ (b)) + x[3] + 0x00000000U) << (13)) | ((d + ((e) ^ (a) ^ (b)) + x[3] + 0x00000000U) >> (32-(13)))) + c; a = (((a) << (10)) | ((a) >> (32-(10)))); } while(0);
 do { c = (((c + ((d) ^ (e) ^ (a)) + x[9] + 0x00000000U) << (11)) | ((c + ((d) ^ (e) ^ (a)) + x[9] + 0x00000000U) >> (32-(11)))) + b; e = (((e) << (10)) | ((e) >> (32-(10)))); } while(0);
 do { b = (((b + ((c) ^ (d) ^ (e)) + x[11] + 0x00000000U) << (11)) | ((b + ((c) ^ (d) ^ (e)) + x[11] + 0x00000000U) >> (32-(11)))) + a; d = (((d) << (10)) | ((d) >> (32-(10)))); } while(0);

 t = state[1] + cc + d;
 state[1] = state[2] + dd + e;
 state[2] = state[3] + ee + a;
 state[3] = state[4] + aa + b;
 state[4] = state[0] + bb + c;
 state[0] = t;
}

