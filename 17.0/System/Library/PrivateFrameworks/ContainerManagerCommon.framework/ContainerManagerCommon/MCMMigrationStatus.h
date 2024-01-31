@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)init;
- (id)_readMigrationStatusFromDisk;
- (void)writeCurrentBuildInfoToDisk;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (BOOL)isBuildUpgrade;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (id)_iso8601DateFormatter;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (id)initForSystemMigration;
- (void)setMigrationCompleteForType:(id)a0;
- (void).cxx_destruct;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (id)initForMobileUserMigration;
- (BOOL)_writeMigrationStatusToDisk;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;

@end
