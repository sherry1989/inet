# 1 "openbsd3/net/ppp_tty.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/ppp_tty.c"
# 95 "openbsd3/net/ppp_tty.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/ppp.h" 1
# 96 "openbsd3/net/ppp_tty.c" 2





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
# 102 "openbsd3/net/ppp_tty.c" 2
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
# 103 "openbsd3/net/ppp_tty.c" 2
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
# 104 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/sys/dkstat.h" 1
# 49 "openbsd3/sys/dkstat.h"
typedef  long  _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_1_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_2_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_3_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_4_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_5_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_6_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_7_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_8_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_9_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_10_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_11_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_12_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_13_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_14_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_15_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_16_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_17_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_18_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_19_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_20_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_21_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_22_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_23_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_24_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_25_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_26_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_27_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_28_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_29_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_30_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_31_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_32_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_33_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_34_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_35_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_36_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_37_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_38_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_39_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_40_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_41_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_42_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_43_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_44_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_45_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_46_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_47_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_48_cp_time_I [ 5 ] ; extern  _GLOBAL_67_T  _GLOBAL_49_cp_time_I [ 5 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cp_time_I) *_GLOBAL_cp_time_17_A[NUM_STACKS];  

typedef  int64_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tk_cancc[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_nin[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_nout[NUM_STACKS]; extern  _GLOBAL_68_T  global_tk_rawcc[NUM_STACKS];      
# 105 "openbsd3/net/ppp_tty.c" 2
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
# 106 "openbsd3/net/ppp_tty.c" 2
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
# 107 "openbsd3/net/ppp_tty.c" 2
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
# 108 "openbsd3/net/ppp_tty.c" 2
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


typedef  char  _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttyin_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttyin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyin_I) *_GLOBAL_ttyin_18_A[NUM_STACKS] = { &_GLOBAL_0_ttyin_I, &_GLOBAL_1_ttyin_I, &_GLOBAL_2_ttyin_I, &_GLOBAL_3_ttyin_I, &_GLOBAL_4_ttyin_I, &_GLOBAL_5_ttyin_I, &_GLOBAL_6_ttyin_I, &_GLOBAL_7_ttyin_I, &_GLOBAL_8_ttyin_I, &_GLOBAL_9_ttyin_I, &_GLOBAL_10_ttyin_I, &_GLOBAL_11_ttyin_I, &_GLOBAL_12_ttyin_I, &_GLOBAL_13_ttyin_I, &_GLOBAL_14_ttyin_I, &_GLOBAL_15_ttyin_I, &_GLOBAL_16_ttyin_I, &_GLOBAL_17_ttyin_I, &_GLOBAL_18_ttyin_I, &_GLOBAL_19_ttyin_I, &_GLOBAL_20_ttyin_I, &_GLOBAL_21_ttyin_I, &_GLOBAL_22_ttyin_I, &_GLOBAL_23_ttyin_I, &_GLOBAL_24_ttyin_I, &_GLOBAL_25_ttyin_I, &_GLOBAL_26_ttyin_I, &_GLOBAL_27_ttyin_I, &_GLOBAL_28_ttyin_I, &_GLOBAL_29_ttyin_I, &_GLOBAL_30_ttyin_I, &_GLOBAL_31_ttyin_I, &_GLOBAL_32_ttyin_I, &_GLOBAL_33_ttyin_I, &_GLOBAL_34_ttyin_I, &_GLOBAL_35_ttyin_I, &_GLOBAL_36_ttyin_I, &_GLOBAL_37_ttyin_I, &_GLOBAL_38_ttyin_I, &_GLOBAL_39_ttyin_I, &_GLOBAL_40_ttyin_I, &_GLOBAL_41_ttyin_I, &_GLOBAL_42_ttyin_I, &_GLOBAL_43_ttyin_I, &_GLOBAL_44_ttyin_I, &_GLOBAL_45_ttyin_I, &_GLOBAL_46_ttyin_I, &_GLOBAL_47_ttyin_I, &_GLOBAL_48_ttyin_I, &_GLOBAL_49_ttyin_I, };extern  _GLOBAL_75_T  _GLOBAL_0_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttyout_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttyout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyout_I) *_GLOBAL_ttyout_19_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttopen_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttopen_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttopen_I) *_GLOBAL_ttopen_20_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttclos_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttclos_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttclos_I) *_GLOBAL_ttclos_21_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttybg_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttybg_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybg_I) *_GLOBAL_ttybg_22_A[NUM_STACKS];extern  _GLOBAL_75_T  _GLOBAL_0_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_ttybuf_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_ttybuf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybuf_I) *_GLOBAL_ttybuf_23_A[NUM_STACKS];       

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
# 109 "openbsd3/net/ppp_tty.c" 2
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
# 110 "openbsd3/net/ppp_tty.c" 2
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



typedef  struct cdevsw   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_1_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_2_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_3_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_4_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_5_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_6_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_7_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_8_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_9_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_10_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_11_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_12_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_13_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_14_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_15_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_16_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_17_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_18_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_19_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_20_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_21_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_22_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_23_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_24_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_25_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_26_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_27_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_28_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_29_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_30_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_31_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_32_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_33_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_34_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_35_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_36_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_37_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_38_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_39_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_40_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_41_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_42_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_43_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_44_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_45_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_46_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_47_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_48_cdevsw_I [ ] ; extern  _GLOBAL_96_T  _GLOBAL_49_cdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cdevsw_I) *_GLOBAL_cdevsw_27_A[NUM_STACKS] = { &_GLOBAL_0_cdevsw_I, &_GLOBAL_1_cdevsw_I, &_GLOBAL_2_cdevsw_I, &_GLOBAL_3_cdevsw_I, &_GLOBAL_4_cdevsw_I, &_GLOBAL_5_cdevsw_I, &_GLOBAL_6_cdevsw_I, &_GLOBAL_7_cdevsw_I, &_GLOBAL_8_cdevsw_I, &_GLOBAL_9_cdevsw_I, &_GLOBAL_10_cdevsw_I, &_GLOBAL_11_cdevsw_I, &_GLOBAL_12_cdevsw_I, &_GLOBAL_13_cdevsw_I, &_GLOBAL_14_cdevsw_I, &_GLOBAL_15_cdevsw_I, &_GLOBAL_16_cdevsw_I, &_GLOBAL_17_cdevsw_I, &_GLOBAL_18_cdevsw_I, &_GLOBAL_19_cdevsw_I, &_GLOBAL_20_cdevsw_I, &_GLOBAL_21_cdevsw_I, &_GLOBAL_22_cdevsw_I, &_GLOBAL_23_cdevsw_I, &_GLOBAL_24_cdevsw_I, &_GLOBAL_25_cdevsw_I, &_GLOBAL_26_cdevsw_I, &_GLOBAL_27_cdevsw_I, &_GLOBAL_28_cdevsw_I, &_GLOBAL_29_cdevsw_I, &_GLOBAL_30_cdevsw_I, &_GLOBAL_31_cdevsw_I, &_GLOBAL_32_cdevsw_I, &_GLOBAL_33_cdevsw_I, &_GLOBAL_34_cdevsw_I, &_GLOBAL_35_cdevsw_I, &_GLOBAL_36_cdevsw_I, &_GLOBAL_37_cdevsw_I, &_GLOBAL_38_cdevsw_I, &_GLOBAL_39_cdevsw_I, &_GLOBAL_40_cdevsw_I, &_GLOBAL_41_cdevsw_I, &_GLOBAL_42_cdevsw_I, &_GLOBAL_43_cdevsw_I, &_GLOBAL_44_cdevsw_I, &_GLOBAL_45_cdevsw_I, &_GLOBAL_46_cdevsw_I, &_GLOBAL_47_cdevsw_I, &_GLOBAL_48_cdevsw_I, &_GLOBAL_49_cdevsw_I, };   
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
# 111 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/sys/vnode.h" 1
# 41 "openbsd3/sys/vnode.h"
# 1 "openbsd3/uvm/uvm_pglist.h" 1
# 47 "openbsd3/uvm/uvm_pglist.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };
# 57 "openbsd3/uvm/uvm_pglist.h"
struct pgfreelist {
 struct pglist pgfl_queues[2];
};
# 42 "openbsd3/sys/vnode.h" 2

# 1 "openbsd3/uvm/uvm.h" 1
# 41 "openbsd3/uvm/uvm.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 87 "openbsd3/uvm/uvm_extern.h"
typedef unsigned int uvm_flag_t;
typedef int vm_fault_t;

typedef int vm_inherit_t;
typedef off_t voff_t;

union vm_map_object;
typedef union vm_map_object vm_map_object_t;

struct vm_map_entry;
typedef struct vm_map_entry *vm_map_entry_t;

struct vm_map;
typedef struct vm_map *vm_map_t;

struct vm_page;
typedef struct vm_page *vm_page_t;
# 145 "openbsd3/uvm/uvm_extern.h"
typedef int vm_prot_t;
# 231 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct core;
struct mount;
struct pglist;
struct proc;
struct ucred;
struct uio;
struct uvm_object;
struct vm_anon;
struct vm_aref;
struct vm_map;
struct vmspace;
struct pmap;
struct vnode;
struct pool;
struct simplelock;

typedef  struct pool   _GLOBAL_103_T; extern  _GLOBAL_103_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






struct uvmexp {

 int pagesize;
 int pagemask;
 int pageshift;


 int npages;
 int free;
 int active;
 int inactive;
 int paging;
 int wired;

 int zeropages;
 int reserve_pagedaemon;
 int reserve_kernel;
 int anonpages;
 int vnodepages;
 int vtextpages;


 int freemin;
 int freetarg;
 int inactarg;
 int wiredmax;
 int anonmin;
 int vtextmin;
 int vnodemin;
 int anonminpct;
 int vtextminpct;
 int vnodeminpct;


 int nswapdev;
 int swpages;
 int swpginuse;
 int swpgonly;
 int nswget;
 int nanon;
 int nanonneeded;
 int nfreeanon;


 int faults;
 int traps;
 int intrs;
 int swtch;
 int softs;
 int syscalls;
 int pageins;

 int swapins;
 int swapouts;
 int pgswapin;
 int pgswapout;
 int forks;
 int forks_ppwait;
 int forks_sharevm;
 int pga_zerohit;

 int pga_zeromiss;

 int zeroaborts;



 int fltnoram;
 int fltnoanon;
 int fltpgwait;
 int fltpgrele;
 int fltrelck;
 int fltrelckok;
 int fltanget;
 int fltanretry;
 int fltamcopy;
 int fltnamap;
 int fltnomap;
 int fltlget;
 int fltget;
 int flt_anon;
 int flt_acow;
 int flt_obj;
 int flt_prcopy;
 int flt_przero;


 int pdwoke;
 int pdrevs;
 int pdswout;
 int pdfreed;
 int pdscans;
 int pdanscan;
 int pdobscan;
 int pdreact;
 int pdbusy;
 int pdpageouts;
 int pdpending;
 int pddeact;
 int pdreanon;
 int pdrevnode;
 int pdrevtext;


 struct uvm_object *kmem_object;
 struct uvm_object *mb_object;
};


typedef  struct uvmexp   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_uvmexp[NUM_STACKS];    





# 1 "openbsd3/sys/vmmeter.h" 1
# 44 "openbsd3/sys/vmmeter.h"
struct vmtotal
{
 u_int16_t t_rq;
 u_int16_t t_dw;
 u_int16_t t_pw;
 u_int16_t t_sl;
 u_int16_t t_sw;
 u_int32_t t_vm;
 u_int32_t t_avm;
 u_int32_t t_rm;
 u_int32_t t_arm;
 u_int32_t t_vmshr;
 u_int32_t t_avmshr;
 u_int32_t t_rmshr;
 u_int32_t t_armshr;
 u_int32_t t_free;
};




struct forkstat
{
 int cntfork;
 int cntvfork;
 int cntrfork;
 int cntkthread;
 int sizfork;
 int sizvfork;
 int sizrfork;
 int sizkthread;
};
# 371 "openbsd3/uvm/uvm_extern.h" 2


# 1 "openbsd3/uvm/uvm_param.h" 1
# 71 "openbsd3/uvm/uvm_param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h" 1
# 127 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h"
struct pmap_physseg {
 struct pv_head *pvhead;
 char *attrs;
};
# 72 "openbsd3/uvm/uvm_param.h" 2




typedef int boolean_t;
# 132 "openbsd3/uvm/uvm_param.h"
struct _ps_strings {
 void *val;
};
# 166 "openbsd3/uvm/uvm_param.h"
typedef  psize_t  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_mem_size[NUM_STACKS];   
# 374 "openbsd3/uvm/uvm_extern.h" 2

# 1 "openbsd3/uvm/uvm_page.h" 1
# 118 "openbsd3/uvm/uvm_page.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 119 "openbsd3/uvm/uvm_page.h" 2


struct vm_page {
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } pageq;

 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } hashq;
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } listq;

 struct vm_anon *uanon;
 struct uvm_object *uobject;
 voff_t offset;

 u_short flags;
 u_short version;
 u_short wire_count;
 u_short pqflags;
 u_int loan_count;


 paddr_t phys_addr;
# 148 "openbsd3/uvm/uvm_page.h"
};
# 209 "openbsd3/uvm/uvm_page.h"
struct vm_physseg {
 paddr_t start;
 paddr_t end;
 paddr_t avail_start;
 paddr_t avail_end;
 int free_list;
 struct vm_page *pgs;
 struct vm_page *lastpg;

 struct pmap_physseg pmseg;

};







typedef  boolean_t  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_vm_nphysseg[NUM_STACKS];   
# 271 "openbsd3/uvm/uvm_page.h"
void uvm_page_init(vaddr_t *, vaddr_t *);




boolean_t uvm_page_physget(paddr_t *);

void uvm_page_rehash(void);
void uvm_pageidlezero(void);

 int uvm_lock_fpageq(void);
 void uvm_unlock_fpageq(int);

 void uvm_pageactivate(struct vm_page *);
vaddr_t uvm_pageboot_alloc(vsize_t);
 void uvm_pagecopy(struct vm_page *, struct vm_page *);
 void uvm_pagedeactivate(struct vm_page *);
void uvm_pagefree(struct vm_page *);
void uvm_page_unbusy(struct vm_page **, int);
 struct vm_page *uvm_pagelookup(struct uvm_object *, voff_t);
 void uvm_pageunwire(struct vm_page *);
 void uvm_pagewait(struct vm_page *, int);
 void uvm_pagewake(struct vm_page *);
 void uvm_pagewire(struct vm_page *);
 void uvm_pagezero(struct vm_page *);

 int uvm_page_lookup_freelist(struct vm_page *);

static struct vm_page *PHYS_TO_VM_PAGE(paddr_t);
static int vm_physseg_find(paddr_t, int *);
# 323 "openbsd3/uvm/uvm_page.h"
static __inline int
vm_physseg_find(pframe, offp)
 paddr_t pframe;
 int *offp;
{
# 340 "openbsd3/uvm/uvm_page.h"
 int start, len, try;
# 355 "openbsd3/uvm/uvm_page.h"
 for (start = 0, len = global_vm_nphysseg[get_stack_id()] ; len != 0 ; len = len / 2) {
  try = start + (len / 2);


  if (pframe >= vm_physmem[try].start) {

   if (pframe < vm_physmem[try].end) {
    if (offp)
     *offp = pframe - vm_physmem[try].start;
    return(try);
   }
   start = try + 1;
   len--;
  } else {




  }
 }
 return(-1);
# 392 "openbsd3/uvm/uvm_page.h"
}
# 405 "openbsd3/uvm/uvm_page.h"
static __inline struct vm_page *
PHYS_TO_VM_PAGE(pa)
 paddr_t pa;
{
 paddr_t pf = (((paddr_t)(pa)) >> 12);
 int off;
 int psi;

 psi = vm_physseg_find(pf, &off);
 if (psi != -1)
  return(&vm_physmem[psi].pgs[off]);
 return(0L);
}
# 376 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pmap.h" 1
# 72 "openbsd3/uvm/uvm_pmap.h"
struct proc;







struct pmap_statistics {
 long resident_count;
 long wired_count;
};
typedef struct pmap_statistics *pmap_statistics_t;

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 1
# 43 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void invlpg(u_int);
static __inline void lidt(void *);
static __inline void lldt(u_short);
static __inline void ltr(u_short);
static __inline void lcr0(u_int);
static __inline u_int rcr0(void);
static __inline u_int rcr2(void);
static __inline void lcr3(u_int);
static __inline u_int rcr3(void);
static __inline void lcr4(u_int);
static __inline u_int rcr4(void);
static __inline void tlbflush(void);
static __inline void disable_intr(void);
static __inline void enable_intr(void);
static __inline u_int read_eflags(void);
static __inline void write_eflags(u_int);
static __inline void wbinvd(void);
static __inline void wrmsr(u_int, u_int64_t);
static __inline u_int64_t rdmsr(u_int);
static __inline void breakpoint(void);

static __inline void
invlpg(u_int addr)
{
        __asm volatile("invlpg (%0)" : : "r" (addr) : "memory");
}

static __inline void
lidt(void *p)
{
 __asm volatile("lidt (%0)" : : "r" (p));
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

static __inline void
lcr0(u_int val)
{
 __asm volatile("movl %0,%%cr0" : : "r" (val));
}

static __inline u_int
rcr0(void)
{
 u_int val;
 __asm volatile("movl %%cr0,%0" : "=r" (val));
 return val;
}

static __inline u_int
rcr2(void)
{
 u_int val;
 __asm volatile("movl %%cr2,%0" : "=r" (val));
 return val;
}

static __inline void
lcr3(u_int val)
{
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}

static __inline u_int
rcr3(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 return val;
}

static __inline void
lcr4(u_int val)
{
 __asm volatile("movl %0,%%cr4" : : "r" (val));
}

static __inline u_int
rcr4(void)
{
 u_int val;
 __asm volatile("movl %%cr4,%0" : "=r" (val));
 return val;
}

static __inline void
tlbflush(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}
# 156 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void
disable_intr(void)
{
 __asm volatile("cli");
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wbinvd(void)
{
        __asm volatile("wbinvd");
}


static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
        __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline u_int64_t
rdmsr(u_int msr)
{
        u_int64_t rv;

        __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
        return (rv);
}


static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h" 1
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h"
typedef u_int32_t pd_entry_t;
typedef u_int32_t pt_entry_t;
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2


# 1 "openbsd3/uvm/uvm_object.h" 1
# 49 "openbsd3/uvm/uvm_object.h"
struct uvm_object {
 simple_lock_data_t vmobjlock;
 struct uvm_pagerops *pgops;
 struct pglist memq;
 int uo_npages;
 int uo_refs;
};
# 88 "openbsd3/uvm/uvm_object.h"
typedef  struct uvm_pagerops   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_111_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_38_A[NUM_STACKS];   
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 244 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap;
typedef struct pmap *pmap_t;





struct pmap_head { struct pmap *lh_first; };
# 260 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap {
 struct uvm_object pm_obj;

 struct { struct pmap *le_next; struct pmap **le_prev; } pm_list;
 pd_entry_t *pm_pdir;
 u_int32_t pm_pdirpa;
 struct vm_page *pm_ptphint;
 struct pmap_statistics pm_stats;

 vaddr_t pm_hiexec;
 int pm_flags;

 union descriptor *pm_ldt;
 int pm_ldt_len;
 int pm_ldt_sel;
};
# 288 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_entry;

struct pv_head {
 struct simplelock pvh_lock;
 struct pv_entry *pvh_list;
};

struct pv_entry {
 struct pv_entry *pv_next;
 struct pmap *pv_pmap;
 vaddr_t pv_va;
 struct vm_page *pv_ptp;
};
# 309 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page_info {
 struct { struct pv_page *tqe_next; struct pv_page **tqe_prev; } pvpi_list;
 struct pv_entry *pvpi_pvfree;
 int pvpi_nfree;
};
# 327 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page {
 struct pv_page_info pvinfo;
 struct pv_entry pvents[(((1 << 12) - sizeof(struct pv_page_info)) / sizeof(struct pv_entry))];
};
# 339 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap_remove_record {
 int prr_npages;
 vaddr_t prr_vas[16];
};





extern pd_entry_t PTD[];


typedef  u_long  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_pmap_pg_g[NUM_STACKS];   
# 378 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
void pmap_bootstrap(vaddr_t);
boolean_t pmap_change_attrs(struct vm_page *, int, int);
static void pmap_page_protect(struct vm_page *, vm_prot_t);
void pmap_page_remove(struct vm_page *);
static void pmap_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
void pmap_remove(struct pmap *, vaddr_t, vaddr_t);
boolean_t pmap_test_attrs(struct vm_page *, int);
static void pmap_update_pg(vaddr_t);
static void pmap_update_2pg(vaddr_t,vaddr_t);
void pmap_write_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
int pmap_exec_fixup(struct vm_map *, struct trapframe *,
      struct pcb *);

vaddr_t reserve_dumppages(vaddr_t);






boolean_t pmap_zero_page_uncached(paddr_t);
# 412 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_update_pg(va)
 vaddr_t va;
{





  invlpg((u_int) va);
}





__inline static void
pmap_update_2pg(va, vb)
 vaddr_t va, vb;
{





 {
  invlpg((u_int) va);
  invlpg((u_int) vb);
 }
}
# 452 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_page_protect(pg, prot)
 struct vm_page *pg;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   (void) pmap_change_attrs(pg, 0x00000000, 0x00000002);
  } else {
   pmap_page_remove(pg);
  }
 }
}
# 474 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_protect(pmap, sva, eva, prot)
 struct pmap *pmap;
 vaddr_t sva, eva;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   pmap_write_protect(pmap, sva, eva, prot);
  } else {
   pmap_remove(pmap, sva, eva);
  }
 }
}


void pmap_ldt_cleanup(struct proc *);
# 87 "openbsd3/uvm/uvm_pmap.h" 2
# 98 "openbsd3/uvm/uvm_pmap.h"

void *pmap_bootstrap_alloc(int);

void pmap_activate(struct proc *);


void pmap_deactivate(struct proc *);


void pmap_unwire(pmap_t, vaddr_t);
# 118 "openbsd3/uvm/uvm_pmap.h"
void pmap_collect(pmap_t);





void pmap_copy_page(struct vm_page *, struct vm_page *);

struct pmap *pmap_create(void);
void pmap_destroy(pmap_t);
int pmap_enter(pmap_t,
      vaddr_t, paddr_t, vm_prot_t, int);
boolean_t pmap_extract(pmap_t, vaddr_t, paddr_t *);

vaddr_t pmap_growkernel(vaddr_t);


void pmap_init(void);

void pmap_kenter_pa(vaddr_t, paddr_t, vm_prot_t);
void pmap_kremove(vaddr_t, vsize_t);







void pmap_page_protect(struct vm_page *, vm_prot_t);




void pmap_protect(pmap_t,
      vaddr_t, vaddr_t, vm_prot_t);

void pmap_reference(pmap_t);


void pmap_remove(pmap_t, vaddr_t, vaddr_t);





void pmap_zero_page(struct vm_page *);


void pmap_virtual_space(vaddr_t *, vaddr_t *);





void pmap_fork(pmap_t, pmap_t);


# 377 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_map.h" 1
# 113 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/uvm/uvm_anon.h" 1
# 51 "openbsd3/uvm/uvm_anon.h"
struct vm_anon {
 int an_ref;
 simple_lock_data_t an_lock;
 union {
  struct vm_anon *an_nxt;
  struct vm_page *an_page;
 } u;
 int an_swslot;


};
# 86 "openbsd3/uvm/uvm_anon.h"
struct vm_aref {
 int ar_pageoff;
 struct vm_amap *ar_amap;
};
# 102 "openbsd3/uvm/uvm_anon.h"
struct vm_anon *uvm_analloc(void);
void uvm_anfree(struct vm_anon *);
void uvm_anon_init(void);
int uvm_anon_add(int);
void uvm_anon_remove(int);
struct vm_page *uvm_anon_lockloanpg(struct vm_anon *);
void uvm_anon_dropswap(struct vm_anon *);
boolean_t anon_swap_off(int, int);
# 114 "openbsd3/uvm/uvm_map.h" 2
# 130 "openbsd3/uvm/uvm_map.h"
union vm_map_object {
 struct uvm_object *uvm_obj;
 struct vm_map *sub_map;
};







struct vm_map_entry {
 struct { struct vm_map_entry *rbe_left; struct vm_map_entry *rbe_right; struct vm_map_entry *rbe_parent; int rbe_color; } rb_entry;
 vaddr_t ownspace;
 vaddr_t space;
 struct vm_map_entry *prev;
 struct vm_map_entry *next;
 vaddr_t start;
 vaddr_t end;
 union vm_map_object object;
 voff_t offset;
 int etype;
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 int wired_count;
 struct vm_aref aref;
 int advice;

 u_int8_t flags;




};
# 220 "openbsd3/uvm/uvm_map.h"
struct vm_map {
 struct pmap * pmap;
 lock_data_t lock;
 struct uvm_tree { struct vm_map_entry *rbh_root; } rbhead;
 struct vm_map_entry header;
 int nentries;
 vsize_t size;
 int ref_count;
 simple_lock_data_t ref_lock;
 vm_map_entry_t hint;
 simple_lock_data_t hint_lock;
 vm_map_entry_t first_free;
 int flags;
 simple_lock_data_t flags_lock;
 unsigned int timestamp;


};
# 269 "openbsd3/uvm/uvm_map.h"
struct vm_map_intrsafe {
 struct vm_map vmi_map;
 struct { struct vm_map_intrsafe *le_next; struct vm_map_intrsafe **le_prev; } vmi_list;
};

struct vmi_list { struct vm_map_intrsafe *lh_first; };

typedef  simple_lock_data_t  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_vmi_list[NUM_STACKS];    

static __inline int vmi_list_lock(void);
static __inline void vmi_list_unlock(int);

static __inline int
vmi_list_lock()
{
 int s;

 s = splraise((0x20 + ((9) << 4)));
 ;
 return (s);
}

static __inline void
vmi_list_unlock(s)
 int s;
{

 ;
 splx(s);
}
# 319 "openbsd3/uvm/uvm_map.h"
typedef  vaddr_t  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_uvm_maxkaddr[NUM_STACKS];   







void uvm_map_deallocate(vm_map_t);

int uvm_map_clean(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_clip_start(vm_map_t, vm_map_entry_t, vaddr_t);
void uvm_map_clip_end(vm_map_t, vm_map_entry_t, vaddr_t);

vm_map_t uvm_map_create(pmap_t, vaddr_t, vaddr_t, int);
int uvm_map_extract(vm_map_t, vaddr_t, vsize_t,
   vm_map_t, vaddr_t *, int);
vm_map_entry_t uvm_map_findspace(vm_map_t, vaddr_t, vsize_t, vaddr_t *,
   struct uvm_object *, voff_t, vsize_t, int);
vaddr_t uvm_map_hint(struct proc *, vm_prot_t);
int uvm_map_inherit(vm_map_t, vaddr_t, vaddr_t, vm_inherit_t);
int uvm_map_advice(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_init(void);
boolean_t uvm_map_lookup_entry(vm_map_t, vaddr_t, vm_map_entry_t *);

void uvm_map_reference(vm_map_t);
int uvm_map_replace(vm_map_t, vaddr_t, vaddr_t,
   vm_map_entry_t, int);
int uvm_map_reserve(vm_map_t, vsize_t, vaddr_t, vsize_t,
   vaddr_t *);
void uvm_map_setup(vm_map_t, vaddr_t, vaddr_t, int);
int uvm_map_submap(vm_map_t, vaddr_t, vaddr_t, vm_map_t);

void uvm_unmap(vm_map_t, vaddr_t, vaddr_t);
void uvm_unmap_detach(vm_map_entry_t,int);
void uvm_unmap_remove(vm_map_t, vaddr_t, vaddr_t,
          vm_map_entry_t *);
# 391 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_39_A[NUM_STACKS];   
typedef  const char   _GLOBAL_122_T; extern  _GLOBAL_122_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_40_A[NUM_STACKS];   
typedef  const char   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_41_A[NUM_STACKS];   
typedef  const char   _GLOBAL_124_T; extern  _GLOBAL_124_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_42_A[NUM_STACKS];   
typedef  const char   _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_43_A[NUM_STACKS];   
typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_128_T; extern  _GLOBAL_128_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_136_T; extern  _GLOBAL_136_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_138_T; extern  _GLOBAL_138_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_139_T; extern  _GLOBAL_139_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_44_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_142_T  )  ( int  ) ; extern  _GLOBAL_142_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_144_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_146_T  )  ( void  ) ; extern  _GLOBAL_146_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_148_T  )  ( void  ) ; extern  _GLOBAL_148_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_45_A[NUM_STACKS];extern  _GLOBAL_149_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_46_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 392 "openbsd3/uvm/uvm_map.h" 2

static __inline boolean_t vm_map_lock_try(vm_map_t);
static __inline void vm_map_lock(vm_map_t);
extern const char vmmapbsy[];

static __inline boolean_t
vm_map_lock_try(map)
 vm_map_t map;
{
 boolean_t rv;

 if (map->flags & 0x02)
  rv = (1);
 else {
  ;
  if (map->flags & 0x08) {
   ;
   return (0);
  }
  rv = (lockmgr(&map->lock, 0x00000002|0x00000010|0x00100000,
      &map->flags_lock, global_curproc[get_stack_id()]) == 0);
 }

 if (rv)
  map->timestamp++;

 return (rv);
}

static __inline void
vm_map_lock(map)
 vm_map_t map;
{
 int error;

 if (map->flags & 0x02) {
  ;
  return;
 }

 try_again:
 ;
 while (map->flags & 0x08) {
  map->flags |= 0x10;
  ltsleep(&map->flags, 4, (char *)vmmapbsy, 0, &map->flags_lock);
 }

 error = lockmgr(&map->lock, 0x00000002|0x00000020|0x00100000,
     &map->flags_lock, global_curproc[get_stack_id()]);

 if (error) {
  goto try_again;
 }

 (map)->timestamp++;
}
# 378 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_fault.h" 1
# 59 "openbsd3/uvm/uvm_fault.h"
struct uvm_faultinfo {
 vm_map_t orig_map;
 vaddr_t orig_rvaddr;
 vsize_t orig_size;
 vm_map_t map;
 unsigned int mapv;
 vm_map_entry_t entry;
 vsize_t size;
};
# 76 "openbsd3/uvm/uvm_fault.h"
int uvmfault_anonget(struct uvm_faultinfo *, struct vm_amap *,
     struct vm_anon *);

int uvm_fault_wire(vm_map_t, vaddr_t, vaddr_t, vm_prot_t);
void uvm_fault_unwire(vm_map_t, vaddr_t, vaddr_t);
void uvm_fault_unwire_locked(vm_map_t, vaddr_t, vaddr_t);
# 379 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pager.h" 1
# 85 "openbsd3/uvm/uvm_pager.h"
struct uvm_pagerops {

 void (*pgo_init)(void);

 void (*pgo_reference)(struct uvm_object *);

 void (*pgo_detach)(struct uvm_object *);

 int (*pgo_fault)(struct uvm_faultinfo *, vaddr_t,
     vm_page_t *, int, int, vm_fault_t,
     vm_prot_t, int);

 boolean_t (*pgo_flush)(struct uvm_object *, voff_t,
     voff_t, int);

 int (*pgo_get)(struct uvm_object *, voff_t,
     vm_page_t *, int *, int, vm_prot_t, int, int);

 int (*pgo_put)(struct uvm_object *, vm_page_t *,
     int, boolean_t);

 void (*pgo_cluster)(struct uvm_object *, voff_t,
     voff_t *, voff_t *);

 struct vm_page ** (*pgo_mk_pcluster)(struct uvm_object *,
     struct vm_page **, int *, struct vm_page *,
     int, voff_t, voff_t);

 boolean_t (*pgo_releasepg)(struct vm_page *, struct vm_page **);
};
# 152 "openbsd3/uvm/uvm_pager.h"
void uvm_pager_dropcluster(struct uvm_object *,
     struct vm_page *, struct vm_page **,
     int *, int);
void uvm_pager_init(void);
int uvm_pager_put(struct uvm_object *, struct vm_page *,
       struct vm_page ***, int *, int,
       voff_t, voff_t);

 struct vm_page *uvm_pageratop(vaddr_t);

vaddr_t uvm_pagermapin(struct vm_page **, int, int);
void uvm_pagermapout(vaddr_t, int);
struct vm_page **uvm_mk_pcluster(struct uvm_object *, struct vm_page **,
           int *, struct vm_page *, int,
           voff_t, voff_t);
int uvm_errno2vmerror(int);
# 380 "openbsd3/uvm/uvm_extern.h" 2






struct vmspace {
 struct vm_map vm_map;
 int vm_refcnt;
 caddr_t vm_shm;


 segsz_t vm_rssize;
 segsz_t vm_swrss;
 segsz_t vm_tsize;
 segsz_t vm_dsize;
 segsz_t vm_ssize;
 caddr_t vm_taddr;
 caddr_t vm_daddr;
 caddr_t vm_maxsaddr;
 caddr_t vm_minsaddr;
};






typedef  struct vm_map   _GLOBAL_150_T; extern  _GLOBAL_150_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_151_T; extern  _GLOBAL_151_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_152_T; extern  _GLOBAL_152_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_153_T; extern  _GLOBAL_153_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_154_T; extern  _GLOBAL_154_T  * global_phys_map[NUM_STACKS];    
# 432 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct loadavg;
struct proc;
struct pmap;
struct vmspace;
struct vmtotal;
struct mount;
struct vnode;
struct core;




void vmapbuf(struct buf *, vsize_t);
void vunmapbuf(struct buf *, vsize_t);
void pagemove(caddr_t, caddr_t, size_t);




void cpu_swapout(struct proc *);

void cpu_fork(struct proc *, struct proc *, void *, size_t,
      void (*)(void *), void *);


struct uvm_object *uao_create(vsize_t, int);
void uao_detach(struct uvm_object *);
void uao_detach_locked(struct uvm_object *);
void uao_reference(struct uvm_object *);
void uao_reference_locked(struct uvm_object *);


int uvm_fault(vm_map_t, vaddr_t,
    vm_fault_t, vm_prot_t);






void uvm_fork(struct proc *, struct proc *, boolean_t,
       void *, size_t, void (*)(void *), void *);
void uvm_exit(struct proc *);
void uvm_init_limits(struct proc *);
boolean_t uvm_kernacc(caddr_t, size_t, int);
 __attribute__((__noreturn__)) void uvm_scheduler(void);
void uvm_swapin(struct proc *);
int uvm_vslock(struct proc *, caddr_t, size_t,
       vm_prot_t);
void uvm_vsunlock(struct proc *, caddr_t, size_t);



void uvm_init(void);



int uvm_io(vm_map_t, struct uio *);


vaddr_t uvm_km_alloc1(vm_map_t, vsize_t, boolean_t);
void uvm_km_free(vm_map_t, vaddr_t, vsize_t);
void uvm_km_free_wakeup(vm_map_t, vaddr_t,
      vsize_t);
vaddr_t uvm_km_kmemalloc(vm_map_t, struct uvm_object *,
      vsize_t, int);
struct vm_map *uvm_km_suballoc(vm_map_t, vaddr_t *,
    vaddr_t *, vsize_t, int,
    boolean_t, vm_map_t);
vaddr_t uvm_km_valloc(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_align(vm_map_t, vsize_t, vsize_t);
vaddr_t uvm_km_valloc_wait(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_prefer_wait(vm_map_t, vsize_t,
     voff_t);
vaddr_t uvm_km_alloc_poolpage1(vm_map_t,
    struct uvm_object *, boolean_t);
void uvm_km_free_poolpage1(vm_map_t, vaddr_t);






int uvm_map(vm_map_t, vaddr_t *, vsize_t,
    struct uvm_object *, voff_t, vsize_t,
    uvm_flag_t);
int uvm_map_pageable(vm_map_t, vaddr_t,
    vaddr_t, boolean_t, int);
int uvm_map_pageable_all(vm_map_t, int, vsize_t);
boolean_t uvm_map_checkprot(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t);
int uvm_map_protect(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t, boolean_t);
struct vmspace *uvmspace_alloc(vaddr_t, vaddr_t,
    boolean_t);
void uvmspace_init(struct vmspace *, struct pmap *,
    vaddr_t, vaddr_t, boolean_t);
void uvmspace_exec(struct proc *, vaddr_t, vaddr_t);
struct vmspace *uvmspace_fork(struct vmspace *);
void uvmspace_free(struct vmspace *);
void uvmspace_share(struct proc *, struct proc *);
void uvmspace_unshare(struct proc *);



void uvm_meter(void);
int uvm_sysctl(int *, u_int, void *, size_t *,
    void *, size_t, struct proc *);
void uvm_total(struct vmtotal *);


int uvm_mmap(vm_map_t, vaddr_t *, vsize_t,
    vm_prot_t, vm_prot_t, int,
    caddr_t, voff_t, vsize_t);


struct vm_page *uvm_pagealloc_strat(struct uvm_object *,
    voff_t, struct vm_anon *, int, int, int);



vaddr_t uvm_pagealloc_contig(vaddr_t, vaddr_t,
    vaddr_t, vaddr_t);
void uvm_pagerealloc(struct vm_page *,
          struct uvm_object *, voff_t);

void uvm_page_physload(paddr_t, paddr_t,
            paddr_t, paddr_t, int);
void uvm_setpagesize(void);


void uvm_aio_biodone1(struct buf *);
void uvm_aio_biodone(struct buf *);
void uvm_aio_aiodone(struct buf *);


void uvm_pageout(void *);
void uvm_aiodone_daemon(void *);


int uvm_pglistalloc(psize_t, paddr_t,
    paddr_t, paddr_t, paddr_t,
    struct pglist *, int, int);
void uvm_pglistfree(struct pglist *);


void uvm_swap_init(void);


int uvm_coredump(struct proc *, struct vnode *,
    struct ucred *, struct core *);
int uvm_grow(struct proc *, vaddr_t);


void uvm_deallocate(vm_map_t, vaddr_t, vsize_t);


void uvm_vnp_setsize(struct vnode *, voff_t);
void uvm_vnp_sync(struct mount *);
void uvm_vnp_terminate(struct vnode *);

boolean_t uvm_vnp_uncache(struct vnode *);
struct uvm_object *uvn_attach(void *, vm_prot_t);


void kmeminit_nkmempages(void);
void kmeminit(void);
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_nkmempages[NUM_STACKS];   
# 42 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_stat.h" 1
# 55 "openbsd3/uvm/uvm_stat.h"
struct uvm_cnt {
 int c;
 int t;
 struct uvm_cnt *next;
 char *name;
 void *p;
};



typedef  struct uvm_cnt   _GLOBAL_156_T; extern  _GLOBAL_156_T  * global_uvm_cnt_head[NUM_STACKS];    
# 100 "openbsd3/uvm/uvm_stat.h"
struct uvm_history_ent {
 struct timeval tv;
 char *fmt;
 size_t fmtlen;
 char *fn;
 size_t fnlen;
 u_long call;
 u_long v[4];
};

struct uvm_history {
 const char *name;
 size_t namelen;
 struct { struct uvm_history *le_next; struct uvm_history **le_prev; } list;
 int n;
 int f;
 simple_lock_data_t l;
 struct uvm_history_ent *e;
};

struct uvm_history_head { struct uvm_history *lh_first; };
# 44 "openbsd3/uvm/uvm.h" 2





# 1 "openbsd3/uvm/uvm_amap.h" 1
# 66 "openbsd3/uvm/uvm_amap.h"
struct vm_amap;
# 84 "openbsd3/uvm/uvm_amap.h"

void amap_add(struct vm_aref *, vaddr_t, struct vm_anon *, boolean_t);

struct vm_amap *amap_alloc(vaddr_t, vaddr_t, int);

void amap_copy(vm_map_t, vm_map_entry_t, int, boolean_t, vaddr_t,
      vaddr_t);

void amap_cow_now(vm_map_t, vm_map_entry_t);

void amap_extend(vm_map_entry_t, vsize_t);

int amap_flags(struct vm_amap *);

void amap_free(struct vm_amap *);

void amap_init(void);

void amap_lock(struct vm_amap *);

struct vm_anon *amap_lookup(struct vm_aref *, vaddr_t);

void amap_lookups(struct vm_aref *, vaddr_t, struct vm_anon **, int);

void amap_ref(struct vm_amap *, vaddr_t, vsize_t, int);

int amap_refs(struct vm_amap *);

void amap_share_protect(vm_map_entry_t, vm_prot_t);

void amap_splitref(struct vm_aref *, struct vm_aref *, vaddr_t);

void amap_unadd(struct vm_aref *, vaddr_t);

void amap_unlock(struct vm_amap *);

void amap_unref(struct vm_amap *, vaddr_t, vsize_t, int);

void amap_wipeout(struct vm_amap *);
# 152 "openbsd3/uvm/uvm_amap.h"
struct vm_amap {
 simple_lock_data_t am_l;
 int am_ref;
 int am_flags;
 int am_maxslot;
 int am_nslot;
 int am_nused;
 int *am_slots;
 int *am_bckptr;
 struct vm_anon **am_anon;

 int *am_ppref;

};
# 266 "openbsd3/uvm/uvm_amap.h"
void amap_pp_adjref(struct vm_amap *, int, vsize_t, int);

void amap_pp_establish(struct vm_amap *);

void amap_wiperange(struct vm_amap *, int, int);
# 50 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_aobj.h" 1
# 68 "openbsd3/uvm/uvm_aobj.h"
void uao_init(void);
int uao_set_swslot(struct uvm_object *, int, int);
void uao_dropswap(struct uvm_object *, int);
int uao_swap_off(int, int);





typedef  struct uvm_pagerops   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_aobj_pager[NUM_STACKS];    
# 51 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_glue.h" 1
# 47 "openbsd3/uvm/uvm_glue.h"
void uvm_swapout_threads(void);
# 53 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_km.h" 1
# 51 "openbsd3/uvm/uvm_km.h"
void uvm_km_init(vaddr_t, vaddr_t);
void uvm_km_pgremove(struct uvm_object *, vaddr_t, vaddr_t);
void uvm_km_pgremove_intrsafe(struct uvm_object *, vaddr_t, vaddr_t);
# 54 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_loan.h" 1
# 54 "openbsd3/uvm/uvm_loan.h"
int uvm_loan(struct vm_map *, vaddr_t, vsize_t, void **, int);
void uvm_unloananon(struct vm_anon **, int);
void uvm_unloanpage(struct vm_page **, int);
# 55 "openbsd3/uvm/uvm.h" 2




# 1 "openbsd3/uvm/uvm_pdaemon.h" 1
# 83 "openbsd3/uvm/uvm_pdaemon.h"
void uvm_wait(const char *);
# 60 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_swap.h" 1
# 41 "openbsd3/uvm/uvm_swap.h"
int uvm_swap_get(struct vm_page *, int, int);
int uvm_swap_put(int, struct vm_page **, int, int);
int uvm_swap_alloc(int *, boolean_t);
void uvm_swap_free(int, int);
void uvm_swap_markbad(int, int);

void uvm_swap_initcrypt_all(void);
void uvm_swap_freepages(struct vm_page **, int);
# 61 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_swap_encrypt.h" 1
# 50 "openbsd3/uvm/uvm_swap_encrypt.h"
struct swap_key {
 u_int32_t key[4];
 u_int16_t refcount;
};

int swap_encrypt_ctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);

void swap_encrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);
void swap_decrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);

void swap_key_cleanup(struct swap_key *);
void swap_key_prepare(struct swap_key *, int);
# 74 "openbsd3/uvm/uvm_swap_encrypt.h"
void swap_key_create(struct swap_key *);
void swap_key_delete(struct swap_key *);

typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_uvm_doswapencrypt[NUM_STACKS];   
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_uvm_swprekeyprint[NUM_STACKS];   
typedef  u_int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_uvm_swpkeyexpire[NUM_STACKS];   
typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_swap_encrypt_initialized[NUM_STACKS];   
# 63 "openbsd3/uvm/uvm.h" 2
# 75 "openbsd3/uvm/uvm.h"
struct uvm {



 struct pgfreelist page_free[2];
 struct pglist page_active;
 struct pglist page_inactive_swp;
 struct pglist page_inactive_obj;
 simple_lock_data_t pageqlock;
 simple_lock_data_t fpageqlock;
 boolean_t page_init_done;
 boolean_t page_idle_zero;



 int pagedaemon;
 struct proc *pagedaemon_proc;
 simple_lock_data_t pagedaemon_lock;


 int aiodoned;
 struct proc *aiodoned_proc;
 simple_lock_data_t aiodoned_lock;


 struct pglist *page_hash;
 int page_nhash;
 int page_hashmask;
 simple_lock_data_t hashlock;


 struct vm_anon *afree;
 simple_lock_data_t afreelock;


 vm_map_entry_t kentry_free;
 simple_lock_data_t kentry_lock;


 struct { struct buf *tqh_first; struct buf **tqh_last; } aio_done;


 vaddr_t pager_sva;
 vaddr_t pager_eva;


 simple_lock_data_t swap_data_lock;


 struct uvm_object *kernel_object;
};
# 146 "openbsd3/uvm/uvm.h"
typedef  struct uvm   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_uvm[NUM_STACKS];    





;
;
# 180 "openbsd3/uvm/uvm.h"
# 1 "openbsd3/uvm/uvm_amap_i.h" 1
# 181 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_fault_i.h" 1
# 44 "openbsd3/uvm/uvm_fault_i.h"
static boolean_t uvmfault_check_intrsafe(struct uvm_faultinfo *);
static boolean_t uvmfault_lookup(struct uvm_faultinfo *, boolean_t);
static boolean_t uvmfault_relock(struct uvm_faultinfo *);
static void uvmfault_unlockall(struct uvm_faultinfo *, struct vm_amap *,
               struct uvm_object *, struct vm_anon *);
static void uvmfault_unlockmaps(struct uvm_faultinfo *, boolean_t);





static __inline void
uvmfault_unlockmaps(ufi, write_locked)
 struct uvm_faultinfo *ufi;
 boolean_t write_locked;
{





 if (ufi == 0L) {
  return;
 }

 if (write_locked) {
  do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
 } else {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
 }
}







static __inline void
uvmfault_unlockall(ufi, amap, uobj, anon)
 struct uvm_faultinfo *ufi;
 struct vm_amap *amap;
 struct uvm_object *uobj;
 struct vm_anon *anon;
{

 if (anon)
  ;
 if (uobj)
  ;
 if (amap)
  ;
 uvmfault_unlockmaps(ufi, 0);
}
# 108 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_check_intrsafe(ufi)
 struct uvm_faultinfo *ufi;
{
 struct vm_map_intrsafe *vmi;
 int s;

 s = vmi_list_lock();
 for (vmi = ((&global_vmi_list[get_stack_id()])->lh_first); vmi != 0L;
      vmi = ((vmi)->vmi_list.le_next)) {
  if (ufi->orig_rvaddr >= ((&vmi->vmi_map)->header.start) &&
      ufi->orig_rvaddr < ((&vmi->vmi_map)->header.end))
   break;
 }
 vmi_list_unlock(s);

 if (vmi != 0L) {
  ufi->map = &vmi->vmi_map;
  return (1);
 }

 return (0);
}
# 147 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_lookup(ufi, write_lock)
 struct uvm_faultinfo *ufi;
 boolean_t write_lock;
{
 vm_map_t tmpmap;





 ufi->map = ufi->orig_map;
 ufi->size = ufi->orig_size;






 while (1) {




  if (write_lock) {
   vm_map_lock(ufi->map);
  } else {
   do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
  }




  if (!uvm_map_lookup_entry(ufi->map, ufi->orig_rvaddr,
        &ufi->entry)) {
   uvmfault_unlockmaps(ufi, write_lock);
   return(0);
  }




  if (ufi->entry->end - ufi->orig_rvaddr < ufi->size)
   ufi->size = ufi->entry->end - ufi->orig_rvaddr;





  if ((((ufi->entry)->etype & 0x02) != 0)) {
   tmpmap = ufi->entry->object.sub_map;
   if (write_lock) {
    do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
   } else {
    (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
   }
   ufi->map = tmpmap;
   continue;
  }





  ufi->mapv = ufi->map->timestamp;
  return(1);

 }


}
# 226 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_relock(ufi)
 struct uvm_faultinfo *ufi;
{





 if (ufi == 0L) {
  return 1;
 }

 global_uvmexp[get_stack_id()].fltrelck++;






 do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
 if (ufi->mapv != ufi->map->timestamp) {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
  return(0);
 }

 global_uvmexp[get_stack_id()].fltrelckok++;
 return(1);
}
# 182 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_map_i.h" 1
# 183 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_page_i.h" 1
# 184 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_pager_i.h" 1
# 185 "openbsd3/uvm/uvm.h" 2
# 44 "openbsd3/sys/vnode.h" 2
# 1 "openbsd3/uvm/uvm_vnode.h" 1
# 53 "openbsd3/uvm/uvm_vnode.h"
struct uvm_vnode {
 struct uvm_object u_obj;
 int u_flags;
 int u_nio;
 voff_t u_size;


 struct { struct uvm_vnode *le_next; struct uvm_vnode **le_prev; } u_wlist;


 struct { struct uvm_vnode *sqe_next; } u_syncq;
};
# 45 "openbsd3/sys/vnode.h" 2
# 55 "openbsd3/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };
# 65 "openbsd3/sys/vnode.h"
enum vtagtype {
 VT_NON, VT_UFS, VT_NFS, VT_MFS, VT_MSDOSFS, VT_LFS, VT_LOFS, VT_FDESC,
 VT_PORTAL, VT_NULL, VT_UMAP, VT_KERNFS, VT_PROCFS, VT_AFS, VT_ISOFS,
 VT_UNION, VT_ADOSFS, VT_EXT2FS, VT_NCPFS, VT_VFS, VT_XFS, VT_NTFS
};





struct buflists { struct buf *lh_first; };
# 85 "openbsd3/sys/vnode.h"
struct vnode {
 struct uvm_vnode v_uvm;
 int (**v_op)(void *);
 enum vtype v_type;
 u_int v_flag;
 u_int v_usecount;

 u_int v_writecount;

 u_int v_bioflag;
 u_int v_holdcnt;
 u_int v_id;
 struct mount *v_mount;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_mntvnodes;
 struct buflists v_cleanblkhd;
 struct buflists v_dirtyblkhd;
 u_int v_numoutput;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct specinfo *vu_specinfo;
  struct fifoinfo *vu_fifoinfo;
 } v_un;

 struct simplelock v_interlock;
 struct lock v_lock;
 struct lock *v_vnlock;
 enum vtagtype v_tag;
 void *v_data;
 struct {
  struct simplelock vsi_lock;
  struct selinfo vsi_selinfo;
 } v_selectinfo;
};
# 150 "openbsd3/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 long va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 204 "openbsd3/sys/vnode.h"
struct e_vnode {
 struct vnode *vptr;
 struct vnode vnode;
};






typedef  enum vtype   _GLOBAL_163_T; extern  _GLOBAL_163_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_47_A[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_48_A[NUM_STACKS];  
# 233 "openbsd3/sys/vnode.h"
struct freelst { struct vnode *tqh_first; struct vnode **tqh_last; };
typedef  struct freelst   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_vnode_hold_list[NUM_STACKS];    
typedef  struct freelst   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_vnode_free_list[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vnode_free_list_slock[NUM_STACKS];    





void vref(struct vnode *);
# 263 "openbsd3/sys/vnode.h"
typedef  struct vnode   _GLOBAL_168_T; extern  _GLOBAL_168_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_desiredvnodes[NUM_STACKS];   
typedef  time_t  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_syncdelay[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_rushjob[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_va_null[NUM_STACKS];    
# 311 "openbsd3/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_proc_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_173_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_49_A[NUM_STACKS];   





typedef  struct simplelock   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_mntvnode_slock[NUM_STACKS];    
# 365 "openbsd3/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 int (*opve_impl)(void *);
};
struct vnodeopv_desc {

 int (***opv_desc_vector_p)(void *);
 struct vnodeopv_entry_desc *opv_desc_ops;
};




int vn_default_error(void *);





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 406 "openbsd3/sys/vnode.h"
# 1 "openbsd3/sys/vnode_if.h" 1
# 40 "openbsd3/sys/vnode_if.h"
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_default_desc[NUM_STACKS];    

# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/vnode_if.h" 2

struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_islocked_desc[NUM_STACKS];    
int VOP_ISLOCKED(struct vnode *);

struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_lookup_desc[NUM_STACKS];    
int VOP_LOOKUP(struct vnode *, struct vnode **, struct componentname *);

struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_create_desc[NUM_STACKS];    
int VOP_CREATE(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_mknod_desc[NUM_STACKS];    
int VOP_MKNOD(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_open_desc[NUM_STACKS];    
int VOP_OPEN(struct vnode *, int, struct ucred *, struct proc *);

struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_close_desc[NUM_STACKS];    
int VOP_CLOSE(struct vnode *, int, struct ucred *, struct proc *);

struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_access_desc[NUM_STACKS];    
int VOP_ACCESS(struct vnode *, int, struct ucred *, struct proc *);

struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_getattr_desc[NUM_STACKS];    
int VOP_GETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_setattr_desc[NUM_STACKS];    
int VOP_SETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_read_desc[NUM_STACKS];    
int VOP_READ(struct vnode *, struct uio *, int, struct ucred *);

struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_vop_write_desc[NUM_STACKS];    
int VOP_WRITE(struct vnode *, struct uio *, int, struct ucred *);

struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_vop_lease_desc[NUM_STACKS];    
int VOP_LEASE(struct vnode *, struct proc *, struct ucred *, int);

struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 void *a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vop_ioctl_desc[NUM_STACKS];    
int VOP_IOCTL(struct vnode *, u_long, void *, int, struct ucred *,
    struct proc *);

struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_vop_poll_desc[NUM_STACKS];    
int VOP_POLL(struct vnode *, int, struct proc *);

struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_vop_kqfilter_desc[NUM_STACKS];    
int VOP_KQFILTER(struct vnode *, struct knote *);

struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_vop_revoke_desc[NUM_STACKS];    
int VOP_REVOKE(struct vnode *, int);

struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_fsync_desc[NUM_STACKS];    
int VOP_FSYNC(struct vnode *, struct ucred *, int, struct proc *);

struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_vop_remove_desc[NUM_STACKS];    
int VOP_REMOVE(struct vnode *, struct vnode *, struct componentname *);

struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_vop_link_desc[NUM_STACKS];    
int VOP_LINK(struct vnode *, struct vnode *, struct componentname *);

struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_vop_rename_desc[NUM_STACKS];    
int VOP_RENAME(struct vnode *, struct vnode *, struct componentname *,
    struct vnode *, struct vnode *, struct componentname *);

struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_vop_mkdir_desc[NUM_STACKS];    
int VOP_MKDIR(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_vop_rmdir_desc[NUM_STACKS];    
int VOP_RMDIR(struct vnode *, struct vnode *, struct componentname *);

struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_vop_symlink_desc[NUM_STACKS];    
int VOP_SYMLINK(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *, char *);

struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_vop_readdir_desc[NUM_STACKS];    
int VOP_READDIR(struct vnode *, struct uio *, struct ucred *, int *, int *,
    u_long **);

struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_vop_readlink_desc[NUM_STACKS];    
int VOP_READLINK(struct vnode *, struct uio *, struct ucred *);

struct vop_abortop_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vop_abortop_desc[NUM_STACKS];    
int VOP_ABORTOP(struct vnode *, struct componentname *);

struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_vop_inactive_desc[NUM_STACKS];    
int VOP_INACTIVE(struct vnode *, struct proc *);

struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_vop_reclaim_desc[NUM_STACKS];    
int VOP_RECLAIM(struct vnode *, struct proc *);

struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_vop_lock_desc[NUM_STACKS];    
int VOP_LOCK(struct vnode *, int, struct proc *);

struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_vop_unlock_desc[NUM_STACKS];    
int VOP_UNLOCK(struct vnode *, int, struct proc *);

struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
};
typedef  struct vnodeop_desc   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_vop_bmap_desc[NUM_STACKS];    
int VOP_BMAP(struct vnode *, daddr_t, struct vnode **, daddr_t *, int *);

struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_vop_print_desc[NUM_STACKS];    
int VOP_PRINT(struct vnode *);

struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_vop_pathconf_desc[NUM_STACKS];    
int VOP_PATHCONF(struct vnode *, int, register_t *);

struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 void *a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_209_T; extern  _GLOBAL_209_T  global_vop_advlock_desc[NUM_STACKS];    
int VOP_ADVLOCK(struct vnode *, void *, int, struct flock *, int);

struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_210_T; extern  _GLOBAL_210_T  global_vop_reallocblks_desc[NUM_STACKS];    
int VOP_REALLOCBLKS(struct vnode *, struct cluster_save *);

struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_211_T; extern  _GLOBAL_211_T  global_vop_whiteout_desc[NUM_STACKS];    
int VOP_WHITEOUT(struct vnode *, struct componentname *, int);

struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_vop_getextattr_desc[NUM_STACKS];    
int VOP_GETEXTATTR(struct vnode *, int, const char *, struct uio *,
    size_t *, struct ucred *, struct proc *);

struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_vop_setextattr_desc[NUM_STACKS];    
int VOP_SETEXTATTR(struct vnode *, int, const char *, struct uio *,
    struct ucred *, struct proc *);


# 1 "openbsd3/sys/buf.h" 1
# 46 "openbsd3/sys/buf.h"
struct buf;
struct vnode;





struct workhead { struct worklist *lh_first; };







typedef  struct bio_ops { void  ( * io_start  )  ( struct buf   *  )  ;  void  ( * io_complete  )  ( struct buf   *  )  ;   void  ( * io_deallocate  )  ( struct buf   *  )  ;   void  ( * io_movedeps  )  ( struct buf   *  , struct buf   *   )  ;   int  ( * io_countdeps  )  ( struct buf   *  , int   , int   )  ;   }   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_bioops[NUM_STACKS];    
    
    
    
       
      
 




struct buf {
 struct { struct buf *le_next; struct buf **le_prev; } b_hash;
 struct { struct buf *le_next; struct buf **le_prev; } b_vnbufs;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_freelist;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_synclist;
 long b_synctime;
 struct buf *b_actf, **b_actb;
 struct proc *b_proc;
 volatile long b_flags;
 int b_error;
 long b_bufsize;
 long b_bcount;
 size_t b_resid;
 dev_t b_dev;
 struct {
  caddr_t b_addr;
 } b_un;
 void *b_saveaddr;
 daddr_t b_lblkno;
 daddr_t b_blkno;


 void (*b_iodone)(struct buf *);
 struct vnode *b_vp;
 int b_dirtyoff;
 int b_dirtyend;
 int b_validoff;
 int b_validend;
  struct workhead b_dep;
};





struct bufq {
 void (*bufq_free)(struct bufq *);
 void (*bufq_add)(struct bufq *, struct buf *);
 struct buf *(*bufq_get)(struct bufq *);
};

struct bufq_default {
 struct bufq bufq;
 struct buf bufq_head[3];
};






struct bufq *bufq_default_alloc(void);
void bufq_default_free(struct bufq *);
void bufq_default_add(struct bufq *, struct buf *);
struct buf *bufq_default_get(struct bufq *);
# 179 "openbsd3/sys/buf.h"
struct cluster_save {
 long bs_bcount;
 long bs_bufsize;
 void *bs_saveaddr;
 int bs_nchildren;
 struct buf **bs_children;
};
# 200 "openbsd3/sys/buf.h"
struct cluster_info {
 daddr_t ci_lastr;
 daddr_t ci_lastw;
 daddr_t ci_cstart;
 daddr_t ci_lasta;
 int ci_clen;
 int ci_ralen;
 daddr_t ci_maxra;
};



typedef  int  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_nbuf[NUM_STACKS];   
typedef  struct buf   _GLOBAL_216_T; extern  _GLOBAL_216_T  * global_buf[NUM_STACKS];    
typedef  char  _GLOBAL_217_T; extern  _GLOBAL_217_T  * global_buffers[NUM_STACKS];   
typedef  int  _GLOBAL_218_T; extern  _GLOBAL_218_T  global_bufpages[NUM_STACKS];   

typedef  struct pool   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_bufpool[NUM_STACKS];    

void allocbuf(struct buf *, int);
void bawrite(struct buf *);
void bdwrite(struct buf *);
void biodone(struct buf *);
int biowait(struct buf *);
int bread(struct vnode *, daddr_t, int,
     struct ucred *, struct buf **);
int breada(struct vnode *, daddr_t, int, daddr_t, int,
      struct ucred *, struct buf **);
int breadn(struct vnode *, daddr_t, int, daddr_t *, int *, int,
      struct ucred *, struct buf **);
void brelse(struct buf *);
void bremfree(struct buf *);
void bufinit(void);
void buf_dirty(struct buf *);
void buf_undirty(struct buf *);
int bwrite(struct buf *);
struct buf *getblk(struct vnode *, daddr_t, int, int, int);
struct buf *geteblk(int);
struct buf *incore(struct vnode *, daddr_t);

void minphys(struct buf *bp);
int physio(void (*strategy)(struct buf *), struct buf *bp, dev_t dev,
     int flags, void (*minphys)(struct buf *), struct uio *uio);
void brelvp(struct buf *);
void reassignbuf(struct buf *);
void bgetvp(struct vnode *, struct buf *);

void buf_replacevnode(struct buf *, struct vnode *);
void buf_daemon(struct proc *);





static __inline void
buf_start(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_start)
  (*global_bioops[get_stack_id()].io_start)(bp);
}

static __inline void
buf_complete(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_complete)
  (*global_bioops[get_stack_id()].io_complete)(bp);
}

static __inline void
buf_deallocate(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_deallocate)
  (*global_bioops[get_stack_id()].io_deallocate)(bp);
}

static __inline void
buf_movedeps(struct buf *bp, struct buf *bp2)
{
 if (global_bioops[get_stack_id()].io_movedeps)
  (*global_bioops[get_stack_id()].io_movedeps)(bp, bp2);
}

static __inline int
buf_countdeps(struct buf *bp, int i, int islocked)
{
 if (global_bioops[get_stack_id()].io_countdeps)
  return ((*global_bioops[get_stack_id()].io_countdeps)(bp, i, islocked));
 else
  return (0);
}

int cluster_read(struct vnode *, struct cluster_info *,
     u_quad_t, daddr_t, long, struct ucred *, struct buf **);
void cluster_write(struct buf *, struct cluster_info *, u_quad_t);


# 421 "openbsd3/sys/vnode_if.h" 2

struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_vop_strategy_desc[NUM_STACKS];    
int VOP_STRATEGY(struct buf *);

struct vop_bwrite_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_vop_bwrite_desc[NUM_STACKS];    
int VOP_BWRITE(struct buf *);
# 407 "openbsd3/sys/vnode.h" 2




struct file;
struct filedesc;
struct mount;
struct nameidata;
struct proc;
struct stat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

int bdevvp(dev_t dev, struct vnode **vpp);
int cdevvp(dev_t dev, struct vnode **vpp);
int getnewvnode(enum vtagtype tag, struct mount *mp,
     int (**vops)(void *), struct vnode **vpp);
int getvnode(struct filedesc *fdp, int fd, struct file **fpp);
void getnewfsid(struct mount *, int);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
int vfinddev(dev_t, enum vtype, struct vnode **);
void vflushbuf(struct vnode *vp, int sync);
int vflush(struct mount *mp, struct vnode *vp, int flags);
void vntblinit(void);
void vn_initialize_syncerd(void);
int vwaitforio(struct vnode *, int, char *, int);
void vwakeup(struct vnode *);
void vdevgone(int, int, int, enum vtype);
int vget(struct vnode *vp, int lockflag, struct proc *p);
void vgone(struct vnode *vp);
void vgonel(struct vnode *, struct proc *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct proc *p, int slpflag, int slptimeo);
void vprint(char *label, struct vnode *vp);
int vop_generic_bwrite(void *ap);
void vn_update(void);
int vn_close(struct vnode *vp,
     int flags, struct ucred *cred, struct proc *p);
int vn_open(struct nameidata *ndp, int fmode, int cmode);
int vrecycle(struct vnode *vp, struct simplelock *inter_lkp,
     struct proc *p);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *cred, size_t *aresid, struct proc *p);
int vn_lock(struct vnode *vp, int flags, struct proc *p);

int vop_generic_abortop(void *);
int vop_generic_islocked(void *);
int vop_generic_lock(void *);
int vop_generic_unlock(void *);
int vop_generic_revoke(void *);
int vop_generic_kqfilter(void *);

int vn_stat(struct vnode *vp, struct stat *sb, struct proc *p);
int vn_statfile(struct file *fp, struct stat *sb, struct proc *p);
int vn_writechk(struct vnode *vp);
void vn_marktext(struct vnode *vp);
void vn_syncer_add_to_worklist(struct vnode *vp, int delay);
void sched_sync(struct proc *);

struct vnode *
 checkalias(struct vnode *vp, dev_t nvp_rdev, struct mount *mp);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
int vaccess(mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred);

int vn_isdisk(struct vnode *vp, int *errp);

int softdep_fsync(struct vnode *vp);
# 112 "openbsd3/net/ppp_tty.c" 2


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
typedef  int   ( *_GLOBAL_223_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_223_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_225_T; extern  _GLOBAL_225_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_226_T; extern  _GLOBAL_226_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_if_indexlim[NUM_STACKS];   

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
# 115 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 116 "openbsd3/net/ppp_tty.c" 2


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
typedef  const struct sockaddr_in6    _GLOBAL_228_T; extern  _GLOBAL_228_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_229_T; extern  _GLOBAL_229_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_230_T; extern  _GLOBAL_230_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_231_T; extern  _GLOBAL_231_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_232_T; extern  _GLOBAL_232_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_233_T; extern  _GLOBAL_233_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_234_T; extern  _GLOBAL_234_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_235_T; extern  _GLOBAL_235_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_236_T; extern  _GLOBAL_236_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_237_T; extern  _GLOBAL_237_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_238_T; extern  _GLOBAL_238_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 119 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 120 "openbsd3/net/ppp_tty.c" 2
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
# 121 "openbsd3/net/ppp_tty.c" 2
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
# 122 "openbsd3/net/ppp_tty.c" 2


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







typedef  int  _GLOBAL_239_T; extern  _GLOBAL_239_T  global_ticks[NUM_STACKS];   
# 125 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/net/ppp_defs.h" 1
# 106 "openbsd3/net/ppp_defs.h"
typedef u_int32_t ext_accm[8];




enum NPmode {
    NPMODE_PASS,
    NPMODE_DROP,
    NPMODE_ERROR,
    NPMODE_QUEUE
};




struct pppstat {
    u_int ppp_ibytes;
    u_int ppp_ipackets;
    u_int ppp_ierrors;
    u_int ppp_obytes;
    u_int ppp_opackets;
    u_int ppp_oerrors;
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

struct ppp_stats {
    struct pppstat p;
    struct vjstat vj;
};

struct compstat {
    u_int unc_bytes;
    u_int unc_packets;
    u_int comp_bytes;
    u_int comp_packets;
    u_int inc_bytes;
    u_int inc_packets;
    u_int ratio;
};

struct ppp_comp_stats {
    struct compstat c;
    struct compstat d;
};





struct ppp_idle {
    time_t xmit_idle;
    time_t recv_idle;
};
# 126 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/net/if_ppp.h" 1
# 95 "openbsd3/net/if_ppp.h"
struct npioctl {
    int protocol;
    enum NPmode mode;
};


struct ppp_option_data {
 u_char *ptr;
 u_int length;
 int transmit;
};

struct ifpppstatsreq {
    char ifr_name[16];
    struct ppp_stats stats;
};

struct ifpppcstatsreq {
    char ifr_name[16];
    struct ppp_comp_stats stats;
};
# 153 "openbsd3/net/if_ppp.h"
void pppattach(void);
int pppoutput(struct ifnet *, struct mbuf *, struct sockaddr *,
     struct rtentry *);
void pppintr(void);
# 127 "openbsd3/net/ppp_tty.c" 2
# 1 "openbsd3/net/if_pppvar.h" 1
# 89 "openbsd3/net/if_pppvar.h"
struct ppp_softc {
 struct ifnet sc_if;
 struct timeout sc_timo;
 int sc_unit;
 u_int sc_flags;
 void *sc_devp;
 void (*sc_start)(struct ppp_softc *);
 void (*sc_ctlp)(struct ppp_softc *);
 void (*sc_relinq)(struct ppp_softc *);
 u_int16_t sc_mru;
 pid_t sc_xfer;
 struct ifqueue sc_rawq;
 struct ifqueue sc_inq;
 struct ifqueue sc_fastq;
 struct mbuf *sc_togo;
 struct mbuf *sc_npqueue;
 struct mbuf **sc_npqtail;
 struct pppstat sc_stats;
 caddr_t sc_bpf;
 enum NPmode sc_npmode[1];
 struct compressor *sc_xcomp;
 void *sc_xc_state;
 struct compressor *sc_rcomp;
 void *sc_rc_state;
 time_t sc_last_sent;
 time_t sc_last_recv;
 struct bpf_program sc_pass_filt;
 struct bpf_program sc_active_filt;

 struct slcompress *sc_comp;



 ext_accm sc_asyncmap;
 u_int32_t sc_rasyncmap;
 struct mbuf *sc_outm;
 struct mbuf *sc_m;
 struct mbuf *sc_mc;
 char *sc_mp;
 u_int16_t sc_ilen;
 u_int16_t sc_fcs;
 u_int16_t sc_outfcs;
 u_char sc_rawin[16];
 int sc_rawin_count;
 struct { struct ppp_softc *le_next; struct ppp_softc **le_prev; } sc_list;
};


typedef  struct ppp_softc   _GLOBAL_240_T; extern  _GLOBAL_240_T  _GLOBAL_0_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_1_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_2_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_3_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_4_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_5_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_6_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_7_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_8_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_9_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_10_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_11_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_12_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_13_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_14_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_15_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_16_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_17_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_18_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_19_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_20_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_21_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_22_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_23_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_24_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_25_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_26_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_27_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_28_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_29_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_30_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_31_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_32_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_33_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_34_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_35_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_36_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_37_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_38_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_39_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_40_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_41_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_42_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_43_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_44_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_45_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_46_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_47_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_48_ppp_softc_I [ ] ; extern  _GLOBAL_240_T  _GLOBAL_49_ppp_softc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ppp_softc_I) *_GLOBAL_ppp_softc_50_A[NUM_STACKS];   

struct ppp_softc *pppalloc(pid_t pid);
void pppdealloc(struct ppp_softc *sc);
int pppioctl(struct ppp_softc *sc, u_long cmd, caddr_t data,
        int flag, struct proc *p);
void ppppktin(struct ppp_softc *sc, struct mbuf *m, int lost);
struct mbuf *ppp_dequeue(struct ppp_softc *sc);
void ppp_restart(struct ppp_softc *sc);
int pppoutput(struct ifnet *, struct mbuf *,
         struct sockaddr *, struct rtentry *);
# 128 "openbsd3/net/ppp_tty.c" 2

int pppopen(dev_t dev, struct tty *tp);
int pppclose(struct tty *tp, int flag);
int pppread(struct tty *tp, struct uio *uio, int flag);
int pppwrite(struct tty *tp, struct uio *uio, int flag);
int ppptioctl(struct tty *tp, u_long cmd, caddr_t data, int flag,
         struct proc *);
int pppinput(int c, struct tty *tp);
int pppstart(struct tty *tp, int);

u_int16_t pppfcs(u_int16_t fcs, u_char *cp, int len);
void pppasyncstart(struct ppp_softc *);
void pppasyncctlp(struct ppp_softc *);
void pppasyncrelinq(struct ppp_softc *);
void ppp_timeout(void *);
void pppgetm(struct ppp_softc *sc);
void pppdumpb(u_char *b, int l);
void ppplogchar(struct ppp_softc *, int);
# 181 "openbsd3/net/ppp_tty.c"
int
pppopen(dev, tp)
    dev_t dev;
    struct tty *tp;
{
    struct proc *p = global_curproc[get_stack_id()];
    struct ppp_softc *sc;
    int error, s;

    if ((error = suser(p, 0)) != 0)
 return (error);

    s = splraise((0x20 + ((5) << 4)));

    if (tp->t_line == 5) {
 sc = (struct ppp_softc *) tp->t_sc;
 if (sc != 0L && sc->sc_devp == (void *) tp) {
     splx(s);
     return (0);
 }
    }

    if ((sc = pppalloc(p->p_pid)) == 0L) {
 splx(s);
 return 6;
    }

    if (sc->sc_relinq)
 (*sc->sc_relinq)(sc);

    timeout_set(&sc->sc_timo, ppp_timeout, sc);
    sc->sc_ilen = 0;
    sc->sc_m = 0L;
    bzero(sc->sc_asyncmap, sizeof(sc->sc_asyncmap));
    sc->sc_asyncmap[0] = 0xffffffff;
    sc->sc_asyncmap[3] = 0x60000000;
    sc->sc_rasyncmap = 0;
    sc->sc_devp = (void *) tp;
    sc->sc_start = pppasyncstart;
    sc->sc_ctlp = pppasyncctlp;
    sc->sc_relinq = pppasyncrelinq;
    sc->sc_outm = 0L;
    pppgetm(sc);
    sc->sc_if.if_flags |= 0x40;
    sc->sc_if.if_data.ifi_baudrate = tp->t_termios.c_ospeed;

    tp->t_sc = (caddr_t) sc;
    ttyflush(tp, 0x0001 | 0x0002);

    splx(s);
    return (0);
}







int
pppclose(tp, flag)
    struct tty *tp;
    int flag;
{
    struct ppp_softc *sc;
    int s;

    s = splraise((0x20 + ((5) << 4)));
    ttyflush(tp, 0x0001|0x0002);
    tp->t_line = 0;
    sc = (struct ppp_softc *) tp->t_sc;
    if (sc != 0L) {
 tp->t_sc = 0L;
 if (tp == (struct tty *) sc->sc_devp) {
     pppasyncrelinq(sc);
     pppdealloc(sc);
 }
    }
    splx(s);
    return 0;
}




void
pppasyncrelinq(sc)
    struct ppp_softc *sc;
{
    int s;

    s = splraise((0x20 + ((5) << 4)));
    if (sc->sc_outm) {
 m_freem(sc->sc_outm);
 sc->sc_outm = 0L;
    }
    if (sc->sc_m) {
 m_freem(sc->sc_m);
 sc->sc_m = 0L;
    }
    if (sc->sc_flags & 0x00000400) {
 timeout_del(&sc->sc_timo);
 sc->sc_flags &= ~0x00000400;
    }
    splx(s);
}




int
pppread(tp, uio, flag)
    struct tty *tp;
    struct uio *uio;
    int flag;
{
    struct ppp_softc *sc = (struct ppp_softc *)tp->t_sc;
    struct mbuf *m, *m0;
    int s;
    int error = 0;

    if (sc == 0L)
 return 0;




    s = splraise((0x20 + ((5) << 4)));
    for (;;) {
 if (tp != (struct tty *) sc->sc_devp || tp->t_line != 5) {
     splx(s);
     return 0;
 }
 if (sc->sc_inq.ifq_head != 0L)
     break;
 if ((tp->t_state & 0x00008) == 0 && (tp->t_termios.c_cflag & 0x00008000) == 0
     && (tp->t_state & 0x00020)) {
     splx(s);
     return 0;
 }
 if (tp->t_state & 0x00002 || flag & 0x10) {
     splx(s);
     return (35);
 }
 error = ttysleep(tp, (caddr_t)&tp->t_rawq, 25|0x100, (*_GLOBAL_ttyin_18_A[get_stack_id()]), 0);
 if (error) {
     splx(s);
     return error;
 }
    }


    getc(&tp->t_canq);


    { (m0) = (&sc->sc_inq)->ifq_head; if (m0) { if (((&sc->sc_inq)->ifq_head = (m0)->m_hdr.mh_nextpkt) == 0) (&sc->sc_inq)->ifq_tail = 0; (m0)->m_hdr.mh_nextpkt = 0; (&sc->sc_inq)->ifq_len--; } };
    splx(s);

    for (m = m0; m && uio->uio_resid; m = m->m_hdr.mh_next)
 if ((error = uiomove(((u_char *)((m)->m_hdr.mh_data)), m->m_hdr.mh_len, uio)) != 0)
     break;
    m_freem(m0);
    return (error);
}




int
pppwrite(tp, uio, flag)
    struct tty *tp;
    struct uio *uio;
    int flag;
{
    struct ppp_softc *sc = (struct ppp_softc *)tp->t_sc;
    struct mbuf *m, *m0, **mp;
    struct sockaddr dst;
    int len, error;

    if ((tp->t_state & 0x00008) == 0 && (tp->t_termios.c_cflag & 0x00008000) == 0)
 return 0;
    if (tp->t_line != 5)
 return (22);
    if (sc == 0L || tp != (struct tty *) sc->sc_devp)
 return 5;
    if (uio->uio_resid > sc->sc_if.if_data.ifi_mtu + 4 ||
 uio->uio_resid < 4)
 return (40);
    for (mp = &m0; uio->uio_resid; mp = &m->m_hdr.mh_next) {
 if (mp == &m0) {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
     m->M_dat.MH.MH_pkthdr.len = uio->uio_resid - 4;
     m->M_dat.MH.MH_pkthdr.rcvif = 0L;
 } else
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0000) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.M_databuf; (m)->m_hdr.mh_flags = 0; } } while( 0);
 *mp = m;
 m->m_hdr.mh_len = 0;
 if (uio->uio_resid >= (1 << 11) / 2)
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
 len = (((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((m))->M_dat.MH.MH_dat.MH_ext.ext_size - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len) : &((m))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len)));
 if (len > uio->uio_resid)
     len = uio->uio_resid;
 if ((error = uiomove(((u_char *)((m)->m_hdr.mh_data)), len, uio)) != 0) {
     m_freem(m0);
     return (error);
 }
 m->m_hdr.mh_len = len;
    }
    dst.sa_family = 0;
    bcopy(((u_char *)((m0)->m_hdr.mh_data)), dst.sa_data, 4);
    m0->m_hdr.mh_data += 4;
    m0->m_hdr.mh_len -= 4;
    return ((*sc->sc_if.if_output)(&sc->sc_if, m0, &dst, (struct rtentry *)0));
}







int
ppptioctl(tp, cmd, data, flag, p)
    struct tty *tp;
    u_long cmd;
    caddr_t data;
    int flag;
    struct proc *p;
{
    struct ppp_softc *sc = (struct ppp_softc *) tp->t_sc;
    int error, s;

    if (sc == 0L || tp != (struct tty *) sc->sc_devp)
 return -1;

    error = 0;
    switch (cmd) {
    case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((87))):
 if ((error = suser(p, 0)) != 0)
     break;
 sc->sc_asyncmap[0] = *(u_int *)data;
 break;

    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((88))):
 *(u_int *)data = sc->sc_asyncmap[0];
 break;

    case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((84))):
 if ((error = suser(p, 0)) != 0)
     break;
 sc->sc_rasyncmap = *(u_int *)data;
 break;

    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((85))):
 *(u_int *)data = sc->sc_rasyncmap;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(ext_accm) & 0x1fff) << 16) | ((('t')) << 8) | ((79))):
 if ((error = suser(p, 0)) != 0)
     break;
 s = splraise((0x20 + ((5) << 4)));
 bcopy(data, sc->sc_asyncmap, sizeof(sc->sc_asyncmap));
 sc->sc_asyncmap[1] = 0;
 sc->sc_asyncmap[2] &= ~0x40000000;
 sc->sc_asyncmap[3] |= 0x60000000;
 splx(s);
 break;

    case ((unsigned long)0x40000000 | ((sizeof(ext_accm) & 0x1fff) << 16) | ((('t')) << 8) | ((80))):
 bcopy(sc->sc_asyncmap, data, sizeof(sc->sc_asyncmap));
 break;

    default:
 error = pppioctl(sc, cmd, data, flag, p);
 if (error == 0 && cmd == ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((82))))
     pppgetm(sc);
    }

    return error;
}




typedef  u_int16_t  _GLOBAL_241_T; static  _GLOBAL_241_T  _GLOBAL_0_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_1_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_2_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_3_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_4_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_5_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_6_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_7_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_8_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_9_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_10_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_11_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_12_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_13_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_14_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_15_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_16_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_17_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_18_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_19_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_20_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_21_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_22_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_23_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_24_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_25_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_26_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_27_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_28_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_29_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_30_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_31_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_32_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_33_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_34_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_35_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_36_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_37_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_38_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_39_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_40_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_41_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_42_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_43_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_44_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_45_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_46_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_47_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_48_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static  _GLOBAL_241_T  _GLOBAL_49_fcstab_I [ 256 ]  = { 0x0000 , 0x1189  , 0x2312  , 0x329b  , 0x4624  , 0x57ad  , 0x6536  , 0x74bf  , 0x8c48  , 0x9dc1  , 0xaf5a  , 0xbed3  , 0xca6c  , 0xdbe5  , 0xe97e  , 0xf8f7  , 0x1081  , 0x0108  , 0x3393  , 0x221a  , 0x56a5  , 0x472c  , 0x75b7  , 0x643e  , 0x9cc9  , 0x8d40  , 0xbfdb  , 0xae52  , 0xdaed  , 0xcb64  , 0xf9ff  , 0xe876  , 0x2102  , 0x308b  , 0x0210  , 0x1399  , 0x6726  , 0x76af  , 0x4434  , 0x55bd  , 0xad4a  , 0xbcc3  , 0x8e58  , 0x9fd1  , 0xeb6e  , 0xfae7  , 0xc87c  , 0xd9f5  , 0x3183  , 0x200a  , 0x1291  , 0x0318  , 0x77a7  , 0x662e  , 0x54b5  , 0x453c  , 0xbdcb  , 0xac42  , 0x9ed9  , 0x8f50  , 0xfbef  , 0xea66  , 0xd8fd  , 0xc974  , 0x4204  , 0x538d  , 0x6116  , 0x709f  , 0x0420  , 0x15a9  , 0x2732  , 0x36bb  , 0xce4c  , 0xdfc5  , 0xed5e  , 0xfcd7  , 0x8868  , 0x99e1  , 0xab7a  , 0xbaf3  , 0x5285  , 0x430c  , 0x7197  , 0x601e  , 0x14a1  , 0x0528  , 0x37b3  , 0x263a  , 0xdecd  , 0xcf44  , 0xfddf  , 0xec56  , 0x98e9  , 0x8960  , 0xbbfb  , 0xaa72  , 0x6306  , 0x728f  , 0x4014  , 0x519d  , 0x2522  , 0x34ab  , 0x0630  , 0x17b9  , 0xef4e  , 0xfec7  , 0xcc5c  , 0xddd5  , 0xa96a  , 0xb8e3  , 0x8a78  , 0x9bf1  , 0x7387  , 0x620e  , 0x5095  , 0x411c  , 0x35a3  , 0x242a  , 0x16b1  , 0x0738  , 0xffcf  , 0xee46  , 0xdcdd  , 0xcd54  , 0xb9eb  , 0xa862  , 0x9af9  , 0x8b70  , 0x8408  , 0x9581  , 0xa71a  , 0xb693  , 0xc22c  , 0xd3a5  , 0xe13e  , 0xf0b7  , 0x0840  , 0x19c9  , 0x2b52  , 0x3adb  , 0x4e64  , 0x5fed  , 0x6d76  , 0x7cff  , 0x9489  , 0x8500  , 0xb79b  , 0xa612  , 0xd2ad  , 0xc324  , 0xf1bf  , 0xe036  , 0x18c1  , 0x0948  , 0x3bd3  , 0x2a5a  , 0x5ee5  , 0x4f6c  , 0x7df7  , 0x6c7e  , 0xa50a  , 0xb483  , 0x8618  , 0x9791  , 0xe32e  , 0xf2a7  , 0xc03c  , 0xd1b5  , 0x2942  , 0x38cb  , 0x0a50  , 0x1bd9  , 0x6f66  , 0x7eef  , 0x4c74  , 0x5dfd  , 0xb58b  , 0xa402  , 0x9699  , 0x8710  , 0xf3af  , 0xe226  , 0xd0bd  , 0xc134  , 0x39c3  , 0x284a  , 0x1ad1  , 0x0b58  , 0x7fe7  , 0x6e6e  , 0x5cf5  , 0x4d7c  , 0xc60c  , 0xd785  , 0xe51e  , 0xf497  , 0x8028  , 0x91a1  , 0xa33a  , 0xb2b3  , 0x4a44  , 0x5bcd  , 0x6956  , 0x78df  , 0x0c60  , 0x1de9  , 0x2f72  , 0x3efb  , 0xd68d  , 0xc704  , 0xf59f  , 0xe416  , 0x90a9  , 0x8120  , 0xb3bb  , 0xa232  , 0x5ac5  , 0x4b4c  , 0x79d7  , 0x685e  , 0x1ce1  , 0x0d68  , 0x3ff3  , 0x2e7a  , 0xe70e  , 0xf687  , 0xc41c  , 0xd595  , 0xa12a  , 0xb0a3  , 0x8238  , 0x93b1  , 0x6b46  , 0x7acf  , 0x4854  , 0x59dd  , 0x2d62  , 0x3ceb  , 0x0e70  , 0x1ff9  , 0xf78f  , 0xe606  , 0xd49d  , 0xc514  , 0xb1ab  , 0xa022  , 0x92b9  , 0x8330  , 0x7bc7  , 0x6a4e  , 0x58d5  , 0x495c  , 0x3de3  , 0x2c6a  , 0x1ef1  , 0x0f78  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_fcstab_I) *_GLOBAL_fcstab_51_A[NUM_STACKS] = { &_GLOBAL_0_fcstab_I, &_GLOBAL_1_fcstab_I, &_GLOBAL_2_fcstab_I, &_GLOBAL_3_fcstab_I, &_GLOBAL_4_fcstab_I, &_GLOBAL_5_fcstab_I, &_GLOBAL_6_fcstab_I, &_GLOBAL_7_fcstab_I, &_GLOBAL_8_fcstab_I, &_GLOBAL_9_fcstab_I, &_GLOBAL_10_fcstab_I, &_GLOBAL_11_fcstab_I, &_GLOBAL_12_fcstab_I, &_GLOBAL_13_fcstab_I, &_GLOBAL_14_fcstab_I, &_GLOBAL_15_fcstab_I, &_GLOBAL_16_fcstab_I, &_GLOBAL_17_fcstab_I, &_GLOBAL_18_fcstab_I, &_GLOBAL_19_fcstab_I, &_GLOBAL_20_fcstab_I, &_GLOBAL_21_fcstab_I, &_GLOBAL_22_fcstab_I, &_GLOBAL_23_fcstab_I, &_GLOBAL_24_fcstab_I, &_GLOBAL_25_fcstab_I, &_GLOBAL_26_fcstab_I, &_GLOBAL_27_fcstab_I, &_GLOBAL_28_fcstab_I, &_GLOBAL_29_fcstab_I, &_GLOBAL_30_fcstab_I, &_GLOBAL_31_fcstab_I, &_GLOBAL_32_fcstab_I, &_GLOBAL_33_fcstab_I, &_GLOBAL_34_fcstab_I, &_GLOBAL_35_fcstab_I, &_GLOBAL_36_fcstab_I, &_GLOBAL_37_fcstab_I, &_GLOBAL_38_fcstab_I, &_GLOBAL_39_fcstab_I, &_GLOBAL_40_fcstab_I, &_GLOBAL_41_fcstab_I, &_GLOBAL_42_fcstab_I, &_GLOBAL_43_fcstab_I, &_GLOBAL_44_fcstab_I, &_GLOBAL_45_fcstab_I, &_GLOBAL_46_fcstab_I, &_GLOBAL_47_fcstab_I, &_GLOBAL_48_fcstab_I, &_GLOBAL_49_fcstab_I, };    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        





u_int16_t
pppfcs(fcs, cp, len)
    u_int16_t fcs;
    u_char *cp;
    int len;
{
    while (len--)
 fcs = (((fcs) >> 8) ^ (*_GLOBAL_fcstab_51_A[get_stack_id()])[((fcs) ^ (*cp++)) & 0xff]);
    return (fcs);
}





void
pppasyncstart(sc)
    struct ppp_softc *sc;
{
    struct tty *tp = (struct tty *) sc->sc_devp;
    struct mbuf *m;
    int len;
    u_char *start, *stop, *cp;
    int n, ndone, done, idle;
    struct mbuf *m2;
    int s;

    idle = 0;
    while (((&tp->t_outq)->c_cc) < 400) {




 m = sc->sc_outm;
 if (m == 0L) {



     m = ppp_dequeue(sc);
     if (m == 0L) {
  idle = 1;
  break;
     }






     if (((&tp->t_outq)->c_cc) == 0) {
  ++sc->sc_stats.ppp_obytes;
  (void) putc(0x7e, &tp->t_outq);
     }


     sc->sc_outfcs = pppfcs(0xffff, ((u_char *)((m)->m_hdr.mh_data)), m->m_hdr.mh_len);
 }

 for (;;) {
     start = ((u_char *)((m)->m_hdr.mh_data));
     len = m->m_hdr.mh_len;
     stop = start + len;
     while (len > 0) {




  for (cp = start; cp < stop; cp++)
      if ((sc->sc_asyncmap[(*cp) >> 5] & (1 << ((*cp) & 0x1F))))
   break;
  n = cp - start;
  if (n) {

      ndone = n - b_to_q(start, n, &tp->t_outq);
      len -= ndone;
      start += ndone;
      sc->sc_stats.ppp_obytes += ndone;

      if (ndone < n)
   break;
  }





  if (len) {
      s = splraise((0x20 + ((5) << 4)));
      if (putc(0x7d, &tp->t_outq)) {
   splx(s);
   break;
      }
      if (putc(*start ^ 0x20, &tp->t_outq)) {
   (void) unputc(&tp->t_outq);
   splx(s);
   break;
      }
      splx(s);
      sc->sc_stats.ppp_obytes += 2;
      start++;
      len--;
  }
     }







     done = len == 0;
     if (done && m->m_hdr.mh_next == 0L) {
  u_char *p, *q;
  int c;
  u_char endseq[8];




  p = endseq;
  c = ~sc->sc_outfcs & 0xFF;
  if ((sc->sc_asyncmap[(c) >> 5] & (1 << ((c) & 0x1F)))) {
      *p++ = 0x7d;
      *p++ = c ^ 0x20;
  } else
      *p++ = c;
  c = (~sc->sc_outfcs >> 8) & 0xFF;
  if ((sc->sc_asyncmap[(c) >> 5] & (1 << ((c) & 0x1F)))) {
      *p++ = 0x7d;
      *p++ = c ^ 0x20;
  } else
      *p++ = c;
  *p++ = 0x7e;





  s = splraise((0x20 + ((5) << 4)));
  for (q = endseq; q < p; ++q)
      if (putc(*q, &tp->t_outq)) {
   done = 0;
   for (; q > endseq; --q)
       unputc(&tp->t_outq);
   break;
      }
  splx(s);
  if (done)
      sc->sc_stats.ppp_obytes += q - endseq;
     }

     if (!done) {

  m->m_hdr.mh_data = start;
  m->m_hdr.mh_len = len;
  break;
     }


     { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (m2) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
     m = m2;
     if (m == 0L) {

  break;
     }
     sc->sc_outfcs = pppfcs(sc->sc_outfcs, ((u_char *)((m)->m_hdr.mh_data)), m->m_hdr.mh_len);
 }






 sc->sc_outm = m;
 if (m)
     break;
    }


    s = splraise((0x20 + ((5) << 4)));
    pppstart(tp, 0);






    if (!idle && (sc->sc_flags & 0x00000400) == 0) {
 timeout_add(&sc->sc_timo, 1);
 sc->sc_flags |= 0x00000400;
    }

    splx(s);
}





void
pppasyncctlp(sc)
    struct ppp_softc *sc;
{
    struct tty *tp;
    int s;


    s = splraise((0x20 + ((5) << 4)));
    tp = (struct tty *) sc->sc_devp;
    putc(0, &tp->t_canq);
    ttwakeup(tp);
    splx(s);
}






int
pppstart(tp, force)
    struct tty *tp;
    int force;
{
    struct ppp_softc *sc = (struct ppp_softc *) tp->t_sc;





    if (tp->t_oproc != 0L)
 (*tp->t_oproc)(tp);







    if (((&sc->sc_if.if_snd)->altq_flags & 0x02))
 return 0;






    if ((((&tp->t_outq)->c_cc) < 100 || force)
 && !((tp->t_state & 0x00008) == 0 && (tp->t_termios.c_cflag & 0x00008000) == 0)
 && sc != 0L && tp == (struct tty *) sc->sc_devp) {
 ppp_restart(sc);
    }

    return 0;
}




void
ppp_timeout(x)
    void *x;
{
    struct ppp_softc *sc = (struct ppp_softc *) x;
    struct tty *tp = (struct tty *) sc->sc_devp;
    int s;

    s = splraise((0x20 + ((5) << 4)));
    sc->sc_flags &= ~0x00000400;
    pppstart(tp, 1);
    splx(s);
}




void
pppgetm(sc)
    struct ppp_softc *sc;
{
    struct mbuf *m, **mp;
    int len;
    int s;

    s = splraise((0x20 + ((5) << 4)));
    mp = &sc->sc_m;
    for (len = sc->sc_mru + 4 + 2; len > 0; ){
 if ((m = *mp) == 0L) {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
     if (m == 0L)
  break;
     *mp = m;
     do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
 }
 len -= (((m)->m_hdr.mh_flags & 0x0001) ? (m)->M_dat.MH.MH_dat.MH_ext.ext_size : (m)->m_hdr.mh_flags & 0x0002 ? ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)): (256 - sizeof(struct m_hdr)));
 mp = &m->m_hdr.mh_next;
    }
    splx(s);
}




typedef  unsigned int   _GLOBAL_242_T; static  _GLOBAL_242_T  _GLOBAL_0_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_1_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_2_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_3_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_4_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_5_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_6_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_7_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_8_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_9_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_10_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_11_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_12_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_13_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_14_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_15_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_16_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_17_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_18_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_19_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_20_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_21_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_22_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_23_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_24_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_25_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_26_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_27_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_28_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_29_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_30_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_31_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_32_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_33_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_34_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_35_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_36_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_37_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_38_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_39_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_40_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_41_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_42_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_43_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_44_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_45_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_46_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_47_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_48_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static  _GLOBAL_242_T  _GLOBAL_49_paritytab_I [ 8 ]  = { 0x96696996 , 0x69969669  , 0x69969669  , 0x96696996  , 0x69969669  , 0x96696996  , 0x96696996  , 0x69969669  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_paritytab_I) *_GLOBAL_paritytab_52_A[NUM_STACKS] = { &_GLOBAL_0_paritytab_I, &_GLOBAL_1_paritytab_I, &_GLOBAL_2_paritytab_I, &_GLOBAL_3_paritytab_I, &_GLOBAL_4_paritytab_I, &_GLOBAL_5_paritytab_I, &_GLOBAL_6_paritytab_I, &_GLOBAL_7_paritytab_I, &_GLOBAL_8_paritytab_I, &_GLOBAL_9_paritytab_I, &_GLOBAL_10_paritytab_I, &_GLOBAL_11_paritytab_I, &_GLOBAL_12_paritytab_I, &_GLOBAL_13_paritytab_I, &_GLOBAL_14_paritytab_I, &_GLOBAL_15_paritytab_I, &_GLOBAL_16_paritytab_I, &_GLOBAL_17_paritytab_I, &_GLOBAL_18_paritytab_I, &_GLOBAL_19_paritytab_I, &_GLOBAL_20_paritytab_I, &_GLOBAL_21_paritytab_I, &_GLOBAL_22_paritytab_I, &_GLOBAL_23_paritytab_I, &_GLOBAL_24_paritytab_I, &_GLOBAL_25_paritytab_I, &_GLOBAL_26_paritytab_I, &_GLOBAL_27_paritytab_I, &_GLOBAL_28_paritytab_I, &_GLOBAL_29_paritytab_I, &_GLOBAL_30_paritytab_I, &_GLOBAL_31_paritytab_I, &_GLOBAL_32_paritytab_I, &_GLOBAL_33_paritytab_I, &_GLOBAL_34_paritytab_I, &_GLOBAL_35_paritytab_I, &_GLOBAL_36_paritytab_I, &_GLOBAL_37_paritytab_I, &_GLOBAL_38_paritytab_I, &_GLOBAL_39_paritytab_I, &_GLOBAL_40_paritytab_I, &_GLOBAL_41_paritytab_I, &_GLOBAL_42_paritytab_I, &_GLOBAL_43_paritytab_I, &_GLOBAL_44_paritytab_I, &_GLOBAL_45_paritytab_I, &_GLOBAL_46_paritytab_I, &_GLOBAL_47_paritytab_I, &_GLOBAL_48_paritytab_I, &_GLOBAL_49_paritytab_I, };     
       
       


int
pppinput(c, tp)
    int c;
    struct tty *tp;
{
    struct ppp_softc *sc;
    struct mbuf *m;
    int ilen, s;

    sc = (struct ppp_softc *) tp->t_sc;
    if (sc == 0L || tp != (struct tty *) sc->sc_devp)
 return 0;

    ++global_tk_nin[get_stack_id()];
    ++sc->sc_stats.ppp_ibytes;

    if (c & 0x01000000) {

 if (sc->sc_flags & 0x00010000)
     printf("%s: bad char %x\n", sc->sc_if.if_xname, c);
 goto flush;
    }

    c &= 0xff;




    if (tp->t_termios.c_iflag & 0x00000200) {
 if (c == tp->t_termios.c_cc[13] && tp->t_termios.c_cc[13] != (0377)) {
     if ((tp->t_state & 0x00100) == 0) {
  tp->t_state |= 0x00100;
  (*(*_GLOBAL_cdevsw_27_A[get_stack_id()])[((int32_t)(((u_int32_t)(tp->t_dev) >> 8) & 0xff))].d_stop)(tp, 0);
     }
     return 0;
 }
 if (c == tp->t_termios.c_cc[12] && tp->t_termios.c_cc[12] != (0377)) {
     tp->t_state &= ~0x00100;
     if (tp->t_oproc != 0L)
  (*tp->t_oproc)(tp);
     return 0;
 }
    }

    s = splraise((0x20 + ((5) << 4)));
    if (c & 0x80)
 sc->sc_flags |= 0x02000000;
    else
 sc->sc_flags |= 0x01000000;
    if ((*_GLOBAL_paritytab_52_A[get_stack_id()])[c >> 5] & (1 << (c & 0x1F)))
 sc->sc_flags |= 0x08000000;
    else
 sc->sc_flags |= 0x04000000;
    splx(s);

    if (sc->sc_flags & 0x00080000)
 ppplogchar(sc, c);

    if (c == 0x7e) {
 ilen = sc->sc_ilen;
 sc->sc_ilen = 0;

 if (sc->sc_rawin_count > 0)
     ppplogchar(sc, -1);





 if (sc->sc_flags & (0x40000000 | 0x80000000)
     || (ilen > 0 && sc->sc_fcs != 0xf0b8)) {
     s = splraise((0x20 + ((5) << 4)));
     sc->sc_flags |= 0x20000000;
     if ((sc->sc_flags & (0x40000000 | 0x80000000)) == 0){
  if (sc->sc_flags & 0x00010000)
      printf("%s: bad fcs %x\n", sc->sc_if.if_xname,
   sc->sc_fcs);
  sc->sc_if.if_data.ifi_ierrors++;
  sc->sc_stats.ppp_ierrors++;
     } else
  sc->sc_flags &= ~(0x40000000 | 0x80000000);
     splx(s);
     return 0;
 }

 if (ilen < 4 + 2) {
     if (ilen) {
  if (sc->sc_flags & 0x00010000)
      printf("%s: too short (%d)\n", sc->sc_if.if_xname, ilen);
  s = splraise((0x20 + ((5) << 4)));
  sc->sc_if.if_data.ifi_ierrors++;
  sc->sc_stats.ppp_ierrors++;
  sc->sc_flags |= 0x20000000;
  splx(s);
     }
     return 0;
 }




 ilen -= 2;
 if (--sc->sc_mc->m_hdr.mh_len == 0) {
     for (m = sc->sc_m; m->m_hdr.mh_next != sc->sc_mc; m = m->m_hdr.mh_next)
  ;
     sc->sc_mc = m;
 }
 sc->sc_mc->m_hdr.mh_len--;


 m = sc->sc_m;
 sc->sc_m = sc->sc_mc->m_hdr.mh_next;
 sc->sc_mc->m_hdr.mh_next = 0L;

 ppppktin(sc, m, sc->sc_flags & 0x20000000);
 if (sc->sc_flags & 0x20000000) {
     s = splraise((0x20 + ((5) << 4)));
     sc->sc_flags &= ~0x20000000;
     splx(s);
 }

 pppgetm(sc);
 return 0;
    }

    if (sc->sc_flags & 0x40000000) {
 if (sc->sc_flags & 0x00100000)
     ppplogchar(sc, c);
 return 0;
    }

    if (c < 0x20 && (sc->sc_rasyncmap & (1 << c)))
 return 0;

    s = splraise((0x20 + ((5) << 4)));
    if (sc->sc_flags & 0x80000000) {
 sc->sc_flags &= ~0x80000000;
 c ^= 0x20;
    } else if (c == 0x7d) {
 sc->sc_flags |= 0x80000000;
 splx(s);
 return 0;
    }
    splx(s);
# 965 "openbsd3/net/ppp_tty.c"
    if (sc->sc_ilen == 0) {

 if (sc->sc_m == 0L) {
     pppgetm(sc);
     if (sc->sc_m == 0L) {
  if (sc->sc_flags & 0x00010000)
      printf("%s: no input mbufs!\n", sc->sc_if.if_xname);
  goto flush;
     }
 }
 m = sc->sc_m;
 m->m_hdr.mh_len = 0;
 m->m_hdr.mh_data = (((sc->sc_m)->m_hdr.mh_flags & 0x0001) ? (sc->sc_m)->M_dat.MH.MH_dat.MH_ext.ext_buf : (sc->sc_m)->m_hdr.mh_flags & 0x0002 ? (sc->sc_m)->M_dat.MH.MH_dat.MH_databuf : (sc->sc_m)->M_dat.M_databuf);
 sc->sc_mc = m;
 sc->sc_mp = ((char *)((m)->m_hdr.mh_data));
 sc->sc_fcs = 0xffff;
 if (c != 0xff) {
     if (sc->sc_flags & 0x00000010) {
  if (sc->sc_flags & 0x00010000)
      printf("%s: garbage received: 0x%x (need 0xFF)\n",
   sc->sc_if.if_xname, c);
  goto flush;
     }
     *sc->sc_mp++ = 0xff;
     *sc->sc_mp++ = 0x03;
     sc->sc_ilen += 2;
     m->m_hdr.mh_len += 2;
 }
    }
    if (sc->sc_ilen == 1 && c != 0x03) {
 if (sc->sc_flags & 0x00010000)
     printf("%s: missing UI (0x3), got 0x%x\n",
  sc->sc_if.if_xname, c);
 goto flush;
    }
    if (sc->sc_ilen == 2 && (c & 1) == 1) {

 *sc->sc_mp++ = 0;
 sc->sc_ilen++;
 sc->sc_mc->m_hdr.mh_len++;
    }
    if (sc->sc_ilen == 3 && (c & 1) == 0) {
 if (sc->sc_flags & 0x00010000)
     printf("%s: bad protocol %x\n", sc->sc_if.if_xname,
  (sc->sc_mp[-1] << 8) + c);
 goto flush;
    }


    if (++sc->sc_ilen > sc->sc_mru + 4 + 2) {
 if (sc->sc_flags & 0x00010000)
     printf("%s: packet too big\n", sc->sc_if.if_xname);
 goto flush;
    }


    m = sc->sc_mc;
    if ((((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((m))->M_dat.MH.MH_dat.MH_ext.ext_size - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len) : &((m))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len))) <= 0) {
 if (m->m_hdr.mh_next == 0L) {
     pppgetm(sc);
     if (m->m_hdr.mh_next == 0L) {
  if (sc->sc_flags & 0x00010000)
      printf("%s: too few input mbufs!\n", sc->sc_if.if_xname);
  goto flush;
     }
 }
 sc->sc_mc = m = m->m_hdr.mh_next;
 m->m_hdr.mh_len = 0;
 m->m_hdr.mh_data = (((m)->m_hdr.mh_flags & 0x0001) ? (m)->M_dat.MH.MH_dat.MH_ext.ext_buf : (m)->m_hdr.mh_flags & 0x0002 ? (m)->M_dat.MH.MH_dat.MH_databuf : (m)->M_dat.M_databuf);
 sc->sc_mp = ((char *)((m)->m_hdr.mh_data));
    }

    ++m->m_hdr.mh_len;
    *sc->sc_mp++ = c;
    sc->sc_fcs = (((sc->sc_fcs) >> 8) ^ (*_GLOBAL_fcstab_51_A[get_stack_id()])[((sc->sc_fcs) ^ (c)) & 0xff]);
    return 0;

 flush:
    if (!(sc->sc_flags & 0x40000000)) {
 s = splraise((0x20 + ((5) << 4)));
 sc->sc_if.if_data.ifi_ierrors++;
 sc->sc_stats.ppp_ierrors++;
 sc->sc_flags |= 0x40000000;
 splx(s);
 if (sc->sc_flags & 0x00100000)
     ppplogchar(sc, c);
    }
    return 0;
}



void
ppplogchar(sc, c)
    struct ppp_softc *sc;
    int c;
{
    if (c >= 0)
 sc->sc_rawin[sc->sc_rawin_count++] = c;
    if (sc->sc_rawin_count >= sizeof(sc->sc_rawin)
 || (c < 0 && sc->sc_rawin_count > 0)) {
 printf("%s input: ", sc->sc_if.if_xname);
 pppdumpb(sc->sc_rawin, sc->sc_rawin_count);
 sc->sc_rawin_count = 0;
    }
}

void
pppdumpb(b, l)
    u_char *b;
    int l;
{
    char buf[3*128 +4];
    char *bp = buf;
    typedef  char  _GLOBAL_243_T; static  _GLOBAL_243_T  _GLOBAL_0_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_1_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_2_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_3_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_4_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_5_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_6_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_7_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_8_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_9_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_10_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_11_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_12_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_13_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_14_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_15_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_16_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_17_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_18_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_19_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_20_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_21_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_22_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_23_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_24_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_25_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_26_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_27_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_28_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_29_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_30_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_31_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_32_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_33_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_34_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_35_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_36_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_37_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_38_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_39_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_40_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_41_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_42_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_43_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_44_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_45_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_46_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_47_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_48_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_243_T  _GLOBAL_49_digits_I [ ]  = "0123456789abcdef" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_digits_I) *_GLOBAL_digits_53_A[NUM_STACKS] = { &_GLOBAL_0_digits_I, &_GLOBAL_1_digits_I, &_GLOBAL_2_digits_I, &_GLOBAL_3_digits_I, &_GLOBAL_4_digits_I, &_GLOBAL_5_digits_I, &_GLOBAL_6_digits_I, &_GLOBAL_7_digits_I, &_GLOBAL_8_digits_I, &_GLOBAL_9_digits_I, &_GLOBAL_10_digits_I, &_GLOBAL_11_digits_I, &_GLOBAL_12_digits_I, &_GLOBAL_13_digits_I, &_GLOBAL_14_digits_I, &_GLOBAL_15_digits_I, &_GLOBAL_16_digits_I, &_GLOBAL_17_digits_I, &_GLOBAL_18_digits_I, &_GLOBAL_19_digits_I, &_GLOBAL_20_digits_I, &_GLOBAL_21_digits_I, &_GLOBAL_22_digits_I, &_GLOBAL_23_digits_I, &_GLOBAL_24_digits_I, &_GLOBAL_25_digits_I, &_GLOBAL_26_digits_I, &_GLOBAL_27_digits_I, &_GLOBAL_28_digits_I, &_GLOBAL_29_digits_I, &_GLOBAL_30_digits_I, &_GLOBAL_31_digits_I, &_GLOBAL_32_digits_I, &_GLOBAL_33_digits_I, &_GLOBAL_34_digits_I, &_GLOBAL_35_digits_I, &_GLOBAL_36_digits_I, &_GLOBAL_37_digits_I, &_GLOBAL_38_digits_I, &_GLOBAL_39_digits_I, &_GLOBAL_40_digits_I, &_GLOBAL_41_digits_I, &_GLOBAL_42_digits_I, &_GLOBAL_43_digits_I, &_GLOBAL_44_digits_I, &_GLOBAL_45_digits_I, &_GLOBAL_46_digits_I, &_GLOBAL_47_digits_I, &_GLOBAL_48_digits_I, &_GLOBAL_49_digits_I, };    

    while (l--) {
 if (bp >= buf + sizeof(buf) - 3) {
     *bp++ = '>';
     break;
 }
 *bp++ = (*_GLOBAL_digits_53_A[get_stack_id()])[*b >> 4];
 *bp++ = (*_GLOBAL_digits_53_A[get_stack_id()])[*b++ & 0xf];
 *bp++ = ' ';
    }

    *bp = 0;
    printf("%s\n", buf);
}
