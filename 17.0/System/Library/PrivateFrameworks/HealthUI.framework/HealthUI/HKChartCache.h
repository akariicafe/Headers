@class HKOutstandingFetchOperationManager, NSArray, NSMutableDictionary, NSHashTable, _HKChartCachePendingFetchOperationManager;
@protocol HKChartCacheDataSource, HKChartCachePriorityDelegate;

@interface HKChartCache : NSObject {
    NSHashTable *_observers;
    NSMutableDictionary *_cachedResultsByIdentifier;
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;
    NSMutableDictionary *_resultsLoadedByIdentifier;
}

@property (retain, nonatomic) NSArray *bufferedIdentifiers;
@property (weak, nonatomic) id<HKChartCachePriorityDelegate> priorityDelegateForBufferedIdentifiers;
@property (retain, nonatomic) id<HKChartCacheDataSource> dataSource;
@property (readonly, nonatomic) id dataSourceRespectingType;
@property (retain, nonatomic) HKOutstandingFetchOperationManager *operationManager;
@property (nonatomic) BOOL shouldBufferFetchOperations;
@property (nonatomic) long long maxRetryCount;

- (void)invalidateCache;
- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_alertObserversDidUpdateResults;
- (void)_addFetchOperationsForIdentifiers:(id)a0 priorityDelegate:(id)a1;
- (void)_handleOperationCompletionWithOperation:(id)a0 identifier:(id)a1 priorityDelegate:(id)a2 results:(id)a3 error:(id)a4;
- (id)_operationForIdentifier:(id)a0 priorityDelegate:(id)a1;
- (void)_removeFetchOperationsForIdentifiers:(id)a0;
- (id)cachedResultsForIdentifier:(id)a0;
- (void)fetchResultsForIdentifiers:(id)a0 priorityDelegate:(id)a1;
- (void)invalidateResultsForIdentifiers:(id)a0;
- (unsigned long long)stateForIdentifier:(id)a0;

@end
