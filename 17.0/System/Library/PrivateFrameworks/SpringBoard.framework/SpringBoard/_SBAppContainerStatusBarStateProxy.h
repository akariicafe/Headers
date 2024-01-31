@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBAppContainerViewController *appVCBackReference;

- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (long long)overrideStatusBarStyle;
- (void).cxx_destruct;

@end
