@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (id)init;
- (void)handleOptimizeModeChange;
- (void)invalidate;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)clearPrefetchState;
- (void)stop;
- (void)handleCPLConfigurationChange;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (id)statusForDebug:(BOOL)a0;
- (void).cxx_destruct;
- (double)_minimumIntervalBetweenOperations;
- (void)handleCPLStatusChange;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)updateCacheDeletePurgeableAmount;

@end
