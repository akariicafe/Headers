@class NSDate, NSString, HDBTLEHeartRateDataCollector, NSSet, HDPeriodicActivity, NSMutableDictionary, HDDatabaseCoalescedWritePool, HDProfile, NSObject, NSMutableArray, HDFakeDataCollector, HDSeriesQuantityEventObserver;
@protocol OS_dispatch_queue;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDProfileReadyObserver, HDAssertionObserver, HDPeriodicActivityDelegate> {
    NSDate *_lastLaunchUpdate;
    NSMutableDictionary *_dataAggregatorsByType;
    HDPeriodicActivity *_periodicUpdateActivity;
    HDDatabaseCoalescedWritePool *_pendingSavePool;
    double unitTest_pendingSaveCoalescingInterval;
    BOOL unitTest_hasSetPendingSaveCoalescingInterval;
    int _privacyPreferencesNotificationToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _collectorLock;
    NSMutableArray *_collectorLock_builtinCollectors;
    NSMutableDictionary *_collectorLock_dataCollectorsByType;
    HDFakeDataCollector *_fakeCollector;
    NSMutableDictionary *_lastFlushDateByType;
    id /* block */ _unitTest_aggregatorConfigurationChangedHandler;
    NSSet *_collectibleTypes;
    HDSeriesQuantityEventObserver *_seriesQuantityEventObserver;
    NSMutableDictionary *_observersByType;
    HDBTLEHeartRateDataCollector *_blteHeartRateDataCollector;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataCollectionQueue;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) BOOL hasAccessToFitnessData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)requestAggregationThroughDate:(id)a0 types:(id)a1 mode:(long long)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)init;
- (void)periodicUpdate;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 completion:(id /* block */)a2;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (BOOL)sensorDataArrayReceived:(id)a0 deviceEntity:(id)a1 error:(id *)a2;
- (id)diagnosticDescription;
- (void)addDataCollector:(id)a0;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)a0 collectionIntervalsByType:(id)a1 observerState:(id)a2;
- (void)removeDataCollectionObserver:(id)a0;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)a0 sampleTypes:(id)a1 observer:(id)a2 observerState:(id)a3 collectionInterval:(double)a4;
- (void)performSaveWithMaximumLatency:(double)a0 block:(id /* block */)a1 completion:(id /* block */)a2;
- (void)unitTest_addCollectibleType:(id)a0;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)a0 sampleTypes:(id)a1 observerState:(id)a2 collectionInterval:(double)a3;
- (void)removeDataCollectionObserver:(id)a0 type:(id)a1;
- (void)startFakingDataWithActivityType:(long long)a0 speed:(id)a1;
- (void)stopFakingData;
- (id)aggregatorForType:(id)a0;
- (void).cxx_destruct;
- (void)unitTest_setAggregator:(id)a0 forType:(id)a1;
- (void)_setAggregatorConfigurationChangeHandler:(id /* block */)a0;
- (id)unitTest_dataAggregatorConfigurationForType:(id)a0;
- (void)stopDataCollectionForType:(id)a0 observer:(id)a1;
- (void)addDataCollectionObserver:(id)a0 type:(id)a1 collectionInterval:(double)a2 state:(id)a3;
- (id)btleHeartRateDataCollector;
- (void)startDataCollectionForType:(id)a0 observer:(id)a1 collectionInterval:(double)a2;
- (void)unitTest_setPendingSaveCoalescingInterval:(double)a0;

@end
