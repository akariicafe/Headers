@class SBDeviceApplicationSceneHandle, NSString, SBApplication, SBSUILoginUISceneClientSettingsDiffInspector, UIView, FBScene, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter, BSInvalidatable, SBLoginAppSceneHosterDelegate;

@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster> {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
    FBApplicationUpdateScenesTransaction *_sceneCreateTransaction;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id<BSInvalidatable> _keyboardFocusRedirectAssertion;
    BOOL _hidEventDeferralsInstalled;
}

@property (weak, nonatomic) id<SBLoginAppSceneHosterDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSString *hostedAppBundleID;
@property (readonly, nonatomic) NSString *hostedSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBApplication *hostedApp;
@property (nonatomic) BOOL deferHIDEvents;

- (void)sceneDidInvalidate:(id)a0;
- (id)init;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;
- (void)updateSettingsWithTransitionBlock:(id /* block */)a0;
- (id)_appClientSettingsDiffInspector;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)hostedApp;
- (void)killLoginApp;
- (void)launchLoginAppWithInitialOrientation:(long long)a0 completion:(id /* block */)a1;

@end
