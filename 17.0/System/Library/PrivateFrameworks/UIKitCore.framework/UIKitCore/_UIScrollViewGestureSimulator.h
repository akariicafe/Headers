@class NSThread, CADisplayLink, NSTimer, NSMutableArray;

@interface _UIScrollViewGestureSimulator : NSObject {
    struct __CFRunLoopSource { } *_mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    BOOL _hasSimulatedGestures;
    double _lastWakeUpTime;
}

+ (id)sharedInstance;

- (void)_update;
- (id)init;
- (void)dealloc;
- (void)_threadMain;
- (void)_displayLinkDidFire:(id)a0;
- (void).cxx_destruct;
- (void)_setHasSimulatedGestures:(id)a0;
- (void)_signalMainThreadIfNecessary;
- (void)simulateGestureWithDuration:(double)a0 begin:(id /* block */)a1 update:(id /* block */)a2 end:(id /* block */)a3;

@end
