@class FBSSceneIdentityToken, NSString, FBScene, FBSSceneClientSettingsDiffInspector;
@protocol UIScenePresenter, BSInvalidatable;

@interface _UIKeyboardLayerHostView : _UISceneLayerHostView <FBSceneObserver> {
    id /* block */ _sceneLayerMatchingPredicate;
    FBScene *_owningScene;
    FBScene *_keyboardScene;
    id<BSInvalidatable> _keyboardSceneAvailabilityObserver;
    FBSSceneClientSettingsDiffInspector *_keyboardSceneClientSettingsDiffInspector;
    FBSSceneIdentityToken *_keyboardPreferredHostIdentity;
    BOOL _isPaired;
    id<UIScenePresenter> _presenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithKeyboardProxyLayer:(id)a0 owningScene:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)setCurrentPresentationContext:(id)a0;
- (id)_initWithLayer:(id)a0 owningScene:(id)a1 keyboardMatchingPredicate:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_updatePairingState;
- (void)_setKeyboardScene:(id)a0;
- (id)initWithKeyboardLayer:(id)a0 owningScene:(id)a1;

@end
