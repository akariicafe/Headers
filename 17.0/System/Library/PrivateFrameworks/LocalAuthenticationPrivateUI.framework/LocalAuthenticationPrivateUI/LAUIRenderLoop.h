@class UIScreen, CADisplayLink;
@protocol LAUIRenderLoopDelegate;

@interface LAUIRenderLoop : NSObject {
    CADisplayLink *_display_link;
    BOOL _has_high_fps_reason;
    BOOL _background;
    BOOL _delegate_observes_effective_paused;
    BOOL _delegate_observes_runnable;
}

@property (nonatomic) unsigned int highFrameRateReason;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic, getter=isInApplicationContext) BOOL inApplicationContext;
@property (nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=effectiveIsPaused) BOOL effectivePaused;
@property (readonly, nonatomic, getter=isRunnable) BOOL runnable;
@property (weak, nonatomic) id<LAUIRenderLoopDelegate> delegate;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_didInvalidate;
- (BOOL)_isForcingPause;
- (BOOL)attachToScreen:(id)a0;
- (void)_didDraw;
- (void)_willDraw;

@end
