@class NSSet, CKRegistrationViewController, CKMessagesController, CKSceneDelegateState;

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding>

@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (retain, nonatomic) CKSceneDelegateState *storedState;
@property (retain, nonatomic) CKRegistrationViewController *madridRegistrationController;
@property (nonatomic) BOOL shouldShowRegistrationOverride;
@property (nonatomic) BOOL handlingLaunchTask;
@property (nonatomic) BOOL willPresentRegistrationViewController;
@property (readonly, nonatomic) CKMessagesController *messagesController;
@property (readonly, nonatomic) NSSet *alertSuppressionContexts;

- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)sceneDidEnterBackground:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (id)stateRestorationActivityForScene:(id)a0;
- (void).cxx_destruct;
- (void)windowScene:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (id)conversation;
- (long long)type;
- (void)_prepareForSuspend;
- (void)_scene:(id)a0 openItemProviders:(id)a1;
- (BOOL)_messageUnknownFilteringEnabled;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)__updateAppSnapshot;
- (void)_chatItemsDidChange:(id)a0;
- (void)_clearOldInputContextIdentifiersIfNeeded;
- (void)_conversationFilteringStateChangedNotification:(id)a0;
- (void)_createMadridRegistrationViewIfNecessary;
- (void)_destroyMadridRegistrationView;
- (void)_handleAccountsChanged:(id)a0;
- (void)_handleDaemonConnected:(id)a0;
- (void)_handleDaemonDisconnected:(id)a0;
- (void)_mainThread_updateMadridRegistrationViewAnimated:(BOOL)a0;
- (id)_oldInputContextIdentifiers;
- (void)_prepareForResume:(BOOL)a0;
- (void)_scheduleDeferredSetup;
- (BOOL)_shouldShowMadridRegistrationView;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)_updateAppSnapshot;
- (void)_updateMadridRegistrationViewAnimated:(BOOL)a0;
- (void)_updateStoredState;
- (id)canActivatePredicate;
- (void)didShowNewComposeInMessagesController:(id)a0;
- (void)messagesController:(id)a0 didShowConversation:(id)a1;
- (void)messagesController:(id)a0 didUpdateCurrentConversation:(id)a1;
- (id)prefersToActivatePredicate;
- (void)presentOnboardingViewControllerIfNeeded;
- (void)processAppleEventDictionary:(id)a0;
- (void)processLaunchEventContext:(id)a0;
- (id)sharedConversationList;
- (void)windowSceneDidBecomeVisible:(id)a0;

@end
