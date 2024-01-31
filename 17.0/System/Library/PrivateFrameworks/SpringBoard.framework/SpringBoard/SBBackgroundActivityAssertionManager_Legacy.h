@class NSObject, SBStatusBarTapManager, NSString, FBWorkspaceEventQueue, NSMutableSet, SBWindowSceneStatusBarAssertionManager, NSXPCListener, NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBBackgroundActivityAssertionManager_Legacy : SBBackgroundActivityAssertionManager <NSXPCListenerDelegate, SBWindowSceneStatusBarAssertionManagerObserver, SBBackgroundActivityAssertionServer, BSDescriptionProviding>

@property (retain, nonatomic) SBWindowSceneStatusBarAssertionManager *appStatusBarAssertionManager;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property (retain, nonatomic) NSMapTable *assertionsByBackgroundActivityIdentifier;
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByBackgroundActivity;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (copy, nonatomic) NSMutableSet *backgroundActivityIdentifiers;
@property (copy, nonatomic) NSMutableSet *exclusiveBackgroundActivityIdentifiers;
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_implementationClass;

- (id)init;
- (id)succinctDescriptionBuilder;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)_isLegacy;
- (void)activateBackgroundActivityAssertions:(id)a0 reply:(id /* block */)a1;
- (void)deactivateBackgroundActivityAssertionsWithIdentifiers:(id)a0;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)setStatusString:(id)a0 forAssertionWithIdentifier:(id)a1;
- (void)_postStatusStringsByIdentifier:(id)a0;
- (void)updateForegroundApplicationSceneHandles:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_internalQueue_backgroundActivityIdentifiersAddedByAddingAssertionData:(id)a0;
- (id)_internalQueue_backgroundActivityIdentifiersRemovedByRemovingAssertionData:(id)a0;
- (id)_internalQueue_coordinatorClientForBackgroundActivityIdentifiers:(id)a0;
- (id)_internalQueue_coordinatorClientForConnection:(id)a0;
- (id)_internalQueue_coordinatorClientMatchingBackgroundActivityIdentifier:(id)a0;
- (void)_internalQueue_deactivateBackgroundActivityAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)_invalidateAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)_mainQueue_getBackgroundActivityIdentifiersToSuppressAndStatusStringsByIdentifierForForegroundApplicationSceneHandles:(id)a0 withHandler:(id /* block */)a1;
- (id)_statusStringsByIdentifierForActiveAssertionsByBackgroundActivityIdentifier:(id)a0 inactiveAssertionsByBackgroundActivityIdentifier:(id)a1;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedBackgroundActivityIdentifiers:(id)a0 removedBackgroundActivityIdentifiers:(id)a1;
- (BOOL)_verifyCoordinatorEntitlementForBackgroundActivityIdentifiers:(id)a0 onConnection:(id)a1;
- (BOOL)handleTapForBackgroundActivityWithIdentifier:(id)a0;
- (void)invalidateBackgroundActivityAssertions:(id)a0;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;
- (void)unregisterCoordinatorRegistrationForBackgroundActivityIdentifiers:(id)a0;

@end
