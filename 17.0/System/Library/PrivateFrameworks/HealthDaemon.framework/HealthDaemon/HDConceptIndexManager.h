@class HKObserverSet, NSString, HDProfile, HDAssertion, NSCountedSet, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDConceptIndexManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver> {
    unsigned long long _batchSize;
    HDProfile *_profile;
    HKObserverSet *_observerSet;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    _Atomic BOOL _isInvalidated;
    Class _conceptIndexerClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _hasScheduledIndexing;
    BOOL _shouldResetIndexNextExecution;
    NSObject<OS_dispatch_queue> *_delayedOperationQueue;
    NSCountedSet *_cachedReasonsForReindex;
    _HKDelayedOperation *_updateIndexOperation;
    double _conceptIndexUpdateDebounceIntervalOverride;
}

@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_conceptIndexManagerDidFinish;
@property (copy, nonatomic) id /* block */ unitTesting_scheduledConceptIndexWorkDidFailAndClearState;
@property (readonly) unsigned long long currentExecutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (void)resetWithReindex;
- (void)ontologyShardImporter:(id)a0 didImportEntry:(id)a1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)unitTest_hasScheduledIndexing;
- (void)unitTest_debounceUpdateDelayOverride:(double)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)initWithConceptIndexerClass:(Class)a0 batchSize:(unsigned long long)a1 profile:(id)a2;
- (BOOL)performanceTest_triggerConceptIndexing;
- (void)unitTest_setHasScheduledIndexing:(BOOL)a0;
- (void)unitTest_triggerConceptIndexing;
- (void).cxx_destruct;
- (void)ontologyDatabase:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)invalidateAndWait;
- (void)addObserver:(id)a0;
- (void)unitTest_scheduleUpdateWithDescription:(id)a0;

@end
