@interface IMDCKBackupControllerProxy : NSObject <BackupControllerProviding>

+ (id)sharedInstance;

- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (void)setFirstSyncDateToNow;

@end
