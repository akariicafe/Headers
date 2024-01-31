@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) id<AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneManager;

- (id)medusaApps;
- (id)init;
- (id)_sbSwitcherTransitionRequestClass;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (void)_performValidation;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)a0;
- (id)_mainDisplaySceneManager;
- (void)launchFloatingApplication:(id)a0;
- (BOOL)_isDockIconView:(id)a0;
- (id)allowedMedusaGestures;
- (BOOL)_hasPinnedApp;
- (BOOL)isDisplayingApp;
- (id)_appWithIdentifier:(id)a0;
- (void)_endDockIconActivationModeAfterTimeout;
- (id)_appForLayoutRole:(long long)a0 layoutState:(id)a1;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (long long)_currentFloatingConfiguration;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (id)_firstFloatingAppLayout;
- (id)_bundleIdentifierForIconView:(id)a0;
- (void)_performMedusaGesture:(unsigned long long)a0;
- (BOOL)canActivateMedusaForDock;
- (BOOL)_hasFloatingApp;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)a0;
- (id)_floatingAppRootViewController;
- (BOOL)performMedusaGesture:(unsigned long long)a0;
- (id)sceneLayoutState;
- (id)_applicationController;
- (void)_requestTransactionWithPrimaryEntity:(id)a0 sideEntity:(id)a1 floatingEntity:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4;
- (long long)_currentSpaceConfiguration;
- (void).cxx_destruct;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)a0;
- (BOOL)hasMultipleApps;
- (id)_activeApplicationBundleIdentifiers;
- (void)launchApplication:(id)a0;
- (id)_sbEmptyEntity;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (id)_sbPreviousEntity;
- (id)medusaAppBundleIdsToLayoutRoles;
- (void)_requestFloatingAppSwitcherVisible;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)a0;
- (id)_sbPreviousWorkspaceEntityClass;
- (id)_sbWorkspaceMainWorkspace;
- (id)appForLayoutRole:(long long)a0;

@end
