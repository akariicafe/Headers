@class PBFPosterRackCollectionViewController, PBFExtensionTestingViewController;

@interface PBFPosterSwitcherSceneDelegate : UIResponder <UIWindowSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler> {
    void /* unknown type, empty encoding */ sceneDelegateState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneSettingsDiffInspector;
    void /* unknown type, empty encoding */ switcherInUseAssertion;
    void /* unknown type, empty encoding */ extensionTestingViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_posterExtensionTestingViewController;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;
@property (nonatomic, readonly) PBFPosterRackCollectionViewController *posterRackViewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _scene;
@property (nonatomic, retain) PBFExtensionTestingViewController *posterExtensionTestingViewController;

- (id)init;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (id)initWithScene:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)_setScene:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)_actionHandlersForScene:(id)a0;
- (void)dataStoreDidTearDown;
- (void)debugGestureWasTriggered;
- (void)windowDidAttachContext:(id)a0;
- (void)windowDidDetachContext:(id)a0;

@end
