@interface _UIBannerWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (id)init;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (id)_roleHint;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
