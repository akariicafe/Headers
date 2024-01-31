@class NSDate, NSString, AMSMetricsFlushOperation, AMSTreatmentStore, AMSBagKeySet, NSObject, NSMutableArray, AMSEngagement, AMSMetricsDatabaseDataSource;
@protocol OS_dispatch_queue, AMSMetricsBagContract, AMSBagProtocol;

@interface AMSMetrics : NSObject <AMSBagConsumer> {
    NSMutableArray *_enqueuedOperations;
    AMSMetricsFlushOperation *_currentFlushOperation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _enqueuedOperationsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushModeLock;
    _Atomic BOOL _flushingDisabled;
    Class _flushTaskClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bagLock;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedTimerQueue;
@property (class, readonly, nonatomic) BOOL appAnalyticsAllowed;
@property (class, readonly, nonatomic) BOOL diagnosticsSubmissionAllowed;
@property (class, nonatomic) BOOL disableBackgroundMetrics;
@property (class, nonatomic) BOOL flushDelayEnabled;
@property (class, nonatomic) BOOL flushTimerEnabled;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource;
@property (nonatomic) long long destination;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } engagementLock;
@property (nonatomic) BOOL flushingDisabled;
@property (nonatomic) BOOL flushOnForeground;
@property (copy, nonatomic) id /* block */ flushIntervalBlock;
@property (retain, nonatomic) NSDate *flushIntervalStartTime;
@property (retain, nonatomic) AMSEngagement *engagement;
@property (retain, nonatomic) AMSTreatmentStore *treatmentStore;
@property (retain, nonatomic) id<AMSMetricsBagContract> bagContract;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) long long eventCount;
@property (nonatomic) BOOL flushTimerEnabled;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverTimeFromDate:(id)a0;
+ (BOOL)recordAppAnalyticsForEvent:(id)a0 bugType:(id)a1;
+ (id)createBagForSubProfile;
+ (double)timeIntervalFromServerTime:(id)a0;
+ (id)internalInstanceUsingBag:(id)a0;
+ (id)serverTimeFromTimeInterval:(double)a0;

- (id)flushTopic:(id)a0;
- (id)initWithContainerID:(id)a0 bag:(id)a1 flushTaskClass:(Class)a2;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)a0;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (id)_flushDataSource:(id)a0 topic:(id)a1;
- (void)_flushTimerEnabledChanged;
- (void)_processOperationQueue;
- (id)_determineFlushStrategyWithDataSource:(id)a0 topic:(id)a1;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)a0;
- (void)_handleFlushIntervalWithStyle:(long long)a0;
- (id)_enqueueFigaroEvents:(id)a0;
- (id)_modifiedEvents:(id)a0;
- (void)_beginFlushIntervalWithStyle:(long long)a0 events:(id)a1;
- (void)_applicationWillEnterForeground;
- (void)enqueueEvent:(id)a0;
- (void)enqueueEvents:(id)a0;
- (double)_flushIntervalWithConfiguration:(id)a0 forEvents:(id)a1;
- (void)dealloc;
- (id)flush;
- (id)flushEvents:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_flushIntervalInvalidate;

@end
