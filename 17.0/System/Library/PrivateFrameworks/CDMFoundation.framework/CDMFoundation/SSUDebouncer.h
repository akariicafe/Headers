@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSUDebouncer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_delayTimer;
@property (readonly, nonatomic) double _timeWindowSeconds;
@property (copy, nonatomic) id /* block */ _handler;

- (void)resetDelayTimer;
- (void).cxx_destruct;
- (id)initWithCoalescingTimeWindow:(double)a0 handler:(id /* block */)a1;
- (void)restartDelayTimer:(id)a0;
- (void)signalEventReceived:(id)a0;

@end
