@class RBProcessMap, RBEventQueue, NSObject;
@protocol RBAssertionManagerQueueDelegate, OS_dispatch_queue, RBTimeProviding;

@interface RBAssertionManagerEventQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
    id<RBTimeProviding> _timeProvider;
}

@property (weak, nonatomic) id<RBAssertionManagerQueueDelegate> delegate;
@property (readonly) unsigned long long count;

- (id)initWithTimeProvider:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateEventsForAssertions:(id)a0;

@end
