@interface SBInteractiveScreenshotGestureHostWindow : SBIgnoredForAutorotationSecureWindow

+ (BOOL)sb_autorotates;

- (BOOL)_canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
