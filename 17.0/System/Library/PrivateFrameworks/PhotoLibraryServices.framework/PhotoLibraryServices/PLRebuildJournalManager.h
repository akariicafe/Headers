@class PLJournalManager, PLLibraryServicesManager, PLChangeHandlingNotificationObserver, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLRebuildJournalManager : NSObject <PLJournalManager> {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    PLChangeHandlingNotificationObserver *_changeHandlingNotificationObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
}

+ (id)name;
+ (BOOL)isEnabledWithPathManager:(id)a0 error:(id *)a1;
+ (BOOL)assetJournalExists:(id)a0 error:(id *)a1;
+ (id)baseURLFromPathManager:(id)a0;
+ (BOOL)existingJournalsCompatibleForRebuild:(id)a0 error:(id *)a1;
+ (id)payloadClasses;

- (id)initWithLibraryServicesManager:(id)a0;
- (void)_start;
- (void)start;
- (void)stop;
- (void)_unregisterForChangeHandlingNotifications;
- (void).cxx_destruct;
- (void)_registerForChangeHandlingNotifications;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (BOOL)_coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (void)_handleChangeHandlingNotificationWithTransaction:(id)a0;
- (id)_newTransientContext;
- (BOOL)_performSnapshotForPayloadClassIDs:(id)a0 error:(id *)a1;
- (BOOL)_performSnapshotIfNecessaryWithError:(id *)a0;
- (void)_recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (BOOL)_recreateResourcesForAsset:(id)a0 withPayload:(id)a1 resources:(id)a2 recreateOptions:(unsigned char)a3 storeOptions:(id)a4 libraryID:(id)a5 isCPLEnabled:(BOOL)a6;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (BOOL)_replayFromCurrentHistoryToken;
- (void)_retrySnapshot;
- (BOOL)_snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (void)_snapshotJournalsIgnoreHistoreIfNecessaryForPayloadClassIDs:(id)a0;
- (void)_startAfterRebuild;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (BOOL)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (void)notifyRebuildComplete;
- (void)notifyWillRebuild;
- (void)recreateAllObjectsInManagedObjectContext:(id)a0 options:(unsigned char)a1;
- (void)recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (BOOL)snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
