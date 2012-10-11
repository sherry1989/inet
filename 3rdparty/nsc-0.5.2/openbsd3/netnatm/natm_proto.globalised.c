# 1 "openbsd3/netnatm/natm_proto.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netnatm/natm_proto.c"
# 39 "openbsd3/netnatm/natm_proto.c"
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
# 40 "openbsd3/netnatm/natm_proto.c" 2
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
# 41 "openbsd3/netnatm/natm_proto.c" 2
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
# 42 "openbsd3/netnatm/natm_proto.c" 2

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
# 44 "openbsd3/netnatm/natm_proto.c" 2
# 1 "openbsd3/sys/protosw.h" 1
# 58 "openbsd3/sys/protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 void (*pr_input)(struct mbuf *, ...);

 int (*pr_output)(struct mbuf *, ...);

 void *(*pr_ctlinput)(int, struct sockaddr *, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);


 void (*pr_init)(void);
 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 228 "openbsd3/sys/protosw.h"
struct sockaddr;
struct protosw *pffindproto(int, int, int);
struct protosw *pffindtype(int, int);
void pfctlinput(int, struct sockaddr *);
# 45 "openbsd3/netnatm/natm_proto.c" 2
# 1 "openbsd3/sys/domain.h" 1
# 42 "openbsd3/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)(void);

 int (*dom_externalize)(struct mbuf *);

 void (*dom_dispose)(struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;

 int (*dom_rtattach)(void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 46 "openbsd3/netnatm/natm_proto.c" 2
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
typedef  struct kmemstats   _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_17_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_18_A[NUM_STACKS];   

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






typedef  struct pool_allocator   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_19_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_mclpool[NUM_STACKS];    

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
# 47 "openbsd3/netnatm/natm_proto.c" 2

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
typedef  int   ( *_GLOBAL_96_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_96_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_98_T; extern  _GLOBAL_98_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_99_T; extern  _GLOBAL_99_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_if_indexlim[NUM_STACKS];   

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
# 49 "openbsd3/netnatm/natm_proto.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
# 50 "openbsd3/netnatm/natm_proto.c" 2
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
# 93 "openbsd3/net/route.h"
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
typedef  struct route_cb   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_104_T; extern  _GLOBAL_104_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_104_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_20_A[NUM_STACKS];   

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
# 51 "openbsd3/netnatm/natm_proto.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_105_T; extern  _GLOBAL_105_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_106_T; extern  _GLOBAL_106_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_107_T; extern  _GLOBAL_107_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_108_T; extern  _GLOBAL_108_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_109_T; extern  _GLOBAL_109_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_110_T; extern  _GLOBAL_110_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_111_T; extern  _GLOBAL_111_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_112_T; extern  _GLOBAL_112_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_113_T; extern  _GLOBAL_113_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_114_T; extern  _GLOBAL_114_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_115_T; extern  _GLOBAL_115_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 53 "openbsd3/netnatm/natm_proto.c" 2

# 1 "openbsd3/netnatm/natm.h" 1
# 51 "openbsd3/netnatm/natm.h"
struct sockaddr_natm {
  u_int8_t snatm_len;
  u_int8_t snatm_family;
  char snatm_if[16];
  u_int16_t snatm_vci;
  u_int8_t snatm_vpi;
};
# 80 "openbsd3/netnatm/natm.h"
struct natmpcb {
  struct { struct natmpcb *le_next; struct natmpcb **le_prev; } pcblist;
  u_int npcb_inq;
  struct socket *npcb_socket;
  struct ifnet *npcb_ifp;
  struct in_addr ipaddr;
  u_int16_t npcb_vci;
  u_int8_t npcb_vpi;
  u_int8_t npcb_flags;
};
# 112 "openbsd3/netnatm/natm.h"
struct npcblist { struct natmpcb *lh_first; };



typedef  struct npcblist  _GLOBAL_116_T;  _GLOBAL_116_T  global_natm_pcbs[NUM_STACKS];   
typedef  struct ifqueue   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_natmintrq[NUM_STACKS];    


typedef  u_int  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_natm_sodropcnt[NUM_STACKS]; extern  _GLOBAL_118_T  global_natm_sodropbytes[NUM_STACKS];   
  
typedef  u_int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_natm_sookcnt[NUM_STACKS]; extern  _GLOBAL_119_T  global_natm_sookbytes[NUM_STACKS];   
  



struct atm_rawioctl {
  struct natmpcb *npcb;
  int rawvalue;
};





struct natmpcb *npcb_alloc(int);
void npcb_free(struct natmpcb *, int);
struct natmpcb *npcb_add(struct natmpcb *, struct ifnet *, int, int);






int natm_usrreq(struct socket *, int, struct mbuf *,
                             struct mbuf *, struct mbuf *);

int natm0_sysctl(int *, u_int, void *, size_t *, void *, size_t);
int natm5_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void natmintr(void);
# 55 "openbsd3/netnatm/natm_proto.c" 2

typedef  struct domain   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_natmdomain[NUM_STACKS];    

static void natm_init(void);

typedef  struct protosw  _GLOBAL_121_T;  _GLOBAL_121_T  _GLOBAL_0_natmsw_I [ ]  = { { 1 , & global_natmdomain[0]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[0]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[0]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_1_natmsw_I [ ]  = { { 1 , & global_natmdomain[1]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[1]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[1]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_2_natmsw_I [ ]  = { { 1 , & global_natmdomain[2]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[2]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[2]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_3_natmsw_I [ ]  = { { 1 , & global_natmdomain[3]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[3]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[3]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_4_natmsw_I [ ]  = { { 1 , & global_natmdomain[4]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[4]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[4]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_5_natmsw_I [ ]  = { { 1 , & global_natmdomain[5]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[5]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[5]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_6_natmsw_I [ ]  = { { 1 , & global_natmdomain[6]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[6]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[6]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_7_natmsw_I [ ]  = { { 1 , & global_natmdomain[7]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[7]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[7]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_8_natmsw_I [ ]  = { { 1 , & global_natmdomain[8]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[8]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[8]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_9_natmsw_I [ ]  = { { 1 , & global_natmdomain[9]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[9]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[9]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_10_natmsw_I [ ]  = { { 1 , & global_natmdomain[10]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[10]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[10]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_11_natmsw_I [ ]  = { { 1 , & global_natmdomain[11]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[11]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[11]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_12_natmsw_I [ ]  = { { 1 , & global_natmdomain[12]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[12]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[12]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_13_natmsw_I [ ]  = { { 1 , & global_natmdomain[13]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[13]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[13]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_14_natmsw_I [ ]  = { { 1 , & global_natmdomain[14]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[14]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[14]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_15_natmsw_I [ ]  = { { 1 , & global_natmdomain[15]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[15]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[15]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_16_natmsw_I [ ]  = { { 1 , & global_natmdomain[16]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[16]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[16]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_17_natmsw_I [ ]  = { { 1 , & global_natmdomain[17]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[17]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[17]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_18_natmsw_I [ ]  = { { 1 , & global_natmdomain[18]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[18]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[18]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_19_natmsw_I [ ]  = { { 1 , & global_natmdomain[19]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[19]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[19]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_20_natmsw_I [ ]  = { { 1 , & global_natmdomain[20]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[20]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[20]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_21_natmsw_I [ ]  = { { 1 , & global_natmdomain[21]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[21]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[21]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_22_natmsw_I [ ]  = { { 1 , & global_natmdomain[22]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[22]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[22]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_23_natmsw_I [ ]  = { { 1 , & global_natmdomain[23]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[23]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[23]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_24_natmsw_I [ ]  = { { 1 , & global_natmdomain[24]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[24]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[24]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_25_natmsw_I [ ]  = { { 1 , & global_natmdomain[25]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[25]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[25]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_26_natmsw_I [ ]  = { { 1 , & global_natmdomain[26]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[26]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[26]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_27_natmsw_I [ ]  = { { 1 , & global_natmdomain[27]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[27]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[27]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_28_natmsw_I [ ]  = { { 1 , & global_natmdomain[28]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[28]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[28]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_29_natmsw_I [ ]  = { { 1 , & global_natmdomain[29]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[29]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[29]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_30_natmsw_I [ ]  = { { 1 , & global_natmdomain[30]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[30]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[30]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_31_natmsw_I [ ]  = { { 1 , & global_natmdomain[31]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[31]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[31]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_32_natmsw_I [ ]  = { { 1 , & global_natmdomain[32]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[32]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[32]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_33_natmsw_I [ ]  = { { 1 , & global_natmdomain[33]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[33]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[33]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_34_natmsw_I [ ]  = { { 1 , & global_natmdomain[34]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[34]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[34]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_35_natmsw_I [ ]  = { { 1 , & global_natmdomain[35]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[35]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[35]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_36_natmsw_I [ ]  = { { 1 , & global_natmdomain[36]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[36]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[36]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_37_natmsw_I [ ]  = { { 1 , & global_natmdomain[37]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[37]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[37]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_38_natmsw_I [ ]  = { { 1 , & global_natmdomain[38]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[38]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[38]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_39_natmsw_I [ ]  = { { 1 , & global_natmdomain[39]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[39]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[39]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_40_natmsw_I [ ]  = { { 1 , & global_natmdomain[40]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[40]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[40]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_41_natmsw_I [ ]  = { { 1 , & global_natmdomain[41]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[41]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[41]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_42_natmsw_I [ ]  = { { 1 , & global_natmdomain[42]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[42]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[42]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_43_natmsw_I [ ]  = { { 1 , & global_natmdomain[43]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[43]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[43]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_44_natmsw_I [ ]  = { { 1 , & global_natmdomain[44]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[44]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[44]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_45_natmsw_I [ ]  = { { 1 , & global_natmdomain[45]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[45]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[45]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_46_natmsw_I [ ]  = { { 1 , & global_natmdomain[46]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[46]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[46]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_47_natmsw_I [ ]  = { { 1 , & global_natmdomain[47]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[47]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[47]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_48_natmsw_I [ ]  = { { 1 , & global_natmdomain[48]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[48]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[48]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ;  _GLOBAL_121_T  _GLOBAL_49_natmsw_I [ ]  = { { 1 , & global_natmdomain[49]   , 2  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }  , { 2 , & global_natmdomain[49]   , 2  , 0x04 | 0x01   , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm5_sysctl  }   , { 1 , & global_natmdomain[49]   , 1  , 0x04  , 0  , 0  , 0  , 0  , natm_usrreq  , 0  , 0  , 0  , 0  , natm0_sysctl  }   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_natmsw_I) *_GLOBAL_natmsw_21_A[NUM_STACKS] = { &_GLOBAL_0_natmsw_I, &_GLOBAL_1_natmsw_I, &_GLOBAL_2_natmsw_I, &_GLOBAL_3_natmsw_I, &_GLOBAL_4_natmsw_I, &_GLOBAL_5_natmsw_I, &_GLOBAL_6_natmsw_I, &_GLOBAL_7_natmsw_I, &_GLOBAL_8_natmsw_I, &_GLOBAL_9_natmsw_I, &_GLOBAL_10_natmsw_I, &_GLOBAL_11_natmsw_I, &_GLOBAL_12_natmsw_I, &_GLOBAL_13_natmsw_I, &_GLOBAL_14_natmsw_I, &_GLOBAL_15_natmsw_I, &_GLOBAL_16_natmsw_I, &_GLOBAL_17_natmsw_I, &_GLOBAL_18_natmsw_I, &_GLOBAL_19_natmsw_I, &_GLOBAL_20_natmsw_I, &_GLOBAL_21_natmsw_I, &_GLOBAL_22_natmsw_I, &_GLOBAL_23_natmsw_I, &_GLOBAL_24_natmsw_I, &_GLOBAL_25_natmsw_I, &_GLOBAL_26_natmsw_I, &_GLOBAL_27_natmsw_I, &_GLOBAL_28_natmsw_I, &_GLOBAL_29_natmsw_I, &_GLOBAL_30_natmsw_I, &_GLOBAL_31_natmsw_I, &_GLOBAL_32_natmsw_I, &_GLOBAL_33_natmsw_I, &_GLOBAL_34_natmsw_I, &_GLOBAL_35_natmsw_I, &_GLOBAL_36_natmsw_I, &_GLOBAL_37_natmsw_I, &_GLOBAL_38_natmsw_I, &_GLOBAL_39_natmsw_I, &_GLOBAL_40_natmsw_I, &_GLOBAL_41_natmsw_I, &_GLOBAL_42_natmsw_I, &_GLOBAL_43_natmsw_I, &_GLOBAL_44_natmsw_I, &_GLOBAL_45_natmsw_I, &_GLOBAL_46_natmsw_I, &_GLOBAL_47_natmsw_I, &_GLOBAL_48_natmsw_I, &_GLOBAL_49_natmsw_I, };    
    
     
  
     

 


      
     
  
     

 


    
     
  
     

 




typedef  struct domain  _GLOBAL_122_T;  _GLOBAL_122_T  global_natmdomain[NUM_STACKS] = {  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_0_natmsw_I  , & _GLOBAL_0_natmsw_I [ sizeof ( _GLOBAL_0_natmsw_I )   / sizeof ( _GLOBAL_0_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_1_natmsw_I  , & _GLOBAL_1_natmsw_I [ sizeof ( _GLOBAL_1_natmsw_I )   / sizeof ( _GLOBAL_1_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_2_natmsw_I  , & _GLOBAL_2_natmsw_I [ sizeof ( _GLOBAL_2_natmsw_I )   / sizeof ( _GLOBAL_2_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_3_natmsw_I  , & _GLOBAL_3_natmsw_I [ sizeof ( _GLOBAL_3_natmsw_I )   / sizeof ( _GLOBAL_3_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_4_natmsw_I  , & _GLOBAL_4_natmsw_I [ sizeof ( _GLOBAL_4_natmsw_I )   / sizeof ( _GLOBAL_4_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_5_natmsw_I  , & _GLOBAL_5_natmsw_I [ sizeof ( _GLOBAL_5_natmsw_I )   / sizeof ( _GLOBAL_5_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_6_natmsw_I  , & _GLOBAL_6_natmsw_I [ sizeof ( _GLOBAL_6_natmsw_I )   / sizeof ( _GLOBAL_6_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_7_natmsw_I  , & _GLOBAL_7_natmsw_I [ sizeof ( _GLOBAL_7_natmsw_I )   / sizeof ( _GLOBAL_7_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_8_natmsw_I  , & _GLOBAL_8_natmsw_I [ sizeof ( _GLOBAL_8_natmsw_I )   / sizeof ( _GLOBAL_8_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_9_natmsw_I  , & _GLOBAL_9_natmsw_I [ sizeof ( _GLOBAL_9_natmsw_I )   / sizeof ( _GLOBAL_9_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_10_natmsw_I  , & _GLOBAL_10_natmsw_I [ sizeof ( _GLOBAL_10_natmsw_I )   / sizeof ( _GLOBAL_10_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_11_natmsw_I  , & _GLOBAL_11_natmsw_I [ sizeof ( _GLOBAL_11_natmsw_I )   / sizeof ( _GLOBAL_11_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_12_natmsw_I  , & _GLOBAL_12_natmsw_I [ sizeof ( _GLOBAL_12_natmsw_I )   / sizeof ( _GLOBAL_12_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_13_natmsw_I  , & _GLOBAL_13_natmsw_I [ sizeof ( _GLOBAL_13_natmsw_I )   / sizeof ( _GLOBAL_13_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_14_natmsw_I  , & _GLOBAL_14_natmsw_I [ sizeof ( _GLOBAL_14_natmsw_I )   / sizeof ( _GLOBAL_14_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_15_natmsw_I  , & _GLOBAL_15_natmsw_I [ sizeof ( _GLOBAL_15_natmsw_I )   / sizeof ( _GLOBAL_15_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_16_natmsw_I  , & _GLOBAL_16_natmsw_I [ sizeof ( _GLOBAL_16_natmsw_I )   / sizeof ( _GLOBAL_16_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_17_natmsw_I  , & _GLOBAL_17_natmsw_I [ sizeof ( _GLOBAL_17_natmsw_I )   / sizeof ( _GLOBAL_17_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_18_natmsw_I  , & _GLOBAL_18_natmsw_I [ sizeof ( _GLOBAL_18_natmsw_I )   / sizeof ( _GLOBAL_18_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_19_natmsw_I  , & _GLOBAL_19_natmsw_I [ sizeof ( _GLOBAL_19_natmsw_I )   / sizeof ( _GLOBAL_19_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_20_natmsw_I  , & _GLOBAL_20_natmsw_I [ sizeof ( _GLOBAL_20_natmsw_I )   / sizeof ( _GLOBAL_20_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_21_natmsw_I  , & _GLOBAL_21_natmsw_I [ sizeof ( _GLOBAL_21_natmsw_I )   / sizeof ( _GLOBAL_21_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_22_natmsw_I  , & _GLOBAL_22_natmsw_I [ sizeof ( _GLOBAL_22_natmsw_I )   / sizeof ( _GLOBAL_22_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_23_natmsw_I  , & _GLOBAL_23_natmsw_I [ sizeof ( _GLOBAL_23_natmsw_I )   / sizeof ( _GLOBAL_23_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_24_natmsw_I  , & _GLOBAL_24_natmsw_I [ sizeof ( _GLOBAL_24_natmsw_I )   / sizeof ( _GLOBAL_24_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_25_natmsw_I  , & _GLOBAL_25_natmsw_I [ sizeof ( _GLOBAL_25_natmsw_I )   / sizeof ( _GLOBAL_25_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_26_natmsw_I  , & _GLOBAL_26_natmsw_I [ sizeof ( _GLOBAL_26_natmsw_I )   / sizeof ( _GLOBAL_26_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_27_natmsw_I  , & _GLOBAL_27_natmsw_I [ sizeof ( _GLOBAL_27_natmsw_I )   / sizeof ( _GLOBAL_27_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_28_natmsw_I  , & _GLOBAL_28_natmsw_I [ sizeof ( _GLOBAL_28_natmsw_I )   / sizeof ( _GLOBAL_28_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_29_natmsw_I  , & _GLOBAL_29_natmsw_I [ sizeof ( _GLOBAL_29_natmsw_I )   / sizeof ( _GLOBAL_29_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_30_natmsw_I  , & _GLOBAL_30_natmsw_I [ sizeof ( _GLOBAL_30_natmsw_I )   / sizeof ( _GLOBAL_30_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_31_natmsw_I  , & _GLOBAL_31_natmsw_I [ sizeof ( _GLOBAL_31_natmsw_I )   / sizeof ( _GLOBAL_31_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_32_natmsw_I  , & _GLOBAL_32_natmsw_I [ sizeof ( _GLOBAL_32_natmsw_I )   / sizeof ( _GLOBAL_32_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_33_natmsw_I  , & _GLOBAL_33_natmsw_I [ sizeof ( _GLOBAL_33_natmsw_I )   / sizeof ( _GLOBAL_33_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_34_natmsw_I  , & _GLOBAL_34_natmsw_I [ sizeof ( _GLOBAL_34_natmsw_I )   / sizeof ( _GLOBAL_34_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_35_natmsw_I  , & _GLOBAL_35_natmsw_I [ sizeof ( _GLOBAL_35_natmsw_I )   / sizeof ( _GLOBAL_35_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_36_natmsw_I  , & _GLOBAL_36_natmsw_I [ sizeof ( _GLOBAL_36_natmsw_I )   / sizeof ( _GLOBAL_36_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_37_natmsw_I  , & _GLOBAL_37_natmsw_I [ sizeof ( _GLOBAL_37_natmsw_I )   / sizeof ( _GLOBAL_37_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_38_natmsw_I  , & _GLOBAL_38_natmsw_I [ sizeof ( _GLOBAL_38_natmsw_I )   / sizeof ( _GLOBAL_38_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_39_natmsw_I  , & _GLOBAL_39_natmsw_I [ sizeof ( _GLOBAL_39_natmsw_I )   / sizeof ( _GLOBAL_39_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_40_natmsw_I  , & _GLOBAL_40_natmsw_I [ sizeof ( _GLOBAL_40_natmsw_I )   / sizeof ( _GLOBAL_40_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_41_natmsw_I  , & _GLOBAL_41_natmsw_I [ sizeof ( _GLOBAL_41_natmsw_I )   / sizeof ( _GLOBAL_41_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_42_natmsw_I  , & _GLOBAL_42_natmsw_I [ sizeof ( _GLOBAL_42_natmsw_I )   / sizeof ( _GLOBAL_42_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_43_natmsw_I  , & _GLOBAL_43_natmsw_I [ sizeof ( _GLOBAL_43_natmsw_I )   / sizeof ( _GLOBAL_43_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_44_natmsw_I  , & _GLOBAL_44_natmsw_I [ sizeof ( _GLOBAL_44_natmsw_I )   / sizeof ( _GLOBAL_44_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_45_natmsw_I  , & _GLOBAL_45_natmsw_I [ sizeof ( _GLOBAL_45_natmsw_I )   / sizeof ( _GLOBAL_45_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_46_natmsw_I  , & _GLOBAL_46_natmsw_I [ sizeof ( _GLOBAL_46_natmsw_I )   / sizeof ( _GLOBAL_46_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_47_natmsw_I  , & _GLOBAL_47_natmsw_I [ sizeof ( _GLOBAL_47_natmsw_I )   / sizeof ( _GLOBAL_47_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_48_natmsw_I  , & _GLOBAL_48_natmsw_I [ sizeof ( _GLOBAL_48_natmsw_I )   / sizeof ( _GLOBAL_48_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  { 27 , "natm"  , natm_init  , 0  , 0  , _GLOBAL_49_natmsw_I  , & _GLOBAL_49_natmsw_I [ sizeof ( _GLOBAL_49_natmsw_I )   / sizeof ( _GLOBAL_49_natmsw_I [ 0 ]  )    ]    , 0  , 0  , 0  , 0  } ,  };    
         
        
        

typedef  struct ifqueue  _GLOBAL_123_T;  _GLOBAL_123_T  global_natmintrq[NUM_STACKS];   
typedef  int _GLOBAL_124_T;  _GLOBAL_124_T  global_natmqmaxlen[NUM_STACKS] = {  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  };    

typedef  u_int _GLOBAL_125_T;  _GLOBAL_125_T  global_natm_sodropcnt[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  u_int _GLOBAL_126_T;  _GLOBAL_126_T  global_natm_sodropbytes[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  u_int _GLOBAL_127_T;  _GLOBAL_127_T  global_natm_sookcnt[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  u_int _GLOBAL_128_T;  _GLOBAL_128_T  global_natm_sookbytes[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    




void natm_init()

{
  do { ((&global_natm_pcbs[get_stack_id()])->lh_first) = 0L; } while (0);
  bzero(&global_natmintrq[get_stack_id()], sizeof(global_natmintrq[get_stack_id()]));
  global_natmintrq[get_stack_id()].ifq_maxlen = global_natmqmaxlen[get_stack_id()];
}

