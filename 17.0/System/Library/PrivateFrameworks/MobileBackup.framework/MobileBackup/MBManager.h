@class NSObject;
@protocol MBManagerDelegate;

@interface MBManager : NSObject

@property (weak) NSObject<MBManagerDelegate> *delegate;

- (BOOL)cancelApplicationRestoreWithBundleID:(id)a0 error:(id *)a1;
- (id)journalLastModifiedForBackupUUID:(id)a0 error:(id *)a1;
- (id)init;
- (unsigned long long)backupOnCellularSupportWithAccount:(id)a0 error:(id *)a1;
- (id)backupList;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)mergeSnapshots:(id)a0 backupUUID:(id)a1 error:(id *)a2;
- (BOOL)restoreFileExistsWithPath:(id)a0;
- (BOOL)isBackupEnabled;
- (BOOL)updateMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (id)getBackupListWithError:(id *)a0;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 withQOS:(long long)a2 context:(id)a3 error:(id *)a4;
- (void)cancelRestore;
- (BOOL)requestMegaBackupExpirationDate:(id)a0 error:(id *)a1;
- (void)finishRestore;
- (BOOL)postFollowUpForDrySpellWithDuration:(double)a0 firstBackup:(BOOL)a1 error:(id *)a2;
- (BOOL)cancelDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1 personaIdentifier:(id)a2;
- (id)restoreState;
- (BOOL)setBackupOnCellularEnabled:(BOOL)a0 error:(id *)a1;
- (id)journalForBackupUUID:(id)a0 error:(id *)a1;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4;
- (void)rebootDevice;
- (BOOL)extractItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 toPath:(id)a4 error:(id *)a5;
- (id)backgroundRestoreInfo;
- (BOOL)clearAllPendingFollowUpsWithError:(id *)a0;
- (void)saveBackupEnabledForMegaBackup;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1;
- (BOOL)exitMegaBackupMode:(id *)a0;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (id)_init;
- (id)filesForSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (BOOL)restoreFilesWithPaths:(id)a0 error:(id *)a1;
- (BOOL)restoreFileWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)restoreFileWithPath:(id)a0 error:(id *)a1;
- (void)setSupportsiTunes:(BOOL)a0;
- (BOOL)startScanForBundleIDs:(id)a0 error:(id *)a1;
- (id)domainInfoList;
- (BOOL)startScanWithError:(id *)a0;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)addFileToBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 fromPath:(id)a4 error:(id *)a5;
- (void)rebootDevice:(BOOL)a0;
- (BOOL)wasBackupEnabledForMegaBackup:(id *)a0;
- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)a0;
- (BOOL)startBackupWithError:(id *)a0;
- (id)backupState;
- (BOOL)restoreBookWithPath:(id)a0 error:(id *)a1;
- (unsigned long long)nextBackupSize;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)saveKeybagsForBackupUDID:(id)a0 withError:(id *)a1;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (BOOL)postFollowUpForRestoreFinishedWithError:(id *)a0;
- (BOOL)isInitialMegaBackupCompleted:(id *)a0;
- (void)saveSyncSettingsEnabledForMegaBackup:(id)a0;
- (void)setRestoreSessionWithBackupUDID:(id)a0 snapshotUUID:(id)a1;
- (void)prioritizeRestoreFileWithPath:(id)a0;
- (id)reservedBackupSizeListWithError:(id *)a0;
- (id)initWithAccount:(id)a0 delegate:(id)a1 eventQueue:(id)a2;
- (void)insufficientFreeSpaceToRestore;
- (BOOL)logPrebuddyFlowTelemetry:(long long)a0 error:(id *)a1;
- (void)setBackupEnabled:(BOOL)a0;
- (BOOL)restoreApplicationWithBundleID:(id)a0 failed:(BOOL)a1 error:(id *)a2;
- (BOOL)countCameraRollQuota;
- (void)syncBackupEnabled;
- (void)startBackup;
- (id)disabledDomainInfos;
- (BOOL)deleteItemFromBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 domainName:(id)a2 relativePath:(id)a3 error:(id *)a4;
- (BOOL)isLocalBackupPasswordSetWithError:(id *)a0;
- (id)personalPersonaIdentifier;
- (BOOL)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)recordRestoreFailure:(id)a0 error:(id *)a1;
- (BOOL)unsetLocalBackupPasswordWithError:(id *)a0;
- (BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(id *)a0;
- (BOOL)restoreFilesWithPaths:(id)a0 context:(id)a1 error:(id *)a2;
- (id)dateOfLastBackup;
- (BOOL)inheritSnapshot:(id)a0 fromDevice:(id)a1 error:(id *)a2;
- (BOOL)restoreSupportsBatching;
- (BOOL)setEntryPointForMegaBackupTelemetry:(long long)a0 error:(id *)a1;
- (id)nextBackupSizeInfo;
- (BOOL)isManualBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (BOOL)discountCameraRollQuota;
- (id)backupDeviceUDID;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)a0 assetType:(id)a1;
- (id)getBuddyDataStashForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)deleteBackupUDID:(id)a0 error:(id *)a1;
- (BOOL)restorePreviousSettingsEnabledForMegaBackup:(id *)a0;
- (BOOL)resumeDeviceTransferWithTaskType:(long long)a0 error:(id *)a1;
- (BOOL)archiveLogsTo:(id)a0 error:(id *)a1;
- (void)saveBackgroundRestoreCellularAccess:(id)a0 completion:(id /* block */)a1;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)restoreFileWithPath:(id)a0;
- (BOOL)unpinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (void)saveBackupDomainsEnabledForMegaBackup:(id)a0;
- (BOOL)setupBackupWithPasscode:(id)a0 error:(id *)a1;
- (id)dateOfNextScheduledBackup;
- (id)restoreStateWithError:(id *)a0;
- (id)restoreFailuresForDataclass:(id)a0 assetType:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)startDeviceTransferWithTaskType:(long long)a0 sessionInfo:(id)a1 error:(id *)a2;
- (void)fetchAppBundleIDsForSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)fetchBackgroundRestoreCellularAccessWithCompletion:(id /* block */)a0;
- (BOOL)allowiTunesBackup;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 error:(id *)a2;
- (BOOL)pinSnapshotID:(unsigned long long)a0 backupUDID:(id)a1 error:(id *)a2;
- (id)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)restoreBookWithPath:(id)a0 context:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)setMegaBackupTurnOnAllAppsSyncTelemetry:(BOOL)a0 error:(id *)a1;
- (id)backupDeviceUUID;
- (id)dateOfLastBackupWithError:(id *)a0;
- (void)setRestoreQualityOfService:(long long)a0;
- (id)getAppleIDsMapForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)a0 size:(unsigned long long *)a1;
- (id)initWithDelegate:(id)a0 eventQueue:(id)a1;
- (void)setAllowiTunesBackup:(BOOL)a0;
- (BOOL)removeDomainName:(id)a0 error:(id *)a1;
- (void)cancel;
- (void)startRestoreForSnapshot:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)restoreFilesForDomain:(id)a0 error:(id *)a1;
- (BOOL)isBackupOnCellularAllowedWithAccount:(id)a0 error:(id *)a1;
- (id)domainInfoForName:(id)a0;
- (BOOL)restoreFilesForDomain:(id)a0 relativePath:(id)a1 pendingOnly:(BOOL)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4 progress:(id /* block */)a5;
- (void)clearRestoreSession;
- (BOOL)isBackupEnabledForDomainName:(id)a0;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (id)backgroundRestoreCellularAccessWithError:(id *)a0;
- (BOOL)prepareForBackgroundRestoreWithError:(id *)a0;
- (BOOL)postFollowUpForRestoreTimeoutWithError:(id *)a0;
- (BOOL)setPrebuddyUIDeltaTelemetry:(id)a0 date:(id)a1 error:(id *)a2;
- (id)dateOfNextScheduledBackupWithError:(id *)a0;
- (id)getBackupListWithFiltering:(BOOL)a0 error:(id *)a1;
- (BOOL)postFollowUpForRestoreFailedWithDomainNames:(id)a0 error:(id *)a1;
- (void)setBackupEnabled:(BOOL)a0 forDomainName:(id)a1;
- (id)getAppleIDsForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 activeAppleID:(id *)a2 error:(id *)a3;
- (BOOL)isBackupOnCellularEnabledWithError:(id *)a0;
- (BOOL)postFollowUpForBackgroundRestoreProgress:(id)a0 error:(id *)a1;
- (BOOL)setMegaBackupTurnOniCloudBackupTelemetry:(BOOL)a0 error:(id *)a1;
- (BOOL)startBackupWithOptions:(id)a0 error:(id *)a1;
- (id)restoreInfo;
- (void)startRestoreForBackupUDID:(id)a0 snapshotID:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;

@end
