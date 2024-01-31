@interface _UISnapshotWindow : UIWindow

@property BOOL _extendsScreenSceneLifetime;

+ (BOOL)_isSystemWindow;

- (BOOL)canBecomeKeyWindow;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_alwaysGetsContexts;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_canDisableMirroring;

@end
