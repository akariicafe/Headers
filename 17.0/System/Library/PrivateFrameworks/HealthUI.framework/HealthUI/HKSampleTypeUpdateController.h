@class NSTimer, HKHealthStore, NSMutableDictionary;

@interface HKSampleTypeUpdateController : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_outstandingQueriesByType;
    NSMutableDictionary *_queryStatesByType;
    NSMutableDictionary *_observersByType;
    BOOL _applicationIsInBackground;
    NSMutableDictionary *_throttledDataBySampleType;
    NSTimer *_throttlePollTimer;
}

- (void)removeObserver:(id)a0 forType:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)_allObservedTypes;
- (void)_applicationMovingToForeground:(id)a0;
- (void)_handleQueryErrorForType:(id)a0 error:(id)a1;
- (void)_applicationMovingToBackground:(id)a0;
- (void)_errorRecoveryCallbacksForType:(id)a0;
- (void)_removeQueryForType:(id)a0 queryState:(long long)a1;
- (void)_callObservers:(id)a0 withType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;
- (void)_createQueryForType:(id)a0;
- (void)_drainAllThrottledDataIfNecessary;
- (void)_drainThrottledDataIfNecessary:(id)a0 recoveringFromError:(BOOL)a1;
- (id)_failedQuerySampleTypes;
- (id)_findThrottledUpdateData:(id)a0;
- (void)_handleHighFrequencyObserverCallbacksForType:(id)a0;
- (void)_handleQueryCallbackForType:(id)a0 samplesAdded:(id)a1 objectsDeleted:(id)a2 error:(id)a3;
- (void)_handleQuerySuccessForType:(id)a0 samplesAdded:(id)a1 objectsRemoved:(id)a2;
- (void)_installThrottlingTimer;
- (BOOL)_isHighFrequencyDataType:(id)a0;
- (id)_observersForType:(id)a0;
- (long long)_queryStateForType:(id)a0;
- (void)_removeThrottlingTimer;
- (void)_resumeFailedQueries;
- (void)_sendThrottledUpdatesToObservers:(id)a0 recoveringFromError:(BOOL)a1;
- (void)_setQueryState:(long long)a0 forType:(id)a1;
- (BOOL)_typeRequiresNewQuery:(id)a0;
- (void)addObserver:(id)a0 forType:(id)a1;
- (BOOL)isQueryStateRunningForType:(id)a0;

@end
