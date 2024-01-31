@class PLJournalManager, PLCoreAnalyticsEventManager, PLLibraryServicesManager, PLPhotoLibrary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PLComputeCacheManager : NSObject <PLCloudAssetPayloadRestoreDelegate, PLJournalManager> {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    PLCoreAnalyticsEventManager *_coreAnalyticsManager;
    NSNumber *_restoreState;
    PLPhotoLibrary *_restoreCachePhotoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restoreStateLock;
}

@property (readonly, nonatomic) BOOL isReadyForAnalysis;

+ (id)name;
+ (BOOL)isEnabledWithPathManager:(id)a0 error:(id *)a1;
+ (id)_urlForLocation:(long long)a0 pathManager:(id)a1 createIfNeeded:(BOOL)a2 error:(id *)a3;
+ (id)baseURLFromPathManager:(id)a0;
+ (id)payloadClasses;
+ (id)restorePayloadClasses;
+ (BOOL)shouldPublishAnalyticsForRestoreError:(id)a0;

- (id)managedObjectContext;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)performTransactionAndWait:(id /* block */)a0;
- (void)start;
- (id)status;
- (void)stop;
- (void)_setRestoreState:(long long)a0;
- (void).cxx_destruct;
- (void)_publish;
- (long long)_restoreState;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)a0 error:(id *)a1;
- (unsigned long long)_getArchiveSize;
- (id)_snapshotPolicy;
- (BOOL)_addBackupCreatedMarkerWithError:(id *)a0;
- (BOOL)_archivePrepareDirectoryWithError:(id *)a0;
- (BOOL)_archiveSnapshotIfNecessaryWithError:(id *)a0;
- (BOOL)_archiveSnapshotWithError:(id *)a0;
- (id)_cachedPolicyConfiguration;
- (void)_cleanupLegacyArchiveFilename;
- (BOOL)_cleanupLegacyArchiveURL:(id)a0 replacementURL:(id)a1 error:(id *)a2;
- (BOOL)_createArchiveWithError:(id *)a0;
- (void)_enumerateComputeCachePrepareDirectoryUsingBlock:(id /* block */)a0;
- (id)_filenameExclusionList;
- (BOOL)_getRestoreCount:(short *)a0 error:(id *)a1;
- (BOOL)_hasBackupArchive;
- (BOOL)_hasBackupCreatedMarker;
- (BOOL)_hasPrepareDataToBackupWithError:(id *)a0;
- (BOOL)_incrementRestoreCount:(short *)a0 error:(id *)a1;
- (BOOL)_isValidArchiveURL:(id)a0 filenameExclusionList:(id)a1;
- (long long)_libraryAssetCount;
- (id)_newTransientContext;
- (long long)_performBlockOnRestoreStateLockAndWait:(id /* block */)a0;
- (BOOL)_performSnapshotForPayloadClassIDs:(id)a0 error:(id *)a1;
- (BOOL)_removeComputeCacheDataForMatchingRestoreState:(long long)a0 error:(id *)a1;
- (BOOL)_removeLocation:(long long)a0 error:(id *)a1;
- (BOOL)_removeRestoreDataWithError:(id *)a0;
- (BOOL)_removeSnapshotWithError:(id *)a0;
- (void)_resetRestoreState;
- (BOOL)_restoreComputeCacheArchiveWithProgress:(id)a0 error:(id *)a1;
- (BOOL)_restoreComputeCacheWithProgress:(id)a0 error:(id *)a1;
- (id)_shortLivedLibrary;
- (BOOL)_snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (BOOL)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(id *)a0;
- (BOOL)_transferToBackupLocationWithError:(id *)a0;
- (void)_updateCachedPolicyConfigurationWithCPLConfiguration:(id)a0;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (BOOL)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (BOOL)createArchiveWithError:(id *)a0;
- (void)notifyCPLConfiguration:(id)a0;
- (void)notifyReadyToRestore;
- (BOOL)resetComputeCacheWithError:(id *)a0;
- (BOOL)restoreComputeCacheWithProgress:(id)a0 error:(id *)a1;
- (BOOL)snapshotComputeCacheAndBackupIfNeededWithError:(id *)a0;
- (BOOL)snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)statusFromPolicy:(id)a0;

@end
