@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView *_systemGestureView;
}

+ (BOOL)_isSecure;

- (BOOL)canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_extendsScreenSceneLifetime;
- (id)_systemGestureView;
- (BOOL)_isSystemGestureWindow;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_focusResponder;
- (id)initWithDisplay:(id)a0;

@end
