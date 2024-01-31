@interface FSItemAttributes : NSObject <NSSecureCoding> {
    struct _LIFileAttributes { unsigned long long __fa_rsvd0; unsigned long long fa_validmask; unsigned long long fa_seqno; unsigned int fa_type; unsigned int fa_mode; unsigned int fa_nlink; unsigned int fa_uid; unsigned int fa_gid; unsigned int fa_bsd_flags; unsigned long long fa_size; unsigned long long fa_allocsize; unsigned long long fa_fileid; unsigned long long fa_parentid; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_ctime; struct timespec { long long tv_sec; long long tv_nsec; } fa_birthtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_backuptime; struct timespec { long long tv_sec; long long tv_nsec; } fa_addedtime; unsigned int fa_int_flags; unsigned int _pad0; } attrs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned char type;
@property (nonatomic) unsigned int numLinks;
@property (nonatomic) unsigned int bsdFlags;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long allocSize;
@property (nonatomic) unsigned long long fileid;
@property (nonatomic) unsigned long long parentid;
@property (readonly, nonatomic) BOOL uidIsActive;
@property (readonly, nonatomic) BOOL gidIsActive;
@property (readonly, nonatomic) BOOL modeIsActive;
@property (readonly, nonatomic) BOOL typeIsActive;
@property (readonly, nonatomic) BOOL numLinksIsActive;
@property (readonly, nonatomic) BOOL bsdFlagsIsActive;
@property (readonly, nonatomic) BOOL sizeIsActive;
@property (readonly, nonatomic) BOOL allocSizeIsActive;
@property (readonly, nonatomic) BOOL fileidIsActive;
@property (readonly, nonatomic) BOOL parentidIsActive;
@property (readonly, nonatomic) BOOL modifyTimeIsActive;
@property (readonly, nonatomic) BOOL addedTimeIsActive;
@property (readonly, nonatomic) BOOL changeTimeIsActive;
@property (readonly, nonatomic) BOOL accessTimeIsActive;
@property (readonly, nonatomic) BOOL birthTimeIsActive;
@property (readonly, nonatomic) BOOL backupTimeIsActive;

- (id)init;
- (void)reset;
- (unsigned int)internalFlags;
- (void)setInternalFlags:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAccessTime:(struct timespec { long long x0; long long x1; } *)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)accessTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)addedTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)backupTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)birthTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)changeTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)getLIAttributes:(struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; struct timespec { long long x0; long long x1; } x18; unsigned int x19; unsigned int x20; } *)a0;
- (id)initWithLIAttributes:(const struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; struct timespec { long long x0; long long x1; } x18; unsigned int x19; unsigned int x20; } *)a0;
- (BOOL)internalFlagsIsActive;
- (void)modifyTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)setAddedTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)setBackupTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)setBirthTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)setChangeTime:(struct timespec { long long x0; long long x1; } *)a0;
- (void)setModifyTime:(struct timespec { long long x0; long long x1; } *)a0;

@end
