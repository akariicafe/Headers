@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)canBecomeKeyWindow;
- (id)init;
- (BOOL)isInternalWindow;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_isSettingFirstResponder;
- (id)_roleHint;
- (void)_setFirstResponder:(id)a0;

@end
