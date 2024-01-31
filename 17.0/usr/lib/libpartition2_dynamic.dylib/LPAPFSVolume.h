@interface LPAPFSVolume : LPMedia

+ (void)initialize;
+ (id)supportedContentTypes;
+ (void)_loadMountPointTableForMode:(int)a0;
+ (id)defaultMountPointGivenRole:(int)a0;
+ (id)defaultVolumeNameGivenRole:(int)a0;

- (id)container;
- (BOOL)isEncrypted;
- (int)role;
- (BOOL)isMounted;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (id)_createTemporaryMountPointWithError:(id *)a0;
- (BOOL)revertToSnapshot:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)mountWithError:(id *)a0;
- (id)volumeGroupUUID;
- (BOOL)deleteSnapshots:(id)a0 waitForDeletionFor:(double)a1 error:(id *)a2;
- (BOOL)deleteVolumeWithError:(id *)a0;
- (BOOL)eraseVolumeWithError:(id *)a0;
- (BOOL)isCaseSenstive;
- (BOOL)isFilevaultEncrypted;
- (BOOL)mountAtPath:(id)a0 error:(id *)a1;
- (BOOL)mountAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)mountAtTemporaryPathWithError:(id *)a0;
- (id)mountAtTemporaryPathWithOptions:(id)a0 error:(id *)a1;
- (id)pairedVolume;
- (BOOL)renameSnapshot:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)rootToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)setRole:(int)a0 withError:(id *)a1;
- (id)snapshotInfoWithError:(id *)a0;
- (id)snapshotMountPoints;
- (id)snapshotsWithError:(id *)a0;
- (BOOL)unmountAllWithError:(id *)a0;
- (BOOL)unmountWithError:(id *)a0;
- (BOOL)unmountWithOptions:(id)a0 error:(id *)a1;

@end
