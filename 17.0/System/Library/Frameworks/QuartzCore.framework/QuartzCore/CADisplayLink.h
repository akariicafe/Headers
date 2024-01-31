@class CADisplay;

@interface CADisplayLink : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) CADisplay *display;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) double maximumRefreshRate;
@property (readonly, nonatomic) double heartbeatRate;
@property (readonly, nonatomic) long long minimumFrameDuration;
@property (readonly, nonatomic) long long actualFramesPerSecond;
@property unsigned int highFrameRateReason;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long frameInterval;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;

+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
+ (void)dispatchDeferredDisplayLink:(unsigned long long)a0;
+ (void)dispatchDeferredDisplayLinks;
+ (void)dispatchDeferredDisplayLinksWithDisplayId:(unsigned int)a0;
+ (id)displayLinkWithDisplay:(id)a0 target:(id)a1 selector:(SEL)a2;
+ (double)expectedWakeupBeforeCommitDeadline:(double)a0;
+ (void)notifyDisplayChange:(unsigned long long)a0;
+ (void)setWillFireHandler:(id /* block */)a0;
+ (BOOL)supportsExpectedWakeupBeforeCommitDeadline;
+ (long long)willFireInfoVersion;

- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (id)_initWithDisplayLinkItem:(void *)a0;
- (void)invalidate;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
