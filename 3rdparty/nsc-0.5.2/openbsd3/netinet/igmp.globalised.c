# 1 "openbsd3/netinet/igmp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netinet/igmp.c"
# 14 "openbsd3/netinet/igmp.c"
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
# 15 "openbsd3/netinet/igmp.c" 2
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
typedef  struct kmemstats   _GLOBAL_27_T; extern  _GLOBAL_27_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_7_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_8_A[NUM_STACKS];   

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
# 1 "openbsd3/sys/queue.h" 1
# 56 "openbsd3/sys/pool.h" 2

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






typedef  struct pool_allocator   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_9_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_mclpool[NUM_STACKS];    

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
# 16 "openbsd3/netinet/igmp.c" 2
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
# 17 "openbsd3/netinet/igmp.c" 2
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
# 18 "openbsd3/netinet/igmp.c" 2

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
typedef  int   ( *_GLOBAL_45_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_45_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_47_T; extern  _GLOBAL_47_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_48_T; extern  _GLOBAL_48_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_if_indexlim[NUM_STACKS];   

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
# 20 "openbsd3/netinet/igmp.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_50_T; extern  _GLOBAL_50_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_53_T; extern  _GLOBAL_53_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_10_A[NUM_STACKS];   

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
# 21 "openbsd3/netinet/igmp.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_54_T; extern  _GLOBAL_54_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_55_T; extern  _GLOBAL_55_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_56_T; extern  _GLOBAL_56_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_57_T; extern  _GLOBAL_57_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_58_T; extern  _GLOBAL_58_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_59_T; extern  _GLOBAL_59_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_60_T; extern  _GLOBAL_60_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_61_T; extern  _GLOBAL_61_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_62_T; extern  _GLOBAL_62_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_63_T; extern  _GLOBAL_63_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_64_T; extern  _GLOBAL_64_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 23 "openbsd3/netinet/igmp.c" 2
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
typedef  struct in_ifaddrhead   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_11_A[NUM_STACKS];  
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
typedef  struct in6_ifaddr   _GLOBAL_68_T; extern  _GLOBAL_68_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_69_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_12_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_13_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_in6_maxmtu[NUM_STACKS];    
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
# 24 "openbsd3/netinet/igmp.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 25 "openbsd3/netinet/igmp.c" 2
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
# 26 "openbsd3/netinet/igmp.c" 2
# 1 "openbsd3/netinet/ip_var.h" 1
# 43 "openbsd3/netinet/ip_var.h"
struct ipovly {
 u_int8_t ih_x1[9];
 u_int8_t ih_pr;
 u_int16_t ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};
# 62 "openbsd3/netinet/ip_var.h"
struct ipqehead { struct ipqent *lh_first; };
struct ipqent {
 struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q;
 union {
  struct ip *_ip;
  struct tcphdr *_tcp;
 } _ipqe_u1;
 struct mbuf *ipqe_m;
 u_int8_t ipqe_mff;
};
# 81 "openbsd3/netinet/ip_var.h"
struct ipq {
 struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q;
 u_int8_t ipq_ttl;
 u_int8_t ipq_p;
 u_int16_t ipq_id;
 struct ipqehead ipq_fragq;
 struct in_addr ipq_src, ipq_dst;
};
# 98 "openbsd3/netinet/ip_var.h"
struct ipoption {
 struct in_addr ipopt_dst;
 int8_t ipopt_list[40];
};





struct ip_moptions {
 struct ifnet *imo_multicast_ifp;
 u_int8_t imo_multicast_ttl;
 u_int8_t imo_multicast_loop;
 u_int16_t imo_num_memberships;
 struct in_multi *imo_membership[20];
};

struct ipstat {
 u_long ips_total;
 u_long ips_badsum;
 u_long ips_tooshort;
 u_long ips_toosmall;
 u_long ips_badhlen;
 u_long ips_badlen;
 u_long ips_fragments;
 u_long ips_fragdropped;
 u_long ips_fragtimeout;
 u_long ips_forward;
 u_long ips_cantforward;
 u_long ips_redirectsent;
 u_long ips_noproto;
 u_long ips_delivered;
 u_long ips_localout;
 u_long ips_odropped;
 u_long ips_reassembled;
 u_long ips_fragmented;
 u_long ips_ofragments;
 u_long ips_cantfrag;
 u_long ips_badoptions;
 u_long ips_noroute;
 u_long ips_badvers;
 u_long ips_rawout;
 u_long ips_badfrags;
 u_long ips_rcvmemdrop;
 u_long ips_toolong;
 u_long ips_nogif;
 u_long ips_badaddr;
 u_long ips_inhwcsum;
 u_long ips_outhwcsum;
};
# 157 "openbsd3/netinet/ip_var.h"
typedef  struct ipstat   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_ipstat[NUM_STACKS];    
typedef  struct ipqhead { struct ipq   * lh_first  ;  }   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_ipq[NUM_STACKS];         
typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_ip_defttl[NUM_STACKS];   

typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_ip_mtudisc[NUM_STACKS];   
typedef  u_int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_ip_mtudisc_timeout[NUM_STACKS];   
typedef  struct rttimer_queue   _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_ip_mtudisc_timeout_q[NUM_STACKS];    
typedef  struct pool   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_ipqent_pool[NUM_STACKS];    

int ip_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip_dooptions(struct mbuf *);
void ip_drain(void);
void ip_flush(void);
void ip_forward(struct mbuf *, int);
int ip_fragment(struct mbuf *, struct ifnet *, u_long);
void ip_freef(struct ipq *);
void ip_freemoptions(struct ip_moptions *);
int ip_getmoptions(int, struct ip_moptions *, struct mbuf **);
void ip_init(void);
int ip_mforward(struct mbuf *, struct ifnet *);
int ip_optcopy(struct ip *, struct ip *);
int ip_output(struct mbuf *, ...);
int ip_pcbopts(struct mbuf **, struct mbuf *);
struct mbuf *
  ip_reass(struct ipqent *, struct ipq *);
struct in_ifaddr *
  in_iawithaddr(struct in_addr, struct mbuf *);
struct in_ifaddr *
  ip_rtaddr(struct in_addr);
u_int16_t
  ip_randomid(void);
int ip_setmoptions(int, struct ip_moptions **, struct mbuf *);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(void);
void ip_stripoptions(struct mbuf *, struct mbuf *);
int ip_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ipintr(void);
void ipv4_input(struct mbuf *);
int rip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void rip_init(void);
void rip_input(struct mbuf *, ...);
int rip_output(struct mbuf *, ...);
int rip_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 27 "openbsd3/netinet/igmp.c" 2
# 1 "openbsd3/netinet/igmp.h" 1
# 51 "openbsd3/netinet/igmp.h"
struct igmp {
 u_int8_t igmp_type;
 u_int8_t igmp_code;
 u_int16_t igmp_cksum;
 struct in_addr igmp_group;
};
# 95 "openbsd3/netinet/igmp.h"
void rti_delete(struct ifnet *);
# 28 "openbsd3/netinet/igmp.c" 2
# 1 "openbsd3/netinet/igmp_var.h" 1
# 53 "openbsd3/netinet/igmp_var.h"
struct igmpstat {
 u_long igps_rcv_total;
 u_long igps_rcv_tooshort;
 u_long igps_rcv_badsum;
 u_long igps_rcv_queries;
 u_long igps_rcv_badqueries;
 u_long igps_rcv_reports;
 u_long igps_rcv_badreports;
 u_long igps_rcv_ourreports;
 u_long igps_snd_reports;
};


typedef  struct igmpstat   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_igmpstat[NUM_STACKS];    
# 75 "openbsd3/netinet/igmp_var.h"
void igmp_init(void);
void igmp_input(struct mbuf *, ...);
void igmp_joingroup(struct in_multi *);
void igmp_leavegroup(struct in_multi *);
void igmp_fasttimo(void);
void igmp_slowtimo(void);
# 29 "openbsd3/netinet/igmp.c" 2
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


typedef  struct rndstats   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 30 "openbsd3/netinet/igmp.c" 2

# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 32 "openbsd3/netinet/igmp.c" 2



typedef  int _GLOBAL_83_T;  _GLOBAL_83_T  global_igmp_timers_are_running[NUM_STACKS];  
typedef  struct router_info   _GLOBAL_84_T; static  _GLOBAL_84_T  * global_rti_head[NUM_STACKS];    
typedef  struct igmpstat  _GLOBAL_85_T;  _GLOBAL_85_T  global_igmpstat[NUM_STACKS];   

void igmp_sendpkt(struct in_multi *, int, in_addr_t);
static int rti_fill(struct in_multi *);
static struct router_info * rti_find(struct ifnet *);

void
igmp_init()
{




 global_igmp_timers_are_running[get_stack_id()] = 0;
 global_rti_head[get_stack_id()] = 0;
}


static int
rti_fill(inm)
 struct in_multi *inm;
{
 struct router_info *rti;

 for (rti = global_rti_head[get_stack_id()]; rti != 0; rti = rti->rti_next) {
  if (rti->rti_ifp == inm->inm_ifp) {
   inm->inm_rti = rti;
   if (rti->rti_type == 1)
    return (0x12);
   else
    return (0x16);
  }
 }

 rti = (struct router_info *)malloc(sizeof(struct router_info),
        56, 0x0001);
 if (rti == 0L)
  return (-1);
 rti->rti_ifp = inm->inm_ifp;
 rti->rti_type = 2;
 rti->rti_next = global_rti_head[get_stack_id()];
 global_rti_head[get_stack_id()] = rti;
 inm->inm_rti = rti;
 return (0x16);
}

static struct router_info *
rti_find(ifp)
 struct ifnet *ifp;
{
 struct router_info *rti;

 for (rti = global_rti_head[get_stack_id()]; rti != 0; rti = rti->rti_next) {
  if (rti->rti_ifp == ifp)
   return (rti);
 }

 rti = (struct router_info *)malloc(sizeof(struct router_info),
        56, 0x0001);
 if (rti == 0L)
  return (0L);
 rti->rti_ifp = ifp;
 rti->rti_type = 2;
 rti->rti_next = global_rti_head[get_stack_id()];
 global_rti_head[get_stack_id()] = rti;
 return (rti);
}

void
rti_delete(ifp)
 struct ifnet *ifp;
{
 struct router_info *rti, **prti = &global_rti_head[get_stack_id()];

 for (rti = global_rti_head[get_stack_id()]; rti != 0; rti = rti->rti_next) {
  if (rti->rti_ifp == ifp) {
   *prti = rti->rti_next;
   free(rti, 56);
   break;
  }
  prti = &rti->rti_next;
 }
}

void
igmp_input(struct mbuf *m, ...)
{
 int iphlen;
 struct ifnet *ifp = m->M_dat.MH.MH_pkthdr.rcvif;
 struct ip *ip = ((struct ip *)((m)->m_hdr.mh_data));
 struct igmp *igmp;
 int igmplen;
 int minlen;
 struct in_multi *inm;
 struct in_multistep step;
 struct router_info *rti;
 struct in_ifaddr *ia;
 int timer;
 va_list ap;

 __builtin_va_start((ap),m);
 iphlen = __builtin_va_arg(ap, int);
 __builtin_va_end(ap);

 ++global_igmpstat[get_stack_id()].igps_rcv_total;

 igmplen = __extension__({ u_int16_t __swap16_x = (ip->ip_len); __builtin_constant_p(ip->ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - iphlen;




 if (igmplen < 8) {
  ++global_igmpstat[get_stack_id()].igps_rcv_tooshort;
  m_freem(m);
  return;
 }
 minlen = iphlen + 8;
 if ((m->m_hdr.mh_flags & 0x0001 || m->m_hdr.mh_len < minlen) &&
     (m = m_pullup(m, minlen)) == 0L) {
  ++global_igmpstat[get_stack_id()].igps_rcv_tooshort;
  return;
 }




 m->m_hdr.mh_data += iphlen;
 m->m_hdr.mh_len -= iphlen;
 igmp = ((struct igmp *)((m)->m_hdr.mh_data));
 if (in_cksum(m, igmplen)) {
  ++global_igmpstat[get_stack_id()].igps_rcv_badsum;
  m_freem(m);
  return;
 }
 m->m_hdr.mh_data -= iphlen;
 m->m_hdr.mh_len += iphlen;
 ip = ((struct ip *)((m)->m_hdr.mh_data));

 switch (igmp->igmp_type) {

 case 0x11:
  ++global_igmpstat[get_stack_id()].igps_rcv_queries;

  if (ifp->if_flags & 0x8)
   break;

  if (igmp->igmp_code == 0) {
   rti = rti_find(ifp);
   if (rti == 0L) {
    m_freem(m);
    return;
   }
   rti->rti_type = 1;
   rti->rti_age = 0;

   if (ip->ip_dst.s_addr != ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000001)); __builtin_constant_p((u_int32_t)(0xe0000001)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) {
    ++global_igmpstat[get_stack_id()].igps_rcv_badqueries;
    m_freem(m);
    return;
   }







   { (step).i_ia = global_in_ifaddr[get_stack_id()].tqh_first; (step).i_inm = 0L; { if ((((inm)) = ((step)).i_inm) != 0L) ((step)).i_inm = ((inm))->inm_list.le_next; else while (((step)).i_ia != 0L) { ((inm)) = ((step)).i_ia->ia_multiaddrs.lh_first; ((step)).i_ia = ((step)).i_ia->ia_list.tqe_next; if (((inm)) != 0L) { ((step)).i_inm = ((inm))->inm_list.le_next; break; } } }; };
   while (inm != 0L) {
    if (inm->inm_ifp == ifp &&
        inm->inm_timer == 0 &&
        !(((u_int32_t)(inm->inm_addr.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xffffff00)); __builtin_constant_p((u_int32_t)(0xffffff00)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))) {
     inm->inm_state = 1;
     inm->inm_timer = (arc4random() % (10 * 5) + 1)
                                                ;
     global_igmp_timers_are_running[get_stack_id()] = 1;
    }
    { if (((inm) = (step).i_inm) != 0L) (step).i_inm = (inm)->inm_list.le_next; else while ((step).i_ia != 0L) { (inm) = (step).i_ia->ia_multiaddrs.lh_first; (step).i_ia = (step).i_ia->ia_list.tqe_next; if ((inm) != 0L) { (step).i_inm = (inm)->inm_list.le_next; break; } } };
   }
  } else {
   if (!(((u_int32_t)(ip->ip_dst.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xf0000000)); __builtin_constant_p((u_int32_t)(0xf0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))) {
    ++global_igmpstat[get_stack_id()].igps_rcv_badqueries;
    m_freem(m);
    return;
   }

   timer = igmp->igmp_code * 5 / 10;
   if (timer == 0)
    timer = 1;
# 235 "openbsd3/netinet/igmp.c"
   { (step).i_ia = global_in_ifaddr[get_stack_id()].tqh_first; (step).i_inm = 0L; { if ((((inm)) = ((step)).i_inm) != 0L) ((step)).i_inm = ((inm))->inm_list.le_next; else while (((step)).i_ia != 0L) { ((inm)) = ((step)).i_ia->ia_multiaddrs.lh_first; ((step)).i_ia = ((step)).i_ia->ia_list.tqe_next; if (((inm)) != 0L) { ((step)).i_inm = ((inm))->inm_list.le_next; break; } } }; };
   while (inm != 0L) {
    if (inm->inm_ifp == ifp &&
        !(((u_int32_t)(inm->inm_addr.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xffffff00)); __builtin_constant_p((u_int32_t)(0xffffff00)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) &&
        (ip->ip_dst.s_addr == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000001)); __builtin_constant_p((u_int32_t)(0xe0000001)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })) ||
         ip->ip_dst.s_addr == inm->inm_addr.s_addr)) {
     switch (inm->inm_state) {
     case 1:
      if (inm->inm_timer <= timer)
       break;

     case 2:
     case 3:
     case 5:
      inm->inm_state =
          1;
      inm->inm_timer =
          (arc4random() % (timer) + 1);
      global_igmp_timers_are_running[get_stack_id()] = 1;
      break;
     case 4:
      inm->inm_state =
          5;
      break;
     }
    }
    { if (((inm) = (step).i_inm) != 0L) (step).i_inm = (inm)->inm_list.le_next; else while ((step).i_ia != 0L) { (inm) = (step).i_ia->ia_multiaddrs.lh_first; (step).i_ia = (step).i_ia->ia_list.tqe_next; if ((inm) != 0L) { (step).i_inm = (inm)->inm_list.le_next; break; } } };
   }
  }

  break;

 case 0x12:
  ++global_igmpstat[get_stack_id()].igps_rcv_reports;

  if (ifp->if_flags & 0x8)
   break;

  if (!(((u_int32_t)(igmp->igmp_group.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xf0000000)); __builtin_constant_p((u_int32_t)(0xf0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
      igmp->igmp_group.s_addr != ip->ip_dst.s_addr) {
   ++global_igmpstat[get_stack_id()].igps_rcv_badreports;
   m_freem(m);
   return;
  }
# 289 "openbsd3/netinet/igmp.c"
  if ((ip->ip_src.s_addr & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xff000000)); __builtin_constant_p((u_int32_t)(0xff000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == 0) {
   { for ((ia) = global_in_ifaddr[get_stack_id()].tqh_first; (ia) != 0L && (ia)->ia_ifa.ifa_ifp != (ifp); (ia) = (ia)->ia_list.tqe_next) continue; };
   if (ia)
    ip->ip_src.s_addr = ia->ia_subnet;
  }





  { struct in_ifaddr *ia; { for ((ia) = global_in_ifaddr[get_stack_id()].tqh_first; (ia) != 0L && (ia)->ia_ifa.ifa_ifp != ((ifp)); (ia) = (ia)->ia_list.tqe_next) continue; }; if (ia == 0L) (inm) = 0L; else for ((inm) = ia->ia_multiaddrs.lh_first; (inm) != 0L && (inm)->inm_addr.s_addr != (igmp->igmp_group).s_addr; (inm) = inm->inm_list.le_next) continue; };
  if (inm != 0L) {
   inm->inm_timer = 0;
   ++global_igmpstat[get_stack_id()].igps_rcv_ourreports;

   switch (inm->inm_state) {
   case 2:
   case 3:
   case 5:
   case 4:
    inm->inm_state = 4;
    break;
   case 1:
    if (inm->inm_rti->rti_type == 1)
     inm->inm_state = 3;
    else
     inm->inm_state = 4;
    break;
   }
  }

  break;

 case 0x16:
# 334 "openbsd3/netinet/igmp.c"
  ++global_igmpstat[get_stack_id()].igps_rcv_reports;

  if (ifp->if_flags & 0x8)
   break;

  if (!(((u_int32_t)(igmp->igmp_group.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xf0000000)); __builtin_constant_p((u_int32_t)(0xf0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
      igmp->igmp_group.s_addr != ip->ip_dst.s_addr) {
   ++global_igmpstat[get_stack_id()].igps_rcv_badreports;
   m_freem(m);
   return;
  }
# 355 "openbsd3/netinet/igmp.c"
  if ((ip->ip_src.s_addr & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xff000000)); __builtin_constant_p((u_int32_t)(0xff000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == 0) {

   { for ((ia) = global_in_ifaddr[get_stack_id()].tqh_first; (ia) != 0L && (ia)->ia_ifa.ifa_ifp != (ifp); (ia) = (ia)->ia_list.tqe_next) continue; };

   if (ia)
    ip->ip_src.s_addr = ia->ia_subnet;
  }





  { struct in_ifaddr *ia; { for ((ia) = global_in_ifaddr[get_stack_id()].tqh_first; (ia) != 0L && (ia)->ia_ifa.ifa_ifp != ((ifp)); (ia) = (ia)->ia_list.tqe_next) continue; }; if (ia == 0L) (inm) = 0L; else for ((inm) = ia->ia_multiaddrs.lh_first; (inm) != 0L && (inm)->inm_addr.s_addr != (igmp->igmp_group).s_addr; (inm) = inm->inm_list.le_next) continue; };
  if (inm != 0L) {
   inm->inm_timer = 0;
   ++global_igmpstat[get_stack_id()].igps_rcv_ourreports;

   switch (inm->inm_state) {
   case 1:
   case 2:
   case 5:
    inm->inm_state = 3;
    break;
   case 3:
   case 4:
    break;
   }
  }

  break;

 }





 rip_input(m);
}

void
igmp_joingroup(inm)
 struct in_multi *inm;
{
 int i, s = splraise((0x20 + ((1) << 4)));

 inm->inm_state = 2;

 if (!(((u_int32_t)(inm->inm_addr.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xffffff00)); __builtin_constant_p((u_int32_t)(0xffffff00)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) &&
     (inm->inm_ifp->if_flags & 0x8) == 0) {
  if ((i = rti_fill(inm)) == -1)
   return;
  igmp_sendpkt(inm, i, 0);
  inm->inm_state = 1;
  inm->inm_timer = (arc4random() % (10 * 5) + 1)
                                             ;
  global_igmp_timers_are_running[get_stack_id()] = 1;
 } else
  inm->inm_timer = 0;
 splx(s);
}

void
igmp_leavegroup(inm)
 struct in_multi *inm;
{

 switch (inm->inm_state) {
 case 1:
 case 2:
  if (!(((u_int32_t)(inm->inm_addr.s_addr) & ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xffffff00)); __builtin_constant_p((u_int32_t)(0xffffff00)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) == ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000000)); __builtin_constant_p((u_int32_t)(0xe0000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) &&
      (inm->inm_ifp->if_flags & 0x8) == 0)
   if (inm->inm_rti->rti_type != 1)
    igmp_sendpkt(inm, 0x17,
        ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0xe0000002)); __builtin_constant_p((u_int32_t)(0xe0000002)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })));
  break;
 case 3:
 case 5:
 case 4:
  break;
 }
}

void
igmp_fasttimo()
{
 struct in_multi *inm;
 struct in_multistep step;
 int s;





 if (!global_igmp_timers_are_running[get_stack_id()])
  return;

 s = splraise((0x20 + ((1) << 4)));
 global_igmp_timers_are_running[get_stack_id()] = 0;
 { (step).i_ia = global_in_ifaddr[get_stack_id()].tqh_first; (step).i_inm = 0L; { if ((((inm)) = ((step)).i_inm) != 0L) ((step)).i_inm = ((inm))->inm_list.le_next; else while (((step)).i_ia != 0L) { ((inm)) = ((step)).i_ia->ia_multiaddrs.lh_first; ((step)).i_ia = ((step)).i_ia->ia_list.tqe_next; if (((inm)) != 0L) { ((step)).i_inm = ((inm))->inm_list.le_next; break; } } }; };
 while (inm != 0L) {
  if (inm->inm_timer == 0) {

  } else if (--inm->inm_timer == 0) {
   if (inm->inm_state == 1) {
    if (inm->inm_rti->rti_type == 1)
     igmp_sendpkt(inm,
         0x12, 0);
    else
     igmp_sendpkt(inm,
         0x16, 0);
    inm->inm_state = 2;
   }
  } else {
   global_igmp_timers_are_running[get_stack_id()] = 1;
  }
  { if (((inm) = (step).i_inm) != 0L) (step).i_inm = (inm)->inm_list.le_next; else while ((step).i_ia != 0L) { (inm) = (step).i_ia->ia_multiaddrs.lh_first; (step).i_ia = (step).i_ia->ia_list.tqe_next; if ((inm) != 0L) { (step).i_inm = (inm)->inm_list.le_next; break; } } };
 }
 splx(s);
}

void
igmp_slowtimo()
{
 struct router_info *rti;
 int s;

 s = splraise((0x20 + ((1) << 4)));
 for (rti = global_rti_head[get_stack_id()]; rti != 0; rti = rti->rti_next) {
  if (rti->rti_type == 1 &&
      ++rti->rti_age >= 540) {
   rti->rti_type = 2;
  }
 }
 splx(s);
}

void
igmp_sendpkt(inm, type, addr)
 struct in_multi *inm;
 int type;
 in_addr_t addr;
{
 struct mbuf *m;
 struct igmp *igmp;
 struct ip *ip;
 struct ip_moptions imo;




 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (2); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[2]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (m == 0L)
  return;




 m->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];
 m->m_hdr.mh_len = sizeof(struct ip) + 8;
 m->M_dat.MH.MH_pkthdr.len = sizeof(struct ip) + 8;

 ip = ((struct ip *)((m)->m_hdr.mh_data));
 ip->ip_tos = 0;
 ip->ip_len = __extension__({ u_int16_t __swap16_x = (sizeof(struct ip) + 8); __builtin_constant_p(sizeof(struct ip) + 8) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 ip->ip_off = 0;
 ip->ip_p = 2;
 ip->ip_src.s_addr = ((u_int32_t) __extension__({ u_int32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }));
 if (addr) {
  ip->ip_dst.s_addr = addr;
 } else {
  ip->ip_dst = inm->inm_addr;
 }

 m->m_hdr.mh_data += sizeof(struct ip);
 m->m_hdr.mh_len -= sizeof(struct ip);
 igmp = ((struct igmp *)((m)->m_hdr.mh_data));
 igmp->igmp_type = type;
 igmp->igmp_code = 0;
 igmp->igmp_group = inm->inm_addr;
 igmp->igmp_cksum = 0;
 igmp->igmp_cksum = in_cksum(m, 8);
 m->m_hdr.mh_data -= sizeof(struct ip);
 m->m_hdr.mh_len += sizeof(struct ip);

 imo.imo_multicast_ifp = inm->inm_ifp;
 imo.imo_multicast_ttl = 1;
# 552 "openbsd3/netinet/igmp.c"
 imo.imo_multicast_loop = 0;


 ip_output(m, (struct mbuf *)0, (struct route *)0, 0,
     &imo, (void *)0L);

 ++global_igmpstat[get_stack_id()].igps_snd_reports;
}

