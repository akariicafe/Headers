@interface NoOpBackupController : NSObject <BackupControllerProviding>

- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (void)setFirstSyncDateToNow;

@end
