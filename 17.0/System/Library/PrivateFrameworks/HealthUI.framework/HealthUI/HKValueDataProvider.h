@class HKDateCache, HKHealthStore, HKDisplayType, NSString, HKFetchOperation, NSHashTable;

@interface HKValueDataProvider : NSObject <HKDateCacheObserver, HKSampleTypeUpdateControllerObserver> {
    BOOL _resultsLoaded;
    BOOL _needsToReFetchValue;
    id _value;
    HKFetchOperation *_outstandingFetchOperation;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasLoadedData;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)currentValue;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)secondaryValue;
- (void)invalidateValue;
- (void)_alertObserversDidUpdateValues;
- (BOOL)_currentlyFetchingValue;
- (void)_fetchValueWithRetryCount:(long long)a0;
- (void)_handleUnitPreferencesDidChangeNotification:(id)a0;
- (void)_refreshValueIfNecessary;
- (BOOL)_requiresValueFetch;
- (void)_setNeedsReFetchValue;
- (void)_transitionToFetchFailure;
- (void)_updateValueWithValue:(id)a0;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (void)didUpdateValue;
- (id)fetchOperationWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 updateController:(id)a1 dateCache:(id)a2 displayType:(id)a3;
- (void)unitPreferencesDidUpdate;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;

@end
