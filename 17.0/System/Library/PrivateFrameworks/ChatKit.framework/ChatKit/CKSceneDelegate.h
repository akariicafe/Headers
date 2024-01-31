@class UIWindow, UIWindowScene, NSString, CKMacToolbarController, CKConversation;

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate>

@property (readonly, weak, nonatomic) UIWindowScene *scene;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) CKMacToolbarController *toolbarController;
@property (readonly, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)containerClassForType:(long long)a0;
+ (id)stateFromUserInfoDictionary:(id)a0;
+ (id)userInfoDictionaryForState:(id)a0;

- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (id)stateRestorationActivityForScene:(id)a0;
- (void)showDebugMenu;
- (void).cxx_destruct;
- (long long)type;
- (void)_scene:(id)a0 openItemProviders:(id)a1;
- (void)updateSceneActivationConditions;
- (void)_setFrameNameForWindowIfNeeded;
- (id)canActivatePredicate;
- (void)installDebugHandlerForScene:(id)a0;
- (id)predicateMatchingConversation:(id)a0;
- (id)prefersToActivatePredicate;
- (void)updateSceneTitleForConversation:(id)a0;
- (void)windowSceneDidBecomeVisible:(id)a0;

@end
