@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate>

@property (retain) MBManager *backupManager;

+ (id)defaultMobileBackup;

- (id)init;
- (BOOL)isBackupEnabled;
- (void).cxx_destruct;

@end
