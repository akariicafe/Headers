@interface SBHomeScreenWindow : SBWindow

+ (BOOL)sb_autorotates;

- (BOOL)_canBecomeKeyWindow;
- (id)initWithWindowScene:(id)a0 rootViewController:(id)a1 layoutStrategy:(id)a2 role:(id)a3 debugName:(id)a4;
- (id)autorotationPreventionReasons;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (BOOL)isContentHidden;
- (id)homeScreenViewController;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
