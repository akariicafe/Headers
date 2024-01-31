@class NSDate, NSString, IMDCKUtilities;

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate>

@property (weak, nonatomic) IMDCKUtilities *ckUtilities;
@property (retain, nonatomic) NSDate *firstSyncDate;
@property (nonatomic) BOOL iCloudBackupsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_canDisableiCloudBackupsAfterRestore;
- (id)_serverBagTimeIntervalForFirstSyncTimeout;
- (BOOL)_deviceStateHasChanged:(id)a0;
- (id)readUserDefaultForKey:(id)a0;
- (id)_primaryAccountAltDSID;
- (id)dateOfLastBackUp;
- (void)_deviceIDFromMobileBackupManager:(id *)a0 legacyDeviceID:(id *)a1;
- (BOOL)readUserDefaultBoolForKey:(id)a0;
- (BOOL)_setiCloudBackupAttribute:(BOOL)a0 onItemAtPath:(id)a1 error:(id *)a2;
- (void)_enqueOperation:(id)a0;
- (void)_fetchCountOfSyncedCloudKitRecords:(long long *)a0 totalCount:(long long *)a1;
- (void)setUserDefaultBool:(BOOL)a0 forKey:(id)a1;
- (void)registerForDistributedNotifications;
- (BOOL)iCloudBackupEnabledSystemWide;
- (void)removePathFromiCloudBackup:(id)a0;
- (id)createBackupManager;
- (void)setFirstSyncDate:(id)a0;
- (long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)a0 totalCount:(long long)a1;
- (id)_readCurrentDeviceState;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (BOOL)pathRemovedFromBackup:(id)a0;
- (BOOL)checkDatabaseWasRestored;
- (BOOL)_firstSyncTimeoutHasExpired;
- (void)_setICloudBackupsDisabled:(BOOL)a0;
- (BOOL)iCloudBackupsDisabled;
- (id)_disabledDirectoryPath;
- (void)writeUserDefault:(id)a0 forKey:(id)a1;
- (id)_readPreviousDeviceState;
- (BOOL)_currentDeviceStateIsRestore:(id)a0;
- (void).cxx_destruct;
- (double)_firstSyncExpirationTimeInterval;
- (id)firstSyncDate;
- (void)setICloudBackupsDisabled:(BOOL)a0;
- (BOOL)_timeIntervalFromFirstSync:(id)a0 hasExpiredForDate:(id)a1;
- (void)setFirstSyncDateToNow;
- (void)eventStreamHandler:(id)a0 didReceiveEventWithName:(id)a1 userInfo:(id)a2;
- (void)removeUserDefault:(id)a0;
- (long long)_readRecordCount;
- (BOOL)setupAssistantNeedsToRun;
- (id)syncStateDebuggingInfo:(id)a0;
- (long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)a0;
- (void)_ensureRestoredDatabaseToBackup;
- (id)_debuggingRestoreStateDescription;
- (void)_saveRecordCount:(long long)a0;
- (void)_savePreviousDeviceState:(id)a0;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)a0;

@end
