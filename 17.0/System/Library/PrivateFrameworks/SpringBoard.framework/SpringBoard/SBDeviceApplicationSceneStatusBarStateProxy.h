@class NSString, SBDeviceApplicationSceneStatusBarStateProvider, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_defaultStatusBarStyle;
- (id)sceneToHandleStatusBarTapIfExists;
- (BOOL)_anyObserverWants:(SEL)a0;
- (BOOL)_suppressInheritedPartStyles;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)_statusBarPartStyles;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)a0;
- (void)invalidateStatusBarSettings;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_statusBarStyle;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarOrientationTo:(long long)a1;
- (id)breadcrumbProvider;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_fallbackInterfaceOrientation;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (double)_statusBarAlpha;
- (id)classicApplicationSceneHandleIfExists;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (id)overlayStatusBarData;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (void)sceneWithIdentifier:(id)a0 didChangeBackgroundActivitiesToSuppressTo:(id)a1;
- (id)statusBarSceneIdentifier;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1 forPartWithIdentifier:(id)a2;
- (id)backgroundActivitiesToSuppress;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;

@end
