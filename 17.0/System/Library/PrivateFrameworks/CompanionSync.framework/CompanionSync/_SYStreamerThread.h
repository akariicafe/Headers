@class NSConditionLock, NSRunLoop;

@interface _SYStreamerThread : NSThread {
    NSRunLoop *_threadRunLoop;
    struct __CFRunLoopSource { } *_stopRLS;
    NSConditionLock *_startupLock;
}

@property (readonly, nonatomic) NSRunLoop *runLoop;

+ (id)streamerThread;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)_waitForStartup;

@end
