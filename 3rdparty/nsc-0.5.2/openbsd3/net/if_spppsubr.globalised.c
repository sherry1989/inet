# 1 "openbsd3/net/if_spppsubr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/if_spppsubr.c"
# 35 "openbsd3/net/if_spppsubr.c"
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
# 36 "openbsd3/net/if_spppsubr.c" 2
# 55 "openbsd3/net/if_spppsubr.c"
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
# 56 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_15_A[NUM_STACKS];  
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_16_A[NUM_STACKS];  
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_63_T; extern volatile  _GLOBAL_63_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_timedelta[NUM_STACKS];   
# 57 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/sys/sockio.h" 1
# 38 "openbsd3/sys/sockio.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 39 "openbsd3/sys/sockio.h" 2
# 58 "openbsd3/net/if_spppsubr.c" 2
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
# 59 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/sys/syslog.h" 1
# 148 "openbsd3/sys/syslog.h"
struct syslog_data {
 int log_file;
 int connected;
 int opened;
 int log_stat;
 const char *log_tag;
 int log_fac;
 int log_mask;
};
# 213 "openbsd3/sys/syslog.h"
void logpri(int);
void log(int, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int addlog(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void logwakeup(void);
# 60 "openbsd3/net/if_spppsubr.c" 2
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
typedef  struct kmemstats   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_17_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_18_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 61 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 38 "openbsd3/sys/mbuf.h"
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






typedef  struct pool_allocator   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_19_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_mclpool[NUM_STACKS];    

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
# 62 "openbsd3/net/if_spppsubr.c" 2


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
# 65 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/sys/md5k.h" 1
# 30 "openbsd3/sys/md5k.h"
typedef void *POINTER;


typedef u_int16_t UINT2;


typedef u_int32_t UINT4;


typedef struct {
 UINT4 state[4];
 UINT4 count[2];
 u_int8_t buffer[64];
} MD5_CTX;



void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);
# 66 "openbsd3/net/if_spppsubr.c" 2




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
typedef  int   ( *_GLOBAL_95_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_95_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_97_T; extern  _GLOBAL_97_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_if_indexlim[NUM_STACKS];   

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
# 71 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_netisr[NUM_STACKS];   

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


typedef  struct rndstats   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 86 "openbsd3/net/netisr.h" 2
# 72 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 73 "openbsd3/net/if_spppsubr.c" 2
# 83 "openbsd3/net/if_spppsubr.c"
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
typedef  const struct sockaddr_in6    _GLOBAL_102_T; extern  _GLOBAL_102_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_103_T; extern  _GLOBAL_103_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_104_T; extern  _GLOBAL_104_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_105_T; extern  _GLOBAL_105_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_106_T; extern  _GLOBAL_106_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_107_T; extern  _GLOBAL_107_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_108_T; extern  _GLOBAL_108_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_109_T; extern  _GLOBAL_109_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_110_T; extern  _GLOBAL_110_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_111_T; extern  _GLOBAL_111_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_112_T; extern  _GLOBAL_112_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 84 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 85 "openbsd3/net/if_spppsubr.c" 2
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
typedef  struct in_ifaddrhead   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_20_A[NUM_STACKS];  
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
typedef  struct in6_ifaddr   _GLOBAL_116_T; extern  _GLOBAL_116_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_117_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_21_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_120_T; extern  _GLOBAL_120_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_120_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_22_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_in6_maxmtu[NUM_STACKS];    
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
# 86 "openbsd3/net/if_spppsubr.c" 2
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
# 87 "openbsd3/net/if_spppsubr.c" 2
# 1 "openbsd3/netinet/tcp.h" 1
# 38 "openbsd3/netinet/tcp.h"
typedef u_int32_t tcp_seq;





struct tcphdr {
 u_int16_t th_sport;
 u_int16_t th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int8_t th_x2:4,
    th_off:4;





 u_int8_t th_flags;
# 66 "openbsd3/netinet/tcp.h"
 u_int16_t th_win;
 u_int16_t th_sum;
 u_int16_t th_urp;
};
# 88 "openbsd3/net/if_spppsubr.c" 2

# 1 "openbsd3/netinet/if_ether.h" 1
# 51 "openbsd3/netinet/if_ether.h"
struct ether_addr {
 u_int8_t ether_addr_octet[6];
};





struct ether_header {
 u_int8_t ether_dhost[6];
 u_int8_t ether_shost[6];
 u_int16_t ether_type;
};

# 1 "openbsd3/net/ethertypes.h" 1
# 66 "openbsd3/netinet/if_ether.h" 2
# 121 "openbsd3/netinet/if_ether.h"
struct ether_arp {
 struct arphdr ea_hdr;
 u_int8_t arp_sha[6];
 u_int8_t arp_spa[4];
 u_int8_t arp_tha[6];
 u_int8_t arp_tpa[4];
};
# 139 "openbsd3/netinet/if_ether.h"
struct arpcom {
 struct ifnet ac_if;
 u_int8_t ac_enaddr[6];
 char ac__pad[2];
 struct { struct ether_multi *lh_first; } ac_multiaddrs;
 int ac_multicnt;
};

struct llinfo_arp {
 struct { struct llinfo_arp *le_next; struct llinfo_arp **le_prev; } la_list;
 struct rtentry *la_rt;
 struct mbuf *la_hold;
 long la_asked;

};

struct sockaddr_inarp {
 u_int8_t sin_len;
 u_int8_t sin_family;
 u_int16_t sin_port;
 struct in_addr sin_addr;
 struct in_addr sin_srcaddr;
 u_int16_t sin_tos;
 u_int16_t sin_other;

};
# 174 "openbsd3/netinet/if_ether.h"
typedef  u_int8_t  _GLOBAL_122_T; extern  _GLOBAL_122_T  _GLOBAL_0_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_1_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_2_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_3_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_4_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_5_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_6_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_7_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_8_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_9_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_10_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_11_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_12_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_13_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_14_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_15_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_16_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_17_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_18_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_19_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_20_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_21_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_22_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_23_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_24_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_25_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_26_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_27_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_28_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_29_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_30_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_31_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_32_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_33_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_34_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_35_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_36_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_37_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_38_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_39_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_40_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_41_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_42_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_43_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_44_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_45_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_46_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_47_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_48_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_122_T  _GLOBAL_49_etherbroadcastaddr_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_etherbroadcastaddr_I) *_GLOBAL_etherbroadcastaddr_23_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_123_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_24_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_124_T; extern  _GLOBAL_124_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_124_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_25_A[NUM_STACKS];  
typedef  struct ifqueue   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_arpintrq[NUM_STACKS];    

void arpwhohas(struct arpcom *, struct in_addr *);
void arpintr(void);
int arpresolve(struct arpcom *,
     struct rtentry *, struct mbuf *, struct sockaddr *, u_char *);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

int ether_addmulti(struct ifreq *, struct arpcom *);
int ether_delmulti(struct ifreq *, struct arpcom *);
int ether_multiaddr(struct sockaddr *, u_int8_t[], u_int8_t[]);
# 199 "openbsd3/netinet/if_ether.h"
struct ether_multi {
 u_int8_t enm_addrlo[6];
 u_int8_t enm_addrhi[6];
 struct arpcom *enm_ac;
 u_int enm_refcount;
 struct { struct ether_multi *le_next; struct ether_multi **le_prev; } enm_list;
};





struct ether_multistep {
 struct ether_multi *e_enm;
};
# 259 "openbsd3/netinet/if_ether.h"
typedef  struct ifnet   _GLOBAL_126_T; extern  _GLOBAL_126_T  * global_myip_ifp[NUM_STACKS];    

void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
int arpresolve(struct arpcom *, struct rtentry *, struct mbuf *,
      struct sockaddr *, u_char *);
void arpintr(void);
int arpioctl(u_long, caddr_t);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arprequest(struct ifnet *, u_int32_t *, u_int32_t *, u_int8_t *);
void revarpinput(struct mbuf *);
void in_revarpinput(struct mbuf *);
void revarprequest(struct ifnet *);
int revarpwhoarewe(struct ifnet *, struct in_addr *, struct in_addr *);
int revarpwhoami(struct in_addr *, struct ifnet *);
int db_show_arptab(void);

u_int32_t ether_crc32_le(const u_int8_t *, size_t);
u_int32_t ether_crc32_be(const u_int8_t *, size_t);
# 90 "openbsd3/net/if_spppsubr.c" 2
# 114 "openbsd3/net/if_spppsubr.c"
# 1 "openbsd3/net/if_sppp.h" 1
# 47 "openbsd3/net/if_sppp.h"
struct slcp {
 u_long opts;
 u_long magic;
 u_long mru;
 u_long their_mru;
 u_long protos;
 u_char echoid;

 int timeout;
 int max_terminate;
 int max_configure;
 int max_failure;
};



struct sipcp {
 u_long opts;
 u_int flags;



};




struct sauth {
 u_short proto;
 u_short flags;



 u_char name[32];
 u_char secret[16];
 u_char challenge[16];
};
# 95 "openbsd3/net/if_sppp.h"
enum ppp_phase {
 PHASE_DEAD, PHASE_ESTABLISH, PHASE_TERMINATE,
 PHASE_AUTHENTICATE, PHASE_NETWORK
};

struct sppp {

 struct ifnet pp_if;
 struct ifqueue pp_fastq;
 struct ifqueue pp_cpq;
 struct sppp *pp_next;
 u_int pp_flags;
 u_short pp_alivecnt;
 u_short pp_loopcnt;
 u_long pp_seq;
 u_long pp_rseq;
 enum ppp_phase pp_phase;
 int state[(3 + 1)];
 u_char confid[(3 + 1)];
 int rst_counter[(3 + 1)];
 int fail_counter[(3 + 1)];
 struct timeout ch[(3 + 1)];
 struct timeout pap_my_to_ch;
 struct slcp lcp;
 struct sipcp ipcp;
 struct sauth myauth;
 struct sauth hisauth;
# 130 "openbsd3/net/if_sppp.h"
 void (*pp_up)(struct sppp *sp);
 void (*pp_down)(struct sppp *sp);






 void (*pp_tls)(struct sppp *sp);
 void (*pp_tlf)(struct sppp *sp);







 void (*pp_con)(struct sppp *sp);
 void (*pp_chg)(struct sppp *sp, int new_state);
};
# 176 "openbsd3/net/if_sppp.h"
struct spppreq {
 int cmd;
 struct sppp defs;
};


void sppp_attach (struct ifnet *ifp);
void sppp_detach (struct ifnet *ifp);
void sppp_input (struct ifnet *ifp, struct mbuf *m);


void spppattach (struct ifnet *ifp);
int sppp_ioctl(struct ifnet *ifp, u_long cmd, void *data);

struct mbuf *sppp_dequeue (struct ifnet *ifp);
struct mbuf *sppp_pick(struct ifnet *ifp);
int sppp_isempty (struct ifnet *ifp);
void sppp_flush (struct ifnet *ifp);
# 115 "openbsd3/net/if_spppsubr.c" 2
# 218 "openbsd3/net/if_spppsubr.c"
struct ppp_header {
 u_char address;
 u_char control;
 u_short protocol;
};


struct lcp_header {
 u_char type;
 u_char ident;
 u_short len;
};


struct cisco_packet {
 u_long type;
 u_long par1;
 u_long par2;
 u_short rel;
 u_short time0;
 u_short time1;
};
# 248 "openbsd3/net/if_spppsubr.c"
struct cp {
 u_short proto;
 u_char protoidx;
 u_char flags;




 const char *name;

 void (*Up)(struct sppp *sp);
 void (*Down)(struct sppp *sp);
 void (*Open)(struct sppp *sp);
 void (*Close)(struct sppp *sp);
 void (*TO)(void *sp);
 int (*RCR)(struct sppp *sp, struct lcp_header *h, int len);
 void (*RCN_rej)(struct sppp *sp, struct lcp_header *h, int len);
 void (*RCN_nak)(struct sppp *sp, struct lcp_header *h, int len);

 void (*tlu)(struct sppp *sp);
 void (*tld)(struct sppp *sp);
 void (*tls)(struct sppp *sp);
 void (*tlf)(struct sppp *sp);
 void (*scr)(struct sppp *sp);
};

typedef  struct sppp   _GLOBAL_127_T; static  _GLOBAL_127_T  * global_spppq[NUM_STACKS];    

typedef  struct timeout   _GLOBAL_128_T; static  _GLOBAL_128_T  global_keepalive_ch[NUM_STACKS];    
# 298 "openbsd3/net/if_spppsubr.c"
typedef  u_short  _GLOBAL_129_T; static  _GLOBAL_129_T  _GLOBAL_0_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_1_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_2_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_3_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_4_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_5_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_6_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_7_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_8_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_9_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_10_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_11_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_12_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_13_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_14_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_15_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_16_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_17_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_18_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_19_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_20_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_21_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_22_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_23_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_24_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_25_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_26_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_27_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_28_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_29_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_30_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_31_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_32_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_33_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_34_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_35_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_36_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_37_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_38_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_39_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_40_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_41_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_42_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_43_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_44_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_45_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_46_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_47_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_48_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_129_T  _GLOBAL_49_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_interactive_ports_I) *_GLOBAL_interactive_ports_26_A[NUM_STACKS] = { &_GLOBAL_0_interactive_ports_I, &_GLOBAL_1_interactive_ports_I, &_GLOBAL_2_interactive_ports_I, &_GLOBAL_3_interactive_ports_I, &_GLOBAL_4_interactive_ports_I, &_GLOBAL_5_interactive_ports_I, &_GLOBAL_6_interactive_ports_I, &_GLOBAL_7_interactive_ports_I, &_GLOBAL_8_interactive_ports_I, &_GLOBAL_9_interactive_ports_I, &_GLOBAL_10_interactive_ports_I, &_GLOBAL_11_interactive_ports_I, &_GLOBAL_12_interactive_ports_I, &_GLOBAL_13_interactive_ports_I, &_GLOBAL_14_interactive_ports_I, &_GLOBAL_15_interactive_ports_I, &_GLOBAL_16_interactive_ports_I, &_GLOBAL_17_interactive_ports_I, &_GLOBAL_18_interactive_ports_I, &_GLOBAL_19_interactive_ports_I, &_GLOBAL_20_interactive_ports_I, &_GLOBAL_21_interactive_ports_I, &_GLOBAL_22_interactive_ports_I, &_GLOBAL_23_interactive_ports_I, &_GLOBAL_24_interactive_ports_I, &_GLOBAL_25_interactive_ports_I, &_GLOBAL_26_interactive_ports_I, &_GLOBAL_27_interactive_ports_I, &_GLOBAL_28_interactive_ports_I, &_GLOBAL_29_interactive_ports_I, &_GLOBAL_30_interactive_ports_I, &_GLOBAL_31_interactive_ports_I, &_GLOBAL_32_interactive_ports_I, &_GLOBAL_33_interactive_ports_I, &_GLOBAL_34_interactive_ports_I, &_GLOBAL_35_interactive_ports_I, &_GLOBAL_36_interactive_ports_I, &_GLOBAL_37_interactive_ports_I, &_GLOBAL_38_interactive_ports_I, &_GLOBAL_39_interactive_ports_I, &_GLOBAL_40_interactive_ports_I, &_GLOBAL_41_interactive_ports_I, &_GLOBAL_42_interactive_ports_I, &_GLOBAL_43_interactive_ports_I, &_GLOBAL_44_interactive_ports_I, &_GLOBAL_45_interactive_ports_I, &_GLOBAL_46_interactive_ports_I, &_GLOBAL_47_interactive_ports_I, &_GLOBAL_48_interactive_ports_I, &_GLOBAL_49_interactive_ports_I, };    
    
    








 int sppp_output(struct ifnet *ifp, struct mbuf *m,
         struct sockaddr *dst, struct rtentry *rt);

 void sppp_cisco_send(struct sppp *sp, int type, long par1, long par2);
 void sppp_cisco_input(struct sppp *sp, struct mbuf *m);

 void sppp_cp_input(const struct cp *cp, struct sppp *sp,
     struct mbuf *m);
 void sppp_cp_send(struct sppp *sp, u_short proto, u_char type,
    u_char ident, u_short len, void *data);



 void sppp_cp_change_state(const struct cp *cp, struct sppp *sp,
     int newstate);
 void sppp_auth_send(const struct cp *cp,
      struct sppp *sp, u_char type, u_char id,
      ...);

 void sppp_up_event(const struct cp *cp, struct sppp *sp);
 void sppp_down_event(const struct cp *cp, struct sppp *sp);
 void sppp_open_event(const struct cp *cp, struct sppp *sp);
 void sppp_close_event(const struct cp *cp, struct sppp *sp);
 void sppp_increasing_timeout(const struct cp *cp, struct sppp *sp);
 void sppp_to_event(const struct cp *cp, struct sppp *sp);

 void sppp_null(struct sppp *sp);

 void sppp_lcp_init(struct sppp *sp);
 void sppp_lcp_up(struct sppp *sp);
 void sppp_lcp_down(struct sppp *sp);
 void sppp_lcp_open(struct sppp *sp);
 void sppp_lcp_close(struct sppp *sp);
 void sppp_lcp_TO(void *sp);
 int sppp_lcp_RCR(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_lcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_lcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_lcp_tlu(struct sppp *sp);
 void sppp_lcp_tld(struct sppp *sp);
 void sppp_lcp_tls(struct sppp *sp);
 void sppp_lcp_tlf(struct sppp *sp);
 void sppp_lcp_scr(struct sppp *sp);
 void sppp_lcp_check_and_close(struct sppp *sp);
 int sppp_ncp_check(struct sppp *sp);

 void sppp_ipcp_init(struct sppp *sp);
 void sppp_ipcp_up(struct sppp *sp);
 void sppp_ipcp_down(struct sppp *sp);
 void sppp_ipcp_open(struct sppp *sp);
 void sppp_ipcp_close(struct sppp *sp);
 void sppp_ipcp_TO(void *sp);
 int sppp_ipcp_RCR(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_ipcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_ipcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len);
 void sppp_ipcp_tlu(struct sppp *sp);
 void sppp_ipcp_tld(struct sppp *sp);
 void sppp_ipcp_tls(struct sppp *sp);
 void sppp_ipcp_tlf(struct sppp *sp);
 void sppp_ipcp_scr(struct sppp *sp);

 void sppp_pap_input(struct sppp *sp, struct mbuf *m);
 void sppp_pap_init(struct sppp *sp);
 void sppp_pap_open(struct sppp *sp);
 void sppp_pap_close(struct sppp *sp);
 void sppp_pap_TO(void *sp);
 void sppp_pap_my_TO(void *sp);
 void sppp_pap_tlu(struct sppp *sp);
 void sppp_pap_tld(struct sppp *sp);
 void sppp_pap_scr(struct sppp *sp);

 void sppp_chap_input(struct sppp *sp, struct mbuf *m);
 void sppp_chap_init(struct sppp *sp);
 void sppp_chap_open(struct sppp *sp);
 void sppp_chap_close(struct sppp *sp);
 void sppp_chap_TO(void *sp);
 void sppp_chap_tlu(struct sppp *sp);
 void sppp_chap_tld(struct sppp *sp);
 void sppp_chap_scr(struct sppp *sp);

 const char *sppp_auth_type_name(u_short proto, u_char type);
 const char *sppp_cp_type_name(u_char type);
 const char *sppp_dotted_quad(u_long addr);
 const char *sppp_ipcp_opt_name(u_char opt);
 const char *sppp_lcp_opt_name(u_char opt);
 const char *sppp_phase_name(enum ppp_phase phase);
 const char *sppp_proto_name(u_short proto);
 const char *sppp_state_name(int state);
 int sppp_params(struct sppp *sp, u_long cmd, void *data);
 int sppp_strnlen(u_char *p, int max);
 void sppp_get_ip_addrs(struct sppp *sp, u_long *src, u_long *dst,
         u_long *srcmask);
 void sppp_keepalive(void *dummy);
 void sppp_phase_network(struct sppp *sp);
 void sppp_print_bytes(const u_char *p, u_short len);
 void sppp_print_string(const char *p, u_short len);
 void sppp_qflush(struct ifqueue *ifq);
 void sppp_set_ip_addr(struct sppp *sp, u_long src);


typedef  const struct cp    _GLOBAL_130_T; static  _GLOBAL_130_T  global_lcp[NUM_STACKS] = {  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_131_T; static  _GLOBAL_131_T  global_ipcp[NUM_STACKS] = {  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_132_T; static  _GLOBAL_132_T  global_pap[NUM_STACKS] = {  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 2  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_133_T; static  _GLOBAL_133_T  global_chap[NUM_STACKS] = {  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 3  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_134_T; static  _GLOBAL_134_T  * _GLOBAL_0_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[0]  , & global_ipcp[0]   , & global_pap[0]   , & global_chap[0]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_1_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[1]  , & global_ipcp[1]   , & global_pap[1]   , & global_chap[1]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_2_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[2]  , & global_ipcp[2]   , & global_pap[2]   , & global_chap[2]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_3_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[3]  , & global_ipcp[3]   , & global_pap[3]   , & global_chap[3]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_4_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[4]  , & global_ipcp[4]   , & global_pap[4]   , & global_chap[4]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_5_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[5]  , & global_ipcp[5]   , & global_pap[5]   , & global_chap[5]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_6_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[6]  , & global_ipcp[6]   , & global_pap[6]   , & global_chap[6]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_7_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[7]  , & global_ipcp[7]   , & global_pap[7]   , & global_chap[7]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_8_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[8]  , & global_ipcp[8]   , & global_pap[8]   , & global_chap[8]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_9_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[9]  , & global_ipcp[9]   , & global_pap[9]   , & global_chap[9]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_10_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[10]  , & global_ipcp[10]   , & global_pap[10]   , & global_chap[10]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_11_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[11]  , & global_ipcp[11]   , & global_pap[11]   , & global_chap[11]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_12_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[12]  , & global_ipcp[12]   , & global_pap[12]   , & global_chap[12]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_13_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[13]  , & global_ipcp[13]   , & global_pap[13]   , & global_chap[13]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_14_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[14]  , & global_ipcp[14]   , & global_pap[14]   , & global_chap[14]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_15_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[15]  , & global_ipcp[15]   , & global_pap[15]   , & global_chap[15]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_16_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[16]  , & global_ipcp[16]   , & global_pap[16]   , & global_chap[16]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_17_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[17]  , & global_ipcp[17]   , & global_pap[17]   , & global_chap[17]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_18_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[18]  , & global_ipcp[18]   , & global_pap[18]   , & global_chap[18]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_19_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[19]  , & global_ipcp[19]   , & global_pap[19]   , & global_chap[19]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_20_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[20]  , & global_ipcp[20]   , & global_pap[20]   , & global_chap[20]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_21_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[21]  , & global_ipcp[21]   , & global_pap[21]   , & global_chap[21]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_22_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[22]  , & global_ipcp[22]   , & global_pap[22]   , & global_chap[22]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_23_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[23]  , & global_ipcp[23]   , & global_pap[23]   , & global_chap[23]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_24_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[24]  , & global_ipcp[24]   , & global_pap[24]   , & global_chap[24]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_25_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[25]  , & global_ipcp[25]   , & global_pap[25]   , & global_chap[25]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_26_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[26]  , & global_ipcp[26]   , & global_pap[26]   , & global_chap[26]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_27_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[27]  , & global_ipcp[27]   , & global_pap[27]   , & global_chap[27]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_28_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[28]  , & global_ipcp[28]   , & global_pap[28]   , & global_chap[28]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_29_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[29]  , & global_ipcp[29]   , & global_pap[29]   , & global_chap[29]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_30_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[30]  , & global_ipcp[30]   , & global_pap[30]   , & global_chap[30]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_31_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[31]  , & global_ipcp[31]   , & global_pap[31]   , & global_chap[31]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_32_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[32]  , & global_ipcp[32]   , & global_pap[32]   , & global_chap[32]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_33_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[33]  , & global_ipcp[33]   , & global_pap[33]   , & global_chap[33]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_34_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[34]  , & global_ipcp[34]   , & global_pap[34]   , & global_chap[34]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_35_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[35]  , & global_ipcp[35]   , & global_pap[35]   , & global_chap[35]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_36_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[36]  , & global_ipcp[36]   , & global_pap[36]   , & global_chap[36]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_37_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[37]  , & global_ipcp[37]   , & global_pap[37]   , & global_chap[37]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_38_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[38]  , & global_ipcp[38]   , & global_pap[38]   , & global_chap[38]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_39_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[39]  , & global_ipcp[39]   , & global_pap[39]   , & global_chap[39]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_40_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[40]  , & global_ipcp[40]   , & global_pap[40]   , & global_chap[40]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_41_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[41]  , & global_ipcp[41]   , & global_pap[41]   , & global_chap[41]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_42_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[42]  , & global_ipcp[42]   , & global_pap[42]   , & global_chap[42]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_43_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[43]  , & global_ipcp[43]   , & global_pap[43]   , & global_chap[43]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_44_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[44]  , & global_ipcp[44]   , & global_pap[44]   , & global_chap[44]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_45_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[45]  , & global_ipcp[45]   , & global_pap[45]   , & global_chap[45]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_46_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[46]  , & global_ipcp[46]   , & global_pap[46]   , & global_chap[46]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_47_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[47]  , & global_ipcp[47]   , & global_pap[47]   , & global_chap[47]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_48_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[48]  , & global_ipcp[48]   , & global_pap[48]   , & global_chap[48]   , }  ; static  _GLOBAL_134_T  * _GLOBAL_49_cps_I [ ( 3 + 1  )  ]   = { & global_lcp[49]  , & global_ipcp[49]   , & global_pap[49]   , & global_chap[49]   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cps_I) *_GLOBAL_cps_27_A[NUM_STACKS] = { &_GLOBAL_0_cps_I, &_GLOBAL_1_cps_I, &_GLOBAL_2_cps_I, &_GLOBAL_3_cps_I, &_GLOBAL_4_cps_I, &_GLOBAL_5_cps_I, &_GLOBAL_6_cps_I, &_GLOBAL_7_cps_I, &_GLOBAL_8_cps_I, &_GLOBAL_9_cps_I, &_GLOBAL_10_cps_I, &_GLOBAL_11_cps_I, &_GLOBAL_12_cps_I, &_GLOBAL_13_cps_I, &_GLOBAL_14_cps_I, &_GLOBAL_15_cps_I, &_GLOBAL_16_cps_I, &_GLOBAL_17_cps_I, &_GLOBAL_18_cps_I, &_GLOBAL_19_cps_I, &_GLOBAL_20_cps_I, &_GLOBAL_21_cps_I, &_GLOBAL_22_cps_I, &_GLOBAL_23_cps_I, &_GLOBAL_24_cps_I, &_GLOBAL_25_cps_I, &_GLOBAL_26_cps_I, &_GLOBAL_27_cps_I, &_GLOBAL_28_cps_I, &_GLOBAL_29_cps_I, &_GLOBAL_30_cps_I, &_GLOBAL_31_cps_I, &_GLOBAL_32_cps_I, &_GLOBAL_33_cps_I, &_GLOBAL_34_cps_I, &_GLOBAL_35_cps_I, &_GLOBAL_36_cps_I, &_GLOBAL_37_cps_I, &_GLOBAL_38_cps_I, &_GLOBAL_39_cps_I, &_GLOBAL_40_cps_I, &_GLOBAL_41_cps_I, &_GLOBAL_42_cps_I, &_GLOBAL_43_cps_I, &_GLOBAL_44_cps_I, &_GLOBAL_45_cps_I, &_GLOBAL_46_cps_I, &_GLOBAL_47_cps_I, &_GLOBAL_48_cps_I, &_GLOBAL_49_cps_I, };        
 
 
 
 

# 454 "openbsd3/net/if_spppsubr.c"
void
spppattach(struct ifnet *ifp)
{
}





void
sppp_input(struct ifnet *ifp, struct mbuf *m)
{
 struct ppp_header *h;
 struct ifqueue *inq = 0;
 int s;
 struct sppp *sp = (struct sppp *)ifp;
 int debug = ifp->if_flags & 0x4;

 if (ifp->if_flags & 0x1)

  ifp->if_data.ifi_ibytes += m->M_dat.MH.MH_pkthdr.len + 3;

 if (m->M_dat.MH.MH_pkthdr.len <= sizeof (struct ppp_header)) {

  if (debug)
   log(7,
       "%s: " "input packet is too small, %d bytes\n",
       (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len);
   drop:
  ++ifp->if_data.ifi_ierrors;
  ++ifp->if_data.ifi_iqdrops;
  m_freem (m);
  return;
 }


 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 m_adj (m, sizeof (struct ppp_header));

 switch (h->address) {
 case 0xff:
  if (h->control != 0x03)
   goto invalid;
  if (sp->pp_flags & 0x02) {
   if (debug)
    log(7,
        "%s: " "PPP packet in Cisco mode "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   goto drop;
  }
  switch (__extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
  default:
   if (sp->state[0] == 9)
    sppp_cp_send (sp, 0xc021, 8,
     ++sp->pp_seq, m->M_dat.MH.MH_pkthdr.len + 2,
     &h->protocol);
   if (debug)
    log(7,
        "%s: " "invalid input protocol "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   ++ifp->if_data.ifi_noproto;
   goto drop;
  case 0xc021:
   sppp_cp_input(&global_lcp[get_stack_id()], sp, m);
   m_freem (m);
   return;
  case 0xc023:
   if (sp->pp_phase >= PHASE_AUTHENTICATE)
    sppp_pap_input(sp, m);
   m_freem (m);
   return;
  case 0xc223:
   if (sp->pp_phase >= PHASE_AUTHENTICATE)
    sppp_chap_input(sp, m);
   m_freem (m);
   return;

  case 0x8021:
   if (sp->pp_phase == PHASE_NETWORK)
    sppp_cp_input(&global_ipcp[get_stack_id()], sp, m);
   m_freem (m);
   return;
  case 0x0021:
   if (sp->state[1] == 9) {
    { global_netisr[get_stack_id()] |= 1<<(2); enqueue_randomness(5, (int)(2)); softintr(1 << 30); };
    inq = &global_ipintrq[get_stack_id()];
   }
   break;
# 574 "openbsd3/net/if_spppsubr.c"
  }
  break;
 case 0x8f:
 case 0x0f:

  if (! (sp->pp_flags & 0x02)) {
   if (debug)
    log(7,
        "%s: " "Cisco packet in PPP mode "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   goto drop;
  }
  switch (__extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) {
  default:
   ++ifp->if_data.ifi_noproto;
   goto invalid;
  case 0x8035:
   sppp_cisco_input ((struct sppp*) ifp, m);
   m_freem (m);
   return;

  case 0x0800:
   { global_netisr[get_stack_id()] |= 1<<(2); enqueue_randomness(5, (int)(2)); softintr(1 << 30); };
   inq = &global_ipintrq[get_stack_id()];
   break;
# 614 "openbsd3/net/if_spppsubr.c"
  }
  break;
 default:
   invalid:
  if (debug)
   log(7,
       "%s: " "invalid input packet "
       "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
       (ifp)->if_xname,
       h->address, h->control, __extension__({ u_int16_t __swap16_x = (h->protocol); __builtin_constant_p(h->protocol) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
  goto drop;
 }

 if (! (ifp->if_flags & 0x1) || ! inq)
  goto drop;


 s = splraise((0x20 + ((6) << 4)));
 if (((inq)->ifq_len >= (inq)->ifq_maxlen)) {

  ((inq)->ifq_drops++);
  splx(s);
  if (debug)
   log(7, "%s: " "protocol queue overflow\n",
    (ifp)->if_xname);
  goto drop;
 }
 { (m)->m_hdr.mh_nextpkt = 0; if ((inq)->ifq_tail == 0) (inq)->ifq_head = m; else (inq)->ifq_tail->m_hdr.mh_nextpkt = m; (inq)->ifq_tail = m; (inq)->ifq_len++; };
 splx(s);
}




 int
sppp_output(struct ifnet *ifp, struct mbuf *m,
     struct sockaddr *dst, struct rtentry *rt)
{
 struct sppp *sp = (struct sppp*) ifp;
 struct ppp_header *h;
 struct ifqueue *ifq = 0L;
 int s, len, rv = 0;

 s = splraise((0x20 + ((6) << 4)));

 if ((ifp->if_flags & 0x1) == 0 ||
     (ifp->if_flags & (0x40 | 0x2000)) == 0) {
  m_freem (m);
  splx (s);
  return (50);
 }

 if ((ifp->if_flags & (0x40 | 0x2000)) == 0x2000) {




  ifp->if_flags |= 0x40;
  splx(s);
  global_lcp[get_stack_id()].Open(sp);
  s = splraise((0x20 + ((6) << 4)));
 }






 if (dst->sa_family == 2) {

  struct ip *ip = ((struct ip*)((m)->m_hdr.mh_data));
  struct tcphdr *tcp = (struct tcphdr*) ((long*)ip + ip->ip_hl);
# 698 "openbsd3/net/if_spppsubr.c"
  if(ip->ip_src.s_addr == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))
  {
   m_freem(m);
   splx(s);
   if(ip->ip_p == 6)
    return (49);
   else
    return (0);
  }


  if (! ((&sp->pp_fastq)->ifq_len >= (&sp->pp_fastq)->ifq_maxlen) &&
      ((ip->ip_tos & 0x10) ||
           (ip->ip_p == 6 &&
            m->m_hdr.mh_len >= sizeof (struct ip) + sizeof (struct tcphdr) &&
            (((*_GLOBAL_interactive_ports_26_A[get_stack_id()])[(__extension__({ u_int16_t __swap16_x = (tcp->th_sport); __builtin_constant_p(tcp->th_sport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) & 7] == (__extension__({ u_int16_t __swap16_x = (tcp->th_sport); __builtin_constant_p(tcp->th_sport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))) ||
             ((*_GLOBAL_interactive_ports_26_A[get_stack_id()])[(__extension__({ u_int16_t __swap16_x = (tcp->th_dport); __builtin_constant_p(tcp->th_dport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) & 7] == (__extension__({ u_int16_t __swap16_x = (tcp->th_dport); __builtin_constant_p(tcp->th_dport) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })))))))
   ifq = &sp->pp_fastq;
 }





 { if ((((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((m))->m_hdr.mh_flags & 0x0002 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_databuf : ((m))->m_hdr.mh_data - ((m))->M_dat.M_databuf)) >= (sizeof (struct ppp_header))) { (m)->m_hdr.mh_data -= (sizeof (struct ppp_header)); (m)->m_hdr.mh_len += (sizeof (struct ppp_header)); } else (m) = m_prepend((m), (sizeof (struct ppp_header)), (0x0001)); if ((m) && (m)->m_hdr.mh_flags & 0x0002) (m)->M_dat.MH.MH_pkthdr.len += (sizeof (struct ppp_header)); };
 if (! m) {
  if (ifp->if_flags & 0x4)
   log(7, "%s: " "no memory for transmit header\n",
    (ifp)->if_xname);
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (55);
 }




 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 if (sp->pp_flags & 0x02) {
  h->address = 0x0f;
  h->control = 0;
 } else {
  h->address = 0xff;
  h->control = 0x03;
 }

 switch (dst->sa_family) {

 case 2:
  if (sp->pp_flags & 0x02)
   h->protocol = __extension__({ u_int16_t __swap16_x = (0x0800); __builtin_constant_p(0x0800) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  else {
# 759 "openbsd3/net/if_spppsubr.c"
   h->protocol = __extension__({ u_int16_t __swap16_x = (0x0021); __builtin_constant_p(0x0021) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   if (sp->state[1] != 9)
    rv = 50;
  }
  break;
# 785 "openbsd3/net/if_spppsubr.c"
 default:
  m_freem (m);
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (47);
 }





 len = m->M_dat.MH.MH_pkthdr.len;
 if (ifq != 0L

     && ((&ifp->if_snd)->altq_flags & 0x02) == 0

  ) {
  if (((ifq)->ifq_len >= (ifq)->ifq_maxlen)) {
   ((&ifp->if_snd)->ifq_drops++);
   m_freem (m);
   if (rv == 0)
    rv = 55;
  }
  { (m)->m_hdr.mh_nextpkt = 0; if ((ifq)->ifq_tail == 0) (ifq)->ifq_head = m; else (ifq)->ifq_tail->m_hdr.mh_nextpkt = m; (ifq)->ifq_tail = m; (ifq)->ifq_len++; };
 } else
  do { if ((((&ifp->if_snd))->altq_flags & 0x02)) ((rv)) = (*((&ifp->if_snd))->altq_enqueue)(((&ifp->if_snd)),((m)),((0L))); else { if ((((&ifp->if_snd))->ifq_len >= ((&ifp->if_snd))->ifq_maxlen)) { m_freem((m)); (rv) = 55; } else { { ((m))->m_hdr.mh_nextpkt = 0; if (((&ifp->if_snd))->ifq_tail == 0) ((&ifp->if_snd))->ifq_head = (m); else ((&ifp->if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m); ((&ifp->if_snd))->ifq_tail = (m); ((&ifp->if_snd))->ifq_len++; }; (rv) = 0; } } if ((rv)) (&ifp->if_snd)->ifq_drops++; } while (0);
 if (rv != 0) {
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (rv);
 }

 if (! (ifp->if_flags & 0x400))
  (*ifp->if_start) (ifp);






 ifp->if_data.ifi_obytes += len + 3;
 splx (s);
 return (0);
}

void
sppp_attach(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;


 if (! global_spppq[get_stack_id()])



  timeout_set(&global_keepalive_ch[get_stack_id()], sppp_keepalive, 0L);
  timeout_add(&global_keepalive_ch[get_stack_id()], global_hz[get_stack_id()] * 10);



 sp->pp_next = global_spppq[get_stack_id()];
 global_spppq[get_stack_id()] = sp;

 sp->pp_if.if_data.ifi_type = 0x17;
 sp->pp_if.if_output = sppp_output;
 ((&sp->pp_if.if_snd)->ifq_maxlen = (50));
 sp->pp_fastq.ifq_maxlen = 50;
 sp->pp_cpq.ifq_maxlen = 50;
 sp->pp_loopcnt = 0;
 sp->pp_alivecnt = 0;
 sp->pp_seq = 0;
 sp->pp_rseq = 0;
 sp->pp_phase = PHASE_DEAD;
 sp->pp_up = global_lcp[get_stack_id()].Up;
 sp->pp_down = global_lcp[get_stack_id()].Down;

 sppp_lcp_init(sp);
 sppp_ipcp_init(sp);
 sppp_pap_init(sp);
 sppp_chap_init(sp);
}

void
sppp_detach(struct ifnet *ifp)
{
 struct sppp **q, *p, *sp = (struct sppp*) ifp;
 int i;


 for (q = &global_spppq[get_stack_id()]; (p = *q); q = &p->pp_next)
  if (p == sp) {
   *q = p->pp_next;
   break;
  }


 if (! global_spppq[get_stack_id()])
  timeout_del(&(global_keepalive_ch[get_stack_id()]));

 for (i = 0; i < (3 + 1); i++)
  timeout_del(&(sp->ch[i]));
 timeout_del(&(sp->pap_my_to_ch));
}




void
sppp_flush(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;

 do { if ((((&sp->pp_if.if_snd))->altq_flags & 0x02)) (void)(*((&sp->pp_if.if_snd))->altq_request)(((&sp->pp_if.if_snd)), 1, (void *)0); else do { struct mbuf *__m0; for (;;) { { (__m0) = (((&sp->pp_if.if_snd)))->ifq_head; if (__m0) { if (((((&sp->pp_if.if_snd)))->ifq_head = (__m0)->m_hdr.mh_nextpkt) == 0) (((&sp->pp_if.if_snd)))->ifq_tail = 0; (__m0)->m_hdr.mh_nextpkt = 0; (((&sp->pp_if.if_snd)))->ifq_len--; } }; if (__m0 == 0L) break; else m_freem(__m0); } } while (0); } while (0);
 sppp_qflush (&sp->pp_fastq);
 sppp_qflush (&sp->pp_cpq);
}




int
sppp_isempty(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;
 int empty, s;

 s = splraise((0x20 + ((6) << 4)));
 empty = !sp->pp_fastq.ifq_head && !sp->pp_cpq.ifq_head &&
  ((&sp->pp_if.if_snd)->ifq_len == 0);
 splx(s);
 return (empty);
}




struct mbuf *
sppp_dequeue(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;
 struct mbuf *m;
 int s;

 s = splraise((0x20 + ((6) << 4)));






 { (m) = (&sp->pp_cpq)->ifq_head; if (m) { if (((&sp->pp_cpq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sp->pp_cpq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sp->pp_cpq)->ifq_len--; } };
 if (m == 0L &&
     (sppp_ncp_check(sp) || (sp->pp_flags & 0x02) != 0)) {
  { (m) = (&sp->pp_fastq)->ifq_head; if (m) { if (((&sp->pp_fastq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sp->pp_fastq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sp->pp_fastq)->ifq_len--; } };
  if (m == 0L)
   do { if ((((&sp->pp_if.if_snd))->altq_tbr != 0L)) (m) = tbr_dequeue((&sp->pp_if.if_snd), 1); else if ((((&sp->pp_if.if_snd))->altq_flags & 0x02)) ((m)) = (*((&sp->pp_if.if_snd))->altq_dequeue)(((&sp->pp_if.if_snd)), 1); else { ((m)) = ((&sp->pp_if.if_snd))->ifq_head; if ((m)) { if ((((&sp->pp_if.if_snd))->ifq_head = ((m))->m_hdr.mh_nextpkt) == 0) ((&sp->pp_if.if_snd))->ifq_tail = 0; ((m))->m_hdr.mh_nextpkt = 0; ((&sp->pp_if.if_snd))->ifq_len--; } }; } while (0);
 }
 splx(s);
 return m;
}




struct mbuf *
sppp_pick(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*)ifp;
 struct mbuf *m;
 int s;

 s= splraise((0x20 + ((6) << 4)));

 m = sp->pp_cpq.ifq_head;
 if (m == 0L &&
     (sp->pp_phase == PHASE_NETWORK ||
      (sp->pp_flags & 0x02) != 0))
  if ((m = sp->pp_fastq.ifq_head) == 0L)
   do { if ((((&sp->pp_if.if_snd))->altq_tbr != 0L)) (m) = tbr_dequeue((&sp->pp_if.if_snd), 2); else if ((((&sp->pp_if.if_snd))->altq_flags & 0x02)) ((m)) = (*((&sp->pp_if.if_snd))->altq_dequeue)(((&sp->pp_if.if_snd)), 2); else (((m)) = ((&sp->pp_if.if_snd))->ifq_head); } while (0);
 splx (s);
 return (m);
}




int
sppp_ioctl(struct ifnet *ifp, u_long cmd, void *data)
{
 struct ifreq *ifr = (struct ifreq*) data;
 struct sppp *sp = (struct sppp*) ifp;
 int s, rv, going_up, going_down;

 s = splraise((0x20 + ((6) << 4)));
 rv = 0;
 switch (cmd) {
 case ((unsigned long)0x80000000 | ((sizeof(struct ifaliasreq) & 0x1fff) << 16) | ((('i')) << 8) | ((26))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14))):
  break;

 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12))):
  if_up(ifp);


 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16))):

  if (ifp->if_flags & 0x1000)
   ifp->if_flags &= ~0x2000;

  going_up = (ifp->if_flags & 0x1) && ! (ifp->if_flags &
   (0x40 | 0x2000 | 0x1000));
  going_down = ! (ifp->if_flags & 0x1) &&
   (ifp->if_flags & 0x40);

  if (going_up || going_down) {
   if (! (sp->pp_flags & 0x02))
   global_lcp[get_stack_id()].Close(sp);
   else {
    sppp_flush(ifp);
    ifp->if_flags &= ~0x40;
   }
  }
  if (going_up) {

   ifp->if_flags |= 0x40;
   if (!(sp->pp_flags & 0x02))
    global_lcp[get_stack_id()].Open(sp);
  }
  break;


 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((127))):
  if (ifr->ifr_ifru.ifru_metric < 128 || ifr->ifr_ifru.ifru_metric > sp->lcp.their_mru) {
   splx(s);
   return (22);
  }
  ifp->if_data.ifi_mtu = ifr->ifr_ifru.ifru_metric;
  break;
# 1034 "openbsd3/net/if_spppsubr.c"
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((126))):
  ifr->ifr_ifru.ifru_metric = ifp->if_data.ifi_mtu;
  break;






 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50))):
  break;

 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((58))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((57))):
  rv = sppp_params(sp, cmd, data);
  break;

 default:
  rv = 25;
 }
 splx(s);
 return rv;
}
# 1067 "openbsd3/net/if_spppsubr.c"
 void
sppp_cisco_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct cisco_packet *h;
 u_long me, mymask;

 if (m->M_dat.MH.MH_pkthdr.len < 18) {
  if (debug)
   log(7,
       "%s: " "cisco invalid packet length: %d bytes\n",
       (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len);
  return;
 }
 h = ((struct cisco_packet*)((m)->m_hdr.mh_data));
 if (debug)
  log(7,
      "%s: " "cisco input: %d bytes "
      "<0x%lx 0x%lx 0x%lx 0x%x 0x%x-0x%x>\n",
      (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len,
      (u_long)__extension__({ u_int32_t __swap32_x = (h->type); __builtin_constant_p(h->type) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), (u_long)h->par1, (u_long)h->par2, (u_int)h->rel,
      (u_int)h->time0, (u_int)h->time1);
 switch (__extension__({ u_int32_t __swap32_x = (h->type); __builtin_constant_p(h->type) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })) {
 default:
  if (debug)
   addlog("%s: " "cisco unknown packet type: 0x%lx\n",
          (ifp)->if_xname, (u_long)__extension__({ u_int32_t __swap32_x = (h->type); __builtin_constant_p(h->type) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }));
  break;
 case 1:

  break;
 case 2:
  sp->pp_alivecnt = 0;
  sp->pp_rseq = __extension__({ u_int32_t __swap32_x = (h->par1); __builtin_constant_p(h->par1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  if (sp->pp_seq == sp->pp_rseq) {


   if (sp->pp_loopcnt >= 3) {
    printf ("%s: " "loopback\n",
     (ifp)->if_xname);
    sp->pp_loopcnt = 0;
    if (ifp->if_flags & 0x1) {
     if_down (ifp);
     sppp_qflush (&sp->pp_cpq);
    }
   }
   ++sp->pp_loopcnt;



   sp->pp_seq = random();



   break;
  }
  sp->pp_loopcnt = 0;
  if (! (ifp->if_flags & 0x1) &&
      (ifp->if_flags & 0x40)) {
   if_up(ifp);
   printf ("%s: " "up\n", (ifp)->if_xname);
  }
  break;
 case 0:
  sppp_get_ip_addrs(sp, &me, 0, &mymask);
  if (me != 0L)
   sppp_cisco_send(sp, 1, me, mymask);
  break;
 }
}




 void
sppp_cisco_send(struct sppp *sp, int type, long par1, long par2)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct cisco_packet *ch;
 struct mbuf *m;



 u_long t = (time.tv_sec - global_boottime[get_stack_id()].tv_sec) * 1000;






 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + 18;
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0x8f;
 h->control = 0;
 h->protocol = __extension__({ u_int16_t __swap16_x = (0x8035); __builtin_constant_p(0x8035) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 ch = (struct cisco_packet*) (h + 1);
 ch->type = __extension__({ u_int32_t __swap32_x = (type); __builtin_constant_p(type) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 ch->par1 = __extension__({ u_int32_t __swap32_x = (par1); __builtin_constant_p(par1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 ch->par2 = __extension__({ u_int32_t __swap32_x = (par2); __builtin_constant_p(par2) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 ch->rel = -1;





 ch->time0 = __extension__({ u_int16_t __swap16_x = ((u_short) (t >> 16)); __builtin_constant_p((u_short) (t >> 16)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 ch->time1 = __extension__({ u_int16_t __swap16_x = ((u_short) t); __builtin_constant_p((u_short) t) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });


 if (debug)
  log(7,
      "%s: " "cisco output: <0x%lx 0x%lx 0x%lx 0x%x 0x%x-0x%x>\n",
   (ifp)->if_xname, (u_long)__extension__({ u_int32_t __swap32_x = (ch->type); __builtin_constant_p(ch->type) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }), (u_long)ch->par1,
   (u_long)ch->par2, (u_int)ch->rel, (u_int)ch->time0, (u_int)ch->time1);

 if (((&sp->pp_cpq)->ifq_len >= (&sp->pp_cpq)->ifq_maxlen)) {
  ((&sp->pp_fastq)->ifq_drops++);
  ((&ifp->if_snd)->ifq_drops++);
  m_freem (m);
  m = 0L;
 } else
  { (m)->m_hdr.mh_nextpkt = 0; if ((&sp->pp_cpq)->ifq_tail == 0) (&sp->pp_cpq)->ifq_head = m; else (&sp->pp_cpq)->ifq_tail->m_hdr.mh_nextpkt = m; (&sp->pp_cpq)->ifq_tail = m; (&sp->pp_cpq)->ifq_len++; };
 if (! (ifp->if_flags & 0x400))
  (*ifp->if_start) (ifp);
 if (m != 0L)
  ifp->if_data.ifi_obytes += m->M_dat.MH.MH_pkthdr.len + 3;
}
# 1209 "openbsd3/net/if_spppsubr.c"
 void
sppp_cp_send(struct sppp *sp, u_short proto, u_char type,
      u_char ident, u_short len, void *data)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct lcp_header *lh;
 struct mbuf *m;

 if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header))
  len = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header);
 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + sizeof (struct lcp_header) + len;
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0xff;
 h->control = 0x03;
 h->protocol = __extension__({ u_int16_t __swap16_x = (proto); __builtin_constant_p(proto) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 lh = (struct lcp_header*) (h + 1);
 lh->type = type;
 lh->ident = ident;
 lh->len = __extension__({ u_int16_t __swap16_x = (sizeof (struct lcp_header) + len); __builtin_constant_p(sizeof (struct lcp_header) + len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if (len)
  bcopy (data, lh+1, len);

 if (debug) {
  log(7, "%s: " "%s output <%s id=0x%x len=%d",
      (ifp)->if_xname,
      sppp_proto_name(proto),
      sppp_cp_type_name (lh->type), lh->ident,
      __extension__({ u_int16_t __swap16_x = (lh->len); __builtin_constant_p(lh->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
  if (len)
   sppp_print_bytes ((u_char*) (lh+1), len);
  addlog(">\n");
 }
 if (((&sp->pp_cpq)->ifq_len >= (&sp->pp_cpq)->ifq_maxlen)) {
  ((&sp->pp_fastq)->ifq_drops++);
  ((&ifp->if_snd)->ifq_drops++);
  m_freem (m);
  ++ifp->if_data.ifi_oerrors;
  m = 0L;
 } else
  { (m)->m_hdr.mh_nextpkt = 0; if ((&sp->pp_cpq)->ifq_tail == 0) (&sp->pp_cpq)->ifq_head = m; else (&sp->pp_cpq)->ifq_tail->m_hdr.mh_nextpkt = m; (&sp->pp_cpq)->ifq_tail = m; (&sp->pp_cpq)->ifq_len++; };
 if (! (ifp->if_flags & 0x400))
  (*ifp->if_start) (ifp);
 if (m != 0L)
  ifp->if_data.ifi_obytes += m->M_dat.MH.MH_pkthdr.len + 3;
}




 void
sppp_cp_input(const struct cp *cp, struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len = m->M_dat.MH.MH_pkthdr.len;
 int rv;
 u_char *p;

 if (len < 4) {
  if (debug)
   log(7,
       "%s: " "%s invalid packet length: %d bytes\n",
       (ifp)->if_xname, cp->name, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (debug) {
  log(7,
      "%s: " "%s input(%s): <%s id=0x%x len=%d",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]),
      sppp_cp_type_name (h->type), h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
  if (len > 4)
   sppp_print_bytes ((u_char*) (h+1), len-4);
  addlog(">\n");
 }
 if (len > __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))
  len = __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 p = (u_char *)(h + 1);
 switch (h->type) {
 case 1:
  if (len < 4) {
   if (debug)
    addlog("%s: " "%s invalid conf-req length %d\n",
           (ifp)->if_xname, cp->name,
           len);
   ++ifp->if_data.ifi_ierrors;
   break;
  }

  switch (sp->state[cp->protoidx]) {
  case 4:
  case 5:
   return;
  case 2:
   sppp_cp_send(sp, cp->proto, 6, h->ident,
         0, 0);
   return;
  }
  rv = (cp->RCR)(sp, h, len);
  switch (sp->state[cp->protoidx]) {
  case 9:
   sppp_cp_change_state(cp, sp, rv?
          8: 6);
   (cp->tld)(sp);
   (cp->scr)(sp);
   break;
  case 8:
  case 6:
   sppp_cp_change_state(cp, sp, rv?
          8: 6);
   break;
  case 3:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   sppp_cp_change_state(cp, sp, rv?
          8: 6);
   (cp->scr)(sp);
   break;
  case 7:
   if (rv) {
    sppp_cp_change_state(cp, sp, 9);
    if (debug)
     log(7, "%s: " "%s tlu\n",
         (ifp)->if_xname,
         cp->name);
    (cp->tlu)(sp);
   } else
    sppp_cp_change_state(cp, sp, 7);
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 2:
  if (h->ident != sp->confid[cp->protoidx]) {
   if (debug)
    addlog("%s: " "%s id mismatch 0x%x != 0x%x\n",
           (ifp)->if_xname, cp->name,
           h->ident, sp->confid[cp->protoidx]);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 4:
  case 5:
   break;
  case 6:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   sppp_cp_change_state(cp, sp, 7);
   break;
  case 9:
   sppp_cp_change_state(cp, sp, 6);
   (cp->tld)(sp);
   (cp->scr)(sp);
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   (cp->scr)(sp);
   break;
  case 8:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   sppp_cp_change_state(cp, sp, 9);
   if (debug)
    log(7, "%s: " "%s tlu\n",
           (ifp)->if_xname, cp->name);
   (cp->tlu)(sp);
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 3:
 case 4:
  if (h->ident != sp->confid[cp->protoidx]) {
   if (debug)
    addlog("%s: " "%s id mismatch 0x%x != 0x%x\n",
           (ifp)->if_xname, cp->name,
           h->ident, sp->confid[cp->protoidx]);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (h->type == 3)
   (cp->RCN_nak)(sp, h, len);
  else
   (cp->RCN_rej)(sp, h, len);

  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 6:
  case 8:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   (cp->scr)(sp);
   break;
  case 9:
   sppp_cp_change_state(cp, sp, 8);
   (cp->tld)(sp);
   (cp->scr)(sp);
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 8);
   (cp->scr)(sp);
   break;
  case 4:
  case 5:
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;

 case 5:
  switch (sp->state[cp->protoidx]) {
  case 7:
  case 8:
   sppp_cp_change_state(cp, sp, 6);

  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    sta:

   if (debug)
    log(7, "%s: " "%s send terminate-ack\n",
        (ifp)->if_xname, cp->name);
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 9:
   sp->rst_counter[cp->protoidx] = 0;
   sppp_cp_change_state(cp, sp, 5);
   (cp->tld)(sp);
   goto sta;
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 6:
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
  case 6:
  case 8:
   break;
  case 4:
   sppp_cp_change_state(cp, sp, 2);
   (cp->tlf)(sp);
   break;
  case 5:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   break;
  case 9:
   sppp_cp_change_state(cp, sp, 7);
   (cp->tld)(sp);
   (cp->scr)(sp);
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 7:
 case 8:

  log(6,
      "%s: " "%s: ignoring RXJ (%s) for proto 0x%x, "
      "danger will robinson\n",
      (ifp)->if_xname, cp->name,
      sppp_cp_type_name(h->type), __extension__({ u_int16_t __swap16_x = (*((u_short *)p)); __builtin_constant_p(*((u_short *)p)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
  case 6:
  case 8:
  case 4:
  case 5:
  case 9:
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   break;
  default:




   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 11:
  if (cp->proto != 0xc021)
   goto illegal;

  break;
 case 9:
  if (cp->proto != 0xc021)
   goto illegal;
  if (sp->state[cp->protoidx] != 9) {
   if (debug)
    addlog("%s: " "lcp echo req but lcp closed\n",
           (ifp)->if_xname);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (len < 8) {
   if (debug)
    addlog("%s: " "invalid lcp echo request "
           "packet length: %d bytes\n",
           (ifp)->if_xname, len);
   break;
  }
  if (__extension__({ u_int32_t __swap32_x = (*(long*)(h+1)); __builtin_constant_p(*(long*)(h+1)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) == sp->lcp.magic) {

   printf("%s: " "loopback\n", (ifp)->if_xname);

    global_lcp[get_stack_id()].Close(sp);
   break;
  }
  *(long*)(h+1) = __extension__({ u_int32_t __swap32_x = (sp->lcp.magic); __builtin_constant_p(sp->lcp.magic) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  if (debug)
   addlog("%s: " "got lcp echo req, sending echo rep\n",
          (ifp)->if_xname);
  sppp_cp_send (sp, 0xc021, 10, h->ident, len-4, h+1);
  break;
 case 10:
  if (cp->proto != 0xc021)
   goto illegal;
  if (h->ident != sp->lcp.echoid) {
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (len < 8) {
   if (debug)
    addlog("%s: " "lcp invalid echo reply "
           "packet length: %d bytes\n",
           (ifp)->if_xname, len);
   break;
  }
  if (debug)
   addlog("%s: " "lcp got echo rep\n",
          (ifp)->if_xname);
  if (__extension__({ u_int32_t __swap32_x = (*(long*)(h+1)); __builtin_constant_p(*(long*)(h+1)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) != sp->lcp.magic)
   sp->pp_alivecnt = 0;
  break;
 default:

   illegal:
  if (debug)
   addlog("%s: " "%s send code-rej for 0x%x\n",
          (ifp)->if_xname, cp->name, h->type);
  sppp_cp_send(sp, cp->proto, 7, ++sp->pp_seq,
        m->M_dat.MH.MH_pkthdr.len, h);
  ++ifp->if_data.ifi_ierrors;
 }
}






 void
sppp_up_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "%s up(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
  sppp_cp_change_state(cp, sp, 2);
  break;
 case 1:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
  sppp_cp_change_state(cp, sp, 6);
  (cp->scr)(sp);
  break;
 default:



  break;
 }
}

 void
sppp_down_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "%s down(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 2:
 case 4:
  sppp_cp_change_state(cp, sp, 0);
  break;
 case 3:
  sppp_cp_change_state(cp, sp, 1);
  (cp->tls)(sp);
  break;
 case 5:
 case 6:
 case 7:
 case 8:
  sppp_cp_change_state(cp, sp, 1);
  break;
 case 9:
  sppp_cp_change_state(cp, sp, 1);
  (cp->tld)(sp);
  break;
 default:



  break;
 }
}


 void
sppp_open_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "%s open(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
  sppp_cp_change_state(cp, sp, 1);
  (cp->tls)(sp);
  break;
 case 1:
  break;
 case 2:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
  sppp_cp_change_state(cp, sp, 6);
  (cp->scr)(sp);
  break;
 case 3:
 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
  break;
 case 4:
  sppp_cp_change_state(cp, sp, 5);
  break;
 }
}


 void
sppp_close_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "%s close(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
 case 2:
 case 4:
  break;
 case 1:
  sppp_cp_change_state(cp, sp, 0);
  (cp->tlf)(sp);
  break;
 case 3:
  sppp_cp_change_state(cp, sp, 2);
  break;
 case 5:
  sppp_cp_change_state(cp, sp, 4);
  break;
 case 9:
  sppp_cp_change_state(cp, sp, 4);
  sp->rst_counter[cp->protoidx] = sp->lcp.max_terminate;
  sppp_cp_send(sp, cp->proto, 5, ++sp->pp_seq, 0, 0);
  (cp->tld)(sp);
  break;
 case 6:
 case 7:
 case 8:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_terminate;
  sppp_cp_send(sp, cp->proto, 5, ++sp->pp_seq, 0, 0);
  sppp_cp_change_state(cp, sp, 4);
  break;
 }
}

 void
sppp_increasing_timeout (const struct cp *cp, struct sppp *sp)
{
 int timo;

 timo = sp->lcp.max_configure - sp->rst_counter[cp->protoidx];
 if (timo < 1)
  timo = 1;




 timeout_set(&sp->ch[cp->protoidx], cp->TO, (void *)sp);
 timeout_add(&sp->ch[cp->protoidx], timo * sp->lcp.timeout);

}

 void
sppp_to_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (debug)
  log(7, "%s: " "%s TO(%s) rst_counter = %d\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]),
      sp->rst_counter[cp->protoidx]);

 if (--sp->rst_counter[cp->protoidx] < 0)

  switch (sp->state[cp->protoidx]) {
  case 4:
   sppp_cp_change_state(cp, sp, 2);
   (cp->tlf)(sp);
   break;
  case 5:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  case 6:
  case 7:
  case 8:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  }
 else

  switch (sp->state[cp->protoidx]) {
  case 4:
  case 5:
   sppp_cp_send(sp, cp->proto, 5, ++sp->pp_seq,
         0, 0);
     sppp_increasing_timeout (cp, sp);
   break;
  case 6:
  case 7:

   sppp_cp_change_state(cp, sp, 6);
   (cp->scr)(sp);
   break;
  case 8:
     sppp_increasing_timeout (cp, sp);
   (cp->scr)(sp);
   break;
  }

 splx(s);
}





void
sppp_cp_change_state(const struct cp *cp, struct sppp *sp, int newstate)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug && sp->state[cp->protoidx] != newstate)
  log(7, "%s: " "%s %s->%s\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]),
      sppp_state_name(newstate));
 sp->state[cp->protoidx] = newstate;

 timeout_del(&(sp->ch[cp->protoidx]));
 switch (newstate) {
 case 0:
 case 1:
 case 2:
 case 3:
 case 9:
  break;
 case 4:
 case 5:
 case 6:
 case 7:
 case 8:
   sppp_increasing_timeout (cp, sp);
  break;
 }
}







 void
sppp_lcp_init(struct sppp *sp)
{
 sp->lcp.opts = (1 << 5);
 sp->lcp.magic = 0;
 sp->state[0] = 0;
 sp->fail_counter[0] = 0;
 sp->lcp.protos = 0;
 sp->lcp.mru = sp->lcp.their_mru = 1500;
# 1879 "openbsd3/net/if_spppsubr.c"
 sp->lcp.timeout = 1 * global_hz[get_stack_id()];
 sp->lcp.max_terminate = 2;
 sp->lcp.max_configure = 10;
 sp->lcp.max_failure = 10;



}

 void
sppp_lcp_up(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

  sp->pp_alivecnt = 0;
  sp->lcp.opts = (1 << 5);
  sp->lcp.magic = 0;
  sp->lcp.protos = 0;
  sp->lcp.mru = sp->lcp.their_mru = 1500;





 ifp->if_flags |= 0x40;
 if ((ifp->if_flags & (0x2000 | 0x1000)) != 0) {
  if (debug)
   log(7,
       "%s: " "Up event", (ifp)->if_xname);
  if (sp->state[0] == 0) {
   if (debug)
    addlog("(incoming call)\n");
   sp->pp_flags |= 0x08;
   global_lcp[get_stack_id()].Open(sp);
  } else if (debug)
   addlog("\n");
 }

 sppp_up_event(&global_lcp[get_stack_id()], sp);
}

 void
sppp_lcp_down(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

  if (debug)
  log(7, "%s: " "Down event (carrier loss)\n",
       (ifp)->if_xname);
   sppp_down_event(&global_lcp[get_stack_id()], sp);

  if ((ifp->if_flags & (0x2000 | 0x1000)) != 0)
  global_lcp[get_stack_id()].Close(sp);
  sp->pp_flags &= ~0x08;
 ifp->if_flags &= ~0x40;
  sppp_flush(ifp);
}

 void
sppp_lcp_open(struct sppp *sp)
{



 if (sp->hisauth.proto != 0)
  sp->lcp.opts |= (1 << 3);
 else
  sp->lcp.opts &= ~(1 << 3);
 sp->pp_flags &= ~0x10;
 sppp_open_event(&global_lcp[get_stack_id()], sp);
}

 void
sppp_lcp_close(struct sppp *sp)
{
 sppp_close_event(&global_lcp[get_stack_id()], sp);
}

 void
sppp_lcp_TO(void *cookie)
{
 sppp_to_event(&global_lcp[get_stack_id()], (struct sppp *)cookie);
}







 int
sppp_lcp_RCR(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *r, *p;
 int origlen, rlen;
 u_long nmagic;
 u_short authproto;

 len -= 4;
 origlen = len;
 buf = r = malloc (len, 127, 0x0001);
 if (! buf)
  return (0);

 if (debug)
  log(7, "%s: " "lcp parse opts: ",
      (ifp)->if_xname);


 p = (void*) (h+1);
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   addlog("%s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   if (len >= 6 && p[1] == 6)
    continue;
   if (debug)
    addlog("[invalid] ");
   break;
  case 2:

   if (len >= 6 && p[1] == 6)
    continue;
   if (debug)
    addlog("[invalid] ");
   break;
  case 1:

   if (len >= 4 && p[1] == 4)
    continue;
   if (debug)
    addlog("[invalid] ");
   break;
  case 3:
   if (len < 4) {
    if (debug)
     addlog("[invalid] ");
    break;
   }
   authproto = (p[2] << 8) + p[3];
   if (authproto == 0xc223 && p[1] != 5) {
    if (debug)
     addlog("[invalid chap len] ");
    break;
   }
   if (sp->myauth.proto == 0) {

    if (debug)
     addlog("[not configured] ");
    break;
   }





   sp->pp_flags |= 0x10;
   continue;
  default:

   if (debug)
    addlog("[rej] ");
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (debug)
   addlog(" send conf-rej\n");
  sppp_cp_send (sp, 0xc021, 4, h->ident, rlen, buf);
  return 0;
 } else if (debug)
  addlog("\n");





 if (debug)
  log(7, "%s: " "lcp parse opt values: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 len = origlen;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   addlog("%s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   nmagic = (u_long)p[2] << 24 |
    (u_long)p[3] << 16 | p[4] << 8 | p[5];
   if (nmagic != sp->lcp.magic) {
    if (debug)
     addlog("0x%lx ", nmagic);
    continue;
   }
   if (debug)
    addlog("[glitch] ");
   ++sp->pp_loopcnt;





   nmagic = ~sp->lcp.magic;

   p[2] = nmagic >> 24;
   p[3] = nmagic >> 16;
   p[4] = nmagic >> 8;
   p[5] = nmagic;
   break;

  case 2:

   if (! p[2] && ! p[3] && ! p[4] && ! p[5]) {
    if (debug)
     addlog("[empty] ");
    continue;
   }
   if (debug)
    addlog("[non-empty] ");

   p[2] = p[3] = p[4] = p[5] = 0;
   break;

  case 1:




   sp->lcp.their_mru = p[2] * 256 + p[3];
   if (debug)
    addlog("%lu ", sp->lcp.their_mru);
   continue;

  case 3:
   authproto = (p[2] << 8) + p[3];
   if (sp->myauth.proto != authproto) {

    if (debug)
     addlog("[mine %s != his %s] ",
            sppp_proto_name(sp->hisauth.proto),
            sppp_proto_name(authproto));
    p[2] = sp->myauth.proto >> 8;
    p[3] = sp->myauth.proto;
    break;
   }
   if (authproto == 0xc223 && p[4] != 5) {
    if (debug)
     addlog("[chap not MD5] ");
    p[4] = 5;
    break;
   }
   continue;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (++sp->fail_counter[0] < sp->lcp.max_failure) {
   if (debug)
    addlog("send conf-nak\n");
   sppp_cp_send (sp, 0xc021, 3, h->ident, rlen, buf);
   return 0;
  }
  if (debug)
   addlog("max_failure (%d) exceeded, closing\n",
          sp->lcp.max_failure);
  if (sp->pp_loopcnt >= 3)
   printf ("%s: " "loopback\n", (ifp)->if_xname);
  global_lcp[get_stack_id()].Close(sp);
  sp->fail_counter[0] = 0;
  sp->pp_loopcnt = 0;
  return 0;
 } else {
  if (debug)
   addlog("send conf-ack\n");
  sp->fail_counter[0] = 0;
  sp->pp_loopcnt = 0;
  sppp_cp_send (sp, 0xc021, 2,
         h->ident, origlen, h+1);
 }

 free (buf, 127);
 return (rlen == 0);
}





 void
sppp_lcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *p;

 len -= 4;
 buf = malloc (len, 127, 0x0001);
 if (!buf)
  return;

 if (debug)
  log(7, "%s: " "lcp rej opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   addlog("%s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   sp->lcp.opts &= ~(1 << 5);
   sp->lcp.magic = 0;
   break;
  case 1:





   sp->lcp.opts &= ~(1 << 1);
   break;
  case 3:





   if ((sp->pp_flags & 0x08) == 0 &&
       (sp->hisauth.flags & 1) != 0) {
    if (debug)
     addlog("[don't insist on auth "
            "for callout]");
    sp->lcp.opts &= ~(1 << 3);
    break;
   }
   if (debug)
    addlog("[access denied]\n");
   global_lcp[get_stack_id()].Close(sp);
   break;
  }
 }
 if (debug)
  addlog("\n");
 free (buf, 127);
 return;
}





 void
sppp_lcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *p;
 u_long magic;

 len -= 4;
 buf = malloc (len, 127, 0x0001);
 if (!buf)
  return;

 if (debug)
  log(7, "%s: " "lcp nak opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   addlog("%s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   if ((sp->lcp.opts & (1 << 5)) &&
       len >= 6 && p[1] == 6) {
    magic = (u_long)p[2] << 24 |
     (u_long)p[3] << 16 | p[4] << 8 | p[5];





    if (magic == ~sp->lcp.magic) {
     if (debug)
      addlog("magic glitch ");

     sp->lcp.magic = random();



    } else {
     sp->lcp.magic = magic;
     if (debug)
      addlog("%lu ", magic);
    }
   }
   break;
  case 1:





   if (len >= 4 && p[1] == 4) {
    u_int mru = p[2] * 256 + p[3];
    if (debug)
     addlog("%d ", mru);
    if (mru < 1500 || mru > 2048)
     mru = 1500;
    sp->lcp.mru = mru;
    sp->lcp.opts |= (1 << 1);
   }
   break;
  case 3:




   if (debug)
    addlog("[access denied]\n");
   global_lcp[get_stack_id()].Close(sp);
   break;
  }
 }
 if (debug)
  addlog("\n");
 free (buf, 127);
 return;
}

 void
sppp_lcp_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if;
 int i;
 u_long mask;


 if (! (ifp->if_flags & 0x1) &&
     (ifp->if_flags & 0x40)) {

  if_up(ifp);
  printf ("%s: " "up\n", (ifp)->if_xname);
 }

 for (i = 0; i < (3 + 1); i++)
  if (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x08)
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Open(sp);

 if ((sp->lcp.opts & (1 << 3)) != 0 ||
     (sp->pp_flags & 0x10) != 0)
  sp->pp_phase = PHASE_AUTHENTICATE;
 else
  sp->pp_phase = PHASE_NETWORK;

 log(6, "%s: " "phase %s\n", (ifp)->if_xname,
     sppp_phase_name(sp->pp_phase));
# 2357 "openbsd3/net/if_spppsubr.c"
 for (i = 0; i < (3 + 1); i++)
  if (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x02)
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Open(sp);

 if (sp->pp_phase == PHASE_NETWORK) {

  for (i = 0; i < (3 + 1); i++)
   if (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x04)
    ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Open(sp);
 }


 for (i = 0, mask = 1; i < (3 + 1); i++, mask <<= 1)
  if (sp->lcp.protos & mask && (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x01) == 0)
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Up(sp);

 if (sp->pp_phase == PHASE_NETWORK)

  sppp_lcp_check_and_close(sp);
}

 void
sppp_lcp_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if;
 int i;
 u_long mask;

 sp->pp_phase = PHASE_TERMINATE;

 log(6, "%s: " "phase %s\n", (ifp)->if_xname,
     sppp_phase_name(sp->pp_phase));







 for (i = 0, mask = 1; i < (3 + 1); i++, mask <<= 1)
  if (sp->lcp.protos & mask && (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x01) == 0) {
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Down(sp);
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Close(sp);
  }
}

 void
sppp_lcp_tls(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if;

 sp->pp_phase = PHASE_ESTABLISH;

 log(6, "%s: " "phase %s\n", (ifp)->if_xname,
     sppp_phase_name(sp->pp_phase));


 if (sp->pp_tls)
  (sp->pp_tls)(sp);
}

 void
sppp_lcp_tlf(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if;

 sp->pp_phase = PHASE_DEAD;
 log(6, "%s: " "phase %s\n", (ifp)->if_xname,
     sppp_phase_name(sp->pp_phase));


 if (sp->pp_tlf)
  (sp->pp_tlf)(sp);
}

 void
sppp_lcp_scr(struct sppp *sp)
{
 char opt[6 + 4 + 5 ];
 int i = 0;
 u_short authproto;

 if (sp->lcp.opts & (1 << 5)) {
  if (! sp->lcp.magic)

   sp->lcp.magic = random();



  opt[i++] = 5;
  opt[i++] = 6;
  opt[i++] = sp->lcp.magic >> 24;
  opt[i++] = sp->lcp.magic >> 16;
  opt[i++] = sp->lcp.magic >> 8;
  opt[i++] = sp->lcp.magic;
 }

 if (sp->lcp.opts & (1 << 1)) {
  opt[i++] = 1;
  opt[i++] = 4;
  opt[i++] = sp->lcp.mru >> 8;
  opt[i++] = sp->lcp.mru;
 }

 if (sp->lcp.opts & (1 << 3)) {
  authproto = sp->hisauth.proto;
  opt[i++] = 3;
  opt[i++] = authproto == 0xc223? 5: 4;
  opt[i++] = authproto >> 8;
  opt[i++] = authproto;
  if (authproto == 0xc223)
   opt[i++] = 5;
 }

 sp->confid[0] = ++sp->pp_seq;
 sppp_cp_send (sp, 0xc021, 1, sp->confid[0], i, &opt);
}




 int
sppp_ncp_check(struct sppp *sp)
{
 int i, mask;

 for (i = 0, mask = 1; i < (3 + 1); i++, mask <<= 1)
  if (sp->lcp.protos & mask && ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x04)
   return 1;
 return 0;
}





 void
sppp_lcp_check_and_close(struct sppp *sp)
{

 if (sp->pp_phase < PHASE_NETWORK)

  return;

 if (sppp_ncp_check(sp))
  return;

 global_lcp[get_stack_id()].Close(sp);
}
# 2514 "openbsd3/net/if_spppsubr.c"
 void
sppp_ipcp_init(struct sppp *sp)
{
 sp->ipcp.opts = 0;
 sp->ipcp.flags = 0;
 sp->state[1] = 0;
 sp->fail_counter[1] = 0;



}

 void
sppp_ipcp_up(struct sppp *sp)
{
 sppp_up_event(&global_ipcp[get_stack_id()], sp);
}

 void
sppp_ipcp_down(struct sppp *sp)
{
 sppp_down_event(&global_ipcp[get_stack_id()], sp);
}

 void
sppp_ipcp_open(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_long myaddr, hisaddr;

 sppp_get_ip_addrs(sp, &myaddr, &hisaddr, 0);






 if (hisaddr == 0L) {

  if (debug)
   log(7, "%s: " "ipcp_open(): no IP interface\n",
       (ifp)->if_xname);
  return;
 }

 if (myaddr == 0L) {




  sp->ipcp.flags |= 2;
  sp->ipcp.opts |= (1 << 3);
 }
 sppp_open_event(&global_ipcp[get_stack_id()], sp);
}

 void
sppp_ipcp_close(struct sppp *sp)
{
 sppp_close_event(&global_ipcp[get_stack_id()], sp);
 if (sp->ipcp.flags & 2)



  sppp_set_ip_addr(sp, 0L);
}

 void
sppp_ipcp_TO(void *cookie)
{
 sppp_to_event(&global_ipcp[get_stack_id()], (struct sppp *)cookie);
}







 int
sppp_ipcp_RCR(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *r, *p;
 struct ifnet *ifp = &sp->pp_if;
 int rlen, origlen, debug = ifp->if_flags & 0x4;
 u_long hisaddr, desiredaddr;

 len -= 4;
 origlen = len;




 buf = r = malloc ((len < 6? 6: len), 127, 0x0001);
 if (! buf)
  return (0);


 if (debug)
  log(7, "%s: " "ipcp parse opts: ",
      (ifp)->if_xname);
 p = (void*) (h+1);
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   addlog("%s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
# 2630 "openbsd3/net/if_spppsubr.c"
  case 3:
   if (len >= 6 && p[1] == 6) {

    continue;
   }
   if (debug)
    addlog("[invalid] ");
   break;
  default:

   if (debug)
    addlog("[rej] ");
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (debug)
   addlog(" send conf-rej\n");
  sppp_cp_send (sp, 0x8021, 4, h->ident, rlen, buf);
  return 0;
 } else if (debug)
  addlog("\n");


 sppp_get_ip_addrs(sp, 0, &hisaddr, 0);
 if (debug)
  log(7, "%s: " "ipcp parse opt values: ",
         (ifp)->if_xname);
 p = (void*) (h+1);
 len = origlen;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   addlog(" %s ", sppp_ipcp_opt_name(*p));
  switch (*p) {




  case 3:
   desiredaddr = p[2] << 24 | p[3] << 16 |
    p[4] << 8 | p[5];
   if (desiredaddr == hisaddr ||
       (hisaddr == 1 && desiredaddr != 0)) {







    if (debug)
     addlog("%s [ack] ",
            sppp_dotted_quad(desiredaddr));

    sp->ipcp.flags |= 1;
    continue;
   }







   if (debug) {
    if (desiredaddr == 0)
     addlog("[addr requested] ");
    else
     addlog("%s [not agreed] ",
            sppp_dotted_quad(desiredaddr));

    p[2] = hisaddr >> 24;
    p[3] = hisaddr >> 16;
    p[4] = hisaddr >> 8;
    p[5] = hisaddr;
   }
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
# 2728 "openbsd3/net/if_spppsubr.c"
 if (rlen == 0 && !(sp->ipcp.flags & 1)) {
  buf[0] = 3;
  buf[1] = 6;
  buf[2] = hisaddr >> 24;
  buf[3] = hisaddr >> 16;
  buf[4] = hisaddr >> 8;
  buf[5] = hisaddr;
  rlen = 6;
  if (debug)
   addlog("still need hisaddr ");
 }

 if (rlen) {
  if (debug)
   addlog(" send conf-nak\n");
  sppp_cp_send (sp, 0x8021, 3, h->ident, rlen, buf);
 } else {
  if (debug)
   addlog(" send conf-ack\n");
  sppp_cp_send (sp, 0x8021, 2,
         h->ident, origlen, h+1);
 }

 free (buf, 127);
 return (rlen == 0);
}





 void
sppp_ipcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;

 len -= 4;
 buf = malloc (len, 127, 0x0001);
 if (!buf)
  return;

 if (debug)
  log(7, "%s: " "ipcp rej opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   addlog("%s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 3:




   sp->ipcp.opts &= ~(1 << 3);
   break;





  }
 }
 if (debug)
  addlog("\n");
 free (buf, 127);
 return;
}





 void
sppp_ipcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;
 u_long wantaddr;

 len -= 4;
 buf = malloc (len, 127, 0x0001);
 if (!buf)
  return;

 if (debug)
  log(7, "%s: " "ipcp nak opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   addlog("%s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 3:





   if (len >= 6 && p[1] == 6) {
    wantaddr = p[2] << 24 | p[3] << 16 |
     p[4] << 8 | p[5];
    sp->ipcp.opts |= (1 << 3);
    if (debug)
     addlog("[wantaddr %s] ",
            sppp_dotted_quad(wantaddr));






    if (sp->ipcp.flags & 2) {
     sppp_set_ip_addr(sp, wantaddr);
     if (debug)
      addlog("[agree] ");
    }
   }
   break;







  }
 }
 if (debug)
  addlog("\n");
 free (buf, 127);
 return;
}

 void
sppp_ipcp_tlu(struct sppp *sp)
{
}

 void
sppp_ipcp_tld(struct sppp *sp)
{
}

 void
sppp_ipcp_tls(struct sppp *sp)
{

 sp->lcp.protos |= (1 << 1);
}

 void
sppp_ipcp_tlf(struct sppp *sp)
{

 sp->lcp.protos &= ~(1 << 1);
 sppp_lcp_check_and_close(sp);
}

 void
sppp_ipcp_scr(struct sppp *sp)
{
 char opt[6 + 6 ];
 u_long ouraddr;
 int i = 0;
# 2910 "openbsd3/net/if_spppsubr.c"
 if (sp->ipcp.opts & (1 << 3)) {
  sppp_get_ip_addrs(sp, &ouraddr, 0, 0);
  opt[i++] = 3;
  opt[i++] = 6;
  opt[i++] = ouraddr >> 24;
  opt[i++] = ouraddr >> 16;
  opt[i++] = ouraddr >> 8;
  opt[i++] = ouraddr;
 }

 sp->confid[1] = ++sp->pp_seq;
 sppp_cp_send(sp, 0x8021, 1, sp->confid[1], i, &opt);
}
# 3013 "openbsd3/net/if_spppsubr.c"
void
sppp_chap_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len, x;
 u_char *value, *name, digest[16], dsize;
 int value_len, name_len;
 MD5_CTX ctx;

 len = m->M_dat.MH.MH_pkthdr.len;
 if (len < 4) {
  if (debug)
   log(7,
       "%s: " "chap invalid packet length: %d bytes\n",
       (ifp)->if_xname, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (len > __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))
  len = __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 switch (h->type) {

 case 1:
  value = 1 + (u_char*)(h+1);
  value_len = value[-1];
  name = value + value_len;
  name_len = len - value_len - 5;
  if (name_len < 0) {
   if (debug) {
    log(7,
        "%s: " "chap corrupted challenge "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc223, h->type),
        h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
    if (len > 4)
     sppp_print_bytes((u_char*) (h+1), len-4);
    addlog(">\n");
   }
   break;
  }

  if (debug) {
   log(7,
       "%s: " "chap input <%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_auth_type_name(0xc223, h->type), h->ident,
       __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   sppp_print_string((char*) name, name_len);
   addlog(" value-size=%d value=", value_len);
   sppp_print_bytes(value, value_len);
   addlog(">\n");
  }


  MD5Init(&ctx);
  MD5Update(&ctx, &h->ident, 1);
  MD5Update(&ctx, sp->myauth.secret,
     sppp_strnlen(sp->myauth.secret, 16));
  MD5Update(&ctx, value, value_len);
  MD5Final(digest, &ctx);
  dsize = sizeof digest;

  sppp_auth_send(&global_chap[get_stack_id()], sp, 2, h->ident,
          sizeof dsize, (const char *)&dsize,
          sizeof digest, digest,
          (size_t)sppp_strnlen(sp->myauth.name, 32),
          sp->myauth.name,
          0);
  break;

 case 3:
  if (debug) {
   log(7, "%s: " "chap success",
       (ifp)->if_xname);
   if (len > 4) {
    addlog(": ");
    sppp_print_string((char*)(h + 1), len - 4);
   }
   addlog("\n");
  }
  x = splraise((0x20 + ((6) << 4)));
  sp->pp_flags &= ~0x10;
  if (sp->myauth.proto == 0xc223 &&
      (sp->lcp.opts & (1 << 3)) &&
      (sp->lcp.protos & (1 << 3)) == 0) {





   splx(x);
   break;
  }
  splx(x);
  sppp_phase_network(sp);
  break;

 case 4:
  if (debug) {
   log(6, "%s: " "chap failure",
       (ifp)->if_xname);
   if (len > 4) {
    addlog(": ");
    sppp_print_string((char*)(h + 1), len - 4);
   }
   addlog("\n");
  } else
   log(6, "%s: " "chap failure\n",
       (ifp)->if_xname);

  break;


 case 2:
  value = 1 + (u_char*)(h+1);
  value_len = value[-1];
  name = value + value_len;
  name_len = len - value_len - 5;
  if (name_len < 0) {
   if (debug) {
    log(7,
        "%s: " "chap corrupted response "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc223, h->type),
        h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
    if (len > 4)
     sppp_print_bytes((u_char*)(h+1), len-4);
    addlog(">\n");
   }
   break;
  }
  if (h->ident != sp->confid[3]) {
   if (debug)
    log(7,
        "%s: " "chap dropping response for old ID "
        "(got %d, expected %d)\n",
        (ifp)->if_xname,
        h->ident, sp->confid[3]);
   break;
  }
  if (name_len != sppp_strnlen(sp->hisauth.name, 32)
      || bcmp(name, sp->hisauth.name, name_len) != 0) {
   log(6, "%s: " "chap response, his name ",
       (ifp)->if_xname);
   sppp_print_string(name, name_len);
   addlog(" != expected ");
   sppp_print_string(sp->hisauth.name,
       sppp_strnlen(sp->hisauth.name, 32));
   addlog("\n");
  }
  if (debug) {
   log(7, "%s: " "chap input(%s) "
       "<%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_state_name(sp->state[3]),
       sppp_auth_type_name(0xc223, h->type),
       h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   sppp_print_string((char*)name, name_len);
   addlog(" value-size=%d value=", value_len);
   sppp_print_bytes(value, value_len);
   addlog(">\n");
  }
  if (value_len != 16) {
   if (debug)
    log(7,
        "%s: " "chap bad hash value length: "
        "%d bytes, should be %d\n",
        (ifp)->if_xname, value_len,
        16);
   break;
  }

  MD5Init(&ctx);
  MD5Update(&ctx, &h->ident, 1);
  MD5Update(&ctx, sp->hisauth.secret,
     sppp_strnlen(sp->hisauth.secret, 16));
  MD5Update(&ctx, sp->myauth.challenge, 16);
  MD5Final(digest, &ctx);




  if (value_len != sizeof digest ||
      bcmp(digest, value, value_len) != 0) {

   sppp_auth_send(&global_chap[get_stack_id()], sp, 4, h->ident,
           sizeof("Failed...") - 1, (u_char *)"Failed...",
           0);
   global_chap[get_stack_id()].tld(sp);
   break;
  }

  if (sp->state[3] == 6 ||
      sp->state[3] == 9)
   sppp_auth_send(&global_chap[get_stack_id()], sp, 3, h->ident,
           sizeof("Welcome!") - 1, (u_char *)"Welcome!",
           0);
  if (sp->state[3] == 6) {
   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 9);
   global_chap[get_stack_id()].tlu(sp);
  }
  break;

 default:

  if (debug) {
   log(7, "%s: " "chap unknown input(%s) "
       "<0x%x id=0x%xh len=%d",
       (ifp)->if_xname,
       sppp_state_name(sp->state[3]),
       h->type, h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   if (len > 4)
    sppp_print_bytes((u_char*)(h+1), len-4);
   addlog(">\n");
  }
  break;

 }
}

 void
sppp_chap_init(struct sppp *sp)
{

 sp->state[3] = 2;
 sp->fail_counter[3] = 0;



}

 void
sppp_chap_open(struct sppp *sp)
{
 if (sp->myauth.proto == 0xc223 &&
     (sp->lcp.opts & (1 << 3)) != 0) {

  global_chap[get_stack_id()].scr(sp);
  sp->rst_counter[3] = sp->lcp.max_configure;
  sppp_cp_change_state(&global_chap[get_stack_id()], sp, 6);
 }

}

 void
sppp_chap_close(struct sppp *sp)
{
 if (sp->state[3] != 2)
  sppp_cp_change_state(&global_chap[get_stack_id()], sp, 2);
}

 void
sppp_chap_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (debug)
  log(7, "%s: " "chap TO(%s) rst_counter = %d\n",
      (ifp)->if_xname,
      sppp_state_name(sp->state[3]),
      sp->rst_counter[3]);

 if (--sp->rst_counter[3] < 0)

  switch (sp->state[3]) {
  case 6:
   global_chap[get_stack_id()].tld(sp);
   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 2);
   break;
  }
 else

  switch (sp->state[3]) {
  case 9:

   sp->rst_counter[3] = sp->lcp.max_configure;

  case 6:
   global_chap[get_stack_id()].scr(sp);

   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 6);
   break;
  }

 splx(s);
}

 void
sppp_chap_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int i = 0, x;

 i = 0;
 sp->rst_counter[3] = sp->lcp.max_configure;







 if ((sp->hisauth.flags & 2) == 0) {




  i = 300 + ((unsigned)(random() & 0xff00) >> 7);




  timeout_set(&sp->ch[3], global_chap[get_stack_id()].TO, (void *)sp);
  timeout_add(&sp->ch[3], i * global_hz[get_stack_id()]);

 }

 if (debug) {
  log(7,
      "%s: " "chap %s, ",
      (ifp)->if_xname,
      sp->pp_phase == PHASE_NETWORK? "reconfirmed": "tlu");
  if ((sp->hisauth.flags & 2) == 0)
   addlog("next re-challenge in %d seconds\n", i);
  else
   addlog("re-challenging supressed\n");
 }

 x = splraise((0x20 + ((6) << 4)));

 sp->lcp.protos |= (1 << 3);

 if (sp->pp_flags & 0x10) {





  splx(x);
  return;
 }
 splx(x);





 if (sp->pp_phase != PHASE_NETWORK)
  sppp_phase_network(sp);
}

 void
sppp_chap_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "chap tld\n", (ifp)->if_xname);
 timeout_del(&(sp->ch[3]));
 sp->lcp.protos &= ~(1 << 3);

 global_lcp[get_stack_id()].Close(sp);
}

 void
sppp_chap_scr(struct sppp *sp)
{
 u_long *ch, seed;
 u_char clen;

 struct timeval tv;



 ch = (u_long *)sp->myauth.challenge;



 microtime(&tv);
 seed = tv.tv_sec ^ tv.tv_usec;

 ch[0] = seed ^ random();
 ch[1] = seed ^ random();
 ch[2] = seed ^ random();
 ch[3] = seed ^ random();
 clen = 16;

 sp->confid[3] = ++sp->pp_seq;

 sppp_auth_send(&global_chap[get_stack_id()], sp, 1, sp->confid[3],
         sizeof clen, (const char *)&clen,
         (size_t)16, sp->myauth.challenge,
         (size_t)sppp_strnlen(sp->myauth.name, 32),
         sp->myauth.name,
         0);
}
# 3432 "openbsd3/net/if_spppsubr.c"
 void
sppp_pap_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len, x;
 u_char *name, *passwd, mlen;
 int name_len, passwd_len;

 len = m->M_dat.MH.MH_pkthdr.len;
 if (len < 5) {
  if (debug)
   log(7,
       "%s: " "pap invalid packet length: %d bytes\n",
       (ifp)->if_xname, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (len > __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }))
  len = __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 switch (h->type) {

 case 1:
  name = 1 + (u_char*)(h+1);
  name_len = name[-1];
  passwd = name + name_len + 1;
  if (name_len > len - 6 ||
      (passwd_len = passwd[-1]) > len - 6 - name_len) {
   if (debug) {
    log(7, "%s: " "pap corrupted input "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc023, h->type),
        h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
    if (len > 4)
     sppp_print_bytes((u_char*)(h+1), len-4);
    addlog(">\n");
   }
   break;
  }
  if (debug) {
   log(7, "%s: " "pap input(%s) "
       "<%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_state_name(sp->state[2]),
       sppp_auth_type_name(0xc023, h->type),
       h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   sppp_print_string((char*)name, name_len);
   addlog(" passwd=");
   sppp_print_string((char*)passwd, passwd_len);
   addlog(">\n");
  }
  if (name_len > 32 ||
      passwd_len > 16 ||
      bcmp(name, sp->hisauth.name, name_len) != 0 ||
      bcmp(passwd, sp->hisauth.secret, passwd_len) != 0) {

   mlen = sizeof("Failed...") - 1;
   sppp_auth_send(&global_pap[get_stack_id()], sp, 3, h->ident,
           sizeof mlen, (const char *)&mlen,
           sizeof("Failed...") - 1, (u_char *)"Failed...",
           0);
   global_pap[get_stack_id()].tld(sp);
   break;
  }

  if (sp->state[2] == 6 ||
      sp->state[2] == 9) {
   mlen = sizeof("Welcome!") - 1;
   sppp_auth_send(&global_pap[get_stack_id()], sp, 2, h->ident,
           sizeof mlen, (const char *)&mlen,
           sizeof("Welcome!") - 1, (u_char *)"Welcome!",
           0);
  }
  if (sp->state[2] == 6) {
   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 9);
   global_pap[get_stack_id()].tlu(sp);
  }
  break;


 case 2:
  timeout_del(&(sp->pap_my_to_ch));
  if (debug) {
   log(7, "%s: " "pap success",
       (ifp)->if_xname);
   name_len = *((char *)h);
   if (len > 5 && name_len) {
    addlog(": ");
    sppp_print_string((char*)(h+1), name_len);
   }
   addlog("\n");
  }
  x = splraise((0x20 + ((6) << 4)));
  sp->pp_flags &= ~0x10;
  if (sp->myauth.proto == 0xc023 &&
      (sp->lcp.opts & (1 << 3)) &&
      (sp->lcp.protos & (1 << 2)) == 0) {





   splx(x);
   break;
  }
  splx(x);
  sppp_phase_network(sp);
  break;

 case 3:
  timeout_del(&(sp->pap_my_to_ch));
  if (debug) {
   log(6, "%s: " "pap failure",
       (ifp)->if_xname);
   name_len = *((char *)h);
   if (len > 5 && name_len) {
    addlog(": ");
    sppp_print_string((char*)(h+1), name_len);
   }
   addlog("\n");
  } else
   log(6, "%s: " "pap failure\n",
       (ifp)->if_xname);

  break;

 default:

  if (debug) {
   log(7, "%s: " "pap corrupted input "
       "<0x%x id=0x%x len=%d",
       (ifp)->if_xname,
       h->type, h->ident, __extension__({ u_int16_t __swap16_x = (h->len); __builtin_constant_p(h->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
   if (len > 4)
    sppp_print_bytes((u_char*)(h+1), len-4);
   addlog(">\n");
  }
  break;

 }
}

 void
sppp_pap_init(struct sppp *sp)
{

 sp->state[2] = 2;
 sp->fail_counter[2] = 0;




}

 void
sppp_pap_open(struct sppp *sp)
{
 if (sp->hisauth.proto == 0xc023 &&
     (sp->lcp.opts & (1 << 3)) != 0) {

  sp->rst_counter[2] = sp->lcp.max_configure;
  sppp_cp_change_state(&global_pap[get_stack_id()], sp, 6);
 }
 if (sp->myauth.proto == 0xc023) {

  global_pap[get_stack_id()].scr(sp);




  timeout_set(&sp->pap_my_to_ch, sppp_pap_my_TO, (void *)sp);
  timeout_add(&sp->pap_my_to_ch, sp->lcp.timeout);

 }
}

 void
sppp_pap_close(struct sppp *sp)
{
 if (sp->state[2] != 2)
  sppp_cp_change_state(&global_pap[get_stack_id()], sp, 2);
}





 void
sppp_pap_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (debug)
  log(7, "%s: " "pap TO(%s) rst_counter = %d\n",
      (ifp)->if_xname,
      sppp_state_name(sp->state[2]),
      sp->rst_counter[2]);

 if (--sp->rst_counter[2] < 0)

  switch (sp->state[2]) {
  case 6:
   global_pap[get_stack_id()].tld(sp);
   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 2);
   break;
  }
 else

  switch (sp->state[2]) {
  case 6:

   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 6);
   break;
  }

 splx(s);
}






 void
sppp_pap_my_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "pap peer TO\n",
      (ifp)->if_xname);

 global_pap[get_stack_id()].scr(sp);
}

 void
sppp_pap_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int x;

 sp->rst_counter[2] = sp->lcp.max_configure;

 if (debug)
  log(7, "%s: " "%s tlu\n",
      (ifp)->if_xname, global_pap[get_stack_id()].name);

 x = splraise((0x20 + ((6) << 4)));

 sp->lcp.protos |= (1 << 2);

 if (sp->pp_flags & 0x10) {





  splx(x);
  return;
 }
 splx(x);
 sppp_phase_network(sp);
}

 void
sppp_pap_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  log(7, "%s: " "pap tld\n", (ifp)->if_xname);
 timeout_del(&(sp->ch[2]));
 timeout_del(&(sp->pap_my_to_ch));
 sp->lcp.protos &= ~(1 << 2);

 global_lcp[get_stack_id()].Close(sp);
}

 void
sppp_pap_scr(struct sppp *sp)
{
 u_char idlen, pwdlen;

 sp->confid[2] = ++sp->pp_seq;
 pwdlen = sppp_strnlen(sp->myauth.secret, 16);
 idlen = sppp_strnlen(sp->myauth.name, 32);

 sppp_auth_send(&global_pap[get_stack_id()], sp, 1, sp->confid[2],
         sizeof idlen, (const char *)&idlen,
         (size_t)idlen, sp->myauth.name,
         sizeof pwdlen, (const char *)&pwdlen,
         (size_t)pwdlen, sp->myauth.secret,
         0);
}
# 3743 "openbsd3/net/if_spppsubr.c"
 void
sppp_auth_send(const struct cp *cp, struct sppp *sp, u_char type, u_char id,
        ...)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct lcp_header *lh;
 struct mbuf *m;
 u_char *p;
 int len;
 size_t mlen;
 const char *msg;
 va_list ap;

 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0xff;
 h->control = 0x03;
 h->protocol = __extension__({ u_int16_t __swap16_x = (cp->proto); __builtin_constant_p(cp->proto) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 lh = (struct lcp_header*)(h + 1);
 lh->type = type;
 lh->ident = id;
 p = (u_char*) (lh+1);

 __builtin_va_start((ap),id);
 len = 0;

 while ((mlen = __builtin_va_arg(ap, size_t)) != 0) {
  msg = __builtin_va_arg(ap, const char *);
  len += mlen;
  if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header)) {
   __builtin_va_end(ap);
   m_freem(m);
   return;
  }

  bcopy(msg, p, mlen);
  p += mlen;
 }
 __builtin_va_end(ap);

 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + sizeof (struct lcp_header) + len;
 lh->len = __extension__({ u_int16_t __swap16_x = (sizeof (struct lcp_header) + len); __builtin_constant_p(sizeof (struct lcp_header) + len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 if (debug) {
  log(7, "%s: " "%s output <%s id=0x%x len=%d",
      (ifp)->if_xname, cp->name,
      sppp_auth_type_name(cp->proto, lh->type),
      lh->ident, __extension__({ u_int16_t __swap16_x = (lh->len); __builtin_constant_p(lh->len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
  if (len)
   sppp_print_bytes((u_char*) (lh+1), len);
  addlog(">\n");
 }
 if (((&sp->pp_cpq)->ifq_len >= (&sp->pp_cpq)->ifq_maxlen)) {
  ((&sp->pp_fastq)->ifq_drops++);
  ((&ifp->if_snd)->ifq_drops++);
  m_freem (m);
  ++ifp->if_data.ifi_oerrors;
  m = 0L;
 } else
  { (m)->m_hdr.mh_nextpkt = 0; if ((&sp->pp_cpq)->ifq_tail == 0) (&sp->pp_cpq)->ifq_head = m; else (&sp->pp_cpq)->ifq_tail->m_hdr.mh_nextpkt = m; (&sp->pp_cpq)->ifq_tail = m; (&sp->pp_cpq)->ifq_len++; };
 if (! (ifp->if_flags & 0x400))
  (*ifp->if_start) (ifp);
 if (m != 0L)
  ifp->if_data.ifi_obytes += m->M_dat.MH.MH_pkthdr.len + 3;
}




 void
sppp_qflush(struct ifqueue *ifq)
{
 struct mbuf *m, *n;

 n = ifq->ifq_head;
 while ((m = n)) {
  n = m->m_hdr.mh_nextpkt;
  m_freem (m);
 }
 ifq->ifq_head = 0;
 ifq->ifq_tail = 0;
 ifq->ifq_len = 0;
}




 void
sppp_keepalive(void *dummy)
{
 struct sppp *sp;
 int s;

 s = splraise((0x20 + ((6) << 4)));
 for (sp=global_spppq[get_stack_id()]; sp; sp=sp->pp_next) {
  struct ifnet *ifp = &sp->pp_if;


  if (! (sp->pp_flags & 0x01) ||
      ! (ifp->if_flags & 0x40))
   continue;


  if (! (sp->pp_flags & 0x02) &&
      sp->pp_phase < PHASE_AUTHENTICATE)
   continue;

  if (sp->pp_alivecnt == 3) {

   printf ("%s: " "down\n", (ifp)->if_xname);
    if (sp->pp_flags & 0x02) {
   if_down (ifp);
   sppp_qflush (&sp->pp_cpq);
    } else {

     global_lcp[get_stack_id()].Close(sp);
   }
  }
  if (sp->pp_alivecnt <= 3)
   ++sp->pp_alivecnt;
  if (sp->pp_flags & 0x02)
   sppp_cisco_send (sp, 2, ++sp->pp_seq,
    sp->pp_rseq);
  else if (sp->pp_phase >= PHASE_AUTHENTICATE) {
   long nmagic = __extension__({ u_int32_t __swap32_x = (sp->lcp.magic); __builtin_constant_p(sp->lcp.magic) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
   sp->lcp.echoid = ++sp->pp_seq;
   sppp_cp_send (sp, 0xc021, 9,
    sp->lcp.echoid, 4, &nmagic);
  }
 }
 splx(s);




 timeout_add(&global_keepalive_ch[get_stack_id()], global_hz[get_stack_id()] * 10);

}




 void
sppp_get_ip_addrs(struct sppp *sp, u_long *src, u_long *dst, u_long *srcmask)
{
 struct ifnet *ifp = &sp->pp_if;
 struct ifaddr *ifa;
 struct sockaddr_in *si, *sm = 0;
 u_long ssrc, ddst;

 sm = 0L;
 ssrc = ddst = 0L;
# 3910 "openbsd3/net/if_spppsubr.c"
 si = 0;
 for((ifa) = ((&ifp->if_addrlist)->tqh_first); (ifa) != 0L; (ifa) = ((ifa)->ifa_list.tqe_next))

 {
  if (ifa->ifa_addr->sa_family == 2) {
   si = (struct sockaddr_in *)ifa->ifa_addr;
   sm = (struct sockaddr_in *)ifa->ifa_netmask;
   if (si)
    break;
  }
 }
 if (ifa) {
  if (si && si->sin_addr.s_addr) {
   ssrc = si->sin_addr.s_addr;
   if (srcmask)
    *srcmask = __extension__({ u_int32_t __swap32_x = (sm->sin_addr.s_addr); __builtin_constant_p(sm->sin_addr.s_addr) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  }

  si = (struct sockaddr_in *)ifa->ifa_dstaddr;
  if (si && si->sin_addr.s_addr)
   ddst = si->sin_addr.s_addr;
 }

 if (dst) *dst = __extension__({ u_int32_t __swap32_x = (ddst); __builtin_constant_p(ddst) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 if (src) *src = __extension__({ u_int32_t __swap32_x = (ssrc); __builtin_constant_p(ssrc) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
}




 void
sppp_set_ip_addr(struct sppp *sp, u_long src)
{
 struct ifnet *ifp = &sp->pp_if;
 struct ifaddr *ifa;
 struct sockaddr_in *si;
# 3957 "openbsd3/net/if_spppsubr.c"
 si = 0;
 for((ifa) = ((&ifp->if_addrlist)->tqh_first); (ifa) != 0L; (ifa) = ((ifa)->ifa_list.tqe_next))

 {
  if (ifa->ifa_addr->sa_family == 2)
  {
   si = (struct sockaddr_in *)ifa->ifa_addr;
   if (si)
    break;
  }
 }

 if (ifa && si)
  si->sin_addr.s_addr = __extension__({ u_int32_t __swap32_x = (src); __builtin_constant_p(src) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
}

 int
sppp_params(struct sppp *sp, u_long cmd, void *data)
{
 struct ifreq *ifr = (struct ifreq *)data;
 struct spppreq spr;

 if (copyin((caddr_t)ifr->ifr_ifru.ifru_data, &spr, sizeof spr) != 0)
  return 14;

 switch (spr.cmd) {
 case (int)((caddr_t)(('S' << 24) + (1 << 16) + sizeof(struct sppp))):
  if (cmd != (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((58))))
   return 22;







  bcopy(sp, &spr.defs, sizeof(struct sppp));
  bzero(spr.defs.myauth.secret, 16);
  bzero(spr.defs.myauth.challenge, 16);
  bzero(spr.defs.hisauth.secret, 16);
  bzero(spr.defs.hisauth.challenge, 16);
  return copyout(&spr, (caddr_t)ifr->ifr_ifru.ifru_data, sizeof spr);

 case (int)((caddr_t)(('S' << 24) + (2 << 16) + sizeof(struct sppp))):
  if (cmd != ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((57))))
   return 22;
# 4027 "openbsd3/net/if_spppsubr.c"
  if (sp->pp_phase != PHASE_DEAD)
   return 16;

  if ((spr.defs.myauth.proto != 0 && spr.defs.myauth.proto != 0xc023 &&
       spr.defs.myauth.proto != 0xc223) ||
      (spr.defs.hisauth.proto != 0 && spr.defs.hisauth.proto != 0xc023 &&
       spr.defs.hisauth.proto != 0xc223))
   return 22;

  if (spr.defs.myauth.proto == 0)

   bzero(&sp->myauth, sizeof sp->myauth);
  else {

   sp->myauth.proto = spr.defs.myauth.proto;
   bcopy(spr.defs.myauth.name, sp->myauth.name, 32);
   if (spr.defs.myauth.secret[0] != '\0')
    bcopy(spr.defs.myauth.secret, sp->myauth.secret,
          16);
  }
  if (spr.defs.hisauth.proto == 0)

   bzero(&sp->hisauth, sizeof sp->hisauth);
  else {

   sp->hisauth.proto = spr.defs.hisauth.proto;
   sp->hisauth.flags = spr.defs.hisauth.flags;
   bcopy(spr.defs.hisauth.name, sp->hisauth.name, 32);
   if (spr.defs.hisauth.secret[0] != '\0')
    bcopy(spr.defs.hisauth.secret, sp->hisauth.secret,
          16);
  }
  break;

 default:
  return 22;
 }

 return 0;
}

 void
sppp_phase_network(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if;
 int i;
 u_long mask;

 sp->pp_phase = PHASE_NETWORK;

 log(6, "%s: " "phase %s\n", (ifp)->if_xname,
     sppp_phase_name(sp->pp_phase));


 for (i = 0; i < (3 + 1); i++)
  if (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x04)
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Open(sp);


 for (i = 0, mask = 1; i < (3 + 1); i++, mask <<= 1)
  if (sp->lcp.protos & mask && (((*_GLOBAL_cps_27_A[get_stack_id()])[i])->flags & 0x04))
   ((*_GLOBAL_cps_27_A[get_stack_id()])[i])->Up(sp);


 sppp_lcp_check_and_close(sp);
}


 const char *
sppp_cp_type_name(u_char type)
{
 typedef  char  _GLOBAL_135_T; static  _GLOBAL_135_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_135_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_28_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (type) {
 case 1: return "conf-req";
 case 2: return "conf-ack";
 case 3: return "conf-nak";
 case 4: return "conf-rej";
 case 5: return "term-req";
 case 6: return "term-ack";
 case 7: return "code-rej";
 case 8: return "proto-rej";
 case 9: return "echo-req";
 case 10: return "echo-reply";
 case 11: return "discard-req";
 }
 snprintf ((*_GLOBAL_buf_28_A[get_stack_id()]), sizeof (*_GLOBAL_buf_28_A[get_stack_id()]), "0x%x", type);
 return (*_GLOBAL_buf_28_A[get_stack_id()]);
}

 const char *
sppp_auth_type_name(u_short proto, u_char type)
{
 typedef  char  _GLOBAL_136_T; static  _GLOBAL_136_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_136_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_29_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (proto) {
 case 0xc223:
  switch (type) {
  case 1: return "challenge";
  case 2: return "response";
  case 3: return "success";
  case 4: return "failure";
  }
 case 0xc023:
  switch (type) {
  case 1: return "req";
  case 2: return "ack";
  case 3: return "nak";
  }
 }
 snprintf ((*_GLOBAL_buf_29_A[get_stack_id()]), sizeof (*_GLOBAL_buf_29_A[get_stack_id()]), "0x%x", type);
 return (*_GLOBAL_buf_29_A[get_stack_id()]);
}

 const char *
sppp_lcp_opt_name(u_char opt)
{
 typedef  char  _GLOBAL_137_T; static  _GLOBAL_137_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_137_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_30_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (opt) {
 case 1: return "mru";
 case 2: return "async-map";
 case 3: return "auth-proto";
 case 4: return "qual-proto";
 case 5: return "magic";
 case 7: return "proto-comp";
 case 8: return "addr-comp";
 }
 snprintf ((*_GLOBAL_buf_30_A[get_stack_id()]), sizeof (*_GLOBAL_buf_30_A[get_stack_id()]), "0x%x", opt);
 return (*_GLOBAL_buf_30_A[get_stack_id()]);
}

 const char *
sppp_ipcp_opt_name(u_char opt)
{
 typedef  char  _GLOBAL_138_T; static  _GLOBAL_138_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_138_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_31_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (opt) {
 case 1: return "addresses";
 case 2: return "compression";
 case 3: return "address";
 }
 snprintf ((*_GLOBAL_buf_31_A[get_stack_id()]), sizeof (*_GLOBAL_buf_31_A[get_stack_id()]), "0x%x", opt);
 return (*_GLOBAL_buf_31_A[get_stack_id()]);
}

 const char *
sppp_state_name(int state)
{
 switch (state) {
 case 0: return "initial";
 case 1: return "starting";
 case 2: return "closed";
 case 3: return "stopped";
 case 4: return "closing";
 case 5: return "stopping";
 case 6: return "req-sent";
 case 7: return "ack-rcvd";
 case 8: return "ack-sent";
 case 9: return "opened";
 }
 return "illegal";
}

 const char *
sppp_phase_name(enum ppp_phase phase)
{
 switch (phase) {
 case PHASE_DEAD: return "dead";
 case PHASE_ESTABLISH: return "establish";
 case PHASE_TERMINATE: return "terminate";
 case PHASE_AUTHENTICATE: return "authenticate";
 case PHASE_NETWORK: return "network";
 }
 return "illegal";
}

 const char *
sppp_proto_name(u_short proto)
{
 typedef  char  _GLOBAL_139_T; static  _GLOBAL_139_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_139_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_32_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (proto) {
 case 0xc021: return "lcp";
 case 0x8021: return "ipcp";
 case 0xc023: return "pap";
 case 0xc223: return "chap";
 }
 snprintf((*_GLOBAL_buf_32_A[get_stack_id()]), sizeof (*_GLOBAL_buf_32_A[get_stack_id()]), "0x%x", (unsigned)proto);
 return (*_GLOBAL_buf_32_A[get_stack_id()]);
}

 void
sppp_print_bytes(const u_char *p, u_short len)
{
 addlog(" %02x", *p++);
 while (--len > 0)
  addlog("-%02x", *p++);
}

 void
sppp_print_string(const char *p, u_short len)
{
 u_char c;

 while (len-- > 0) {
  c = *p++;



  if (c < ' ' || c > '~')
   addlog("\\x%x", c);
  else
   addlog("%c", c);
 }
}

 const char *
sppp_dotted_quad(u_long addr)
{
 typedef  char  _GLOBAL_140_T; static  _GLOBAL_140_T  _GLOBAL_0_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_1_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_2_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_3_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_4_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_5_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_6_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_7_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_8_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_9_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_10_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_11_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_12_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_13_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_14_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_15_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_16_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_17_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_18_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_19_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_20_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_21_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_22_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_23_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_24_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_25_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_26_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_27_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_28_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_29_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_30_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_31_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_32_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_33_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_34_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_35_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_36_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_37_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_38_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_39_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_40_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_41_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_42_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_43_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_44_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_45_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_46_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_47_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_48_s_I [ 16 ] ; static  _GLOBAL_140_T  _GLOBAL_49_s_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_s_I) *_GLOBAL_s_33_A[NUM_STACKS] = { &_GLOBAL_0_s_I, &_GLOBAL_1_s_I, &_GLOBAL_2_s_I, &_GLOBAL_3_s_I, &_GLOBAL_4_s_I, &_GLOBAL_5_s_I, &_GLOBAL_6_s_I, &_GLOBAL_7_s_I, &_GLOBAL_8_s_I, &_GLOBAL_9_s_I, &_GLOBAL_10_s_I, &_GLOBAL_11_s_I, &_GLOBAL_12_s_I, &_GLOBAL_13_s_I, &_GLOBAL_14_s_I, &_GLOBAL_15_s_I, &_GLOBAL_16_s_I, &_GLOBAL_17_s_I, &_GLOBAL_18_s_I, &_GLOBAL_19_s_I, &_GLOBAL_20_s_I, &_GLOBAL_21_s_I, &_GLOBAL_22_s_I, &_GLOBAL_23_s_I, &_GLOBAL_24_s_I, &_GLOBAL_25_s_I, &_GLOBAL_26_s_I, &_GLOBAL_27_s_I, &_GLOBAL_28_s_I, &_GLOBAL_29_s_I, &_GLOBAL_30_s_I, &_GLOBAL_31_s_I, &_GLOBAL_32_s_I, &_GLOBAL_33_s_I, &_GLOBAL_34_s_I, &_GLOBAL_35_s_I, &_GLOBAL_36_s_I, &_GLOBAL_37_s_I, &_GLOBAL_38_s_I, &_GLOBAL_39_s_I, &_GLOBAL_40_s_I, &_GLOBAL_41_s_I, &_GLOBAL_42_s_I, &_GLOBAL_43_s_I, &_GLOBAL_44_s_I, &_GLOBAL_45_s_I, &_GLOBAL_46_s_I, &_GLOBAL_47_s_I, &_GLOBAL_48_s_I, &_GLOBAL_49_s_I, };  
 snprintf((*_GLOBAL_s_33_A[get_stack_id()]), sizeof (*_GLOBAL_s_33_A[get_stack_id()]), "%d.%d.%d.%d",
  (int)((addr >> 24) & 0xff),
  (int)((addr >> 16) & 0xff),
  (int)((addr >> 8) & 0xff),
  (int)(addr & 0xff));
 return (*_GLOBAL_s_33_A[get_stack_id()]);
}

 int
sppp_strnlen(u_char *p, int max)
{
 int len;

 for (len = 0; len < max && *p; ++p)
  ++len;
 return len;
}


 void
sppp_null(struct sppp *unused)
{

}

