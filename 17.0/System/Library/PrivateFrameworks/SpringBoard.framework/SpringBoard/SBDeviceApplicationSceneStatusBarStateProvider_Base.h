@class NSMutableArray, NSSet, NSString, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing> {
    NSMutableArray *_observers;
}

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) long long defaultStatusBarStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_defaultStatusBarStyle;
- (BOOL)_suppressInheritedPartStyles;
- (id)statusBarPartStyles;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (void)addStatusBarObserver:(id)a0;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (id)_allObservers;
- (id)init;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (void)removeStatusBarObserver:(id)a0;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (id)_observerRecords;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
