# 1 "openbsd3/net/if_sl.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/if_sl.c"
# 66 "openbsd3/net/if_sl.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 67 "openbsd3/net/if_sl.c" 2

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
# 69 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/proc.h" 1
# 43 "openbsd3/sys/proc.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h"
struct mdproc {
 struct trapframe *md_regs;
 int md_flags;
};
# 44 "openbsd3/sys/proc.h" 2
# 1 "openbsd3/sys/select.h" 1
# 38 "openbsd3/sys/select.h"
# 1 "openbsd3/sys/event.h" 1
# 52 "openbsd3/sys/event.h"
struct kevent {
 u_int ident;
 short filter;
 u_short flags;
 u_int fflags;
 int data;
 void *udata;
};
# 114 "openbsd3/sys/event.h"
# 1 "openbsd3/sys/queue.h" 1
# 115 "openbsd3/sys/event.h" 2
struct knote;
struct klist { struct knote *slh_first; };
# 128 "openbsd3/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};

struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
 int kn_sfflags;
 int kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 const struct filterops *kn_fop;
 void *kn_hook;
# 161 "openbsd3/sys/event.h"
};

struct proc;

extern void knote(struct klist *list, long hint);
extern void knote_remove(struct proc *p, struct klist *list);
extern void knote_fdclose(struct proc *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct proc *p);
extern int filt_seltrue(struct knote *kn, long hint);
extern void klist_invalidate(struct klist *);
# 39 "openbsd3/sys/select.h" 2





struct selinfo {
 pid_t si_selpid;
 struct klist si_note;
 short si_flags;
};



struct proc;

void selrecord(struct proc *selector, struct selinfo *);
void selwakeup(struct selinfo *);
# 45 "openbsd3/sys/proc.h" 2

# 1 "openbsd3/sys/timeout.h" 1
# 54 "openbsd3/sys/timeout.h"
struct circq {
 struct circq *next;
 struct circq *prev;
};

struct timeout {
 struct circq to_list;
 void (*to_func)(void *);
 void *to_arg;
 int to_time;
 int to_flags;
};
# 84 "openbsd3/sys/timeout.h"
void timeout_set(struct timeout *, void (*)(void *), void *);
void timeout_add(struct timeout *, int);
void timeout_del(struct timeout *);

void timeout_startup(void);





int timeout_hardclock_update(void);
# 47 "openbsd3/sys/proc.h" 2





struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 char s_login[32];
};




struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 pid_t pg_id;
 int pg_jobc;
};




struct exec_package;
struct ps_strings;
struct uvm_object;
union sigval;

struct emul {
 char e_name[8];
 int *e_errno;

 void (*e_sendsig)(sig_t, int, int, u_long, int, union sigval);
 int e_nosys;
 int e_nsysent;
 struct sysent *e_sysent;
 char **e_syscallnames;
 int e_arglen;

 void *(*e_copyargs)(struct exec_package *, struct ps_strings *,
        void *, void *);

 void (*e_setregs)(struct proc *, struct exec_package *,
      u_long, register_t *);
 int (*e_fixup)(struct proc *, struct exec_package *);
 char *e_sigcode;
 char *e_esigcode;
 int e_flags;
 struct uvm_object *e_sigobject;

 void (*e_proc_exec)(struct proc *, struct exec_package *);
 void (*e_proc_fork)(struct proc *p, struct proc *parent);
 void (*e_proc_exit)(struct proc *);
};




typedef  struct emul   _GLOBAL_27_T; extern  _GLOBAL_27_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_27_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_7_A[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_nemuls[NUM_STACKS];   
# 123 "openbsd3/sys/proc.h"
struct proc {
 struct proc *p_forw;
 struct proc *p_back;
 struct { struct proc *le_next; struct proc **le_prev; } p_list;


 struct pcred *p_cred;
 struct filedesc *p_fd;
 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vmspace *p_vmspace;
 struct sigacts *p_sigacts;




 int p_exitsig;
 int p_flag;
 u_char p_os;
 char p_stat;
 char p_pad1[2];

 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;




 pid_t p_oppid;
 int p_dupfd;


 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 void *p_wchan;
 struct timeout p_sleep_to;
 const char *p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 int p_schedflags;

 struct itimerval p_realtimer;
 struct timeout p_realit_to;
 struct timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;

 int p_traceflag;
 struct vnode *p_tracep;

 void *p_systrace;

 int p_siglist;

 struct vnode *p_textvp;

 int p_holdcnt;
 struct emul *p_emul;
 void *p_emuldata;

 struct klist p_klist;
# 199 "openbsd3/sys/proc.h"
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;

 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 +1];

 struct pgrp *p_pgrp;
 vaddr_t p_sigcode;




 struct user *p_addr;
 struct mdproc p_md;

 u_short p_xstat;
 u_short p_acflag;
 struct rusage *p_ru;
};
# 294 "openbsd3/sys/proc.h"
struct pcred {
 struct ucred *pc_ucred;
 uid_t p_ruid;
 uid_t p_svuid;
 gid_t p_rgid;
 gid_t p_svgid;
 int p_refcnt;
};
# 340 "openbsd3/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_30_T; extern  _GLOBAL_30_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_31_T; extern  _GLOBAL_31_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_33_T; extern  _GLOBAL_33_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_34_T; extern  _GLOBAL_34_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_35_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_37_T; extern  _GLOBAL_37_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_41_T; extern  _GLOBAL_41_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_42_T; extern  _GLOBAL_42_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_1_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_2_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_3_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_4_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_5_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_6_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_7_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_8_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_9_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_10_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_11_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_12_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_13_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_14_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_15_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_16_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_17_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_18_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_19_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_20_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_21_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_22_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_23_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_24_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_25_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_26_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_27_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_28_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_29_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_30_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_31_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_32_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_33_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_34_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_35_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_36_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_37_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_38_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_39_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_40_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_41_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_42_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_43_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_44_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_45_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_46_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_47_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_48_proc_pool_I; extern  _GLOBAL_43_T  _GLOBAL_49_proc_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proc_pool_I) *_GLOBAL_proc_pool_8_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_1_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_2_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_3_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_4_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_5_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_6_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_7_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_8_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_9_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_10_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_11_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_12_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_13_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_14_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_15_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_16_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_17_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_18_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_19_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_20_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_21_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_22_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_23_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_24_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_25_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_26_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_27_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_28_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_29_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_30_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_31_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_32_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_33_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_34_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_35_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_36_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_37_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_38_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_39_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_40_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_41_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_42_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_43_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_44_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_45_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_46_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_47_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_48_rusage_pool_I; extern  _GLOBAL_44_T  _GLOBAL_49_rusage_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rusage_pool_I) *_GLOBAL_rusage_pool_9_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_1_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_2_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_3_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_4_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_5_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_6_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_7_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_8_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_9_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_10_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_11_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_12_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_13_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_14_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_15_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_16_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_17_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_18_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_19_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_20_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_21_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_22_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_23_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_24_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_25_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_26_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_27_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_28_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_29_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_30_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_31_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_32_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_33_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_34_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_35_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_36_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_37_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_38_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_39_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_40_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_41_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_42_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_43_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_44_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_45_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_46_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_47_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_48_ucred_pool_I; extern  _GLOBAL_45_T  _GLOBAL_49_ucred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ucred_pool_I) *_GLOBAL_ucred_pool_10_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_1_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_2_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_3_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_4_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_5_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_6_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_7_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_8_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_9_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_10_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_11_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_12_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_13_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_14_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_15_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_16_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_17_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_18_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_19_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_20_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_21_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_22_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_23_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_24_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_25_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_26_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_27_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_28_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_29_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_30_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_31_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_32_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_33_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_34_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_35_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_36_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_37_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_38_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_39_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_40_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_41_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_42_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_43_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_44_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_45_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_46_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_47_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_48_session_pool_I; extern  _GLOBAL_46_T  _GLOBAL_49_session_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_session_pool_I) *_GLOBAL_session_pool_11_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_1_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_2_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_3_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_4_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_5_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_6_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_7_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_8_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_9_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_10_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_11_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_12_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_13_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_14_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_15_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_16_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_17_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_18_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_19_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_20_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_21_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_22_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_23_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_24_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_25_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_26_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_27_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_28_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_29_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_30_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_31_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_32_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_33_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_34_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_35_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_36_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_37_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_38_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_39_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_40_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_41_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_42_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_43_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_44_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_45_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_46_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_47_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_48_pcred_pool_I; extern  _GLOBAL_47_T  _GLOBAL_49_pcred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pcred_pool_I) *_GLOBAL_pcred_pool_12_A[NUM_STACKS];   


typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_49_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_13_A[NUM_STACKS];   

struct simplelock;

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
void proc_printit(struct proc *p, const char *modif,
    int (*pr)(const char *, ...));

int chgproccnt(uid_t uid, int diff);
int enterpgrp(struct proc *p, pid_t pgid, int mksess);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
void yield(void);
void preempt(struct proc *);
void mi_switch(void);
void pgdelete(struct pgrp *pgrp);
void procinit(void);

void remrunqueue(struct proc *);

void resetpriority(struct proc *);
void setrunnable(struct proc *);

void setrunqueue(struct proc *);

void sleep(void *chan, int pri);
void uvm_swapin(struct proc *);
int ltsleep(void *chan, int pri, const char *wmesg, int timo,
     volatile struct simplelock *);

void unsleep(struct proc *);
void wakeup_n(void *chan, int);
void wakeup(void *chan);

void reaper(void);
void exit1(struct proc *, int);
void exit2(struct proc *);
int fork1(struct proc *, int, int, void *, size_t, void (*)(void *),
     void *, register_t *);
void rqinit(void);
int groupmember(gid_t, struct ucred *);

void cpu_switch(struct proc *);


void cpu_wait(struct proc *);

void cpu_exit(struct proc *);

void child_return(void *);

int proc_cansugid(struct proc *);
void proc_zap(struct proc *);
# 70 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 36 "openbsd3/sys/mbuf.h"
# 1 "openbsd3/sys/malloc.h" 1
# 303 "openbsd3/sys/malloc.h"
struct kmemstats {
 long ks_inuse;
 long ks_calls;
 long ks_memuse;
 u_short ks_limblocks;
 u_short ks_mapblocks;
 long ks_maxused;
 long ks_limit;
 long ks_size;
 long ks_spare;
};




struct kmemusage {
 short ku_indx;
 union {
  u_short freecnt;
  u_short pagecnt;
 } ku_un;
};






struct kmembuckets {
 caddr_t kb_next;
 caddr_t kb_last;
 u_int64_t kb_calls;
 u_int64_t kb_total;
 u_int64_t kb_totalfree;
 u_int64_t kb_elmpercl;
 u_int64_t kb_highwat;
 u_int64_t kb_couldfree;
};
# 424 "openbsd3/sys/malloc.h"
typedef  struct kmemstats   _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_14_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_51_T; extern  _GLOBAL_51_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_52_T; extern  _GLOBAL_52_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_15_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 37 "openbsd3/sys/mbuf.h" 2

# 1 "openbsd3/sys/pool.h" 1
# 54 "openbsd3/sys/pool.h"
# 1 "openbsd3/sys/lock.h" 1
# 43 "openbsd3/sys/lock.h"
typedef struct simplelock simple_lock_data_t;
typedef struct simplelock *simple_lock_t;
typedef struct lock lock_data_t;
typedef struct lock *lock_t;






struct lock {
 struct simplelock lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 char *lk_wmesg;
 int lk_timo;
 pid_t lk_lockholder;
};
# 161 "openbsd3/sys/lock.h"
struct proc;

void lockinit(struct lock *, int prio, char *wmesg, int timo,
   int flags);
int lockmgr(volatile struct lock *, u_int flags,
   struct simplelock *, struct proc *p);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *);
# 55 "openbsd3/sys/pool.h" 2


# 1 "openbsd3/sys/tree.h" 1
# 58 "openbsd3/sys/pool.h" 2

struct pool_cache {
 struct { struct pool_cache *tqe_next; struct pool_cache **tqe_prev; }
   pc_poollist;
 struct { struct pool_cache_group *tqh_first; struct pool_cache_group **tqh_last; }
   pc_grouplist;
 struct pool_cache_group
   *pc_allocfrom;
 struct pool_cache_group
   *pc_freeto;
 struct pool *pc_pool;
 struct simplelock pc_slock;

 int (*pc_ctor)(void *, void *, int);
 void (*pc_dtor)(void *, void *);
 void *pc_arg;


 unsigned long pc_hits;
 unsigned long pc_misses;

 unsigned long pc_ngroups;

 unsigned long pc_nitems;
};

struct pool_allocator {
 void *(*pa_alloc)(struct pool *, int);
 void (*pa_free)(struct pool *, void *);
 int pa_pagesz;


 struct simplelock pa_slock;
 struct { struct pool *tqh_first; struct pool **tqh_last; } pa_list;
 int pa_flags;


 int pa_pagemask;
 int pa_pageshift;
};

struct pool_pagelist { struct pool_item_header *lh_first; };

struct pool {
 struct { struct pool *tqe_next; struct pool **tqe_prev; }
   pr_poollist;
 struct pool_pagelist
   pr_emptypages;
 struct pool_pagelist
   pr_fullpages;
 struct pool_pagelist
   pr_partpages;
 struct pool_item_header *pr_curpage;
 struct { struct pool_cache *tqh_first; struct pool_cache **tqh_last; }
   pr_cachelist;
 unsigned int pr_size;
 unsigned int pr_align;
 unsigned int pr_itemoffset;
 unsigned int pr_minitems;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_npages;
 unsigned int pr_itemsperpage;
 unsigned int pr_slack;
 unsigned int pr_nitems;
 unsigned int pr_nout;
 unsigned int pr_hardlimit;

 unsigned int pr_serial;
 struct pool_allocator *pr_alloc;
 struct { struct pool *tqe_next; struct pool **tqe_prev; } pr_alloc_list;
 const char *pr_wchan;
 unsigned int pr_flags;
 unsigned int pr_roflags;
# 150 "openbsd3/sys/pool.h"
 struct simplelock pr_slock;

 struct phtree { struct pool_item_header *sph_root; } pr_phtree;

 int pr_maxcolor;
 int pr_curcolor;
 int pr_phoffset;





 const char *pr_hardlimit_warning;
 struct timeval pr_hardlimit_ratecap;
 struct timeval pr_hardlimit_warning_last;




 unsigned long pr_nget;
 unsigned long pr_nfail;
 unsigned long pr_nput;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;




 struct pool_log *pr_log;
 int pr_curlogentry;
 int pr_logsize;

 const char *pr_entered_file;
 long pr_entered_line;
 void (*pr_drain_hook)(void *, int);
 void *pr_drain_hook_arg;
};






typedef  struct pool_allocator   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_pool_allocator_kmem[NUM_STACKS];    

int pool_allocator_drain(struct pool_allocator *, struct pool *,
      int);

void pool_init(struct pool *, size_t, u_int, u_int, int,
      const char *, struct pool_allocator *);
void pool_destroy(struct pool *);

void pool_set_drain_hook(struct pool *, void (*)(void *, int),
      void *);

void *pool_get(struct pool *, int);
void pool_put(struct pool *, void *);
int pool_reclaim(struct pool *);
# 225 "openbsd3/sys/pool.h"
int pool_prime(struct pool *, int);
void pool_setlowat(struct pool *, int);
void pool_sethiwat(struct pool *, int);
int pool_sethardlimit(struct pool *, unsigned, const char *, int);
void pool_drain(void *);




void pool_print(struct pool *, const char *);
void pool_printit(struct pool *, const char *,
      int (*)(const char *, ...));
int pool_chk(struct pool *, const char *);




void pool_cache_init(struct pool_cache *, struct pool *,
      int (*ctor)(void *, void *, int),
      void (*dtor)(void *, void *),
      void *);
void pool_cache_destroy(struct pool_cache *);
void *pool_cache_get(struct pool_cache *, int);
void pool_cache_put(struct pool_cache *, void *);
void pool_cache_destruct_object(struct pool_cache *, void *);
void pool_cache_invalidate(struct pool_cache *);
# 39 "openbsd3/sys/mbuf.h" 2
# 56 "openbsd3/sys/mbuf.h"
struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
};
# 69 "openbsd3/sys/mbuf.h"
struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 u_int mh_len;
 short mh_type;
 short mh_flags;
};


struct pkthdr {
 struct ifnet *rcvif;
 struct packet_tags { struct m_tag *slh_first; } tags;
 int len;
 int csum;
};


struct m_ext {
 caddr_t ext_buf;

 void (*ext_free)(caddr_t, u_int, void *);
 void *ext_arg;
 u_int ext_size;
 int ext_type;
 struct mbuf *ext_nextref;
 struct mbuf *ext_prevref;






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
# 518 "openbsd3/sys/mbuf.h"
struct mbstat {
 u_long _m_spare;
 u_long _m_spare1;
 u_long _m_spare2;
 u_long _m_spare3;
 u_long m_drops;
 u_long m_wait;
 u_long m_drain;
 u_short m_mtypes[256];
};


typedef  struct mbstat   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_16_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_mclpool[NUM_STACKS];    

void mbinit(void);
struct mbuf *m_copym2(struct mbuf *, int, int, int);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_free(struct mbuf *);
struct mbuf *m_get(int, int);
struct mbuf *m_getclr(int, int);
struct mbuf *m_gethdr(int, int);
struct mbuf *m_prepend(struct mbuf *, int, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_pullup2(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_inject(struct mbuf *, int, int, int);
struct mbuf *m_getptr(struct mbuf *, int, int *);
void m_adj(struct mbuf *, int);
int m_clalloc(int, int);
void m_copyback(struct mbuf *, int, int, const void *);
void m_freem(struct mbuf *);
void m_reclaim(void *, int);
void m_copydata(struct mbuf *, int, int, caddr_t);
void m_cat(struct mbuf *, struct mbuf *);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
     void (*)(const void *, void *, size_t));
void m_zero(struct mbuf *);
int m_apply(struct mbuf *, int, int,
     int (*)(caddr_t, caddr_t, unsigned int), caddr_t);


struct m_tag *m_tag_get(int, int, int);
void m_tag_free(struct m_tag *);
void m_tag_prepend(struct mbuf *, struct m_tag *);
void m_tag_unlink(struct mbuf *, struct m_tag *);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_find(struct mbuf *, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *);
int m_tag_copy_chain(struct mbuf *, struct mbuf *);
void m_tag_init(struct mbuf *);
struct m_tag *m_tag_first(struct mbuf *);
struct m_tag *m_tag_next(struct mbuf *, struct m_tag *);
# 71 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/dkstat.h" 1
# 49 "openbsd3/sys/dkstat.h"
typedef  long  _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_1_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_2_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_3_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_4_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_5_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_6_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_7_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_8_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_9_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_10_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_11_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_12_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_13_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_14_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_15_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_16_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_17_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_18_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_19_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_20_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_21_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_22_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_23_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_24_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_25_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_26_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_27_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_28_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_29_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_30_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_31_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_32_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_33_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_34_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_35_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_36_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_37_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_38_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_39_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_40_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_41_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_42_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_43_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_44_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_45_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_46_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_47_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_48_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_49_cp_time_I [ 5 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cp_time_I) *_GLOBAL_cp_time_17_A[NUM_STACKS];  

typedef  int64_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tk_cancc[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_nin[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_nout[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_rawcc[NUM_STACKS];      
# 72 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/socket.h" 1
# 41 "openbsd3/sys/socket.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 42 "openbsd3/sys/socket.h" 2
# 86 "openbsd3/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};
# 141 "openbsd3/sys/socket.h"
struct sockaddr {
 u_int8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 159 "openbsd3/sys/socket.h"
struct sockaddr_storage {
 u_int8_t ss_len;
 sa_family_t ss_family;
 unsigned char __ss_pad1[6];
 u_int64_t __ss_pad2;
 unsigned char __ss_pad3[240];
};





struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 225 "openbsd3/sys/socket.h"
struct sockcred {
 uid_t sc_uid;
 uid_t sc_euid;
 gid_t sc_gid;
 gid_t sc_egid;
 int sc_ngroups;
 gid_t sc_groups[1];
};
# 328 "openbsd3/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 unsigned int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 355 "openbsd3/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 402 "openbsd3/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 caddr_t msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 caddr_t msg_accrights;
 int msg_accrightslen;
};
# 454 "openbsd3/sys/socket.h"
void pfctlinput(int, struct sockaddr *);
# 73 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/ioctl.h" 1
# 43 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ttycom.h" 1
# 43 "openbsd3/sys/ttycom.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 44 "openbsd3/sys/ttycom.h" 2
# 54 "openbsd3/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 44 "openbsd3/sys/ioctl.h" 2






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};





# 1 "openbsd3/sys/dkio.h" 1
# 62 "openbsd3/sys/ioctl.h" 2
# 1 "openbsd3/sys/filio.h" 1
# 63 "openbsd3/sys/ioctl.h" 2
# 1 "openbsd3/sys/sockio.h" 1
# 64 "openbsd3/sys/ioctl.h" 2
# 85 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ioctl_compat.h" 1
# 43 "openbsd3/sys/ioctl_compat.h"
# 1 "openbsd3/sys/ttychars.h" 1
# 43 "openbsd3/sys/ttychars.h"
struct ttychars {
 char tc_erase;
 char tc_kill;
 char tc_intrc;
 char tc_quitc;
 char tc_startc;
 char tc_stopc;
 char tc_eofc;
 char tc_brkc;
 char tc_suspc;
 char tc_dsuspc;
 char tc_rprntc;
 char tc_flushc;
 char tc_werasc;
 char tc_lnextc;
};
# 44 "openbsd3/sys/ioctl_compat.h" 2
# 1 "openbsd3/sys/ttydev.h" 1
# 45 "openbsd3/sys/ioctl_compat.h" 2

struct tchars {
 char t_intrc;
 char t_quitc;
 char t_startc;
 char t_stopc;
 char t_eofc;
 char t_brkc;
};

struct ltchars {
 char t_suspc;
 char t_dsuspc;
 char t_rprntc;
 char t_flushc;
 char t_werasc;
 char t_lnextc;
};






struct sgttyb {
 char sg_ispeed;
 char sg_ospeed;
 char sg_erase;
 char sg_kill;
 short sg_flags;
};
# 178 "openbsd3/sys/ioctl_compat.h"
struct ioctl_pt {
 unsigned long com;
 void *data;
};
# 86 "openbsd3/sys/ioctl.h" 2
# 74 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/file.h" 1
# 35 "openbsd3/sys/file.h"
# 1 "openbsd3/sys/fcntl.h" 1
# 171 "openbsd3/sys/fcntl.h"
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 36 "openbsd3/sys/file.h" 2
# 1 "openbsd3/sys/unistd.h" 1
# 37 "openbsd3/sys/file.h" 2




struct proc;
struct uio;
struct knote;
struct stat;
struct file;

struct fileops {
 int (*fo_read)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_write)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_ioctl)(struct file *, u_long, caddr_t,
      struct proc *);
 int (*fo_poll)(struct file *, int, struct proc *);
 int (*fo_kqfilter)(struct file *, struct knote *);
 int (*fo_stat)(struct file *, struct stat *, struct proc *);
 int (*fo_close)(struct file *, struct proc *);
};





struct file {
 struct { struct file *le_next; struct file **le_prev; } f_list;
 short f_flag;






 short f_type;
 long f_count;
 long f_msgcount;
 struct ucred *f_cred;
 struct fileops *f_ops;
 off_t f_offset;
 void *f_data;
 int f_iflags;
 int f_usecount;
};
# 102 "openbsd3/sys/file.h"
struct filelist { struct file *lh_first; };
typedef  struct filelist   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_filehead[NUM_STACKS];    
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_nfiles[NUM_STACKS];   
typedef  struct fileops   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_vnops[NUM_STACKS];    

int dofileread(struct proc *, int, struct file *, void *, size_t,
            off_t *, register_t *);
int dofilewrite(struct proc *, int, struct file *, const void *,
            size_t, off_t *, register_t *);
# 75 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/tty.h" 1
# 40 "openbsd3/sys/tty.h"
# 1 "openbsd3/sys/termios.h" 1
# 180 "openbsd3/sys/termios.h"
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 int c_ispeed;
 int c_ospeed;
};
# 283 "openbsd3/sys/termios.h"
# 1 "openbsd3/sys/ttydefaults.h" 1
# 284 "openbsd3/sys/termios.h" 2
# 41 "openbsd3/sys/tty.h" 2
# 67 "openbsd3/sys/tty.h"
struct ptmget {
 int cfd;
 int sfd;
 char cn[16];
 char sn[16];
};
# 85 "openbsd3/sys/tty.h"
struct clist {
 int c_cc;
 int c_cn;
 u_char *c_cf;
 u_char *c_cl;
 u_char *c_cs;
 u_char *c_ce;
 u_char *c_cq;
};
# 102 "openbsd3/sys/tty.h"
struct tty {
 struct { struct tty *tqe_next; struct tty **tqe_prev; } tty_link;
 struct clist t_rawq;
 long t_rawcc;
 struct clist t_canq;
 long t_cancc;
 struct clist t_outq;
 long t_outcc;
 u_char t_line;
 dev_t t_dev;
 int t_state;
 int t_flags;
 struct pgrp *t_pgrp;
 struct session *t_session;
 struct selinfo t_rsel;
 struct selinfo t_wsel;
 struct termios t_termios;
 struct winsize t_winsize;

 void (*t_oproc)(struct tty *);

 int (*t_param)(struct tty *, struct termios *);

 int (*t_hwiflow)(struct tty *tp, int flag);
 void *t_sc;
 short t_column;
 short t_rocount, t_rocol;
 short t_hiwat;
 short t_lowat;
 short t_gen;
 struct timeout t_rstrt_to;
};




struct itty {
 dev_t t_dev;
 int t_rawq_c_cc;
 int t_canq_c_cc;
 int t_outq_c_cc;
 short t_hiwat;
 short t_lowat;
 short t_column;
 int t_state;
 struct session *t_session;
 pid_t t_pgrp_pg_id;
 u_char t_line;
};
# 206 "openbsd3/sys/tty.h"
struct speedtab {
 int sp_speed;
 int sp_code;
};
# 235 "openbsd3/sys/tty.h"
struct ttylist_head { struct tty *tqh_first; struct tty **tqh_last; };



typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_tty_count[NUM_STACKS];   
typedef  struct ttychars   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_ttydefaults[NUM_STACKS];    


typedef  char  _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttyin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyin_I) *_GLOBAL_ttyin_18_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttyout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyout_I) *_GLOBAL_ttyout_19_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttopen_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttopen_I) *_GLOBAL_ttopen_20_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttclos_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttclos_I) *_GLOBAL_ttclos_21_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttybg_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybg_I) *_GLOBAL_ttybg_22_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttybuf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybuf_I) *_GLOBAL_ttybuf_23_A[NUM_STACKS];       

int sysctl_tty(int *, u_int, void *, size_t *, void *, size_t);
int sysctl_pty(int *, u_int, void *, size_t *, void *, size_t);

int b_to_q(u_char *cp, int cc, struct clist *q);
void catq(struct clist *from, struct clist *to);
void clist_init(void);
int getc(struct clist *q);
void ndflush(struct clist *q, int cc);
int ndqb(struct clist *q, int flag);
u_char *nextc(struct clist *q, u_char *cp, int *c);
int putc(int c, struct clist *q);
int q_to_b(struct clist *q, u_char *cp, int cc);
int unputc(struct clist *q);

int nullmodem(struct tty *tp, int flag);
int tputchar(int c, struct tty *tp);
int ttioctl(struct tty *tp, u_long com, caddr_t data, int flag,
     struct proc *p);
int ttread(struct tty *tp, struct uio *uio, int flag);
void ttrstrt(void *tp);
int ttpoll(dev_t device, int events, struct proc *p);
int ttkqfilter(dev_t dev, struct knote *kn);
void ttsetwater(struct tty *tp);
int ttspeedtab(int speed, struct speedtab *table);
int ttstart(struct tty *tp);
void ttwakeup(struct tty *tp);
int ttwrite(struct tty *tp, struct uio *uio, int flag);
void ttychars(struct tty *tp);
int ttycheckoutq(struct tty *tp, int wait);
int ttyclose(struct tty *tp);
void ttyflush(struct tty *tp, int rw);
void ttyinfo(struct tty *tp);
int ttyinput(int c, struct tty *tp);
int ttylclose(struct tty *tp, int flag);
int ttymodem(struct tty *tp, int flag);
int ttyopen(dev_t device, struct tty *tp);
int ttyoutput(int c, struct tty *tp);
void ttypend(struct tty *tp);
void ttyretype(struct tty *tp);
void ttyrub(int c, struct tty *tp);
int ttysleep(struct tty *tp,
     void *chan, int pri, char *wmesg, int timeout);
int ttywait(struct tty *tp);
int ttywflush(struct tty *tp);

void tty_init(void);
struct tty *ttymalloc(void);
void ttyfree(struct tty *);
u_char *firstc(struct clist *clp, int *c);

int cttyopen(dev_t, int, int, struct proc *);
int cttyread(dev_t, struct uio *, int);
int cttywrite(dev_t, struct uio *, int);
int cttyioctl(dev_t, u_long, caddr_t, int, struct proc *);
int cttypoll(dev_t, int, struct proc *);

int clalloc(struct clist *, int, int);
void clfree(struct clist *);




int ttcompat(struct tty *, u_long, caddr_t, int, struct proc *);
# 76 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_77_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_24_A[NUM_STACKS];  
typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_25_A[NUM_STACKS];  
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_81_T; extern volatile  _GLOBAL_81_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_timedelta[NUM_STACKS];   
# 77 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/sys/conf.h" 1
# 48 "openbsd3/sys/conf.h"
struct buf;
struct proc;
struct tty;
struct uio;
struct vnode;
struct knote;
# 84 "openbsd3/sys/conf.h"
struct bdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *p);
 void (*d_strategy)(struct buf *bp);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_dump)(dev_t dev, daddr_t blkno, caddr_t va,
        size_t size);
 int (*d_psize)(dev_t dev);
 int d_type;
};



typedef  struct bdevsw   _GLOBAL_95_T; extern  _GLOBAL_95_T  _GLOBAL_0_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_1_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_2_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_3_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_4_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_5_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_6_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_7_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_8_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_9_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_10_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_11_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_12_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_13_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_14_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_15_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_16_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_17_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_18_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_19_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_20_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_21_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_22_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_23_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_24_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_25_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_26_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_27_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_28_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_29_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_30_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_31_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_32_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_33_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_34_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_35_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_36_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_37_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_38_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_39_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_40_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_41_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_42_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_43_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_44_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_45_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_46_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_47_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_48_bdevsw_I [ ] ; extern  _GLOBAL_95_T  _GLOBAL_49_bdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bdevsw_I) *_GLOBAL_bdevsw_26_A[NUM_STACKS];   
# 143 "openbsd3/sys/conf.h"
struct cdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *);
 int (*d_read)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_write)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_stop)(struct tty *tp, int rw);
 struct tty *
  (*d_tty)(dev_t dev);
 int (*d_poll)(dev_t dev, int events, struct proc *p);
 paddr_t (*d_mmap)(dev_t, off_t, int);
 u_int d_type;
 int (*d_kqfilter)(dev_t dev, struct knote *kn);
};



typedef  struct cdevsw   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_1_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_2_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_3_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_4_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_5_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_6_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_7_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_8_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_9_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_10_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_11_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_12_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_13_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_14_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_15_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_16_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_17_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_18_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_19_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_20_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_21_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_22_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_23_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_24_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_25_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_26_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_27_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_28_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_29_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_30_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_31_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_32_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_33_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_34_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_35_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_36_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_37_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_38_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_39_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_40_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_41_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_42_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_43_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_44_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_45_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_46_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_47_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_48_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_49_cdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cdevsw_I) *_GLOBAL_cdevsw_27_A[NUM_STACKS];   
# 394 "openbsd3/sys/conf.h"
void randomattach(void);
# 470 "openbsd3/sys/conf.h"
typedef  char  _GLOBAL_97_T; extern  _GLOBAL_97_T  _GLOBAL_0_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_devopn_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_devopn_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devopn_I) *_GLOBAL_devopn_28_A[NUM_STACKS];extern  _GLOBAL_97_T  _GLOBAL_0_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_devio_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_devio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devio_I) *_GLOBAL_devio_29_A[NUM_STACKS];extern  _GLOBAL_97_T  _GLOBAL_0_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_devwait_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_devwait_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devwait_I) *_GLOBAL_devwait_30_A[NUM_STACKS];extern  _GLOBAL_97_T  _GLOBAL_0_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_devin_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_devin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devin_I) *_GLOBAL_devin_31_A[NUM_STACKS];extern  _GLOBAL_97_T  _GLOBAL_0_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_1_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_2_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_3_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_4_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_5_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_6_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_7_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_8_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_9_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_10_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_11_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_12_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_13_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_14_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_15_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_16_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_17_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_18_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_19_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_20_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_21_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_22_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_23_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_24_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_25_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_26_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_27_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_28_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_29_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_30_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_31_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_32_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_33_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_34_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_35_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_36_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_37_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_38_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_39_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_40_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_41_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_42_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_43_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_44_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_45_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_46_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_47_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_48_devout_I [ ] ; extern  _GLOBAL_97_T  _GLOBAL_49_devout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devout_I) *_GLOBAL_devout_32_A[NUM_STACKS];      
typedef  char  _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_1_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_2_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_3_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_4_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_5_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_6_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_7_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_8_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_9_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_10_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_11_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_12_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_13_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_14_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_15_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_16_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_17_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_18_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_19_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_20_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_21_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_22_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_23_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_24_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_25_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_26_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_27_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_28_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_29_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_30_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_31_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_32_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_33_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_34_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_35_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_36_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_37_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_38_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_39_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_40_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_41_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_42_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_43_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_44_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_45_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_46_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_47_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_48_devioc_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_49_devioc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devioc_I) *_GLOBAL_devioc_33_A[NUM_STACKS];extern  _GLOBAL_98_T  _GLOBAL_0_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_1_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_2_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_3_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_4_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_5_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_6_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_7_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_8_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_9_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_10_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_11_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_12_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_13_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_14_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_15_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_16_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_17_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_18_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_19_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_20_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_21_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_22_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_23_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_24_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_25_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_26_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_27_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_28_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_29_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_30_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_31_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_32_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_33_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_34_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_35_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_36_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_37_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_38_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_39_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_40_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_41_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_42_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_43_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_44_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_45_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_46_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_47_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_48_devcls_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_49_devcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devcls_I) *_GLOBAL_devcls_34_A[NUM_STACKS];   






struct linesw {
 int (*l_open)(dev_t dev, struct tty *tp);
 int (*l_close)(struct tty *tp, int flags);
 int (*l_read)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_write)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_ioctl)(struct tty *tp, u_long cmd, caddr_t data,
         int flag, struct proc *p);
 int (*l_rint)(int c, struct tty *tp);
 int (*l_start)(struct tty *tp);
 int (*l_modem)(struct tty *tp, int flag);
};


typedef  struct linesw   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_1_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_2_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_3_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_4_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_5_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_6_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_7_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_8_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_9_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_10_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_11_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_12_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_13_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_14_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_15_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_16_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_17_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_18_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_19_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_20_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_21_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_22_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_23_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_24_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_25_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_26_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_27_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_28_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_29_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_30_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_31_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_32_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_33_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_34_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_35_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_36_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_37_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_38_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_39_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_40_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_41_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_42_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_43_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_44_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_45_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_46_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_47_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_48_linesw_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_49_linesw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_35_A[NUM_STACKS];   





struct swdevt {
 dev_t sw_dev;
 int sw_flags;
 int sw_nblks;
 struct vnode *sw_vp;
};





typedef  struct swdevt   _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_1_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_2_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_3_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_4_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_5_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_6_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_7_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_8_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_9_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_10_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_11_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_12_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_13_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_14_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_15_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_16_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_17_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_18_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_19_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_20_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_21_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_22_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_23_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_24_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_25_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_26_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_27_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_28_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_29_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_30_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_31_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_32_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_33_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_34_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_35_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_36_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_37_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_38_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_39_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_40_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_41_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_42_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_43_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_44_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_45_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_46_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_47_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_48_swdevt_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_49_swdevt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swdevt_I) *_GLOBAL_swdevt_36_A[NUM_STACKS];   
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_1_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_2_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_3_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_4_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_5_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_6_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_7_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_8_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_9_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_10_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_11_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_12_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_13_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_14_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_15_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_16_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_17_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_18_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_19_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_20_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_21_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_22_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_23_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_24_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_25_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_26_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_27_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_28_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_29_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_30_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_31_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_32_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_33_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_34_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_35_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_36_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_37_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_38_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_39_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_40_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_41_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_42_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_43_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_44_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_45_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_46_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_47_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_48_chrtoblktbl_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_49_chrtoblktbl_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_chrtoblktbl_I) *_GLOBAL_chrtoblktbl_37_A[NUM_STACKS];  
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_nchrtoblktbl[NUM_STACKS];   

struct bdevsw *bdevsw_lookup(dev_t);
struct cdevsw *cdevsw_lookup(dev_t);
int chrtoblk(dev_t);
int blktochr(dev_t);
int iskmemdev(dev_t);
int iszerodev(dev_t);
dev_t getnulldev(void);

int filedescopen(dev_t, int, int, struct proc *); int filedescclose(dev_t, int, int, struct proc *); int filedescread(dev_t, struct uio *, int); int filedescwrite(dev_t, struct uio *, int); int filedescioctl(dev_t, u_long, caddr_t, int, struct proc *); int filedescstop(struct tty *, int); struct tty *filedesctty(dev_t); int filedescpoll(dev_t, int, struct proc *); paddr_t filedescmmap(dev_t, off_t, int); int filedesckqfilter(dev_t, struct knote *);

int logopen(dev_t, int, int, struct proc *); int logclose(dev_t, int, int, struct proc *); int logread(dev_t, struct uio *, int); int logwrite(dev_t, struct uio *, int); int logioctl(dev_t, u_long, caddr_t, int, struct proc *); int logstop(struct tty *, int); struct tty *logtty(dev_t); int logpoll(dev_t, int, struct proc *); paddr_t logmmap(dev_t, off_t, int); int logkqfilter(dev_t, struct knote *);







int lkmopen(dev_t, int, int, struct proc *); int lkmclose(dev_t, int, int, struct proc *); int lkmread(dev_t, struct uio *, int); int lkmwrite(dev_t, struct uio *, int); int lkmioctl(dev_t, u_long, caddr_t, int, struct proc *); int lkmstop(struct tty *, int); struct tty *lkmtty(dev_t); int lkmpoll(dev_t, int, struct proc *); paddr_t lkmmmap(dev_t, off_t, int); int lkmkqfilter(dev_t, struct knote *);



int ptsopen(dev_t, int, int, struct proc *); int ptsclose(dev_t, int, int, struct proc *); int ptsread(dev_t, struct uio *, int); int ptswrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptsstop(struct tty *, int); struct tty *ptytty(dev_t); int ptspoll(dev_t, int, struct proc *); paddr_t ptsmmap(dev_t, off_t, int); int ptskqfilter(dev_t, struct knote *);



int ptcopen(dev_t, int, int, struct proc *); int ptcclose(dev_t, int, int, struct proc *); int ptcread(dev_t, struct uio *, int); int ptcwrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptcstop(struct tty *, int); struct tty *ptytty(dev_t); int ptcpoll(dev_t, int, struct proc *); paddr_t ptcmmap(dev_t, off_t, int); int ptckqfilter(dev_t, struct knote *);

int ptmopen(dev_t, int, int, struct proc *); int ptmclose(dev_t, int, int, struct proc *); int ptmread(dev_t, struct uio *, int); int ptmwrite(dev_t, struct uio *, int); int ptmioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptmstop(struct tty *, int); struct tty *ptmtty(dev_t); int ptmpoll(dev_t, int, struct proc *); paddr_t ptmmmap(dev_t, off_t, int); int ptmkqfilter(dev_t, struct knote *);

int cttyopen(dev_t, int, int, struct proc *); int cttyclose(dev_t, int, int, struct proc *); int cttyread(dev_t, struct uio *, int); int cttywrite(dev_t, struct uio *, int); int cttyioctl(dev_t, u_long, caddr_t, int, struct proc *); int cttystop(struct tty *, int); struct tty *cttytty(dev_t); int cttypoll(dev_t, int, struct proc *); paddr_t cttymmap(dev_t, off_t, int); int cttykqfilter(dev_t, struct knote *);

int audioopen(dev_t, int, int, struct proc *); int audioclose(dev_t, int, int, struct proc *); int audioread(dev_t, struct uio *, int); int audiowrite(dev_t, struct uio *, int); int audioioctl(dev_t, u_long, caddr_t, int, struct proc *); int audiostop(struct tty *, int); struct tty *audiotty(dev_t); int audiopoll(dev_t, int, struct proc *); paddr_t audiommap(dev_t, off_t, int); int audiokqfilter(dev_t, struct knote *);
int midiopen(dev_t, int, int, struct proc *); int midiclose(dev_t, int, int, struct proc *); int midiread(dev_t, struct uio *, int); int midiwrite(dev_t, struct uio *, int); int midiioctl(dev_t, u_long, caddr_t, int, struct proc *); int midistop(struct tty *, int); struct tty *miditty(dev_t); int midipoll(dev_t, int, struct proc *); paddr_t midimmap(dev_t, off_t, int); int midikqfilter(dev_t, struct knote *);
int sequenceropen(dev_t, int, int, struct proc *); int sequencerclose(dev_t, int, int, struct proc *); int sequencerread(dev_t, struct uio *, int); int sequencerwrite(dev_t, struct uio *, int); int sequencerioctl(dev_t, u_long, caddr_t, int, struct proc *); int sequencerstop(struct tty *, int); struct tty *sequencertty(dev_t); int sequencerpoll(dev_t, int, struct proc *); paddr_t sequencermmap(dev_t, off_t, int); int sequencerkqfilter(dev_t, struct knote *);
int radioopen(dev_t, int, int, struct proc *); int radioclose(dev_t, int, int, struct proc *); int radioread(dev_t, struct uio *, int); int radiowrite(dev_t, struct uio *, int); int radioioctl(dev_t, u_long, caddr_t, int, struct proc *); int radiostop(struct tty *, int); struct tty *radiotty(dev_t); int radiopoll(dev_t, int, struct proc *); paddr_t radiommap(dev_t, off_t, int); int radiokqfilter(dev_t, struct knote *);
int cnopen(dev_t, int, int, struct proc *); int cnclose(dev_t, int, int, struct proc *); int cnread(dev_t, struct uio *, int); int cnwrite(dev_t, struct uio *, int); int cnioctl(dev_t, u_long, caddr_t, int, struct proc *); int cnstop(struct tty *, int); struct tty *cntty(dev_t); int cnpoll(dev_t, int, struct proc *); paddr_t cnmmap(dev_t, off_t, int); int cnkqfilter(dev_t, struct knote *);

int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); void swstrategy(struct buf *); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swdump(dev_t, daddr_t, caddr_t, size_t); int swsize(dev_t);
int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); int swread(dev_t, struct uio *, int); int swwrite(dev_t, struct uio *, int); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swstop(struct tty *, int); struct tty *swtty(dev_t); int swpoll(dev_t, int, struct proc *); paddr_t swmmap(dev_t, off_t, int); int swkqfilter(dev_t, struct knote *);

int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); void vndstrategy(struct buf *); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vnddump(dev_t, daddr_t, caddr_t, size_t); int vndsize(dev_t);
int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); int vndread(dev_t, struct uio *, int); int vndwrite(dev_t, struct uio *, int); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vndstop(struct tty *, int); struct tty *vndtty(dev_t); int vndpoll(dev_t, int, struct proc *); paddr_t vndmmap(dev_t, off_t, int); int vndkqfilter(dev_t, struct knote *);

int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); void ccdstrategy(struct buf *); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccddump(dev_t, daddr_t, caddr_t, size_t); int ccdsize(dev_t);
int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); int ccdread(dev_t, struct uio *, int); int ccdwrite(dev_t, struct uio *, int); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccdstop(struct tty *, int); struct tty *ccdtty(dev_t); int ccdpoll(dev_t, int, struct proc *); paddr_t ccdmmap(dev_t, off_t, int); int ccdkqfilter(dev_t, struct knote *);

int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); void raidstrategy(struct buf *); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raiddump(dev_t, daddr_t, caddr_t, size_t); int raidsize(dev_t);
int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); int raidread(dev_t, struct uio *, int); int raidwrite(dev_t, struct uio *, int); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raidstop(struct tty *, int); struct tty *raidtty(dev_t); int raidpoll(dev_t, int, struct proc *); paddr_t raidmmap(dev_t, off_t, int); int raidkqfilter(dev_t, struct knote *);

int iopopen(dev_t, int, int, struct proc *); int iopclose(dev_t, int, int, struct proc *); int iopread(dev_t, struct uio *, int); int iopwrite(dev_t, struct uio *, int); int iopioctl(dev_t, u_long, caddr_t, int, struct proc *); int iopstop(struct tty *, int); struct tty *ioptty(dev_t); int ioppoll(dev_t, int, struct proc *); paddr_t iopmmap(dev_t, off_t, int); int iopkqfilter(dev_t, struct knote *);

int chopen(dev_t, int, int, struct proc *); int chclose(dev_t, int, int, struct proc *); int chread(dev_t, struct uio *, int); int chwrite(dev_t, struct uio *, int); int chioctl(dev_t, u_long, caddr_t, int, struct proc *); int chstop(struct tty *, int); struct tty *chtty(dev_t); int chpoll(dev_t, int, struct proc *); paddr_t chmmap(dev_t, off_t, int); int chkqfilter(dev_t, struct knote *);

int ssopen(dev_t, int, int, struct proc *); int ssclose(dev_t, int, int, struct proc *); int ssread(dev_t, struct uio *, int); int sswrite(dev_t, struct uio *, int); int ssioctl(dev_t, u_long, caddr_t, int, struct proc *); int ssstop(struct tty *, int); struct tty *sstty(dev_t); int sspoll(dev_t, int, struct proc *); paddr_t ssmmap(dev_t, off_t, int); int sskqfilter(dev_t, struct knote *);

int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); void sdstrategy(struct buf *); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sddump(dev_t, daddr_t, caddr_t, size_t); int sdsize(dev_t);
int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); int sdread(dev_t, struct uio *, int); int sdwrite(dev_t, struct uio *, int); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sdstop(struct tty *, int); struct tty *sdtty(dev_t); int sdpoll(dev_t, int, struct proc *); paddr_t sdmmap(dev_t, off_t, int); int sdkqfilter(dev_t, struct knote *);

int sesopen(dev_t, int, int, struct proc *); int sesclose(dev_t, int, int, struct proc *); int sesread(dev_t, struct uio *, int); int seswrite(dev_t, struct uio *, int); int sesioctl(dev_t, u_long, caddr_t, int, struct proc *); int sesstop(struct tty *, int); struct tty *sestty(dev_t); int sespoll(dev_t, int, struct proc *); paddr_t sesmmap(dev_t, off_t, int); int seskqfilter(dev_t, struct knote *);

int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); void ststrategy(struct buf *); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int stdump(dev_t, daddr_t, caddr_t, size_t); int stsize(dev_t);
int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); int stread(dev_t, struct uio *, int); int stwrite(dev_t, struct uio *, int); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int ststop(struct tty *, int); struct tty *sttty(dev_t); int stpoll(dev_t, int, struct proc *); paddr_t stmmap(dev_t, off_t, int); int stkqfilter(dev_t, struct knote *);

int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); void cdstrategy(struct buf *); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cddump(dev_t, daddr_t, caddr_t, size_t); int cdsize(dev_t);
int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); int cdread(dev_t, struct uio *, int); int cdwrite(dev_t, struct uio *, int); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cdstop(struct tty *, int); struct tty *cdtty(dev_t); int cdpoll(dev_t, int, struct proc *); paddr_t cdmmap(dev_t, off_t, int); int cdkqfilter(dev_t, struct knote *);

int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); void rdstrategy(struct buf *); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rddump(dev_t, daddr_t, caddr_t, size_t); int rdsize(dev_t);
int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); int rdread(dev_t, struct uio *, int); int rdwrite(dev_t, struct uio *, int); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rdstop(struct tty *, int); struct tty *rdtty(dev_t); int rdpoll(dev_t, int, struct proc *); paddr_t rdmmap(dev_t, off_t, int); int rdkqfilter(dev_t, struct knote *);

int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); void ukstrategy(struct buf *); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukdump(dev_t, daddr_t, caddr_t, size_t); int uksize(dev_t);
int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); int ukread(dev_t, struct uio *, int); int ukwrite(dev_t, struct uio *, int); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukstop(struct tty *, int); struct tty *uktty(dev_t); int ukpoll(dev_t, int, struct proc *); paddr_t ukmmap(dev_t, off_t, int); int ukkqfilter(dev_t, struct knote *);

int bpfopen(dev_t, int, int, struct proc *); int bpfclose(dev_t, int, int, struct proc *); int bpfread(dev_t, struct uio *, int); int bpfwrite(dev_t, struct uio *, int); int bpfioctl(dev_t, u_long, caddr_t, int, struct proc *); int bpfstop(struct tty *, int); struct tty *bpftty(dev_t); int bpfpoll(dev_t, int, struct proc *); paddr_t bpfmmap(dev_t, off_t, int); int bpfkqfilter(dev_t, struct knote *);

int pfopen(dev_t, int, int, struct proc *); int pfclose(dev_t, int, int, struct proc *); int pfread(dev_t, struct uio *, int); int pfwrite(dev_t, struct uio *, int); int pfioctl(dev_t, u_long, caddr_t, int, struct proc *); int pfstop(struct tty *, int); struct tty *pftty(dev_t); int pfpoll(dev_t, int, struct proc *); paddr_t pfmmap(dev_t, off_t, int); int pfkqfilter(dev_t, struct knote *);

int tunopen(dev_t, int, int, struct proc *); int tunclose(dev_t, int, int, struct proc *); int tunread(dev_t, struct uio *, int); int tunwrite(dev_t, struct uio *, int); int tunioctl(dev_t, u_long, caddr_t, int, struct proc *); int tunstop(struct tty *, int); struct tty *tuntty(dev_t); int tunpoll(dev_t, int, struct proc *); paddr_t tunmmap(dev_t, off_t, int); int tunkqfilter(dev_t, struct knote *);

int randomopen(dev_t, int, int, struct proc *); int randomclose(dev_t, int, int, struct proc *); int randomread(dev_t, struct uio *, int); int randomwrite(dev_t, struct uio *, int); int randomioctl(dev_t, u_long, caddr_t, int, struct proc *); int randomstop(struct tty *, int); struct tty *randomtty(dev_t); int randompoll(dev_t, int, struct proc *); paddr_t randommmap(dev_t, off_t, int); int randomkqfilter(dev_t, struct knote *);

int wsdisplayopen(dev_t, int, int, struct proc *); int wsdisplayclose(dev_t, int, int, struct proc *); int wsdisplayread(dev_t, struct uio *, int); int wsdisplaywrite(dev_t, struct uio *, int); int wsdisplayioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsdisplaystop(struct tty *, int); struct tty *wsdisplaytty(dev_t); int wsdisplaypoll(dev_t, int, struct proc *); paddr_t wsdisplaymmap(dev_t, off_t, int); int wsdisplaykqfilter(dev_t, struct knote *);
int wskbdopen(dev_t, int, int, struct proc *); int wskbdclose(dev_t, int, int, struct proc *); int wskbdread(dev_t, struct uio *, int); int wskbdwrite(dev_t, struct uio *, int); int wskbdioctl(dev_t, u_long, caddr_t, int, struct proc *); int wskbdstop(struct tty *, int); struct tty *wskbdtty(dev_t); int wskbdpoll(dev_t, int, struct proc *); paddr_t wskbdmmap(dev_t, off_t, int); int wskbdkqfilter(dev_t, struct knote *);
int wsmouseopen(dev_t, int, int, struct proc *); int wsmouseclose(dev_t, int, int, struct proc *); int wsmouseread(dev_t, struct uio *, int); int wsmousewrite(dev_t, struct uio *, int); int wsmouseioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmousestop(struct tty *, int); struct tty *wsmousetty(dev_t); int wsmousepoll(dev_t, int, struct proc *); paddr_t wsmousemmap(dev_t, off_t, int); int wsmousekqfilter(dev_t, struct knote *);
int wsmuxopen(dev_t, int, int, struct proc *); int wsmuxclose(dev_t, int, int, struct proc *); int wsmuxread(dev_t, struct uio *, int); int wsmuxwrite(dev_t, struct uio *, int); int wsmuxioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmuxstop(struct tty *, int); struct tty *wsmuxtty(dev_t); int wsmuxpoll(dev_t, int, struct proc *); paddr_t wsmuxmmap(dev_t, off_t, int); int wsmuxkqfilter(dev_t, struct knote *);






int svr4_netopen(dev_t, int, int, struct proc *); int svr4_netclose(dev_t, int, int, struct proc *); int svr4_netread(dev_t, struct uio *, int); int svr4_netwrite(dev_t, struct uio *, int); int svr4_netioctl(dev_t, u_long, caddr_t, int, struct proc *); int svr4_netstop(struct tty *, int); struct tty *svr4_nettty(dev_t); int svr4_netpoll(dev_t, int, struct proc *); paddr_t svr4_netmmap(dev_t, off_t, int); int svr4_netkqfilter(dev_t, struct knote *);

int ksymsopen(dev_t, int, int, struct proc *); int ksymsclose(dev_t, int, int, struct proc *); int ksymsread(dev_t, struct uio *, int); int ksymswrite(dev_t, struct uio *, int); int ksymsioctl(dev_t, u_long, caddr_t, int, struct proc *); int ksymsstop(struct tty *, int); struct tty *ksymstty(dev_t); int ksymspoll(dev_t, int, struct proc *); paddr_t ksymsmmap(dev_t, off_t, int); int ksymskqfilter(dev_t, struct knote *);

int cryptoopen(dev_t, int, int, struct proc *); int cryptoclose(dev_t, int, int, struct proc *); int cryptoread(dev_t, struct uio *, int); int cryptowrite(dev_t, struct uio *, int); int cryptoioctl(dev_t, u_long, caddr_t, int, struct proc *); int cryptostop(struct tty *, int); struct tty *cryptotty(dev_t); int cryptopoll(dev_t, int, struct proc *); paddr_t cryptommap(dev_t, off_t, int); int cryptokqfilter(dev_t, struct knote *);

int systraceopen(dev_t, int, int, struct proc *); int systraceclose(dev_t, int, int, struct proc *); int systraceread(dev_t, struct uio *, int); int systracewrite(dev_t, struct uio *, int); int systraceioctl(dev_t, u_long, caddr_t, int, struct proc *); int systracestop(struct tty *, int); struct tty *systracetty(dev_t); int systracepoll(dev_t, int, struct proc *); paddr_t systracemmap(dev_t, off_t, int); int systracekqfilter(dev_t, struct knote *);

int bioopen(dev_t, int, int, struct proc *); int bioclose(dev_t, int, int, struct proc *); int bioread(dev_t, struct uio *, int); int biowrite(dev_t, struct uio *, int); int bioioctl(dev_t, u_long, caddr_t, int, struct proc *); int biostop(struct tty *, int); struct tty *biotty(dev_t); int biopoll(dev_t, int, struct proc *); paddr_t biommap(dev_t, off_t, int); int biokqfilter(dev_t, struct knote *);

int gpropen(dev_t, int, int, struct proc *); int gprclose(dev_t, int, int, struct proc *); int gprread(dev_t, struct uio *, int); int gprwrite(dev_t, struct uio *, int); int gprioctl(dev_t, u_long, caddr_t, int, struct proc *); int gprstop(struct tty *, int); struct tty *gprtty(dev_t); int gprpoll(dev_t, int, struct proc *); paddr_t gprmmap(dev_t, off_t, int); int gprkqfilter(dev_t, struct knote *);
int bktropen(dev_t, int, int, struct proc *); int bktrclose(dev_t, int, int, struct proc *); int bktrread(dev_t, struct uio *, int); int bktrwrite(dev_t, struct uio *, int); int bktrioctl(dev_t, u_long, caddr_t, int, struct proc *); int bktrstop(struct tty *, int); struct tty *bktrtty(dev_t); int bktrpoll(dev_t, int, struct proc *); paddr_t bktrmmap(dev_t, off_t, int); int bktrkqfilter(dev_t, struct knote *);

int usbopen(dev_t, int, int, struct proc *); int usbclose(dev_t, int, int, struct proc *); int usbread(dev_t, struct uio *, int); int usbwrite(dev_t, struct uio *, int); int usbioctl(dev_t, u_long, caddr_t, int, struct proc *); int usbstop(struct tty *, int); struct tty *usbtty(dev_t); int usbpoll(dev_t, int, struct proc *); paddr_t usbmmap(dev_t, off_t, int); int usbkqfilter(dev_t, struct knote *);
int ugenopen(dev_t, int, int, struct proc *); int ugenclose(dev_t, int, int, struct proc *); int ugenread(dev_t, struct uio *, int); int ugenwrite(dev_t, struct uio *, int); int ugenioctl(dev_t, u_long, caddr_t, int, struct proc *); int ugenstop(struct tty *, int); struct tty *ugentty(dev_t); int ugenpoll(dev_t, int, struct proc *); paddr_t ugenmmap(dev_t, off_t, int); int ugenkqfilter(dev_t, struct knote *);
int uhidopen(dev_t, int, int, struct proc *); int uhidclose(dev_t, int, int, struct proc *); int uhidread(dev_t, struct uio *, int); int uhidwrite(dev_t, struct uio *, int); int uhidioctl(dev_t, u_long, caddr_t, int, struct proc *); int uhidstop(struct tty *, int); struct tty *uhidtty(dev_t); int uhidpoll(dev_t, int, struct proc *); paddr_t uhidmmap(dev_t, off_t, int); int uhidkqfilter(dev_t, struct knote *);
int ucomopen(dev_t, int, int, struct proc *); int ucomclose(dev_t, int, int, struct proc *); int ucomread(dev_t, struct uio *, int); int ucomwrite(dev_t, struct uio *, int); int ucomioctl(dev_t, u_long, caddr_t, int, struct proc *); int ucomstop(struct tty *, int); struct tty *ucomtty(dev_t); int ucompoll(dev_t, int, struct proc *); paddr_t ucommmap(dev_t, off_t, int); int ucomkqfilter(dev_t, struct knote *);
int ulptopen(dev_t, int, int, struct proc *); int ulptclose(dev_t, int, int, struct proc *); int ulptread(dev_t, struct uio *, int); int ulptwrite(dev_t, struct uio *, int); int ulptioctl(dev_t, u_long, caddr_t, int, struct proc *); int ulptstop(struct tty *, int); struct tty *ulpttty(dev_t); int ulptpoll(dev_t, int, struct proc *); paddr_t ulptmmap(dev_t, off_t, int); int ulptkqfilter(dev_t, struct knote *);
int uscanneropen(dev_t, int, int, struct proc *); int uscannerclose(dev_t, int, int, struct proc *); int uscannerread(dev_t, struct uio *, int); int uscannerwrite(dev_t, struct uio *, int); int uscannerioctl(dev_t, u_long, caddr_t, int, struct proc *); int uscannerstop(struct tty *, int); struct tty *uscannertty(dev_t); int uscannerpoll(dev_t, int, struct proc *); paddr_t uscannermmap(dev_t, off_t, int); int uscannerkqfilter(dev_t, struct knote *);
int urioopen(dev_t, int, int, struct proc *); int urioclose(dev_t, int, int, struct proc *); int urioread(dev_t, struct uio *, int); int uriowrite(dev_t, struct uio *, int); int urioioctl(dev_t, u_long, caddr_t, int, struct proc *); int uriostop(struct tty *, int); struct tty *uriotty(dev_t); int uriopoll(dev_t, int, struct proc *); paddr_t uriommap(dev_t, off_t, int); int uriokqfilter(dev_t, struct knote *);
# 78 "openbsd3/net/if_sl.c" 2

# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_38_A[NUM_STACKS];   
typedef  const char   _GLOBAL_106_T; extern  _GLOBAL_106_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_39_A[NUM_STACKS];   
typedef  const char   _GLOBAL_107_T; extern  _GLOBAL_107_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_40_A[NUM_STACKS];   
typedef  const char   _GLOBAL_108_T; extern  _GLOBAL_108_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_41_A[NUM_STACKS];   
typedef  const char   _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_42_A[NUM_STACKS];   
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_43_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_126_T  )  ( int  ) ; extern  _GLOBAL_126_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_128_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_130_T  )  ( void  ) ; extern  _GLOBAL_130_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_132_T  )  ( void  ) ; extern  _GLOBAL_132_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_44_A[NUM_STACKS];extern  _GLOBAL_133_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_45_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 80 "openbsd3/net/if_sl.c" 2




# 1 "openbsd3/net/if.h" 1
# 46 "openbsd3/net/if.h"
# 1 "openbsd3/altq/if_altq.h" 1
# 38 "openbsd3/altq/if_altq.h"
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;


 int altq_type;
 int altq_flags;
 void *altq_disc;
 struct ifnet *altq_ifp;

 int (*altq_enqueue)(struct ifaltq *, struct mbuf *,
         struct altq_pktattr *);
 struct mbuf *(*altq_dequeue)(struct ifaltq *, int);
 int (*altq_request)(struct ifaltq *, int, void *);


 void *altq_clfier;
 void *(*altq_classify)(void *, struct mbuf *, int);


 struct tb_regulator *altq_tbr;


 struct top_cdnr *altq_cdnr;
};
# 87 "openbsd3/altq/if_altq.h"
struct altq_pktattr {
 void *pattr_class;
 int pattr_af;
 caddr_t pattr_hdr;
};




struct altq_tag {
 u_int32_t qid;

 int af;
 void *hdr;
};
# 112 "openbsd3/altq/if_altq.h"
struct tb_regulator {
 int64_t tbr_rate;
 int64_t tbr_depth;

 int64_t tbr_token;
 int64_t tbr_filluptime;
 u_int64_t tbr_last;

 int tbr_lastop;

};
# 161 "openbsd3/altq/if_altq.h"
extern int altq_attach(struct ifaltq *, int, void *,
       int (*)(struct ifaltq *, struct mbuf *,
        struct altq_pktattr *),
       struct mbuf *(*)(struct ifaltq *, int),
       int (*)(struct ifaltq *, int, void *),
       void *,
       void *(*)(void *, struct mbuf *, int));
extern int altq_detach(struct ifaltq *);
extern int altq_enable(struct ifaltq *);
extern int altq_disable(struct ifaltq *);
extern struct mbuf *tbr_dequeue(struct ifaltq *, int);
typedef  int   ( *_GLOBAL_135_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_135_T global_altq_input[NUM_STACKS];      
# 47 "openbsd3/net/if.h" 2
# 75 "openbsd3/net/if.h"
struct mbuf;
struct proc;
struct rtentry;
struct socket;
struct ether_header;
struct arpcom;
struct rt_addrinfo;




struct if_clone {
 struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
 const char *ifc_name;
 size_t ifc_namelen;

 int (*ifc_create)(struct if_clone *, int);
 int (*ifc_destroy)(struct ifnet *);
};







struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
 u_long ifi_mtu;
 u_long ifi_metric;
 u_long ifi_baudrate;

 u_long ifi_ipackets;
 u_long ifi_ierrors;
 u_long ifi_opackets;
 u_long ifi_oerrors;
 u_long ifi_collisions;
 u_long ifi_ibytes;
 u_long ifi_obytes;
 u_long ifi_imcasts;
 u_long ifi_omcasts;
 u_long ifi_iqdrops;
 u_long ifi_noproto;
 struct timeval ifi_lastchange;
};




struct ifqueue {
 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;
};
# 158 "openbsd3/net/if.h"
struct ifnet_head { struct ifnet *tqh_first; struct ifnet **tqh_last; };
# 167 "openbsd3/net/if.h"
struct ifnet {
 void *if_softc;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_list;
 struct { struct ifaddr *tqh_first; struct ifaddr **tqh_last; } if_addrlist;
 struct hook_desc_head *if_addrhooks;
 char if_xname[16];
 int if_pcount;
 caddr_t if_bpf;
 caddr_t if_bridge;
 caddr_t if_carp;
 u_short if_index;
 short if_timer;
 short if_flags;
 struct if_data if_data;
 int if_capabilities;



 int (*if_output)(struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);

 void (*if_start)(struct ifnet *);

 int (*if_ioctl)(struct ifnet *, u_long, caddr_t);

 int (*if_init)(struct ifnet *);

 int (*if_reset)(struct ifnet *);

 void (*if_watchdog)(struct ifnet *);
 struct ifaltq if_snd;
 struct sockaddr_dl *if_sadl;

 void *if_afdata[32];
};
# 317 "openbsd3/net/if.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_list;

 void (*ifa_rtrequest)(int, struct rtentry *, struct rt_addrinfo *);
 u_int ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
};






struct if_msghdr {
 u_short ifm_msglen;
 u_char ifm_version;
 u_char ifm_type;
 int ifm_addrs;
 int ifm_flags;
 u_short ifm_index;
 struct if_data ifm_data;
};





struct ifa_msghdr {
 u_short ifam_msglen;
 u_char ifam_version;
 u_char ifam_type;
 int ifam_addrs;
 int ifam_flags;
 u_short ifam_index;
 int ifam_metric;
};





struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_index;
 char ifan_name[16];
 u_short ifan_what;
};
# 382 "openbsd3/net/if.h"
struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags;
  int ifru_metric;
  caddr_t ifru_data;
 } ifr_ifru;
# 400 "openbsd3/net/if.h"
};

struct ifaliasreq {
 char ifra_name[16];
 struct sockaddr ifra_addr;
 struct sockaddr ifra_dstaddr;

 struct sockaddr ifra_mask;
};

struct ifmediareq {
 char ifm_name[16];
 int ifm_current;
 int ifm_mask;
 int ifm_status;
 int ifm_active;
 int ifm_count;

 int *ifm_ulist;
};







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};




struct if_laddrreq {
 char iflr_name[16];
 unsigned int flags;

 unsigned int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};

struct if_nameindex {
 unsigned int if_index;
 char *if_name;
};
# 463 "openbsd3/net/if.h"
# 1 "openbsd3/net/if_arp.h" 1
# 47 "openbsd3/net/if_arp.h"
struct arphdr {
 u_int16_t ar_hrd;




 u_int16_t ar_pro;
 u_int8_t ar_hln;
 u_int8_t ar_pln;
 u_int16_t ar_op;
# 73 "openbsd3/net/if_arp.h"
};




struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 464 "openbsd3/net/if.h" 2
# 570 "openbsd3/net/if.h"
typedef  struct ifnet_head   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_137_T; extern  _GLOBAL_137_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_138_T; extern  _GLOBAL_138_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_if_indexlim[NUM_STACKS];   

void ether_ifattach(struct ifnet *);
void ether_ifdetach(struct ifnet *);
int ether_ioctl(struct ifnet *, struct arpcom *, u_long, caddr_t);
void ether_input_mbuf(struct ifnet *, struct mbuf *);
void ether_input(struct ifnet *, struct ether_header *, struct mbuf *);
int ether_output(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
char *ether_sprintf(u_char *);

void if_alloc_sadl(struct ifnet *);
void if_free_sadl(struct ifnet *);
void if_attach(struct ifnet *);
void if_attachdomain(void);
void if_attachtail(struct ifnet *);
void if_attachhead(struct ifnet *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_qflush(struct ifqueue *);
void if_slowtimo(void *);
void if_up(struct ifnet *);
int ifconf(u_long, caddr_t);
void ifinit(void);
int ifioctl(struct socket *, u_long, caddr_t, struct proc *);
int ifpromisc(struct ifnet *, int);
struct ifnet *ifunit(const char *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithaf(int);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithnet(struct sockaddr *);
struct ifaddr *ifa_ifwithroute(int, struct sockaddr *,
     struct sockaddr *);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);
void ifafree(struct ifaddr *);
void link_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

void if_clone_attach(struct if_clone *);
void if_clone_detach(struct if_clone *);

int if_clone_create(const char *);
int if_clone_destroy(const char *);

int loioctl(struct ifnet *, u_long, caddr_t);
void loopattach(int);
int looutput(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
void lortrequest(int, struct rtentry *, struct rt_addrinfo *);
# 85 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 86 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_netisr[NUM_STACKS];   

void arpintr(void);
void ipintr(void);
void ip6intr(void);
void atintr(void);
void nsintr(void);
void ipxintr(void);
void clnlintr(void);
void natmintr(void);
void pppintr(void);
void ccittintr(void);
void bridgeintr(void);

# 1 "openbsd3/dev/rndvar.h" 1
# 53 "openbsd3/dev/rndvar.h"
struct rndstats {
 quad_t rnd_total;
 quad_t rnd_used;
 quad_t rnd_reads;
 quad_t arc4_reads;
 quad_t arc4_nstirs;
 quad_t arc4_stirs;

 quad_t rnd_pad[5];

 quad_t rnd_waits;
 quad_t rnd_enqs;
 quad_t rnd_deqs;
 quad_t rnd_drops;
 quad_t rnd_drople;

 quad_t rnd_ed[32];
 quad_t rnd_sc[8];
 quad_t rnd_sb[8];
};


typedef  struct rndstats   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 86 "openbsd3/net/netisr.h" 2
# 87 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/net/route.h" 1
# 52 "openbsd3/net/route.h"
struct route {
 struct rtentry *ro_rt;
 struct sockaddr ro_dst;
};





struct rt_metrics {
 u_long rmx_locks;
 u_long rmx_mtu;
 u_long rmx_hopcount;
 u_long rmx_expire;
 u_long rmx_recvpipe;
 u_long rmx_sendpipe;
 u_long rmx_ssthresh;
 u_long rmx_rtt;
 u_long rmx_rttvar;
 u_long rmx_pksent;
};
# 91 "openbsd3/net/route.h"
# 1 "openbsd3/net/radix.h" 1
# 42 "openbsd3/net/radix.h"
struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_p;
 short rn_b;
 char rn_bmask;
 u_char rn_flags;



 union {
  struct {
   caddr_t rn_Key;
   caddr_t rn_Mask;
   struct radix_node *rn_Dupedkey;
  } rn_leaf;
  struct {
   int rn_Off;
   struct radix_node *rn_L;
   struct radix_node *rn_R;
  } rn_node;
 } rn_u;





};
# 81 "openbsd3/net/radix.h"
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_142_T; extern  _GLOBAL_142_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
# 105 "openbsd3/net/radix.h"
struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;

 struct radix_node *(*rnh_addaddr)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_addpkt)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_deladdr)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_delpkt)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchaddr)(void *v,
      struct radix_node_head *head);

 struct radix_node *(*rnh_lookup)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchpkt)(void *v,
      struct radix_node_head *head);

 int (*rnh_walktree)(struct radix_node_head *,
       int (*)(struct radix_node *, void *), void *);
 struct radix_node rnh_nodes[3];
};
# 152 "openbsd3/net/radix.h"
void rn_init(void);
int rn_inithead(void **, int);
int rn_refines(void *, void *);
int rn_walktree(struct radix_node_head *,
     int (*)(struct radix_node *, void *), void *);
struct radix_node
  *rn_addmask(void *, int, int),
  *rn_addroute(void *, void *, struct radix_node_head *,
   struct radix_node [2]),
  *rn_delete(void *, void *, struct radix_node_head *),
  *rn_insert(void *, struct radix_node_head *, int *,
   struct radix_node [2]),
  *rn_lookup(void *, void *, struct radix_node_head *),
  *rn_match(void *, struct radix_node_head *),
  *rn_newpair(void *, int, struct radix_node[2]),
  *rn_search(void *, struct radix_node *),
  *rn_search_m(void *, struct radix_node *, void *);
# 92 "openbsd3/net/route.h" 2

struct rtentry {
 struct radix_node rt_nodes[2];


 struct sockaddr *rt_gateway;
 u_int rt_flags;
 int rt_refcnt;
 u_long rt_use;
 struct ifnet *rt_ifp;
 struct ifaddr *rt_ifa;
 struct sockaddr *rt_genmask;
 caddr_t rt_llinfo;
 struct rt_metrics rt_rmx;
 struct rtentry *rt_gwroute;
 struct rtentry *rt_parent;
 struct { struct rttimer *lh_first; } rt_timer;
};






struct ortentry {
 u_int32_t rt_hash;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 int16_t rt_flags;
 int16_t rt_refcnt;
 u_int32_t rt_ouse;
 struct ifnet *rt_ifp;
};
# 152 "openbsd3/net/route.h"
struct rtstat {
 u_int32_t rts_badredirect;
 u_int32_t rts_dynamic;
 u_int32_t rts_newgateway;
 u_int32_t rts_unreach;
 u_int32_t rts_wildcard;
};




struct rt_msghdr {
 u_short rtm_msglen;
 u_char rtm_version;
 u_char rtm_type;
 u_short rtm_index;
 int rtm_flags;
 int rtm_addrs;
 pid_t rtm_pid;
 int rtm_seq;
 int rtm_errno;
 int rtm_use;
 u_long rtm_inits;
 struct rt_metrics rtm_rmx;
};
# 230 "openbsd3/net/route.h"
struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[8];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct ifnet *rti_ifp;
 struct rt_msghdr *rti_rtm;
};

struct route_cb {
 int ip_count;
 int ip6_count;
 int ns_count;
 int iso_count;
 int any_count;
};







struct rttimer {
 struct { struct rttimer *tqe_next; struct rttimer **tqe_prev; } rtt_next;
 struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link;
 struct rttimer_queue *rtt_queue;
 struct rtentry *rtt_rt;
 void (*rtt_func)(struct rtentry *,
       struct rttimer *);
 time_t rtt_time;
};

struct rttimer_queue {
 long rtq_timeout;
 unsigned long rtq_count;
 struct { struct rttimer *tqh_first; struct rttimer **tqh_last; } rtq_head;
 struct { struct rttimer_queue *le_next; struct rttimer_queue **le_prev; } rtq_link;
};
# 285 "openbsd3/net/route.h"
typedef  struct route_cb   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_145_T; extern  _GLOBAL_145_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_145_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_46_A[NUM_STACKS];   

struct socket;
void route_init(void);
int route_output(struct mbuf *, ...);
int route_usrreq(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);
void rt_ifmsg(struct ifnet *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_maskedcopy(struct sockaddr *,
     struct sockaddr *, struct sockaddr *);
void rt_missmsg(int, struct rt_addrinfo *, int, int);
void rt_newaddrmsg(int, struct ifaddr *, int, struct rtentry *);
int rt_setgate(struct rtentry *, struct sockaddr *,
    struct sockaddr *);
void rt_setmetrics(u_long, struct rt_metrics *, struct rt_metrics *);
int rt_timer_add(struct rtentry *,
             void(*)(struct rtentry *, struct rttimer *),
      struct rttimer_queue *);
void rt_timer_init(void);
struct rttimer_queue *
  rt_timer_queue_create(u_int);
void rt_timer_queue_change(struct rttimer_queue *, long);
void rt_timer_queue_destroy(struct rttimer_queue *, int);
void rt_timer_remove_all(struct rtentry *);
unsigned long rt_timer_count(struct rttimer_queue *);
void rt_timer_timer(void *);
void rtable_init(void **);
void rtalloc(struct route *);
struct rtentry *
  rtalloc1(struct sockaddr *, int);
void rtalloc_noclone(struct route *, int);
struct rtentry *
  rtalloc2(struct sockaddr *, int, int);
void rtfree(struct rtentry *);
int rt_getifa(struct rt_addrinfo *);
int rtinit(struct ifaddr *, int, int);
int rtioctl(u_long, caddr_t, struct proc *);
void rtredirect(struct sockaddr *, struct sockaddr *,
    struct sockaddr *, int, struct sockaddr *,
    struct rtentry **);
int rtrequest(int, struct sockaddr *,
   struct sockaddr *, struct sockaddr *, int,
   struct rtentry **);
int rtrequest1(int, struct rt_addrinfo *, struct rtentry **);
# 88 "openbsd3/net/if_sl.c" 2


# 1 "openbsd3/netinet/in.h" 1
# 135 "openbsd3/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};
# 212 "openbsd3/netinet/in.h"
struct sockaddr_in {
 u_int8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 int8_t sin_zero[8];
};
# 227 "openbsd3/netinet/in.h"
struct ip_opts {
 struct in_addr ip_dst;



 int8_t ip_opts[40];

};
# 295 "openbsd3/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 542 "openbsd3/netinet/in.h"
# 1 "openbsd3/netinet6/in6.h" 1
# 116 "openbsd3/netinet6/in6.h"
struct in6_addr {
 union {
  u_int8_t __u6_addr8[16];
  u_int16_t __u6_addr16[8];
  u_int32_t __u6_addr32[4];
 } __u6_addr;
};
# 139 "openbsd3/netinet6/in6.h"
struct sockaddr_in6 {
 u_int8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 u_int32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 u_int32_t sin6_scope_id;
};
# 164 "openbsd3/netinet6/in6.h"
typedef  const struct sockaddr_in6    _GLOBAL_146_T; extern  _GLOBAL_146_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_147_T; extern  _GLOBAL_147_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_148_T; extern  _GLOBAL_148_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_149_T; extern  _GLOBAL_149_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_150_T; extern  _GLOBAL_150_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_151_T; extern  _GLOBAL_151_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_152_T; extern  _GLOBAL_152_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_153_T; extern  _GLOBAL_153_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_154_T; extern  _GLOBAL_154_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_155_T; extern  _GLOBAL_155_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_156_T; extern  _GLOBAL_156_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
# 370 "openbsd3/netinet6/in6.h"
struct route_in6 {
 struct rtentry *ro_rt;
 struct sockaddr_in6 ro_dst;
};
# 432 "openbsd3/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};
# 639 "openbsd3/netinet6/in6.h"
struct cmsghdr;

int in6_cksum(struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
int in6_localaddr(struct in6_addr *);
int in6_addrscope(struct in6_addr *);
struct in6_ifaddr *in6_ifawithscope(struct ifnet *, struct in6_addr *);
struct in6_ifaddr *in6_ifawithifp(struct ifnet *, struct in6_addr *);
extern void in6_if_up(struct ifnet *);







struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const u_int8_t *,
 int, int);
extern u_int8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, u_int8_t **);
extern int inet6_option_find(const struct cmsghdr *, u_int8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
  unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

# 543 "openbsd3/netinet/in.h" 2
# 568 "openbsd3/netinet/in.h"
static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_phdr(u_int32_t src, u_int32_t dst, u_int32_t lenproto)
{
 u_int32_t sum;

 sum = lenproto +
       (u_int16_t)(src >> 16) +
       (u_int16_t)(src ) +
       (u_int16_t)(dst >> 16) +
       (u_int16_t)(dst );

 sum = (u_int16_t)(sum >> 16) + (u_int16_t)(sum );

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}






static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_addword(u_int16_t a, u_int16_t b)
{
 u_int32_t sum = a + b;

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}

int in_broadcast(struct in_addr, struct ifnet *);
int in_canforward(struct in_addr);
int in_cksum(struct mbuf *, int);
int in4_cksum(struct mbuf *, u_int8_t, int, int);
void in_delayed_cksum(struct mbuf *);
int in_localaddr(struct in_addr);
void in_socktrim(struct sockaddr_in *);
char *inet_ntoa(struct in_addr);
# 91 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 92 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/netinet/in_var.h" 1
# 46 "openbsd3/netinet/in_var.h"
struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_int32_t ia_net;
 u_int32_t ia_netmask;
 u_int32_t ia_subnet;
 u_int32_t ia_subnetmask;
 struct in_addr ia_netbroadcast;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_list;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
 struct { struct in_multi *lh_first; } ia_multiaddrs;
};

struct in_aliasreq {
 char ifra_name[16];
 struct sockaddr_in ifra_addr;
 struct sockaddr_in ifra_dstaddr;

 struct sockaddr_in ifra_mask;
};
# 79 "openbsd3/netinet/in_var.h"
struct in_ifaddrhead { struct in_ifaddr *tqh_first; struct in_ifaddr **tqh_last; };
typedef  struct in_ifaddrhead   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_47_A[NUM_STACKS];  
void in_socktrim(struct sockaddr_in *);
# 121 "openbsd3/netinet/in_var.h"
struct router_info {
 struct ifnet *rti_ifp;
 int rti_type;
 int rti_age;
 struct router_info *rti_next;
};







struct in_multi {
 struct in_addr inm_addr;
 struct ifnet *inm_ifp;
 struct in_ifaddr *inm_ia;
 u_int inm_refcount;
 u_int inm_timer;
 struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_list;
 u_int inm_state;
 struct router_info *inm_rti;
};






struct in_multistep {
 struct in_ifaddr *i_ia;
 struct in_multi *i_inm;
};
# 209 "openbsd3/netinet/in_var.h"
int in_ifinit(struct ifnet *,
     struct in_ifaddr *, struct sockaddr_in *, int);
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *);




# 1 "openbsd3/netinet6/in6_var.h" 1
# 82 "openbsd3/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};

struct nd_ifinfo;
struct in6_ifextra {
 struct in6_ifstat *in6_ifstat;
 struct icmp6_ifstat *icmp6_ifstat;
 struct nd_ifinfo *nd_ifinfo;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;


 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_net;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 u_int32_t ia_plen;
 struct in6_ifaddr *ia_next;
 struct in6_multihead { struct in6_multi *lh_first; } ia6_multiaddrs;

 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 time_t ia6_createtime;


 time_t ia6_updatetime;


 struct nd_prefix *ia6_ndpr;


 struct { struct in6_multi_mship *lh_first; } ia6_memberships;
};




struct in6_ifstat {
 u_quad_t ifs6_in_receive;
 u_quad_t ifs6_in_hdrerr;
 u_quad_t ifs6_in_toobig;
 u_quad_t ifs6_in_noroute;
 u_quad_t ifs6_in_addrerr;
 u_quad_t ifs6_in_protounknown;

 u_quad_t ifs6_in_truncated;
 u_quad_t ifs6_in_discard;

 u_quad_t ifs6_in_deliver;

 u_quad_t ifs6_out_forward;

 u_quad_t ifs6_out_request;

 u_quad_t ifs6_out_discard;
 u_quad_t ifs6_out_fragok;
 u_quad_t ifs6_out_fragfail;
 u_quad_t ifs6_out_fragcreat;

 u_quad_t ifs6_reass_reqd;

 u_quad_t ifs6_reass_ok;


 u_quad_t ifs6_reass_fail;


 u_quad_t ifs6_in_mcast;
 u_quad_t ifs6_out_mcast;
};





struct icmp6_ifstat {




 u_quad_t ifs6_in_msg;

 u_quad_t ifs6_in_error;

 u_quad_t ifs6_in_dstunreach;

 u_quad_t ifs6_in_adminprohib;

 u_quad_t ifs6_in_timeexceed;

 u_quad_t ifs6_in_paramprob;

 u_quad_t ifs6_in_pkttoobig;

 u_quad_t ifs6_in_echo;

 u_quad_t ifs6_in_echoreply;

 u_quad_t ifs6_in_routersolicit;

 u_quad_t ifs6_in_routeradvert;

 u_quad_t ifs6_in_neighborsolicit;

 u_quad_t ifs6_in_neighboradvert;

 u_quad_t ifs6_in_redirect;

 u_quad_t ifs6_in_mldquery;

 u_quad_t ifs6_in_mldreport;

 u_quad_t ifs6_in_mlddone;





 u_quad_t ifs6_out_msg;

 u_quad_t ifs6_out_error;

 u_quad_t ifs6_out_dstunreach;

 u_quad_t ifs6_out_adminprohib;

 u_quad_t ifs6_out_timeexceed;

 u_quad_t ifs6_out_paramprob;

 u_quad_t ifs6_out_pkttoobig;

 u_quad_t ifs6_out_echo;

 u_quad_t ifs6_out_echoreply;

 u_quad_t ifs6_out_routersolicit;

 u_quad_t ifs6_out_routeradvert;

 u_quad_t ifs6_out_neighborsolicit;

 u_quad_t ifs6_out_neighboradvert;

 u_quad_t ifs6_out_redirect;

 u_quad_t ifs6_out_mldquery;

 u_quad_t ifs6_out_mldreport;

 u_quad_t ifs6_out_mlddone;
};

struct in6_ifreq {
 char ifr_name[16];
 union {
  struct sockaddr_in6 ifru_addr;
  struct sockaddr_in6 ifru_dstaddr;
  short ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 struct sockaddr_in6 ifra_addr;
 struct sockaddr_in6 ifra_dstaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 274 "openbsd3/netinet6/in6_var.h"
struct prf_ra {
 u_char onlink : 1;
 u_char autonomous : 1;
 u_char router : 1;
 u_char reserved : 5;
};

struct in6_prflags {
 struct prf_ra prf_ra;
 u_char prf_reserved1;
 u_short prf_reserved2;

 struct prf_rr {
  u_char decrvalid : 1;
  u_char decrprefd : 1;
  u_char reserved : 6;
 } prf_rr;
 u_char prf_reserved3;
 u_short prf_reserved4;
};

struct in6_prefixreq {
 char ipr_name[16];
 u_char ipr_origin;
 u_char ipr_plen;
 u_int32_t ipr_vltime;
 u_int32_t ipr_pltime;
 struct in6_prflags ipr_flags;
 struct sockaddr_in6 ipr_prefix;
};
# 318 "openbsd3/netinet6/in6_var.h"
struct in6_rrenumreq {
 char irr_name[16];
 u_char irr_origin;
 u_char irr_m_len;
 u_char irr_m_minlen;
 u_char irr_m_maxlen;
 u_char irr_u_uselen;
 u_char irr_u_keeplen;
 struct irr_raflagmask {
  u_char onlink : 1;
  u_char autonomous : 1;
  u_char reserved : 6;
 } irr_raflagmask;
 u_int32_t irr_vltime;
 u_int32_t irr_pltime;
 struct in6_prflags irr_flags;
 struct sockaddr_in6 irr_matchprefix;
 struct sockaddr_in6 irr_useprefix;
};
# 449 "openbsd3/netinet6/in6_var.h"
typedef  struct in6_ifaddr   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_161_T; extern  _GLOBAL_161_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_161_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_48_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_164_T; extern  _GLOBAL_164_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_49_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_in6_maxmtu[NUM_STACKS];    
# 486 "openbsd3/netinet6/in6_var.h"
struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct { struct in6_multi *le_next; struct in6_multi **le_prev; } in6m_entry;
 struct in6_addr in6m_addr;
 struct ifnet *in6m_ifp;
 struct in6_ifaddr *in6m_ia;
 u_int in6m_refcount;
 u_int in6m_state;
 u_int in6m_timer;
};






struct in6_multistep {
 struct in6_ifaddr *i_ia;
 struct in6_multi *i_in6m;
};
# 568 "openbsd3/netinet6/in6_var.h"
struct in6_multi *in6_addmulti(struct in6_addr *, struct ifnet *, int *);
void in6_delmulti(struct in6_multi *);
struct in6_multi_mship *in6_joingroup(struct ifnet *, struct in6_addr *, int *);
int in6_leavegroup(struct in6_multi_mship *);
int in6_ifindex2scopeid(int);
int in6_mask2len(struct in6_addr *, u_char *);
int in6_control(struct socket *, u_long, caddr_t, struct ifnet *,
 struct proc *);
int in6_update_ifa(struct ifnet *, struct in6_aliasreq *,
 struct in6_ifaddr *);
void in6_purgeaddr(struct ifaddr *);
int in6if_do_dad(struct ifnet *);
void in6_purgeif(struct ifnet *);
void in6_savemkludge(struct in6_ifaddr *);
void in6_setmaxmtu(void);
void *in6_domifattach(struct ifnet *);
void in6_domifdetach(struct ifnet *, void *);
void in6_restoremkludge(struct in6_ifaddr *, struct ifnet *);
void in6_createmkludge(struct ifnet *);
void in6_purgemkludge(struct ifnet *);
struct in6_ifaddr *in6ifa_ifpforlinklocal(struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr(struct ifnet *, struct in6_addr *);
char *ip6_sprintf(struct in6_addr *);
int in6_addr2scopeid(struct ifnet *, struct in6_addr *);
int in6_matchlen(struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal(struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask(struct in6_addr *, int);
void in6_purgeprefix(struct ifnet *);
void in6_ifaddloop(struct ifaddr *);
void in6_ifremloop(struct ifaddr *);

int in6_is_addr_deprecated(struct sockaddr_in6 *);
struct inpcb;
int in6_embedscope(struct in6_addr *, const struct sockaddr_in6 *,
 struct inpcb *, struct ifnet **);
int in6_recoverscope(struct sockaddr_in6 *, const struct in6_addr *,
 struct ifnet *);
void in6_clearscope(struct in6_addr *);
# 220 "openbsd3/netinet/in_var.h" 2
# 93 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/netinet/ip.h" 1
# 47 "openbsd3/netinet/ip.h"
struct ip {

 u_int8_t ip_hl:4,
    ip_v:4;





 u_int8_t ip_tos;
 u_int16_t ip_len;
 u_int16_t ip_id;
 u_int16_t ip_off;




 u_int8_t ip_ttl;
 u_int8_t ip_p;
 u_int16_t ip_sum;
 struct in_addr ip_src, ip_dst;
};
# 140 "openbsd3/netinet/ip.h"
struct ip_timestamp {
 u_int8_t ipt_code;
 u_int8_t ipt_len;
 u_int8_t ipt_ptr;

 u_int8_t ipt_flg:4,
   ipt_oflw:4;





 union ipt_timestamp {
   n_time ipt_time[1];
   struct ipt_ta {
   struct in_addr ipt_addr;
   n_time ipt_time;
   } ipt_ta[1];
 } ipt_timestamp;
};
# 190 "openbsd3/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_int8_t ippseudo_pad;
 u_int8_t ippseudo_p;
 u_int16_t ippseudo_len;
};
# 94 "openbsd3/net/if_sl.c" 2




# 1 "openbsd3/net/slcompress.h" 1
# 119 "openbsd3/net/slcompress.h"
struct cstate {
 struct cstate *cs_next;
 u_int16_t cs_hlen;
 u_char cs_id;
 u_char cs_filler;
 union {
  char csu_hdr[(256 - sizeof(struct m_hdr))];
  struct ip csu_ip;
 } slcs_u;
};







struct slcompress {
 struct cstate *last_cs;
 u_char last_recv;
 u_char last_xmit;
 u_int16_t flags;

 int sls_packets;
 int sls_compressed;
 int sls_searches;
 int sls_misses;
 int sls_uncompressedin;
 int sls_compressedin;
 int sls_errorin;
 int sls_tossed;

 struct cstate tstate[16];
 struct cstate rstate[16];
};



void sl_compress_init(struct slcompress *);
void sl_compress_setup(struct slcompress *, int);
u_int sl_compress_tcp(struct mbuf *,
       struct ip *, struct slcompress *, int);
int sl_uncompress_tcp(u_char **, int, u_int, struct slcompress *);
int sl_uncompress_tcp_core(u_char *, int, int, u_int,
       struct slcompress *, u_char **, u_int *);
# 99 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/net/if_slvar.h" 1
# 44 "openbsd3/net/if_slvar.h"
struct sl_softc {
 struct ifnet sc_if;
 int sc_unit;
 struct ifqueue sc_fastq;
 struct tty *sc_ttyp;
 u_char *sc_mp;
 u_char *sc_ep;
 u_char *sc_pktstart;
 struct mbuf *sc_mbuf;
 u_int sc_flags;
 u_int sc_escape;
 long sc_lasttime;
 long sc_abortcount;
 long sc_starttime;
 long sc_oqlen;
 long sc_otimeout;

 int sc_oldbufsize;
 int sc_oldbufquot;


 struct slcompress sc_comp;

 caddr_t sc_bpf;
 struct timeval sc_lastpacket;
 struct { struct sl_softc *le_next; struct sl_softc **le_prev; } sc_list;
};




struct slstat {
 u_int sl_ibytes;
 u_int sl_ipackets;
 u_int sl_obytes;
 u_int sl_opackets;
};

struct vjstat {
 u_int vjs_packets;
 u_int vjs_compressed;
 u_int vjs_searches;
 u_int vjs_misses;
 u_int vjs_uncompressedin;
 u_int vjs_compressedin;
 u_int vjs_errorin;
 u_int vjs_tossed;
};

struct sl_stats {
 struct slstat sl;
 struct vjstat vj;
};

struct ifslstatsreq {
 char ifr_name[16];
 struct sl_stats stats;
};
# 118 "openbsd3/net/if_slvar.h"
void slattach(int);
void slclose(struct tty *);
void slinput(int, struct tty *);
int slioctl(struct ifnet *, u_long, caddr_t);
int slopen(dev_t, struct tty *);
int sloutput(struct ifnet *,
     struct mbuf *, struct sockaddr *, struct rtentry *);
void slstart(struct tty *);
int sltioctl(struct tty *, u_long, caddr_t, int);
# 100 "openbsd3/net/if_sl.c" 2
# 1 "openbsd3/net/slip.h" 1
# 101 "openbsd3/net/if_sl.c" 2



# 1 "openbsd3/net/bpf.h" 1
# 46 "openbsd3/net/bpf.h"
typedef int32_t bpf_int32;
typedef u_int32_t bpf_u_int32;
# 62 "openbsd3/net/bpf.h"
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};




struct bpf_stat {
 u_int bs_recv;
 u_int bs_drop;
};
# 86 "openbsd3/net/bpf.h"
struct bpf_version {
 u_short bv_major;
 u_short bv_minor;
};
# 117 "openbsd3/net/bpf.h"
struct bpf_timeval {
 u_int32_t tv_sec;
 u_int32_t tv_usec;
};




struct bpf_hdr {
 struct bpf_timeval bh_tstamp;
 u_int32_t bh_caplen;
 u_int32_t bh_datalen;
 u_int16_t bh_hdrlen;

};
# 234 "openbsd3/net/bpf.h"
struct bpf_insn {
 u_int16_t code;
 u_char jt;
 u_char jf;
 int32_t k;
};
# 248 "openbsd3/net/bpf.h"
int bpf_validate(struct bpf_insn *, int);
void bpf_tap(caddr_t, u_char *, u_int);
void bpf_mtap(caddr_t, struct mbuf *);
void bpfattach(caddr_t *, struct ifnet *, u_int, u_int);
void bpfdetach(struct ifnet *);
void bpfilterattach(int);
u_int bpf_filter(struct bpf_insn *, u_char *, u_int, u_int);







typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_ticks[NUM_STACKS];   
# 105 "openbsd3/net/if_sl.c" 2
# 183 "openbsd3/net/if_sl.c"
static int slinit(struct sl_softc *);
static struct mbuf *sl_btom(struct sl_softc *, int);

int sl_clone_create(struct if_clone *, int);
int sl_clone_destroy(struct ifnet *);

typedef  struct { struct sl_softc   * lh_first  ;  }  _GLOBAL_167_T;  _GLOBAL_167_T  global_sl_softc_list[NUM_STACKS];       
typedef  struct if_clone  _GLOBAL_168_T;  _GLOBAL_168_T  global_sl_cloner[NUM_STACKS] = {  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  { { 0 }  , "sl"  , sizeof ( "sl" )   - 1   , sl_clone_create  , sl_clone_destroy  } ,  };    
              




void
slattach(n)
 int n;
{
 do { ((&global_sl_softc_list[get_stack_id()])->lh_first) = 0L; } while (0);
 if_clone_attach(&global_sl_cloner[get_stack_id()]);
}

int
sl_clone_create(ifc, unit)
 struct if_clone *ifc;
 int unit;
{
 struct sl_softc *sc;
 int s;

 sc = malloc(sizeof(*sc), 2, 0x0001);
 if (!sc)
  return (12);
 bzero(sc, sizeof(*sc));

 sc->sc_unit = unit;
 snprintf(sc->sc_if.if_xname, sizeof sc->sc_if.if_xname, "%s%d",
     ifc->ifc_name, unit);
 sc->sc_if.if_softc = sc;
 sc->sc_if.if_data.ifi_mtu = 296;
 sc->sc_if.if_flags =
     0x10 | 0x4000 | 0x8000;
 sc->sc_if.if_data.ifi_type = 0x1c;
 sc->sc_if.if_ioctl = slioctl;
 sc->sc_if.if_output = sloutput;
 ((&sc->sc_if.if_snd)->ifq_maxlen = (50));
 sc->sc_fastq.ifq_maxlen = 32;
 do { ((&sc->sc_if.if_snd)->altq_flags |= 0x01); } while (0);
 if_attach(&sc->sc_if);
 if_alloc_sadl(&sc->sc_if);

 bpfattach(&sc->sc_bpf, &sc->sc_if, 8, 16);

 s = splraise((0x20 + ((6) << 4)));
 do { if (((sc)->sc_list.le_next = (&global_sl_softc_list[get_stack_id()])->lh_first) != 0L) (&global_sl_softc_list[get_stack_id()])->lh_first->sc_list.le_prev = &(sc)->sc_list.le_next; (&global_sl_softc_list[get_stack_id()])->lh_first = (sc); (sc)->sc_list.le_prev = &(&global_sl_softc_list[get_stack_id()])->lh_first; } while (0);
 splx(s);

 return (0);
}

int
sl_clone_destroy(ifp)
 struct ifnet *ifp;
{
 struct sl_softc *sc = ifp->if_softc;
 int s;

 if (sc->sc_ttyp != 0L)
  return (16);

 s = splraise((0x20 + ((6) << 4)));
 do { if ((sc)->sc_list.le_next != 0L) (sc)->sc_list.le_next->sc_list.le_prev = (sc)->sc_list.le_prev; *(sc)->sc_list.le_prev = (sc)->sc_list.le_next; } while (0);
 splx(s);


 bpfdetach(ifp);

 if_detach(ifp);

 free(sc, 2);
 return (0);
}

static int
slinit(sc)
 struct sl_softc *sc;
{
 if (sc->sc_ep == (u_char *) 0) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (sc->sc_mbuf) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (sc->sc_mbuf) { (sc->sc_mbuf)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (sc->sc_mbuf)->m_hdr.mh_next = (struct mbuf *)0L; (sc->sc_mbuf)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (sc->sc_mbuf)->m_hdr.mh_data = (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_databuf; (sc->sc_mbuf)->m_hdr.mh_flags = 0x0002; { ((&(sc->sc_mbuf)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (sc->sc_mbuf)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
  if (sc->sc_mbuf)
   do { { int ms = splraise((0x20 + ((6) << 4))); { (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0000) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (sc->sc_mbuf)->m_hdr.mh_data = (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf; (sc->sc_mbuf)->m_hdr.mh_flags |= 0x0001|0x0008; (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (sc->sc_mbuf); (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (sc->sc_mbuf); ; ; } while ( 0); } } while ( 0);
  if (sc->sc_mbuf == 0L || sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_buf == 0L) {
   printf("sl%d: can't allocate buffer\n", sc->sc_unit);
   sc->sc_if.if_flags &= ~0x1;
   return (0);
  }
 }
 sc->sc_ep = (u_char *) sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_buf +
     sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_size;
 sc->sc_mp = sc->sc_pktstart = (u_char *) sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_buf +
     (128+sizeof(struct ifnet **)+16);

 sl_compress_init(&sc->sc_comp);

 return (1);
}






int
slopen(dev, tp)
 dev_t dev;
 struct tty *tp;
{
 struct proc *p = global_curproc[get_stack_id()];
 struct sl_softc *sc;
 int error, s;

 if ((error = suser(p, 0)) != 0)
  return (error);

 if (tp->t_line == 4)
  return (0);

 for((sc) = ((&global_sl_softc_list[get_stack_id()])->lh_first); (sc)!= 0L; (sc) = ((sc)->sc_list.le_next))
  if (sc->sc_ttyp == 0L) {
   if (slinit(sc) == 0)
    return (55);
   tp->t_sc = (caddr_t)sc;
   sc->sc_ttyp = tp;
   sc->sc_if.if_data.ifi_baudrate = tp->t_termios.c_ospeed;
   s = splraise((0x20 + ((5) << 4)));
   tp->t_state |= 0x00020 | 0x00400;
   splx(s);
   ttyflush(tp, 0x0001 | 0x0002);
# 329 "openbsd3/net/if_sl.c"
   s = splraise((0x20 + ((5) << 4)));
   if (tp->t_outq.c_cn < 2*296 +2) {
    sc->sc_oldbufsize = tp->t_outq.c_cn;
    sc->sc_oldbufquot = tp->t_outq.c_cq != 0;

    clfree(&tp->t_outq);
    error = clalloc(&tp->t_outq, 3*296, 0);
    if (error) {
     splx(s);
     return (error);
    }
   } else
    sc->sc_oldbufsize = sc->sc_oldbufquot = 0;
   splx(s);

   return (0);
  }
 return (6);
}





void
slclose(tp)
 struct tty *tp;
{
 struct sl_softc *sc;
 int s;

 ttywflush(tp);
 tp->t_line = 0;
 sc = (struct sl_softc *)tp->t_sc;
 if (sc != 0L) {
  s = splraise((0x20 + ((6) << 4)));

  if_down(&sc->sc_if);
  sc->sc_ttyp = 0L;
  tp->t_sc = 0L;

  m_freem(sc->sc_mbuf);
  sc->sc_mbuf = 0L;
  sc->sc_ep = sc->sc_mp = sc->sc_pktstart = 0L;



  if (sc->sc_oldbufsize != 0) {
   clfree(&tp->t_outq);
   clalloc(&tp->t_outq, sc->sc_oldbufsize, sc->sc_oldbufquot);
  }

  splx(s);
 }
}






int
sltioctl(tp, cmd, data, flag)
 struct tty *tp;
 u_long cmd;
 caddr_t data;
 int flag;
{
 struct sl_softc *sc = (struct sl_softc *)tp->t_sc;

 switch (cmd) {
 case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((88))):
  *(int *)data = sc->sc_unit;
  break;

 default:
  return (-1);
 }
 return (0);
}







int
sloutput(ifp, m, dst, rtp)
 struct ifnet *ifp;
 struct mbuf *m;
 struct sockaddr *dst;
 struct rtentry *rtp;
{
 struct sl_softc *sc = ifp->if_softc;
 struct ip *ip;
 int s, error;





 if (dst->sa_family != 2) {
  printf("%s: af%d not supported\n", sc->sc_if.if_xname,
   dst->sa_family);
  m_freem(m);
  sc->sc_if.if_data.ifi_noproto++;
  return (47);
 }

 if (sc->sc_ttyp == 0L) {
  m_freem(m);
  return (50);
 }
 if ((sc->sc_ttyp->t_state & 0x00008) == 0 &&
     (sc->sc_ttyp->t_termios.c_cflag & 0x00008000) == 0) {
  m_freem(m);
  return (65);
 }
 ip = ((struct ip *)((m)->m_hdr.mh_data));
 if (sc->sc_if.if_flags & 0x2000 && ip->ip_p == 1) {
  m_freem(m);
  return (52);
 }
 s = splraise((0x20 + ((6) << 4)));
 if (sc->sc_oqlen && sc->sc_ttyp->t_outq.c_cc == sc->sc_oqlen) {
  struct timeval tv;


  do { (&tv)->tv_sec = (&time)->tv_sec - (&sc->sc_lastpacket)->tv_sec; (&tv)->tv_usec = (&time)->tv_usec - (&sc->sc_lastpacket)->tv_usec; if ((&tv)->tv_usec < 0) { (&tv)->tv_sec--; (&tv)->tv_usec += 1000000; } } while (0);
  if (tv.tv_sec > 0) {
   sc->sc_otimeout++;
   slstart(sc->sc_ttyp);
  }
 }
 do { if ((((&sc->sc_if.if_snd))->altq_flags & 0x02)) ((error)) = (*((&sc->sc_if.if_snd))->altq_enqueue)(((&sc->sc_if.if_snd)),((m)),((0L))); else { if ((((&sc->sc_if.if_snd))->ifq_len >= ((&sc->sc_if.if_snd))->ifq_maxlen)) { m_freem((m)); (error) = 55; } else { { ((m))->m_hdr.mh_nextpkt = 0; if (((&sc->sc_if.if_snd))->ifq_tail == 0) ((&sc->sc_if.if_snd))->ifq_head = (m); else ((&sc->sc_if.if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m); ((&sc->sc_if.if_snd))->ifq_tail = (m); ((&sc->sc_if.if_snd))->ifq_len++; }; (error) = 0; } } if ((error)) (&sc->sc_if.if_snd)->ifq_drops++; } while (0);
 if (error) {
  splx(s);
  sc->sc_if.if_data.ifi_oerrors++;
  return (error);
 }

 sc->sc_lastpacket = time;
 if ((sc->sc_oqlen = sc->sc_ttyp->t_outq.c_cc) == 0)
  slstart(sc->sc_ttyp);
 splx(s);
 return (0);
}






void
slstart(tp)
 struct tty *tp;
{
 struct sl_softc *sc = (struct sl_softc *)tp->t_sc;
 struct mbuf *m;
 u_char *cp;
 struct ip *ip;
 int s;
 struct mbuf *m2;

 u_char bpfbuf[296 + 16];
 int len = 0;





 for (;;) {





  if (tp->t_outq.c_cc != 0) {
   (*tp->t_oproc)(tp);
   if (tp->t_outq.c_cc > ((((50)+(((64 - sizeof(struct cblock *) - (64/8)))-1))/((64 - sizeof(struct cblock *) - (64/8))))*((64 - sizeof(struct cblock *) - (64/8)))))
    return;
  }



  if (sc == 0L)
   return;
# 525 "openbsd3/net/if_sl.c"
  if (tp->t_outq.c_cn - tp->t_outq.c_cc < 2*296 +2)
   return;





  s = splraise((0x20 + ((6) << 4)));
  { (m) = (&sc->sc_fastq)->ifq_head; if (m) { if (((&sc->sc_fastq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_fastq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_fastq)->ifq_len--; } };
  if (m)
   sc->sc_if.if_data.ifi_omcasts++;
  else
   do { if ((((&sc->sc_if.if_snd))->altq_tbr != 0L)) (m) = tbr_dequeue((&sc->sc_if.if_snd), 1); else if ((((&sc->sc_if.if_snd))->altq_flags & 0x02)) ((m)) = (*((&sc->sc_if.if_snd))->altq_dequeue)(((&sc->sc_if.if_snd)), 1); else { ((m)) = ((&sc->sc_if.if_snd))->ifq_head; if ((m)) { if ((((&sc->sc_if.if_snd))->ifq_head = ((m))->m_hdr.mh_nextpkt) == 0) ((&sc->sc_if.if_snd))->ifq_tail = 0; ((m))->m_hdr.mh_nextpkt = 0; ((&sc->sc_if.if_snd))->ifq_len--; } }; } while (0);
  splx(s);
  if (m == 0L)
   return;
# 549 "openbsd3/net/if_sl.c"
  if (sc->sc_bpf) {
# 558 "openbsd3/net/if_sl.c"
   struct mbuf *m1 = m;
   u_char *cp = bpfbuf + 16;

   len = 0;
   do {
    int mlen = m1->m_hdr.mh_len;

    bcopy(((caddr_t)((m1)->m_hdr.mh_data)), cp, mlen);
    cp += mlen;
    len += mlen;
   } while ((m1 = m1->m_hdr.mh_next) != 0L);
  }

  if ((ip = ((struct ip *)((m)->m_hdr.mh_data)))->ip_p == 6) {
   if (sc->sc_if.if_flags & 0x1000)
    *((u_char *)((m)->m_hdr.mh_data)) |= sl_compress_tcp(m, ip,
        &sc->sc_comp, 1);
  }

  if (sc->sc_bpf) {





   bpfbuf[0] = 1;
   bcopy(((caddr_t)((m)->m_hdr.mh_data)), &bpfbuf[1], 15);
   bpf_tap(sc->sc_bpf, bpfbuf, len + 16);
  }

  sc->sc_lastpacket = time;
# 607 "openbsd3/net/if_sl.c"
  if (tp->t_outq.c_cc == 0) {
   ++sc->sc_if.if_data.ifi_obytes;
   (void) putc(0xc0, &tp->t_outq);
  }

  while (m) {
   u_char *ep;

   cp = ((u_char *)((m)->m_hdr.mh_data)); ep = cp + m->m_hdr.mh_len;
   while (cp < ep) {




    u_char *bp = cp;

    while (cp < ep) {
     switch (*cp++) {
     case 0xdb:
     case 0xc0:
      --cp;
      goto out;
     }
    }
    out:
    if (cp > bp) {





     if (b_to_q((u_char *)bp, cp - bp,



         &tp->t_outq))
      break;
     sc->sc_if.if_data.ifi_obytes += cp - bp;
    }





    if (cp < ep) {
     if (putc(0xdb, &tp->t_outq))
      break;
     if (putc(*cp++ == 0xdb ?
        0xdd : 0xdc,
        &tp->t_outq)) {
      (void) unputc(&tp->t_outq);
      break;
     }
     sc->sc_if.if_data.ifi_obytes += 2;
    }
   }
   { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (m2) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
   m = m2;
  }

  if (putc(0xc0, &tp->t_outq)) {







   (void) unputc(&tp->t_outq);
   (void) putc(0xc0, &tp->t_outq);
   sc->sc_if.if_data.ifi_collisions++;
  } else {
   ++sc->sc_if.if_data.ifi_obytes;
   sc->sc_if.if_data.ifi_opackets++;
  }
 }
}




static struct mbuf *
sl_btom(sc, len)
 struct sl_softc *sc;
 int len;
{
 struct mbuf *m;




 m = sc->sc_mbuf;
 do { { int ms = splraise((0x20 + ((6) << 4))); { (sc->sc_mbuf) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (sc->sc_mbuf) { (sc->sc_mbuf)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (sc->sc_mbuf)->m_hdr.mh_next = (struct mbuf *)0L; (sc->sc_mbuf)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (sc->sc_mbuf)->m_hdr.mh_data = (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_databuf; (sc->sc_mbuf)->m_hdr.mh_flags = 0x0002; { ((&(sc->sc_mbuf)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (sc->sc_mbuf)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (sc->sc_mbuf == 0L) {
  sc->sc_mbuf = m;
  return (0L);
 }
 do { { int ms = splraise((0x20 + ((6) << 4))); { (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (sc->sc_mbuf)->m_hdr.mh_data = (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_buf; (sc->sc_mbuf)->m_hdr.mh_flags |= 0x0001|0x0008; (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (sc->sc_mbuf); (sc->sc_mbuf)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (sc->sc_mbuf); ; ; } while ( 0); } } while ( 0);
 if ((sc->sc_mbuf->m_hdr.mh_flags & 0x0001) == 0) {




  m_freem(sc->sc_mbuf);
  sc->sc_mbuf = m;
  return (0L);
 }
 sc->sc_ep = (u_char *) sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_buf +
  sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_size;

 m->m_hdr.mh_data = sc->sc_pktstart;

 m->m_hdr.mh_len = len;
 m->M_dat.MH.MH_pkthdr.len = len;
 m->M_dat.MH.MH_pkthdr.rcvif = &sc->sc_if;
 return (m);
}




void
slinput(c, tp)
 int c;
 struct tty *tp;
{
 struct sl_softc *sc;
 struct mbuf *m;
 int len;
 int s;

 u_char chdr[15];


 global_tk_nin[get_stack_id()]++;
 sc = (struct sl_softc *)tp->t_sc;
 if (sc == 0L)
  return;
 if (c & 0xff000000 || ((tp->t_state & 0x00008) == 0 &&
     (tp->t_termios.c_cflag & 0x00008000) == 0)) {
  sc->sc_flags |= 0x0001;
  return;
 }
 c &= 0x000000ff;

 ++sc->sc_if.if_data.ifi_ibytes;

 if (sc->sc_if.if_flags & 0x4) {
  if (c == '\033') {




   if (sc->sc_abortcount &&
       time.tv_sec >= sc->sc_starttime + (3*2+2))
    sc->sc_abortcount = 0;




   if (time.tv_sec >= sc->sc_lasttime + 1) {
    if (++sc->sc_abortcount == 1)
     sc->sc_starttime = time.tv_sec;
    if (sc->sc_abortcount >= 3) {
     slclose(tp);
     return;
    }
   }
  } else
   sc->sc_abortcount = 0;
  sc->sc_lasttime = time.tv_sec;
 }

 switch (c) {

 case 0xdd:
  if (sc->sc_escape)
   c = 0xdb;
  break;

 case 0xdc:
  if (sc->sc_escape)
   c = 0xc0;
  break;

 case 0xdb:
  sc->sc_escape = 1;
  return;

 case 0xc0:
  if(sc->sc_flags & 0x0001) {
   sc->sc_flags &= ~0x0001;
   goto newpack;
  }
  len = sc->sc_mp - sc->sc_pktstart;
  if (len < 3)

   goto newpack;


  if (sc->sc_bpf) {
# 816 "openbsd3/net/if_sl.c"
   bcopy(sc->sc_pktstart, chdr, 15);
  }


  if ((c = (*sc->sc_pktstart & 0xf0)) != (4 << 4)) {
   if (c & 0x80)
    c = 0x80;
   else if (c == 0x70)
    *sc->sc_pktstart &= 0x4f;







   if (sc->sc_if.if_flags & 0x1000) {
    len = sl_uncompress_tcp(&sc->sc_pktstart, len,
       (u_int)c, &sc->sc_comp);
    if (len <= 0)
     goto error;
   } else if ((sc->sc_if.if_flags & 0x4000) &&
       c == 0x70 && len >= 40) {
    len = sl_uncompress_tcp(&sc->sc_pktstart, len,
       (u_int)c, &sc->sc_comp);
    if (len <= 0)
     goto error;
    sc->sc_if.if_flags |= 0x1000;
   } else
    goto error;
  }

  m = sl_btom(sc, len);
  if (m == 0L)
   goto error;


  if (sc->sc_bpf) {






   u_char *hp;

   { if ((((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((m))->m_hdr.mh_flags & 0x0002 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_databuf : ((m))->m_hdr.mh_data - ((m))->M_dat.M_databuf)) >= (16)) { (m)->m_hdr.mh_data -= (16); (m)->m_hdr.mh_len += (16); } else (m) = m_prepend((m), (16), (0x0001)); if ((m) && (m)->m_hdr.mh_flags & 0x0002) (m)->M_dat.MH.MH_pkthdr.len += (16); };
   if (m == 0L)
    goto error;

   hp = ((u_char *)((m)->m_hdr.mh_data));
   hp[0] = 0;
   memcpy(&hp[1], chdr, 15);

   s = splraise((0x20 + ((3) << 4)));
   bpf_mtap(sc->sc_bpf, m);
   splx(s);

   m_adj(m, 16);
  }


  sc->sc_if.if_data.ifi_ipackets++;
  sc->sc_lastpacket = time;
  s = splraise((0x20 + ((6) << 4)));
  if (((&global_ipintrq[get_stack_id()])->ifq_len >= (&global_ipintrq[get_stack_id()])->ifq_maxlen)) {
   ((&global_ipintrq[get_stack_id()])->ifq_drops++);
   sc->sc_if.if_data.ifi_ierrors++;
   sc->sc_if.if_data.ifi_iqdrops++;
   m_freem(m);
  } else {
   { (m)->m_hdr.mh_nextpkt = 0; if ((&global_ipintrq[get_stack_id()])->ifq_tail == 0) (&global_ipintrq[get_stack_id()])->ifq_head = m; else (&global_ipintrq[get_stack_id()])->ifq_tail->m_hdr.mh_nextpkt = m; (&global_ipintrq[get_stack_id()])->ifq_tail = m; (&global_ipintrq[get_stack_id()])->ifq_len++; };
   { global_netisr[get_stack_id()] |= 1<<(2); enqueue_randomness(5, (int)(2)); softintr(1 << 30); };
  }
  splx(s);
  goto newpack;
 }
 if (sc->sc_mp < sc->sc_ep) {
  *sc->sc_mp++ = c;
  sc->sc_escape = 0;
  return;
 }


 sc->sc_flags |= 0x0001;

error:
 sc->sc_if.if_data.ifi_ierrors++;
newpack:
 sc->sc_mp = sc->sc_pktstart = (u_char *) sc->sc_mbuf->M_dat.MH.MH_dat.MH_ext.ext_buf +
     (128+sizeof(struct ifnet **)+16);
 sc->sc_escape = 0;
}




int
slioctl(ifp, cmd, data)
 struct ifnet *ifp;
 u_long cmd;
 caddr_t data;
{
 struct sl_softc *sc = ifp->if_softc;
 struct ifaddr *ifa = (struct ifaddr *)data;
 struct ifreq *ifr;
 int s = splraise((0x20 + ((6) << 4))), error = 0;
 struct sl_stats *slsp;

 switch (cmd) {

 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12))):
  if (ifa->ifa_addr->sa_family == 2)
   ifp->if_flags |= 0x1;
  else
   error = 47;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14))):
  if (ifa->ifa_addr->sa_family != 2)
   error = 47;
  break;

 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50))):
  ifr = (struct ifreq *)data;
  if (ifr == 0) {
   error = 47;
   break;
  }
  switch (ifr->ifr_ifru.ifru_addr.sa_family) {


  case 2:
   break;


  default:
   error = 47;
   break;
  }
  break;

 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifslstatsreq) & 0x1fff) << 16) | ((('i')) << 8) | ((123))):
  slsp = &((struct ifslstatsreq *) data)->stats;
  bzero(slsp, sizeof(*slsp));

  slsp->sl.sl_ibytes = sc->sc_if.if_data.ifi_ibytes;
  slsp->sl.sl_obytes = sc->sc_if.if_data.ifi_obytes;
  slsp->sl.sl_ipackets = sc->sc_if.if_data.ifi_ipackets;
  slsp->sl.sl_opackets = sc->sc_if.if_data.ifi_opackets;

  slsp->vj.vjs_packets = sc->sc_comp.sls_packets;
  slsp->vj.vjs_compressed = sc->sc_comp.sls_compressed;
  slsp->vj.vjs_searches = sc->sc_comp.sls_searches;
  slsp->vj.vjs_misses = sc->sc_comp.sls_misses;
  slsp->vj.vjs_uncompressedin = sc->sc_comp.sls_uncompressedin;
  slsp->vj.vjs_compressedin = sc->sc_comp.sls_compressedin;
  slsp->vj.vjs_errorin = sc->sc_comp.sls_errorin;
  slsp->vj.vjs_tossed = sc->sc_comp.sls_tossed;

  break;

 default:
  error = 22;
 }
 splx(s);
 return (error);
}

