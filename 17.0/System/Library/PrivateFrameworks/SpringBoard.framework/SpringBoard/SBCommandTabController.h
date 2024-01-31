@class NSTimer, NSString, PTToggleTestRecipe, SBCommandTabViewController, NSOrderedSet, SBRecentDisplayItemsController, UIApplicationSceneDeactivationAssertion, NSMutableSet, NSObject, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, SBWindow;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate> {
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id<BSInvalidatable> _keyboardFocusAssertion;
    SBRecentDisplayItemsController *_recentDisplayItemsController;
    NSOrderedSet *_persistedRecentDisplayItems;
    NSMutableSet *_appsAllowedWhileHidden;
    NSObject<OS_dispatch_queue> *_recentDisplayItemsPersistenceQueue;
    SBRecentDisplayItemsDataStore *_dataStore;
    SBRecentDisplayItemsDefaults *_defaults;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
    PTToggleTestRecipe *_testRecipe;
}

@property (readonly, nonatomic) SBWindow *window;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)keyCommands;

- (void)dismiss;
- (void)previous;
- (id)init;
- (void)dealloc;
- (void)_sceneDidDisconnect:(id)a0;
- (void)next;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_activateWithForwardDirection:(BOOL)a0;
- (void)_allowAppToAppearWhileHidden:(id)a0;
- (void)_disallowAppFromAppearingWhileHidden:(id)a0;
- (void)_emitAnalyticsEventForDisplayItem:(id)a0;
- (void)_showCommandTabBarAfterTimer:(id)a0;
- (void)_showWindow:(BOOL)a0;
- (void)activateWithKeyCommand:(id)a0;
- (void)dataStore:(id)a0 persistDisplayItems:(id)a1;
- (BOOL)dataStore:(id)a0 shouldRestorePersistedDisplayItem:(id)a1;
- (void)launchCurrentSelectedApplication;
- (id)persistedDisplayItemsForDataStore:(id)a0;
- (void)recentDisplayItemsController:(id)a0 didRemoveItem:(id)a1;
- (BOOL)recentDisplayItemsController:(id)a0 shouldAddItem:(id)a1;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)a0;
- (void)removeCurrentSelectedApplication;
- (void)viewController:(id)a0 selectedApplicationWithDisplayItem:(id)a1;
- (void)viewControllerWantsDismissal:(id)a0;

@end
