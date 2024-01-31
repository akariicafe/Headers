@interface _UIWindowSystemOverlayWindow : UIWindow

+ (BOOL)_isSecure;
+ (BOOL)_isSystemWindow;
+ (BOOL)_needsPassthroughInteraction;

- (BOOL)canBecomeKeyWindow;
- (BOOL)isInternalWindow;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
