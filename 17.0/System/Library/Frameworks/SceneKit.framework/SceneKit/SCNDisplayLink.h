@class NSObject, SCNRecursiveLock, CADisplayLink;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SCNDisplayLink : NSObject {
    CADisplayLink *_caDisplayLink;
    _Atomic double _lastDisplayLinkTime;
    NSObject<OS_dispatch_source> *_coalescingSource;
    id /* block */ _block;
    id /* block */ _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    _Atomic int _queuedFrameCount;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFrameRate;
@property (copy, nonatomic) id /* block */ adaptativeFrameRate;

- (void)setNeedsDisplay;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)_isInvalidated;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)a0;
- (id)initWithQueue:(id)a0 screen:(id)a1 policy:(unsigned long long)a2 block:(id /* block */)a3;
- (int)queuedFrameCount;
- (BOOL)setPaused:(BOOL)a0 nextFrameTimeHint:(double)a1 lastUpdate:(double)a2;

@end
