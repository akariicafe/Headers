@class FBScene, NSString, _UIScenePresenter, NSHashTable, FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken;

@interface _UISceneKeyboardProxyLayerForwardingPresentationScene : NSObject <FBSceneObserver, _UIScenePresentationViewObserver, _UISceneKeyboardProxyLayerForwardingPresentationEnvironment> {
    NSHashTable *_observers;
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;
    _UIScenePresenter *_prioritizedPresenter;
    FBScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwnerIdentityToken;

+ (BOOL)forwardsLayersToRootSystemShell;

- (void)sceneDidInvalidate:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_sendDelegateDidMoveToWindow:(id)a0;
- (void)_updateKeyboardLayersForScene:(id)a0;
- (id)keyboardLayers;
- (void)presentationView:(id)a0 didMoveToWindow:(id)a1;

@end
