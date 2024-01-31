@interface SBInteractiveScreenshotGestureRootWindow : _UIRootWindow

+ (BOOL)_isSecure;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
