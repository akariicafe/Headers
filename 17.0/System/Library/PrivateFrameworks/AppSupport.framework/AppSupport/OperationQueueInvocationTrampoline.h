@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
    NSOperationQueue *_queue;
    long long _priority;
}

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)initWithTarget:(id)a0 operationQueue:(id)a1 priority:(long long)a2;

@end
