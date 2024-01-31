@class NWUsageTargetSelector, NWUsageManager, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface NWPollHandler : NSObject {
    NSMutableArray *_batchedSnapshots[10];
    _Atomic unsigned long long _batchesOutstanding;
    unsigned int _producerSeqno;
    unsigned int _consumerSeqno;
    BOOL _active;
}

@property (retain) NWUsageTargetSelector *itemSelector;
@property (copy) id /* block */ flowDeliveryBlock;
@property (copy) id /* block */ genericDeliveryBlock;
@property (copy) id /* block */ completionBlock;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) unsigned long long ntstatContext;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL shouldRestartPoll;
@property (retain) NWUsageManager *manager;

- (void)shutdown;
- (id)init;
- (void)decrementBatchCount;
- (void)handleSnapshot:(id)a0;
- (id)description;
- (id)nextDelivery;
- (void).cxx_destruct;
- (void)pushCurrentSnapshots:(BOOL)a0;
- (void)_dispatchNextBatch;

@end
