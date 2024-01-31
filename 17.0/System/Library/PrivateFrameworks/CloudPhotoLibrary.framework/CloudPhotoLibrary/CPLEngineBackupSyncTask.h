@interface CPLEngineBackupSyncTask : CPLEngineForceSyncTask

- (id)description;
- (id)initWithEngineLibrary:(id)a0 delegate:(id)a1;
- (BOOL)forBackup;

@end
