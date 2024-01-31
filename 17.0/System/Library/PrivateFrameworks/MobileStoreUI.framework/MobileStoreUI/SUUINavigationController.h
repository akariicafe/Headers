@interface SUUINavigationController : SUNavigationController

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)childViewControllerForStatusBarStyle;
- (id)description;
- (id)childViewControllerForStatusBarHidden;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)attachPalette:(id)a0 isPinned:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_configureNavigationBar:(id)a0 withTintColor:(id)a1 tintAdjustmentMode:(long long)a2 titleTextTintColor:(id)a3 shouldTintTitleText:(BOOL)a4 accessibilityButtonBackgroundTintColor:(id)a5;
- (void)_configureNavigationBarForViewController:(id)a0 shouldIgnoreTransitionCoordinator:(BOOL)a1;
- (void)_scheduleConfigurationOfNavigationBar;
- (void)_setNavigationPalette:(id)a0 hidesPaletteShadow:(BOOL)a1;
- (BOOL)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)a0;

@end
