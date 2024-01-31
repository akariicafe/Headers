@class NSString;

@interface WidgetRenderer.WidgetSceneDelegate : UIResponder <CHUISWidgetSceneDelegate, _UISceneSettingsDiffAction, _UISceneBSActionHandler> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ foregroundScene;
    void /* unknown type, empty encoding */ foregroundSceneLimiter;
    void /* unknown type, empty encoding */ visibilityPolicyController;
    void /* unknown type, empty encoding */ layerSnapshotter;
    void /* unknown type, empty encoding */ snapshotGeneration;
    void /* unknown type, empty encoding */ invalidateAfterSnapshot;
    void /* unknown type, empty encoding */ sceneSettingsDiffInspector;
    void /* unknown type, empty encoding */ sceneDiffActionKey;
    void /* unknown type, empty encoding */ confirmationActionSubscribers;
    void /* unknown type, empty encoding */ widgetRendererSession;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)sceneDidEnterBackground:(id)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)applicationDidReceiveMemoryWarning;

@end
