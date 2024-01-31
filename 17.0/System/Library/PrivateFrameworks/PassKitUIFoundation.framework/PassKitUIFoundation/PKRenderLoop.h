@class UIScreen, CADisplayLink, UIWindowScene;
@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject {
    CADisplayLink *_displayLink;
    BOOL _observingSceneNotifications;
    BOOL _hasHighFrameRateReason;
    BOOL _background;
    BOOL _delegateObservesEffectivePaused;
    BOOL _delegateObservesRunnable;
}

@property (nonatomic) unsigned int highFrameRateReason;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=effectiveIsPaused) BOOL effectivePaused;
@property (readonly, nonatomic, getter=isRunnable) BOOL runnable;
@property (weak, nonatomic) id<PKRenderLoopDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_sceneDidActivate:(id)a0;
- (void)_sceneDidDisconnect:(id)a0;
- (void)invalidate;
- (void)_sceneWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)_sceneWillConnect:(id)a0;
- (void)_sceneWillDeactivate:(id)a0;
- (void)_didInvalidate;
- (BOOL)attachToWindowScene:(id)a0;
- (BOOL)_isForcingPause;
- (void)_didDraw;
- (void)_willDraw;

@end
