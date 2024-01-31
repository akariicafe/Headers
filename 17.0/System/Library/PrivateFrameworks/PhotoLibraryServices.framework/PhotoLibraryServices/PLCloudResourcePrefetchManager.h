@class PLCloudResourcePruneManager, NSDate, PLLibraryServicesManager, PLVolumeInfo, NSDictionary, PLCloudPhotoLibraryManager, NSObject, PLPrefetchConfiguration;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
    PLLibraryServicesManager *_lsm;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDictionary *_inflightResources;
    long long _prefetchMode;
    long long _prefetchOptimizeMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLVolumeInfo *_volumeInfo;
    NSDate *_initialSyncDate;
    NSDate *_lastCompletePrefetchDate;
    PLPrefetchConfiguration *_prefetchConfiguration;
    BOOL _isWalrusEnabled;
}

+ (id)_overridePrefetchMode;
+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;
+ (void)resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 prefetchMode:(long long)a1 prefetchOptimizeMode:(long long)a2 initialSyncDate:(id)a3 lastCompletePrefetchDate:(id)a4 initialBudget:(long long)a5 excludeDynamicCPLResources:(BOOL)a6 prefetchConfiguration:(id)a7 photoLibrary:(id)a8 applyPerPrefetchLimit:(BOOL)a9 completionHandler:(id /* block */)a10;
+ (id)thumbnailResourcesNeedingPrefetchInContext:(id)a0 maxRetry:(unsigned long long)a1 limit:(long long)a2;
+ (id)_descriptionForPrefetchMode:(long long)a0;
+ (id)_identifierForResourceDownload:(id)a0;
+ (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0 givenMode:(long long)a1 andInitialSyncDate:(id)a2;
+ (id)_resourcesWithPredicate:(id)a0 limit:(unsigned long long)a1 context:(id)a2;

- (id)init;
- (id)_allInflightResourceIdentifiers;
- (void)_reloadDownloadOriginalsSetting;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (void)handleOptimizeModeChange;
- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (void)_startAutomaticPrefetch;
- (void)invalidate;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0 prefetchOptimizeMode:(long long)a1;
- (void)clearPrefetchState;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (void)stop;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 libraryServicesManager:(id)a2;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0;
- (void)handleCPLConfigurationChange;
- (void)_startPrefetchNextBatch;
- (id)_volumeInfo;
- (void)startAutomaticPrefetch;
- (void)prefetchResourcesWithPredicates:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isPrefetchDisabled;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)prefetchStatusForDebug:(BOOL)a0;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)a0 resources:(id)a1 photoLibrary:(id)a2;
- (id)_prefetchStatusForDebug:(BOOL)a0;
- (void)_setLastCompletePrefetchDate:(id)a0;
- (unsigned long long)_countOfAllInflightResources;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (void)_reloadDefaultDownload;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 photoLibrary:(id)a1 applyPerPrefetchLimit:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (BOOL)_canPrefetch;
- (void)_cleanupInflightResources;
- (void)_removeAllInflightResourceIdentifiers;
- (void)handleCPLStatusChange;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (long long)_totalSizeOfOriginalResources;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_prefetchResources:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 shouldAutoPefetchNextBatch:(BOOL)a3;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)a0;

@end
