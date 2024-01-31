@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)initWithTarget:(id)a0 thread:(id)a1 immediateForMatchingThread:(BOOL)a2;

@end
