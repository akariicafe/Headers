@class BRCThrottleBase, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCThrottler : NSObject {
    BRCThrottleBase *_throttle;
    long long _latestRetry;
    unsigned int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void)reset;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithName:(id)a0 throttleParameters:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)scheduleNextEvent;

@end
