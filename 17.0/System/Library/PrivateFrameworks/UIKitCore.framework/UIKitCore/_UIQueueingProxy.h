@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id /* block */ _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)a0;
+ (id)proxyWithTarget:(id)a0 shouldSuspendInvocationBlock:(id /* block */)a1;

- (void)forwardInvocation:(id)a0;
- (void)suspend;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_dispatchSuspendedMessages;
- (void)removeAllEnqueuedInvocations;

@end
