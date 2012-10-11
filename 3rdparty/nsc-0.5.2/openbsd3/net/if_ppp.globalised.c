# 1 "openbsd3/net/if_ppp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/if_ppp.c"
# 106 "openbsd3/net/if_ppp.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/ppp.h" 1
# 107 "openbsd3/net/if_ppp.c" 2





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
# 113 "openbsd3/net/if_ppp.c" 2
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
# 114 "openbsd3/net/if_ppp.c" 2
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
# 115 "openbsd3/net/if_ppp.c" 2
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
# 116 "openbsd3/net/if_ppp.c" 2
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
# 117 "openbsd3/net/if_ppp.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_68_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_17_A[NUM_STACKS];  
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_70_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_18_A[NUM_STACKS];  
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_72_T; extern volatile  _GLOBAL_72_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_timedelta[NUM_STACKS];   
# 118 "openbsd3/net/if_ppp.c" 2
# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_87_T; extern  _GLOBAL_87_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_19_A[NUM_STACKS];   
typedef  const char   _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_20_A[NUM_STACKS];   
typedef  const char   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_21_A[NUM_STACKS];   
typedef  const char   _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_22_A[NUM_STACKS];   
typedef  const char   _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_92_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_103_T; extern  _GLOBAL_103_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_105_T; extern  _GLOBAL_105_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_106_T; extern  _GLOBAL_106_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_24_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_109_T  )  ( int  ) ; extern  _GLOBAL_109_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_111_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_113_T  )  ( void  ) ; extern  _GLOBAL_113_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_115_T  )  ( void  ) ; extern  _GLOBAL_115_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_25_A[NUM_STACKS];extern  _GLOBAL_116_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_116_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_26_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 119 "openbsd3/net/if_ppp.c" 2



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
typedef  int   ( *_GLOBAL_118_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_118_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_120_T; extern  _GLOBAL_120_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_if_indexlim[NUM_STACKS];   

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
# 123 "openbsd3/net/if_ppp.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 124 "openbsd3/net/if_ppp.c" 2
# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_netisr[NUM_STACKS];   

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


typedef  struct rndstats   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 86 "openbsd3/net/netisr.h" 2
# 125 "openbsd3/net/if_ppp.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_125_T; extern  _GLOBAL_125_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_128_T; extern  _GLOBAL_128_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_128_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_27_A[NUM_STACKS];   

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
# 126 "openbsd3/net/if_ppp.c" 2
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







typedef  int  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ticks[NUM_STACKS];   
# 127 "openbsd3/net/if_ppp.c" 2


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
typedef  const struct sockaddr_in6    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_138_T; extern  _GLOBAL_138_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_139_T; extern  _GLOBAL_139_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_140_T; extern  _GLOBAL_140_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 130 "openbsd3/net/if_ppp.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 131 "openbsd3/net/if_ppp.c" 2
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
typedef  struct in_ifaddrhead   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_28_A[NUM_STACKS];  
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
typedef  struct in6_ifaddr   _GLOBAL_144_T; extern  _GLOBAL_144_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_145_T; extern  _GLOBAL_145_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_145_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_29_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_30_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_in6_maxmtu[NUM_STACKS];    
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
# 132 "openbsd3/net/if_ppp.c" 2
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
# 133 "openbsd3/net/if_ppp.c" 2
# 141 "openbsd3/net/if_ppp.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 142 "openbsd3/net/if_ppp.c" 2






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
# 149 "openbsd3/net/if_ppp.c" 2


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
# 152 "openbsd3/net/if_ppp.c" 2
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
# 153 "openbsd3/net/if_ppp.c" 2
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


typedef  struct ppp_softc   _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_1_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_2_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_3_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_4_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_5_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_6_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_7_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_8_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_9_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_10_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_11_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_12_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_13_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_14_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_15_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_16_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_17_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_18_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_19_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_20_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_21_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_22_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_23_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_24_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_25_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_26_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_27_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_28_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_29_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_30_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_31_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_32_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_33_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_34_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_35_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_36_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_37_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_38_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_39_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_40_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_41_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_42_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_43_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_44_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_45_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_46_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_47_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_48_ppp_softc_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_49_ppp_softc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ppp_softc_I) *_GLOBAL_ppp_softc_31_A[NUM_STACKS];   

struct ppp_softc *pppalloc(pid_t pid);
void pppdealloc(struct ppp_softc *sc);
int pppioctl(struct ppp_softc *sc, u_long cmd, caddr_t data,
        int flag, struct proc *p);
void ppppktin(struct ppp_softc *sc, struct mbuf *m, int lost);
struct mbuf *ppp_dequeue(struct ppp_softc *sc);
void ppp_restart(struct ppp_softc *sc);
int pppoutput(struct ifnet *, struct mbuf *,
         struct sockaddr *, struct rtentry *);
# 154 "openbsd3/net/if_ppp.c" 2




# 1 "openbsd3/net/ppp-comp.h" 1
# 58 "openbsd3/net/ppp-comp.h"
struct compressor {
 int compress_proto;


 void *(*comp_alloc)(u_char *options, int opt_len);

 void (*comp_free)(void *state);

 int (*comp_init)(void *state, u_char *options, int opt_len,
      int unit, int hdrlen, int debug);

 void (*comp_reset)(void *state);

 int (*compress)(void *state, struct mbuf * *mret,
     struct mbuf * mp, int orig_len, int max_len);

 void (*comp_stat)(void *state, struct compstat *stats);


 void *(*decomp_alloc)(u_char *options, int opt_len);

 void (*decomp_free)(void *state);

 int (*decomp_init)(void *state, u_char *options, int opt_len,
        int unit, int hdrlen, int mru, int debug);

 void (*decomp_reset)(void *state);

 int (*decompress)(void *state, struct mbuf * mp,
       struct mbuf * *dmpp);

 void (*incomp)(void *state, struct mbuf * mp);

 void (*decomp_stat)(void *state, struct compstat *stats);
};
# 159 "openbsd3/net/if_ppp.c" 2


static int pppsioctl(struct ifnet *, u_long, caddr_t);
static void ppp_requeue(struct ppp_softc *);
static void ppp_ccp(struct ppp_softc *, struct mbuf *m, int rcvd);
static void ppp_ccp_closed(struct ppp_softc *);
static void ppp_inproc(struct ppp_softc *, struct mbuf *);
static void pppdumpm(struct mbuf *m0);

static void ppp_ifstart(struct ifnet *ifp);

int ppp_clone_create(struct if_clone *, int);
int ppp_clone_destroy(struct ifnet *);
# 200 "openbsd3/net/if_ppp.c"
typedef  struct compressor   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ppp_bsd_compress[NUM_STACKS];    
typedef  struct compressor   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_ppp_deflate[NUM_STACKS]; extern  _GLOBAL_152_T  global_ppp_deflate_draft[NUM_STACKS];     

typedef  struct compressor  _GLOBAL_153_T;  _GLOBAL_153_T  * _GLOBAL_0_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[0]  , & global_ppp_deflate[0]   , & global_ppp_deflate_draft[0]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_1_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[1]  , & global_ppp_deflate[1]   , & global_ppp_deflate_draft[1]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_2_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[2]  , & global_ppp_deflate[2]   , & global_ppp_deflate_draft[2]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_3_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[3]  , & global_ppp_deflate[3]   , & global_ppp_deflate_draft[3]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_4_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[4]  , & global_ppp_deflate[4]   , & global_ppp_deflate_draft[4]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_5_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[5]  , & global_ppp_deflate[5]   , & global_ppp_deflate_draft[5]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_6_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[6]  , & global_ppp_deflate[6]   , & global_ppp_deflate_draft[6]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_7_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[7]  , & global_ppp_deflate[7]   , & global_ppp_deflate_draft[7]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_8_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[8]  , & global_ppp_deflate[8]   , & global_ppp_deflate_draft[8]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_9_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[9]  , & global_ppp_deflate[9]   , & global_ppp_deflate_draft[9]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_10_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[10]  , & global_ppp_deflate[10]   , & global_ppp_deflate_draft[10]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_11_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[11]  , & global_ppp_deflate[11]   , & global_ppp_deflate_draft[11]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_12_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[12]  , & global_ppp_deflate[12]   , & global_ppp_deflate_draft[12]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_13_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[13]  , & global_ppp_deflate[13]   , & global_ppp_deflate_draft[13]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_14_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[14]  , & global_ppp_deflate[14]   , & global_ppp_deflate_draft[14]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_15_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[15]  , & global_ppp_deflate[15]   , & global_ppp_deflate_draft[15]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_16_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[16]  , & global_ppp_deflate[16]   , & global_ppp_deflate_draft[16]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_17_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[17]  , & global_ppp_deflate[17]   , & global_ppp_deflate_draft[17]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_18_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[18]  , & global_ppp_deflate[18]   , & global_ppp_deflate_draft[18]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_19_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[19]  , & global_ppp_deflate[19]   , & global_ppp_deflate_draft[19]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_20_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[20]  , & global_ppp_deflate[20]   , & global_ppp_deflate_draft[20]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_21_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[21]  , & global_ppp_deflate[21]   , & global_ppp_deflate_draft[21]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_22_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[22]  , & global_ppp_deflate[22]   , & global_ppp_deflate_draft[22]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_23_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[23]  , & global_ppp_deflate[23]   , & global_ppp_deflate_draft[23]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_24_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[24]  , & global_ppp_deflate[24]   , & global_ppp_deflate_draft[24]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_25_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[25]  , & global_ppp_deflate[25]   , & global_ppp_deflate_draft[25]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_26_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[26]  , & global_ppp_deflate[26]   , & global_ppp_deflate_draft[26]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_27_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[27]  , & global_ppp_deflate[27]   , & global_ppp_deflate_draft[27]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_28_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[28]  , & global_ppp_deflate[28]   , & global_ppp_deflate_draft[28]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_29_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[29]  , & global_ppp_deflate[29]   , & global_ppp_deflate_draft[29]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_30_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[30]  , & global_ppp_deflate[30]   , & global_ppp_deflate_draft[30]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_31_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[31]  , & global_ppp_deflate[31]   , & global_ppp_deflate_draft[31]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_32_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[32]  , & global_ppp_deflate[32]   , & global_ppp_deflate_draft[32]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_33_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[33]  , & global_ppp_deflate[33]   , & global_ppp_deflate_draft[33]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_34_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[34]  , & global_ppp_deflate[34]   , & global_ppp_deflate_draft[34]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_35_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[35]  , & global_ppp_deflate[35]   , & global_ppp_deflate_draft[35]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_36_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[36]  , & global_ppp_deflate[36]   , & global_ppp_deflate_draft[36]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_37_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[37]  , & global_ppp_deflate[37]   , & global_ppp_deflate_draft[37]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_38_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[38]  , & global_ppp_deflate[38]   , & global_ppp_deflate_draft[38]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_39_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[39]  , & global_ppp_deflate[39]   , & global_ppp_deflate_draft[39]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_40_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[40]  , & global_ppp_deflate[40]   , & global_ppp_deflate_draft[40]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_41_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[41]  , & global_ppp_deflate[41]   , & global_ppp_deflate_draft[41]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_42_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[42]  , & global_ppp_deflate[42]   , & global_ppp_deflate_draft[42]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_43_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[43]  , & global_ppp_deflate[43]   , & global_ppp_deflate_draft[43]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_44_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[44]  , & global_ppp_deflate[44]   , & global_ppp_deflate_draft[44]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_45_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[45]  , & global_ppp_deflate[45]   , & global_ppp_deflate_draft[45]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_46_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[46]  , & global_ppp_deflate[46]   , & global_ppp_deflate_draft[46]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_47_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[47]  , & global_ppp_deflate[47]   , & global_ppp_deflate_draft[47]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_48_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[48]  , & global_ppp_deflate[48]   , & global_ppp_deflate_draft[48]   , 0L  }  ;  _GLOBAL_153_T  * _GLOBAL_49_ppp_compressors_I [ 8 ]   = { & global_ppp_bsd_compress[49]  , & global_ppp_deflate[49]   , & global_ppp_deflate_draft[49]   , 0L  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ppp_compressors_I) *_GLOBAL_ppp_compressors_32_A[NUM_STACKS] = { &_GLOBAL_0_ppp_compressors_I, &_GLOBAL_1_ppp_compressors_I, &_GLOBAL_2_ppp_compressors_I, &_GLOBAL_3_ppp_compressors_I, &_GLOBAL_4_ppp_compressors_I, &_GLOBAL_5_ppp_compressors_I, &_GLOBAL_6_ppp_compressors_I, &_GLOBAL_7_ppp_compressors_I, &_GLOBAL_8_ppp_compressors_I, &_GLOBAL_9_ppp_compressors_I, &_GLOBAL_10_ppp_compressors_I, &_GLOBAL_11_ppp_compressors_I, &_GLOBAL_12_ppp_compressors_I, &_GLOBAL_13_ppp_compressors_I, &_GLOBAL_14_ppp_compressors_I, &_GLOBAL_15_ppp_compressors_I, &_GLOBAL_16_ppp_compressors_I, &_GLOBAL_17_ppp_compressors_I, &_GLOBAL_18_ppp_compressors_I, &_GLOBAL_19_ppp_compressors_I, &_GLOBAL_20_ppp_compressors_I, &_GLOBAL_21_ppp_compressors_I, &_GLOBAL_22_ppp_compressors_I, &_GLOBAL_23_ppp_compressors_I, &_GLOBAL_24_ppp_compressors_I, &_GLOBAL_25_ppp_compressors_I, &_GLOBAL_26_ppp_compressors_I, &_GLOBAL_27_ppp_compressors_I, &_GLOBAL_28_ppp_compressors_I, &_GLOBAL_29_ppp_compressors_I, &_GLOBAL_30_ppp_compressors_I, &_GLOBAL_31_ppp_compressors_I, &_GLOBAL_32_ppp_compressors_I, &_GLOBAL_33_ppp_compressors_I, &_GLOBAL_34_ppp_compressors_I, &_GLOBAL_35_ppp_compressors_I, &_GLOBAL_36_ppp_compressors_I, &_GLOBAL_37_ppp_compressors_I, &_GLOBAL_38_ppp_compressors_I, &_GLOBAL_39_ppp_compressors_I, &_GLOBAL_40_ppp_compressors_I, &_GLOBAL_41_ppp_compressors_I, &_GLOBAL_42_ppp_compressors_I, &_GLOBAL_43_ppp_compressors_I, &_GLOBAL_44_ppp_compressors_I, &_GLOBAL_45_ppp_compressors_I, &_GLOBAL_46_ppp_compressors_I, &_GLOBAL_47_ppp_compressors_I, &_GLOBAL_48_ppp_compressors_I, &_GLOBAL_49_ppp_compressors_I, };    

    


    
    

    



typedef  struct { struct ppp_softc   * lh_first  ;  }  _GLOBAL_154_T;  _GLOBAL_154_T  global_ppp_softc_list[NUM_STACKS];       
typedef  struct if_clone  _GLOBAL_155_T;  _GLOBAL_155_T  global_ppp_cloner[NUM_STACKS] = {  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  { { 0 }  , "ppp"  , sizeof ( "ppp" )   - 1   , ppp_clone_create  , ppp_clone_destroy  } ,  };    
              




void
pppattach()
{
    do { ((&global_ppp_softc_list[get_stack_id()])->lh_first) = 0L; } while (0);
    if_clone_attach(&global_ppp_cloner[get_stack_id()]);
}

int
ppp_clone_create(ifc, unit)
    struct if_clone *ifc;
    int unit;
{
    typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ifqmaxlen[NUM_STACKS];   
    struct ppp_softc *sc;
    int s;

    sc = malloc(sizeof(*sc), 2, 0x0001);
    if (!sc)
 return (12);
    bzero(sc, sizeof(*sc));

    sc->sc_unit = unit;
    snprintf(sc->sc_if.if_xname, sizeof sc->sc_if.if_xname, "%s%d",
 ifc->ifc_name, unit);
    sc->sc_if.if_softc = sc;
    sc->sc_if.if_data.ifi_mtu = 1500;
    sc->sc_if.if_flags = 0x10 | 0x8000;
    sc->sc_if.if_data.ifi_type = 0x17;
    sc->sc_if.if_data.ifi_hdrlen = 4;
    sc->sc_if.if_ioctl = pppsioctl;
    sc->sc_if.if_output = pppoutput;

    sc->sc_if.if_start = ppp_ifstart;

    ((&sc->sc_if.if_snd)->ifq_maxlen = (global_ifqmaxlen[get_stack_id()]));
    sc->sc_inq.ifq_maxlen = global_ifqmaxlen[get_stack_id()];
    sc->sc_fastq.ifq_maxlen = global_ifqmaxlen[get_stack_id()];
    sc->sc_rawq.ifq_maxlen = global_ifqmaxlen[get_stack_id()];
    do { ((&sc->sc_if.if_snd)->altq_flags |= 0x01); } while (0);
    if_attach(&sc->sc_if);
    if_alloc_sadl(&sc->sc_if);

    bpfattach(&sc->sc_bpf, &sc->sc_if, 9, 4);

    s = splraise((0x20 + ((6) << 4)));
    do { if (((sc)->sc_list.le_next = (&global_ppp_softc_list[get_stack_id()])->lh_first) != 0L) (&global_ppp_softc_list[get_stack_id()])->lh_first->sc_list.le_prev = &(sc)->sc_list.le_next; (&global_ppp_softc_list[get_stack_id()])->lh_first = (sc); (sc)->sc_list.le_prev = &(&global_ppp_softc_list[get_stack_id()])->lh_first; } while (0);
    splx(s);

    return (0);
}

int
ppp_clone_destroy(ifp)
    struct ifnet *ifp;
{
    struct ppp_softc *sc = ifp->if_softc;
    int s;

    if (sc->sc_devp != 0L)
 return (16);

    s = splraise((0x20 + ((6) << 4)));
    do { if ((sc)->sc_list.le_next != 0L) (sc)->sc_list.le_next->sc_list.le_prev = (sc)->sc_list.le_prev; *(sc)->sc_list.le_prev = (sc)->sc_list.le_next; } while (0);
    splx(s);


    bpfdetach(ifp);

    if_detach(ifp);

    free(sc, 2);
    return (0);
}




struct ppp_softc *
pppalloc(pid)
    pid_t pid;
{
    int i;
    struct ppp_softc *sc;

    for((sc) = ((&global_ppp_softc_list[get_stack_id()])->lh_first); (sc)!= 0L; (sc) = ((sc)->sc_list.le_next))
 if (sc->sc_xfer == pid) {
     sc->sc_xfer = 0;
     return sc;
 }
    for((sc) = ((&global_ppp_softc_list[get_stack_id()])->lh_first); (sc)!= 0L; (sc) = ((sc)->sc_list.le_next))
 if (sc->sc_devp == 0L)
     break;
    if (sc == 0L)
 return 0L;

    sc->sc_flags = 0;
    sc->sc_mru = 1500;
    sc->sc_relinq = 0L;
    bzero((char *)&sc->sc_stats, sizeof(sc->sc_stats));

    (sc->sc_comp) = (struct slcompress *)malloc((u_long)(sizeof(struct slcompress)), 2, 0x0001)
                       ;
    if (sc->sc_comp)
 sl_compress_init(sc->sc_comp);


    sc->sc_xc_state = 0L;
    sc->sc_rc_state = 0L;

    for (i = 0; i < 1; ++i)
 sc->sc_npmode[i] = NPMODE_ERROR;
    sc->sc_npqueue = 0L;
    sc->sc_npqtail = &sc->sc_npqueue;
    sc->sc_last_sent = sc->sc_last_recv = time.tv_sec;

    return sc;
}




void
pppdealloc(sc)
    struct ppp_softc *sc;
{
    struct mbuf *m;

    do { if (__builtin_expect(((global_splassert_ctl[get_stack_id()] > 0) != 0), 0)) { splassert_check((0x20 + ((1) << 4)), __func__); } } while (0);

    if_down(&sc->sc_if);
    sc->sc_if.if_flags &= ~(0x1|0x40);
    sc->sc_devp = 0L;
    sc->sc_xfer = 0;
    for (;;) {
 { (m) = (&sc->sc_rawq)->ifq_head; if (m) { if (((&sc->sc_rawq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_rawq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_rawq)->ifq_len--; } };
 if (m == 0L)
     break;
 m_freem(m);
    }
    for (;;) {
 { (m) = (&sc->sc_inq)->ifq_head; if (m) { if (((&sc->sc_inq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_inq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_inq)->ifq_len--; } };
 if (m == 0L)
     break;
 m_freem(m);
    }
    for (;;) {
 { (m) = (&sc->sc_fastq)->ifq_head; if (m) { if (((&sc->sc_fastq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_fastq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_fastq)->ifq_len--; } };
 if (m == 0L)
     break;
 m_freem(m);
    }
    while ((m = sc->sc_npqueue) != 0L) {
 sc->sc_npqueue = m->m_hdr.mh_nextpkt;
 m_freem(m);
    }
    if (sc->sc_togo != 0L) {
 m_freem(sc->sc_togo);
 sc->sc_togo = 0L;
    }

    ppp_ccp_closed(sc);
    sc->sc_xc_state = 0L;
    sc->sc_rc_state = 0L;

    if (sc->sc_pass_filt.bf_insns != 0) {
 free((caddr_t)(sc->sc_pass_filt.bf_insns), 2);
 sc->sc_pass_filt.bf_insns = 0;
 sc->sc_pass_filt.bf_len = 0;
    }
    if (sc->sc_active_filt.bf_insns != 0) {
 free((caddr_t)(sc->sc_active_filt.bf_insns), 2);
 sc->sc_active_filt.bf_insns = 0;
 sc->sc_active_filt.bf_len = 0;
    }

    if (sc->sc_comp != 0) {
 free((caddr_t)(sc->sc_comp), 2);
 sc->sc_comp = 0;
    }

}




int
pppioctl(sc, cmd, data, flag, p)
    struct ppp_softc *sc;
    u_long cmd;
    caddr_t data;
    int flag;
    struct proc *p;
{
    int s, error, flags, mru, npx;
    u_int nb;
    struct ppp_option_data *odp;
    struct compressor **cp;
    struct npioctl *npi;
    time_t t;
    struct bpf_program *bp, *nbp;
    struct bpf_insn *newcode, *oldcode;
    int newcodelen;

    u_char ccp_option[32];


    switch (cmd) {
    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((127))):
 *(int *)data = sc->sc_inq.ifq_len;
 break;

    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((86))):
 *(int *)data = sc->sc_unit;
 break;

    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((90))):
 *(u_int *)data = sc->sc_flags;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((89))):
 if ((error = suser(p, 0)) != 0)
     return (error);
 flags = *(int *)data & 0x0fff00ff;
 s = splraise((0x20 + ((1) << 4)));

 if (sc->sc_flags & 0x00000040 && !(flags & 0x00000040))
     ppp_ccp_closed(sc);

 splraise((0x20 + ((6) << 4)));
 sc->sc_flags = (sc->sc_flags & ~0x0fff00ff) | flags;
 splx(s);
 break;

    case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((82))):
 if ((error = suser(p, 0)) != 0)
     return (error);
 mru = *(int *)data;
 if (mru >= 1500 && mru <= 65000)
     sc->sc_mru = mru;
 break;

    case ((unsigned long)0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((83))):
 *(int *)data = sc->sc_mru;
 break;


    case ((unsigned long)0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((81))):
 if ((error = suser(p, 0)) != 0)
     return (error);
 if (sc->sc_comp) {
     s = splraise((0x20 + ((1) << 4)));
     sl_compress_setup(sc->sc_comp, *(int *)data);
     splx(s);
 }
 break;


    case ((unsigned long)0x20000000 | ((0 & 0x1fff) << 16) | ((('t')) << 8) | ((78))):
 if ((error = suser(p, 0)) != 0)
     return (error);
 sc->sc_xfer = p->p_pid;
 break;


    case ((unsigned long)0x80000000 | ((sizeof(struct ppp_option_data) & 0x1fff) << 16) | ((('t')) << 8) | ((77))):
 if ((error = suser(p, 0)) != 0)
     return (error);
 odp = (struct ppp_option_data *) data;
 nb = odp->length;
 if (nb > sizeof(ccp_option))
     nb = sizeof(ccp_option);
 if ((error = copyin(odp->ptr, ccp_option, nb)) != 0)
     return (error);
 if (ccp_option[1] < 2)
     return (22);
 for (cp = (*_GLOBAL_ppp_compressors_32_A[get_stack_id()]); *cp != 0L; ++cp)
     if ((*cp)->compress_proto == ccp_option[0]) {




  error = 0;
  if (odp->transmit) {
      s = splraise((0x20 + ((1) << 4)));
      if (sc->sc_xc_state != 0L)
   (*sc->sc_xcomp->comp_free)(sc->sc_xc_state);
      sc->sc_xcomp = *cp;
      sc->sc_xc_state = (*cp)->comp_alloc(ccp_option, nb);
      if (sc->sc_xc_state == 0L) {
   if (sc->sc_flags & 0x00010000)
       printf("%s: comp_alloc failed\n",
    sc->sc_if.if_xname);
   error = 55;
      }
      splraise((0x20 + ((6) << 4)));
      sc->sc_flags &= ~0x00001000;
      splx(s);
  } else {
      s = splraise((0x20 + ((1) << 4)));
      if (sc->sc_rc_state != 0L)
   (*sc->sc_rcomp->decomp_free)(sc->sc_rc_state);
      sc->sc_rcomp = *cp;
      sc->sc_rc_state = (*cp)->decomp_alloc(ccp_option, nb);
      if (sc->sc_rc_state == 0L) {
   if (sc->sc_flags & 0x00010000)
       printf("%s: decomp_alloc failed\n",
    sc->sc_if.if_xname);
   error = 55;
      }
      splraise((0x20 + ((6) << 4)));
      sc->sc_flags &= ~0x00002000;
      splx(s);
  }
  return (error);
     }
 if (sc->sc_flags & 0x00010000)
     printf("%s: no compressor for [%x %x %x], %x\n",
  sc->sc_if.if_xname, ccp_option[0], ccp_option[1],
  ccp_option[2], nb);
 return (22);


    case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct npioctl) & 0x1fff) << 16) | ((('t')) << 8) | ((76))):
    case ((unsigned long)0x80000000 | ((sizeof(struct npioctl) & 0x1fff) << 16) | ((('t')) << 8) | ((75))):
 npi = (struct npioctl *) data;
 switch (npi->protocol) {
 case 0x21:
     npx = 0;
     break;
 default:
     return 22;
 }
 if (cmd == (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct npioctl) & 0x1fff) << 16) | ((('t')) << 8) | ((76)))) {
     npi->mode = sc->sc_npmode[npx];
 } else {
     if ((error = suser(p, 0)) != 0)
  return (error);
     if (npi->mode != sc->sc_npmode[npx]) {
  s = splraise((0x20 + ((1) << 4)));
  sc->sc_npmode[npx] = npi->mode;
  if (npi->mode != NPMODE_QUEUE) {
      ppp_requeue(sc);
      (*sc->sc_start)(sc);
  }
  splx(s);
     }
 }
 break;

    case ((unsigned long)0x40000000 | ((sizeof(struct ppp_idle) & 0x1fff) << 16) | ((('t')) << 8) | ((74))):
 s = splraise((0x20 + ((1) << 4)));
 t = time.tv_sec;
 ((struct ppp_idle *)data)->xmit_idle = t - sc->sc_last_sent;
 ((struct ppp_idle *)data)->recv_idle = t - sc->sc_last_recv;
 splx(s);
 break;

    case ((unsigned long)0x80000000 | ((sizeof(struct bpf_program) & 0x1fff) << 16) | ((('t')) << 8) | ((71))):
    case ((unsigned long)0x80000000 | ((sizeof(struct bpf_program) & 0x1fff) << 16) | ((('t')) << 8) | ((70))):
 nbp = (struct bpf_program *) data;
 if ((unsigned) nbp->bf_len > 512)
     return 22;
 newcodelen = nbp->bf_len * sizeof(struct bpf_insn);
 if (newcodelen != 0) {
     (newcode) = (struct bpf_insn *)malloc((u_long)(newcodelen), 2, 0x0000);
     if ((error = copyin((caddr_t)nbp->bf_insns, (caddr_t)newcode,
          newcodelen)) != 0) {
  free((caddr_t)(newcode), 2);
  return error;
     }
     if (!bpf_validate(newcode, nbp->bf_len)) {
  free((caddr_t)(newcode), 2);
  return 22;
     }
 } else
     newcode = 0;
 bp = (cmd == ((unsigned long)0x80000000 | ((sizeof(struct bpf_program) & 0x1fff) << 16) | ((('t')) << 8) | ((71))))? &sc->sc_pass_filt: &sc->sc_active_filt;
 oldcode = bp->bf_insns;
 s = splraise((0x20 + ((6) << 4)));
 bp->bf_len = nbp->bf_len;
 bp->bf_insns = newcode;
 splx(s);
 if (oldcode != 0)
     free((caddr_t)(oldcode), 2);
 break;

    default:
 return (-1);
    }
    return (0);
}




static int
pppsioctl(ifp, cmd, data)
    struct ifnet *ifp;
    u_long cmd;
    caddr_t data;
{
    struct ppp_softc *sc = ifp->if_softc;
    struct ifaddr *ifa = (struct ifaddr *)data;
    struct ifreq *ifr = (struct ifreq *)data;
    struct ppp_stats *psp;

    struct ppp_comp_stats *pcp;

    int s = splraise((0x20 + ((6) << 4))), error = 0;

    switch (cmd) {
    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16))):
 if ((ifp->if_flags & 0x40) == 0)
     ifp->if_flags &= ~0x1;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12))):
 if (ifa->ifa_addr->sa_family != 2)
     error = 47;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14))):
 if (ifa->ifa_addr->sa_family != 2)
     error = 47;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((127))):
 sc->sc_if.if_data.ifi_mtu = ifr->ifr_ifru.ifru_metric;
 break;

    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49))):
    case ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50))):
 if (ifr == 0) {
     error = 47;
     break;
 }
 switch(ifr->ifr_ifru.ifru_addr.sa_family) {

 case 2:
     break;

 default:
     error = 47;
     break;
 }
 break;

    case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifpppstatsreq) & 0x1fff) << 16) | ((('i')) << 8) | ((123))):
 psp = &((struct ifpppstatsreq *) data)->stats;
 bzero(psp, sizeof(*psp));
 psp->p = sc->sc_stats;

 if (sc->sc_comp) {
     psp->vj.vjs_packets = sc->sc_comp->sls_packets;
     psp->vj.vjs_compressed = sc->sc_comp->sls_compressed;
     psp->vj.vjs_searches = sc->sc_comp->sls_searches;
     psp->vj.vjs_misses = sc->sc_comp->sls_misses;
     psp->vj.vjs_uncompressedin = sc->sc_comp->sls_uncompressedin;
     psp->vj.vjs_compressedin = sc->sc_comp->sls_compressedin;
     psp->vj.vjs_errorin = sc->sc_comp->sls_errorin;
     psp->vj.vjs_tossed = sc->sc_comp->sls_tossed;
 }

 break;


    case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifpppcstatsreq) & 0x1fff) << 16) | ((('i')) << 8) | ((122))):
 pcp = &((struct ifpppcstatsreq *) data)->stats;
 bzero(pcp, sizeof(*pcp));
 if (sc->sc_xc_state != 0L)
     (*sc->sc_xcomp->comp_stat)(sc->sc_xc_state, &pcp->c);
 if (sc->sc_rc_state != 0L)
     (*sc->sc_rcomp->decomp_stat)(sc->sc_rc_state, &pcp->d);
 break;


    default:
 error = 22;
    }
    splx(s);
    return (error);
}





int
pppoutput(ifp, m0, dst, rtp)
    struct ifnet *ifp;
    struct mbuf *m0;
    struct sockaddr *dst;
    struct rtentry *rtp;
{
    struct ppp_softc *sc = ifp->if_softc;
    int protocol, address, control;
    u_char *cp;
    int s, error;
    struct ip *ip;
    struct ifqueue *ifq;
    enum NPmode mode;
    int len;
    struct mbuf *m;

    if (sc->sc_devp == 0L || (ifp->if_flags & 0x40) == 0
 || ((ifp->if_flags & 0x1) == 0 && dst->sa_family != 0)) {
 error = 50;
 goto bad;
    }




    m0->m_hdr.mh_flags &= ~0x2000;
    switch (dst->sa_family) {

    case 2:
 address = 0xff;
 control = 0x03;
 protocol = 0x21;
 mode = sc->sc_npmode[0];





 ip = ((struct ip *)((m0)->m_hdr.mh_data));
 if (ip->ip_tos & 0x10)
     m0->m_hdr.mh_flags |= 0x2000;
 break;

    case 0:
 address = (((u_char *)(dst->sa_data))[0]);
 control = (((u_char *)(dst->sa_data))[1]);
 protocol = ((((u_char *)(dst->sa_data))[2] << 8) + ((u_char *)(dst->sa_data))[3]);
 mode = NPMODE_PASS;
 break;
    default:
 printf("%s: af%d not supported\n", ifp->if_xname, dst->sa_family);
 error = 47;
 goto bad;
    }




    if (mode == NPMODE_ERROR) {
 error = 50;
 goto bad;
    }
    if (mode == NPMODE_DROP) {
 error = 0;
 goto bad;
    }





    if ((((((m0))->m_hdr.mh_flags & 0x0001) != 0 && ((((m0))->m_hdr.mh_flags & 0x0008) == 0 || (((m0))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m0))))) ? 0 : (((m0))->m_hdr.mh_flags & 0x0001 ? ((m0))->m_hdr.mh_data - ((m0))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((m0))->m_hdr.mh_flags & 0x0002 ? ((m0))->m_hdr.mh_data - ((m0))->M_dat.MH.MH_dat.MH_databuf : ((m0))->m_hdr.mh_data - ((m0))->M_dat.M_databuf)) < 4) {
 m0 = m_prepend(m0, 4, 0x0001);
 if (m0 == 0) {
     error = 55;
     goto bad;
 }
 m0->m_hdr.mh_len = 0;
    } else
 m0->m_hdr.mh_data -= 4;

    cp = ((u_char *)((m0)->m_hdr.mh_data));
    *cp++ = address;
    *cp++ = control;
    *cp++ = protocol >> 8;
    *cp++ = protocol & 0xff;
    m0->m_hdr.mh_len += 4;

    len = 0;
    for (m = m0; m != 0; m = m->m_hdr.mh_next)
 len += m->m_hdr.mh_len;

    if (sc->sc_flags & 0x00040000) {
 printf("%s output: ", ifp->if_xname);
 pppdumpm(m0);
    }

    if ((protocol & 0x8000) == 0) {




 *((u_char *)((m0)->m_hdr.mh_data)) = 1;
 if (sc->sc_pass_filt.bf_insns != 0
     && bpf_filter(sc->sc_pass_filt.bf_insns, (u_char *) m0,
     len, 0) == 0) {
     error = 0;
     goto bad;
 }




 if (sc->sc_active_filt.bf_insns == 0
     || bpf_filter(sc->sc_active_filt.bf_insns, (u_char *) m0, len, 0))
     sc->sc_last_sent = time.tv_sec;

 *((u_char *)((m0)->m_hdr.mh_data)) = address;
    }





    if (sc->sc_bpf)
 bpf_mtap(sc->sc_bpf, m0);





    s = splraise((0x20 + ((1) << 4)));
    if (mode == NPMODE_QUEUE) {

 *sc->sc_npqtail = m0;
 m0->m_hdr.mh_nextpkt = 0L;
 sc->sc_npqtail = &m0->m_hdr.mh_nextpkt;
    } else {
 if ((m0->m_hdr.mh_flags & 0x2000)

     && ((&sc->sc_if.if_snd)->altq_flags & 0x02) == 0

     ) {
     ifq = &sc->sc_fastq;
     if (((ifq)->ifq_len >= (ifq)->ifq_maxlen) && dst->sa_family != 0) {
  ((ifq)->ifq_drops++);
  m_freem(m0);
  error = 55;
     }
     else {
  { (m0)->m_hdr.mh_nextpkt = 0; if ((ifq)->ifq_tail == 0) (ifq)->ifq_head = m0; else (ifq)->ifq_tail->m_hdr.mh_nextpkt = m0; (ifq)->ifq_tail = m0; (ifq)->ifq_len++; };
  error = 0;
     }
 } else
     do { if ((((&sc->sc_if.if_snd))->altq_flags & 0x02)) ((error)) = (*((&sc->sc_if.if_snd))->altq_enqueue)(((&sc->sc_if.if_snd)),((m0)),((0L))); else { if ((((&sc->sc_if.if_snd))->ifq_len >= ((&sc->sc_if.if_snd))->ifq_maxlen)) { m_freem((m0)); (error) = 55; } else { { ((m0))->m_hdr.mh_nextpkt = 0; if (((&sc->sc_if.if_snd))->ifq_tail == 0) ((&sc->sc_if.if_snd))->ifq_head = (m0); else ((&sc->sc_if.if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m0); ((&sc->sc_if.if_snd))->ifq_tail = (m0); ((&sc->sc_if.if_snd))->ifq_len++; }; (error) = 0; } } if ((error)) (&sc->sc_if.if_snd)->ifq_drops++; } while (0);
 if (error) {
     splx(s);
     sc->sc_if.if_data.ifi_oerrors++;
     sc->sc_stats.ppp_oerrors++;
     return (error);
 }
 (*sc->sc_start)(sc);
    }
    ifp->if_data.ifi_opackets++;
    ifp->if_data.ifi_obytes += len;

    splx(s);
    return (0);

bad:
    m_freem(m0);
    return (error);
}






static void
ppp_requeue(sc)
    struct ppp_softc *sc;
{
    struct mbuf *m, **mpp;
    struct ifqueue *ifq;
    enum NPmode mode;
    int error;

    do { if (__builtin_expect(((global_splassert_ctl[get_stack_id()] > 0) != 0), 0)) { splassert_check((0x20 + ((1) << 4)), __func__); } } while (0);

    for (mpp = &sc->sc_npqueue; (m = *mpp) != 0L; ) {
 switch (((((u_char *)(((u_char *)((m)->m_hdr.mh_data))))[2] << 8) + ((u_char *)(((u_char *)((m)->m_hdr.mh_data))))[3])) {
 case 0x21:
     mode = sc->sc_npmode[0];
     break;
 default:
     mode = NPMODE_PASS;
 }

 switch (mode) {
 case NPMODE_PASS:



     *mpp = m->m_hdr.mh_nextpkt;
     m->m_hdr.mh_nextpkt = 0L;
     if ((m->m_hdr.mh_flags & 0x2000)

  && ((&sc->sc_if.if_snd)->altq_flags & 0x02) == 0

  ) {
  ifq = &sc->sc_fastq;
  if (((ifq)->ifq_len >= (ifq)->ifq_maxlen)) {
      ((ifq)->ifq_drops++);
      m_freem(m);
      error = 55;
  }
  else {
      { (m)->m_hdr.mh_nextpkt = 0; if ((ifq)->ifq_tail == 0) (ifq)->ifq_head = m; else (ifq)->ifq_tail->m_hdr.mh_nextpkt = m; (ifq)->ifq_tail = m; (ifq)->ifq_len++; };
      error = 0;
  }
     } else
  do { if ((((&sc->sc_if.if_snd))->altq_flags & 0x02)) ((error)) = (*((&sc->sc_if.if_snd))->altq_enqueue)(((&sc->sc_if.if_snd)),((m)),((0L))); else { if ((((&sc->sc_if.if_snd))->ifq_len >= ((&sc->sc_if.if_snd))->ifq_maxlen)) { m_freem((m)); (error) = 55; } else { { ((m))->m_hdr.mh_nextpkt = 0; if (((&sc->sc_if.if_snd))->ifq_tail == 0) ((&sc->sc_if.if_snd))->ifq_head = (m); else ((&sc->sc_if.if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m); ((&sc->sc_if.if_snd))->ifq_tail = (m); ((&sc->sc_if.if_snd))->ifq_len++; }; (error) = 0; } } if ((error)) (&sc->sc_if.if_snd)->ifq_drops++; } while (0);
     if (error) {
  sc->sc_if.if_data.ifi_oerrors++;
  sc->sc_stats.ppp_oerrors++;
     }
     break;

 case NPMODE_DROP:
 case NPMODE_ERROR:
     *mpp = m->m_hdr.mh_nextpkt;
     m_freem(m);
     break;

 case NPMODE_QUEUE:
     mpp = &m->m_hdr.mh_nextpkt;
     break;
 }
    }
    sc->sc_npqtail = mpp;
}





void
ppp_restart(sc)
    struct ppp_softc *sc;
{
    int s = splraise((0x20 + ((6) << 4)));

    sc->sc_flags &= ~0x10000000;
    { global_netisr[get_stack_id()] |= 1<<(28); enqueue_randomness(5, (int)(28)); softintr(1 << 30); };
    splx(s);
}







struct mbuf *
ppp_dequeue(sc)
    struct ppp_softc *sc;
{
    struct mbuf *m, *mp;
    u_char *cp;
    int address, control, protocol;





    { (m) = (&sc->sc_fastq)->ifq_head; if (m) { if (((&sc->sc_fastq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_fastq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_fastq)->ifq_len--; } };
    if (m == 0L)
 do { if ((((&sc->sc_if.if_snd))->altq_tbr != 0L)) (m) = tbr_dequeue((&sc->sc_if.if_snd), 1); else if ((((&sc->sc_if.if_snd))->altq_flags & 0x02)) ((m)) = (*((&sc->sc_if.if_snd))->altq_dequeue)(((&sc->sc_if.if_snd)), 1); else { ((m)) = ((&sc->sc_if.if_snd))->ifq_head; if ((m)) { if ((((&sc->sc_if.if_snd))->ifq_head = ((m))->m_hdr.mh_nextpkt) == 0) ((&sc->sc_if.if_snd))->ifq_tail = 0; ((m))->m_hdr.mh_nextpkt = 0; ((&sc->sc_if.if_snd))->ifq_len--; } }; } while (0);
    if (m == 0L)
      return 0L;

    ++sc->sc_stats.ppp_opackets;





    cp = ((u_char *)((m)->m_hdr.mh_data));
    address = (((u_char *)(cp))[0]);
    control = (((u_char *)(cp))[1]);
    protocol = ((((u_char *)(cp))[2] << 8) + ((u_char *)(cp))[3]);

    switch (protocol) {
    case 0x21:




 if ((sc->sc_flags & 0x00000004) && sc->sc_comp != 0L) {
     struct ip *ip;
     int type;

     mp = m;
     ip = (struct ip *) (cp + 4);
     if (mp->m_hdr.mh_len <= 4) {
  mp = mp->m_hdr.mh_next;
  if (mp == 0L)
      break;
  ip = ((struct ip *)((mp)->m_hdr.mh_data));
     }

     if (ip->ip_p == 6) {
  type = sl_compress_tcp(mp, ip, sc->sc_comp,
           !(sc->sc_flags & 0x00000008));
  switch (type) {
  case 0x70:
      protocol = 0x2f;
      break;
  case 0x80:
      protocol = 0x2d;
      cp = ((u_char *)((m)->m_hdr.mh_data));
      cp[0] = address;
      cp[1] = control;
      cp[2] = 0;
      break;
  }
  cp[3] = protocol;
     }
 }

 break;


    case 0x80fd:
 ppp_ccp(sc, m, 0);
 break;

    }


    if (protocol != 0xc021 && protocol != 0x80fd
 && sc->sc_xc_state && (sc->sc_flags & 0x00001000)) {
 struct mbuf *mcomp = 0L;
 int slen, clen;

 slen = 0;
 for (mp = m; mp != 0L; mp = mp->m_hdr.mh_next)
     slen += mp->m_hdr.mh_len;
 clen = (*sc->sc_xcomp->compress)
     (sc->sc_xc_state, &mcomp, m, slen,
      (sc->sc_flags & 0x00000080 ? sc->sc_if.if_data.ifi_mtu + 4 : 0));
 if (mcomp != 0L) {
     if (sc->sc_flags & 0x00000080) {

  m_freem(m);
  m = mcomp;
  cp = ((u_char *)((m)->m_hdr.mh_data));
  protocol = cp[3];
     } else {

  m_freem(mcomp);
     }
 }
    }





    if (sc->sc_flags & 0x00000002 && address == 0xff &&
 control == 0x03 && protocol != 0xff &&
 protocol != 0xc021) {

 m->m_hdr.mh_data += 2;
 m->m_hdr.mh_len -= 2;
    }
    if (sc->sc_flags & 0x00000001 && protocol < 0xFF) {

 if (((u_char *)((m)->m_hdr.mh_data)) == cp) {
     cp[2] = cp[1];
     cp[1] = cp[0];
 }
 ++m->m_hdr.mh_data;
 --m->m_hdr.mh_len;
    }

    return m;
}




void
pppintr()
{
    struct ppp_softc *sc;
    int s, s2;
    struct mbuf *m;

    do { if (__builtin_expect(((global_splassert_ctl[get_stack_id()] > 0) != 0), 0)) { splassert_check((0x20 + ((1) << 4)), __func__); } } while (0);

    s = splraise((0x20 + ((1) << 4)));
    for((sc) = ((&global_ppp_softc_list[get_stack_id()])->lh_first); (sc)!= 0L; (sc) = ((sc)->sc_list.le_next)) {
 if (!(sc->sc_flags & 0x10000000)
     && (((&sc->sc_if.if_snd)->ifq_len == 0) == 0 || sc->sc_fastq.ifq_head)) {
     s2 = splraise((0x20 + ((6) << 4)));
     sc->sc_flags |= 0x10000000;
     splx(s2);
     (*sc->sc_start)(sc);
 }
 for (;;) {
     s2 = splraise((0x20 + ((6) << 4)));
     { (m) = (&sc->sc_rawq)->ifq_head; if (m) { if (((&sc->sc_rawq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sc->sc_rawq)->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&sc->sc_rawq)->ifq_len--; } };
     splx(s2);
     if (m == 0L)
  break;
     ppp_inproc(sc, m);
 }
    }
    splx(s);
}






static void
ppp_ccp(sc, m, rcvd)
    struct ppp_softc *sc;
    struct mbuf *m;
    int rcvd;
{
    u_char *dp, *ep;
    struct mbuf *mp;
    int slen, s;




    if (m->m_hdr.mh_len <= 4) {
 mp = m->m_hdr.mh_next;
 if (mp == 0L)
     return;
 dp = (mp != 0L)? ((u_char *)((mp)->m_hdr.mh_data)): 0L;
    } else {
 mp = m;
 dp = ((u_char *)((mp)->m_hdr.mh_data)) + 4;
    }

    ep = ((u_char *)((mp)->m_hdr.mh_data)) + mp->m_hdr.mh_len;
    if (dp + 4 > ep)
 return;
    slen = (((dp)[2] << 8) + (dp)[3]);
    if (dp + slen > ep) {
 if (sc->sc_flags & 0x00010000)
     printf("if_ppp/ccp: not enough data in mbuf (%p+%x > %p+%x)\n",
  dp, slen, ((u_char *)((mp)->m_hdr.mh_data)), mp->m_hdr.mh_len);
 return;
    }

    switch (((dp)[0])) {
    case 1:
    case 5:
    case 6:

 if (sc->sc_flags & 0x00000080) {
     s = splraise((0x20 + ((6) << 4)));
     sc->sc_flags &= ~(0x00000080 | 0x00001000 | 0x00002000);
     splx(s);
 }
 break;

    case 2:
 if (sc->sc_flags & 0x00000040 && !(sc->sc_flags & 0x00000080)
     && slen >= 4 + 2
     && slen >= ((dp + 4)[1]) + 4) {
     if (!rcvd) {

  if (sc->sc_xc_state != 0L
      && (*sc->sc_xcomp->comp_init)
   (sc->sc_xc_state, dp + 4, slen - 4,
    sc->sc_unit, 0, sc->sc_flags & 0x00010000)) {
      s = splraise((0x20 + ((6) << 4)));
      sc->sc_flags |= 0x00001000;
      splx(s);
  }
     } else {

  if (sc->sc_rc_state != 0L
      && (*sc->sc_rcomp->decomp_init)
   (sc->sc_rc_state, dp + 4, slen - 4,
    sc->sc_unit, 0, sc->sc_mru,
    sc->sc_flags & 0x00010000)) {
      s = splraise((0x20 + ((6) << 4)));
      sc->sc_flags |= 0x00002000;
      sc->sc_flags &= ~(0x00004000 | 0x00008000);
      splx(s);
  }
     }
 }
 break;

    case 15:
 if (sc->sc_flags & 0x00000080) {
     if (!rcvd) {
  if (sc->sc_xc_state && (sc->sc_flags & 0x00001000))
      (*sc->sc_xcomp->comp_reset)(sc->sc_xc_state);
     } else {
  if (sc->sc_rc_state && (sc->sc_flags & 0x00002000)) {
      (*sc->sc_rcomp->decomp_reset)(sc->sc_rc_state);
      s = splraise((0x20 + ((6) << 4)));
      sc->sc_flags &= ~0x00004000;
      splx(s);
  }
     }
 }
 break;
    }
}




static void
ppp_ccp_closed(sc)
    struct ppp_softc *sc;
{
    if (sc->sc_xc_state) {
 (*sc->sc_xcomp->comp_free)(sc->sc_xc_state);
 sc->sc_xc_state = 0L;
    }
    if (sc->sc_rc_state) {
 (*sc->sc_rcomp->decomp_free)(sc->sc_rc_state);
 sc->sc_rc_state = 0L;
    }
}
# 1256 "openbsd3/net/if_ppp.c"
void
ppppktin(sc, m, lost)
    struct ppp_softc *sc;
    struct mbuf *m;
    int lost;
{
    int s = splraise((0x20 + ((6) << 4)));

    if (lost)
 m->m_hdr.mh_flags |= 0x4000;
    { (m)->m_hdr.mh_nextpkt = 0; if ((&sc->sc_rawq)->ifq_tail == 0) (&sc->sc_rawq)->ifq_head = m; else (&sc->sc_rawq)->ifq_tail->m_hdr.mh_nextpkt = m; (&sc->sc_rawq)->ifq_tail = m; (&sc->sc_rawq)->ifq_len++; };
    { global_netisr[get_stack_id()] |= 1<<(28); enqueue_randomness(5, (int)(28)); softintr(1 << 30); };
    splx(s);
}
# 1278 "openbsd3/net/if_ppp.c"
static void
ppp_inproc(sc, m)
    struct ppp_softc *sc;
    struct mbuf *m;
{
    struct ifnet *ifp = &sc->sc_if;
    struct ifqueue *inq;
    int s, ilen, xlen, proto, rv;
    u_char *cp, adrs, ctrl;
    struct mbuf *mp, *dmp = 0L;
    u_char *iphdr;
    u_int hlen;

    sc->sc_stats.ppp_ipackets++;

    if (sc->sc_flags & 0x00020000) {
 ilen = 0;
 for (mp = m; mp != 0L; mp = mp->m_hdr.mh_next)
     ilen += mp->m_hdr.mh_len;
 printf("%s: got %d bytes\n", ifp->if_xname, ilen);
 pppdumpm(m);
    }

    cp = ((u_char *)((m)->m_hdr.mh_data));
    adrs = (((u_char *)(cp))[0]);
    ctrl = (((u_char *)(cp))[1]);
    proto = ((((u_char *)(cp))[2] << 8) + ((u_char *)(cp))[3]);

    if (m->m_hdr.mh_flags & 0x4000) {
 m->m_hdr.mh_flags &= ~0x4000;
 s = splraise((0x20 + ((6) << 4)));
 sc->sc_flags |= 0x00000800;
 splx(s);
    }






    if (proto == 0xfd && sc->sc_rc_state && (sc->sc_flags & 0x00002000)
 && !(sc->sc_flags & 0x00004000) && !(sc->sc_flags & 0x00008000)) {

 rv = (*sc->sc_rcomp->decompress)(sc->sc_rc_state, m, &dmp);
 if (rv == 0) {
     m_freem(m);
     if (dmp == 0L) {

  return;
     }
     m = dmp;
     cp = ((u_char *)((m)->m_hdr.mh_data));
     proto = ((((u_char *)(cp))[2] << 8) + ((u_char *)(cp))[3]);

 } else {





     if (sc->sc_flags & 0x00010000)
  printf("%s: decompress failed %d\n", ifp->if_xname, rv);
     s = splraise((0x20 + ((6) << 4)));
     sc->sc_flags |= 0x00000800;
     if (rv == 1)
  sc->sc_flags |= 0x00004000;
     else
  sc->sc_flags |= 0x00008000;
     splx(s);
 }

    } else {
 if (sc->sc_rc_state && (sc->sc_flags & 0x00002000)) {
     (*sc->sc_rcomp->incomp)(sc->sc_rc_state, m);
 }
 if (proto == 0x80fd) {
     ppp_ccp(sc, m, 1);
 }
    }


    ilen = 0;
    for (mp = m; mp != 0L; mp = mp->m_hdr.mh_next)
 ilen += mp->m_hdr.mh_len;


    if (sc->sc_flags & 0x00000800) {




 if (sc->sc_comp)
     sl_uncompress_tcp(0L, 0, 0x00, sc->sc_comp);
 s = splraise((0x20 + ((6) << 4)));
 sc->sc_flags &= ~0x00000800;
 splx(s);
    }




    if (proto == 0x2d) {
 if ((sc->sc_flags & 0x00000020) || sc->sc_comp == 0)
     goto bad;

 xlen = sl_uncompress_tcp_core(cp + 4, m->m_hdr.mh_len - 4,
          ilen - 4, 0x80,
          sc->sc_comp, &iphdr, &hlen);

 if (xlen <= 0) {
     if (sc->sc_flags & 0x00010000)
  printf("%s: VJ uncompress failed on type comp\n",
      ifp->if_xname);
     goto bad;
 }


 do { { int ms = splraise((0x20 + ((6) << 4))); { (mp) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (mp) { (mp)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (mp)->m_hdr.mh_next = (struct mbuf *)0L; (mp)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (mp)->m_hdr.mh_data = (mp)->M_dat.MH.MH_dat.MH_databuf; (mp)->m_hdr.mh_flags = 0x0002; { ((&(mp)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (mp)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (mp == 0L)
     goto bad;
 mp->m_hdr.mh_len = 0;
 mp->m_hdr.mh_next = 0L;
 if (hlen + 4 > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {
     do { { int ms = splraise((0x20 + ((6) << 4))); { (mp)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((mp)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (mp)->m_hdr.mh_data = (mp)->M_dat.MH.MH_dat.MH_ext.ext_buf; (mp)->m_hdr.mh_flags |= 0x0001|0x0008; (mp)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (mp)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (mp)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (mp)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (mp); (mp)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (mp); ; ; } while ( 0); } } while ( 0);
     if ((((((mp))->m_hdr.mh_flags & 0x0001) != 0 && ((((mp))->m_hdr.mh_flags & 0x0008) == 0 || (((mp))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((mp))))) ? 0 : (((mp))->m_hdr.mh_flags & 0x0001 ? ((mp))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((mp))->M_dat.MH.MH_dat.MH_ext.ext_size - (((mp))->m_hdr.mh_data + ((mp))->m_hdr.mh_len) : &((mp))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((mp))->m_hdr.mh_data + ((mp))->m_hdr.mh_len))) < hlen + 4) {
  m_freem(mp);
  goto bad;
     }
 }
 if (m->m_hdr.mh_flags & 0x0002)
  { (mp)->M_dat.MH.MH_pkthdr = (m)->M_dat.MH.MH_pkthdr; (m)->m_hdr.mh_flags &= ~0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; };
 cp = ((u_char *)((mp)->m_hdr.mh_data));
 cp[0] = adrs;
 cp[1] = ctrl;
 cp[2] = 0;
 cp[3] = 0x21;
 proto = 0x21;
 bcopy(iphdr, cp + 4, hlen);
 mp->m_hdr.mh_len = hlen + 4;





 m->m_hdr.mh_data += 4 + xlen;
 m->m_hdr.mh_len -= 4 + xlen;
 if (m->m_hdr.mh_len <= (((((mp))->m_hdr.mh_flags & 0x0001) != 0 && ((((mp))->m_hdr.mh_flags & 0x0008) == 0 || (((mp))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((mp))))) ? 0 : (((mp))->m_hdr.mh_flags & 0x0001 ? ((mp))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((mp))->M_dat.MH.MH_dat.MH_ext.ext_size - (((mp))->m_hdr.mh_data + ((mp))->m_hdr.mh_len) : &((mp))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((mp))->m_hdr.mh_data + ((mp))->m_hdr.mh_len)))) {
     bcopy(((u_char *)((m)->m_hdr.mh_data)), ((u_char *)((mp)->m_hdr.mh_data)) + mp->m_hdr.mh_len, m->m_hdr.mh_len);
     mp->m_hdr.mh_len += m->m_hdr.mh_len;
     { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[(m)->m_hdr.mh_type]--; if ((m)->m_hdr.mh_flags & 0x0002) m_tag_delete_chain((m), 0L); if ((m)->m_hdr.mh_flags & 0x0001) { do { if ((((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m)))) { do { ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref->M_dat.MH.MH_dat.MH_ext.ext_prevref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref; ((m))->M_dat.MH.MH_dat.MH_ext.ext_prevref->M_dat.MH.MH_dat.MH_ext.ext_nextref = ((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref; } while ( 0); } else if (((m))->m_hdr.mh_flags & 0x0008) { pool_put(&global_mclpool[get_stack_id()], ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf); } else if (((m))->M_dat.MH.MH_dat.MH_ext.ext_free) { (*(((m))->M_dat.MH.MH_dat.MH_ext.ext_free))(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf, ((m))->M_dat.MH.MH_dat.MH_ext.ext_size, ((m))->M_dat.MH.MH_dat.MH_ext.ext_arg); } else { free(((m))->M_dat.MH.MH_dat.MH_ext.ext_buf,((m))->M_dat.MH.MH_dat.MH_ext.ext_type); } ((m))->m_hdr.mh_flags &= ~(0x0008|0x0001); ((m))->M_dat.MH.MH_dat.MH_ext.ext_size = 0; } while ( 0); } (mp->m_hdr.mh_next) = (m)->m_hdr.mh_next; pool_put(&global_mbpool[get_stack_id()], (m)); } splx(ms); };
 } else
     mp->m_hdr.mh_next = m;
 m = mp;
 ilen += hlen - xlen;

    } else if (proto == 0x2f) {
 if ((sc->sc_flags & 0x00000020) || sc->sc_comp == 0)
     goto bad;

 xlen = sl_uncompress_tcp_core(cp + 4, m->m_hdr.mh_len - 4,
          ilen - 4, 0x70,
          sc->sc_comp, &iphdr, &hlen);

 if (xlen < 0) {
     if (sc->sc_flags & 0x00010000)
  printf("%s: VJ uncompress failed on type uncomp\n",
      ifp->if_xname);
     goto bad;
 }

 proto = 0x21;
 cp[3] = 0x21;
    }






    if (ilen <= ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) && ((m)->m_hdr.mh_flags & 0x0001)) {
 do { { int ms = splraise((0x20 + ((6) << 4))); { (mp) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (mp) { (mp)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (mp)->m_hdr.mh_next = (struct mbuf *)0L; (mp)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (mp)->m_hdr.mh_data = (mp)->M_dat.MH.MH_dat.MH_databuf; (mp)->m_hdr.mh_flags = 0x0002; { ((&(mp)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (mp)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (mp != 0L) {
     m_copydata(m, 0, ilen, ((caddr_t)((mp)->m_hdr.mh_data)));
     m_freem(m);
     m = mp;
     m->m_hdr.mh_len = ilen;
 }
    }
    m->M_dat.MH.MH_pkthdr.len = ilen;
    m->M_dat.MH.MH_pkthdr.rcvif = ifp;

    if ((proto & 0x8000) == 0) {




 adrs = *((u_char *)((m)->m_hdr.mh_data));
 *((u_char *)((m)->m_hdr.mh_data)) = 0;
 if (sc->sc_pass_filt.bf_insns != 0
     && bpf_filter(sc->sc_pass_filt.bf_insns, (u_char *) m,
     ilen, 0) == 0) {

     m_freem(m);
     return;
 }
 if (sc->sc_active_filt.bf_insns == 0
     || bpf_filter(sc->sc_active_filt.bf_insns, (u_char *) m, ilen, 0))
     sc->sc_last_recv = time.tv_sec;

 *((u_char *)((m)->m_hdr.mh_data)) = adrs;
    }



    if (sc->sc_bpf)
 bpf_mtap(sc->sc_bpf, m);


    rv = 0;
    switch (proto) {

    case 0x21:



 if ((ifp->if_flags & 0x1) == 0
     || sc->sc_npmode[0] != NPMODE_PASS) {

     m_freem(m);
     return;
 }
 m->M_dat.MH.MH_pkthdr.len -= 4;
 m->m_hdr.mh_data += 4;
 m->m_hdr.mh_len -= 4;
 { global_netisr[get_stack_id()] |= 1<<(2); enqueue_randomness(5, (int)(2)); softintr(1 << 30); };
 inq = &global_ipintrq[get_stack_id()];
 break;


    default:



 inq = &sc->sc_inq;
 rv = 1;
 break;
    }




    s = splraise((0x20 + ((6) << 4)));
    if (((inq)->ifq_len >= (inq)->ifq_maxlen)) {
 ((inq)->ifq_drops++);
 splx(s);
 if (sc->sc_flags & 0x00010000)
     printf("%s: input queue full\n", ifp->if_xname);
 ifp->if_data.ifi_iqdrops++;
 goto bad;
    }
    { (m)->m_hdr.mh_nextpkt = 0; if ((inq)->ifq_tail == 0) (inq)->ifq_head = m; else (inq)->ifq_tail->m_hdr.mh_nextpkt = m; (inq)->ifq_tail = m; (inq)->ifq_len++; };
    splx(s);
    ifp->if_data.ifi_ipackets++;
    ifp->if_data.ifi_ibytes += ilen;

    if (rv)
 (*sc->sc_ctlp)(sc);

    return;

 bad:
    m_freem(m);
    sc->sc_if.if_data.ifi_ierrors++;
    sc->sc_stats.ppp_ierrors++;
}



static void
pppdumpm(m0)
    struct mbuf *m0;
{
    char buf[3*128 +4];
    char *bp = buf;
    struct mbuf *m;
    typedef  char  _GLOBAL_157_T; static  _GLOBAL_157_T  _GLOBAL_0_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_1_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_2_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_3_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_4_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_5_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_6_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_7_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_8_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_9_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_10_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_11_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_12_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_13_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_14_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_15_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_16_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_17_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_18_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_19_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_20_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_21_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_22_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_23_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_24_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_25_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_26_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_27_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_28_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_29_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_30_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_31_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_32_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_33_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_34_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_35_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_36_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_37_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_38_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_39_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_40_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_41_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_42_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_43_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_44_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_45_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_46_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_47_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_48_digits_I [ ]  = "0123456789abcdef" ; static  _GLOBAL_157_T  _GLOBAL_49_digits_I [ ]  = "0123456789abcdef" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_digits_I) *_GLOBAL_digits_33_A[NUM_STACKS] = { &_GLOBAL_0_digits_I, &_GLOBAL_1_digits_I, &_GLOBAL_2_digits_I, &_GLOBAL_3_digits_I, &_GLOBAL_4_digits_I, &_GLOBAL_5_digits_I, &_GLOBAL_6_digits_I, &_GLOBAL_7_digits_I, &_GLOBAL_8_digits_I, &_GLOBAL_9_digits_I, &_GLOBAL_10_digits_I, &_GLOBAL_11_digits_I, &_GLOBAL_12_digits_I, &_GLOBAL_13_digits_I, &_GLOBAL_14_digits_I, &_GLOBAL_15_digits_I, &_GLOBAL_16_digits_I, &_GLOBAL_17_digits_I, &_GLOBAL_18_digits_I, &_GLOBAL_19_digits_I, &_GLOBAL_20_digits_I, &_GLOBAL_21_digits_I, &_GLOBAL_22_digits_I, &_GLOBAL_23_digits_I, &_GLOBAL_24_digits_I, &_GLOBAL_25_digits_I, &_GLOBAL_26_digits_I, &_GLOBAL_27_digits_I, &_GLOBAL_28_digits_I, &_GLOBAL_29_digits_I, &_GLOBAL_30_digits_I, &_GLOBAL_31_digits_I, &_GLOBAL_32_digits_I, &_GLOBAL_33_digits_I, &_GLOBAL_34_digits_I, &_GLOBAL_35_digits_I, &_GLOBAL_36_digits_I, &_GLOBAL_37_digits_I, &_GLOBAL_38_digits_I, &_GLOBAL_39_digits_I, &_GLOBAL_40_digits_I, &_GLOBAL_41_digits_I, &_GLOBAL_42_digits_I, &_GLOBAL_43_digits_I, &_GLOBAL_44_digits_I, &_GLOBAL_45_digits_I, &_GLOBAL_46_digits_I, &_GLOBAL_47_digits_I, &_GLOBAL_48_digits_I, &_GLOBAL_49_digits_I, };    

    for (m = m0; m; m = m->m_hdr.mh_next) {
 int l = m->m_hdr.mh_len;
 u_char *rptr = (u_char *)m->m_hdr.mh_data;

 while (l--) {
     if (bp > buf + sizeof(buf) - 4)
  goto done;
     *bp++ = (*_GLOBAL_digits_33_A[get_stack_id()])[*rptr >> 4];
     *bp++ = (*_GLOBAL_digits_33_A[get_stack_id()])[*rptr++ & 0xf];
 }

 if (m->m_hdr.mh_next) {
     if (bp > buf + sizeof(buf) - 3)
  goto done;
     *bp++ = '|';
 } else
     *bp++ = ' ';
    }
done:
    if (m)
 *bp++ = '>';
    *bp = 0;
    printf("%s\n", buf);
}






static void
ppp_ifstart(ifp)
 struct ifnet *ifp;
{
 struct ppp_softc *sc;

 sc = ifp->if_softc;
 (*sc->sc_start)(sc);
}

