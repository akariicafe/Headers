@class NSString, NSMutableDictionary, AMSPromise, NSObject;
@protocol AMSBagProtocol, OS_os_transaction;

@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate>

@property (retain, nonatomic) NSString *containerId;
@property (retain, nonatomic) id<AMSBagProtocol> amsBag;
@property (retain, nonatomic) AMSPromise *metricsBagPromise;
@property (retain, nonatomic) NSMutableDictionary *amsMetricsByTopic;
@property (retain, nonatomic) NSMutableDictionary *periodicQueuesByTopic;
@property (nonatomic) long long numberOfPendingEvents;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (nonatomic, getter=isTransactionEnabled) BOOL transactionEnabled;
@property (nonatomic) long long flushMode;
@property (nonatomic) double flushTimeInterval;
@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled;
@property (nonatomic) long long maximumBatchSize;
@property (nonatomic) BOOL personalizedWithItunesAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)amsMetricsObjectCache;

- (void)_endTransaction;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)a0 amsBag:(id)a1;
- (id)recordEvent:(id)a0 toTopic:(id)a1;
- (id)sendMethod;
- (void)_flushEvents:(id)a0 topic:(id)a1;
- (id)_recordEvent:(id)a0 toTopic:(id)a1;
- (id)_sortedEventsFromBatch:(id)a0;
- (id)activeItunesAccount;
- (id)amsContainerIdForTopic:(id)a0;
- (id)amsMetricsForTopic:(id)a0;
- (id)initWithContainerId:(id)a0 profileName:(id)a1 profileVersion:(id)a2;
- (id)lookupItunesAccount:(id)a0;
- (id)periodicQueueForTopic:(id)a0;

@end
