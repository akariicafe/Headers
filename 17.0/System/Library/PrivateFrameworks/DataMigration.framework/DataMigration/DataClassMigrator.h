@class NSString, NSDictionary;

@interface DataClassMigrator : NSObject

@property (nonatomic) unsigned int userDataDisposition;
@property (retain, nonatomic) NSString *restoredBackupBuildVersion;
@property (retain, nonatomic) NSString *restoredBackupProductType;
@property (retain, nonatomic) NSString *restoredBackupDeviceName;
@property (copy, nonatomic) NSString *dmBundleIdentifier;
@property (readonly, nonatomic) BOOL shouldPreserveSettingsAfterRestore;
@property (readonly, nonatomic) BOOL wasPasscodeSetInBackup;
@property (nonatomic) BOOL didUpgrade;
@property (readonly, nonatomic) BOOL didRestoreFromBackup;
@property (readonly, nonatomic) BOOL didMigrateBackupFromDifferentDevice;
@property (readonly, nonatomic) BOOL didRestoreFromCloudBackup;
@property (retain, nonatomic) NSDictionary *context;

+ (id)dataClassMigratorForBundleAtPath:(id)a0;

- (void).cxx_destruct;
- (BOOL)performMigration;

@end
