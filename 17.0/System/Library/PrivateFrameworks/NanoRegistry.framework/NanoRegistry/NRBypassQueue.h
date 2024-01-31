@class NSObject;
@protocol OS_dispatch_queue;

@interface NRBypassQueue : NSObject {
    NSObject<OS_dispatch_queue> *_suspendableQueue;
    NSObject<OS_dispatch_queue> *_bypassQueue;
    BOOL _suspended;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)suspend;
- (void)enqueueBlockAsync:(id /* block */)a0;
- (void)invalidate;
- (void)enqueueBypassBlock:(id /* block */)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (void)enqueueBypassBlockAsync:(id /* block */)a0;
- (void)resume;
- (void).cxx_destruct;

@end
