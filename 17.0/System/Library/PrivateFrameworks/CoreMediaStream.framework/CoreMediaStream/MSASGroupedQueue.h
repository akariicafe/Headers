@class NSObject, MSTimerGate, MSASServerSideModel;
@protocol OS_dispatch_queue;

@interface MSASGroupedQueue : NSObject

@property (retain, nonatomic) MSTimerGate *idleTimerGate;
@property (retain, nonatomic) MSTimerGate *stalenessTimerGate;
@property (weak, nonatomic) MSASServerSideModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (readonly, nonatomic) BOOL isAssertingBusyAssertion;
@property (nonatomic) BOOL isShuttingDown;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEnqueuedItems;
- (void)workQueueFlushQueue;
- (void)assertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)flushQueueCompletionBlock:(id /* block */)a0;
- (BOOL)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)a0;
- (void)shutDownFlush:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueClearIdleTimer;
- (void)workQueueClearStalenessTimer;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;

@end
