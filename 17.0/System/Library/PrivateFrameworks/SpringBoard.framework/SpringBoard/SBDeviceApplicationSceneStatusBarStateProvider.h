@class UIApplicationSceneClientSettingsDiffInspector, NSString, SBDeviceApplicationSceneHandle, SBSUIInCallSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
    SBDeviceApplicationSceneHandle *_sceneHandle;
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
- (void)_performUpdateWith:(id)a0 actions:(id /* block */)a1;
- (void)invalidateStatusBarSettings;
- (long long)_statusBarStyle;
- (id)breadcrumbProvider;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_fallbackInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (void)sceneHandle:(id)a0 didChangeBackgroundActivitiesToSuppress:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (double)_statusBarAlpha;
- (id)classicApplicationSceneHandleIfExists;
- (void)dealloc;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (id)overlayStatusBarData;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (id)statusBarSceneIdentifier;
- (id)backgroundActivitiesToSuppress;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (void)_handleStatusBarBackgroundActivitiesToSuppressUpdate;
- (void)invalidate;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppCanChange;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppInOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)_initWithSceneHandle:(id)a0;

@end
