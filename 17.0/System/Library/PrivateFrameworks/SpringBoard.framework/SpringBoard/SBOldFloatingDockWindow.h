@interface SBOldFloatingDockWindow : SBMainScreenActiveInterfaceOrientationWindow

+ (BOOL)sb_autorotates;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (BOOL)isContentHidden;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)floatingDockRootViewController;

@end
