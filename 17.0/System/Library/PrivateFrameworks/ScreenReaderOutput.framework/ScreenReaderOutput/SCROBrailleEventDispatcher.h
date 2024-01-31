@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {
    NSLock *_queueLock;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    BOOL _isValid;
}

- (void)enqueueEvent:(id)a0;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)_processQueue;

@end
