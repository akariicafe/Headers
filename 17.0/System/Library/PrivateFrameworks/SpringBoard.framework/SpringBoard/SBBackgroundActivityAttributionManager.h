@class STBackgroundActivitiesStatusDomainData, SBStatusBarTapManager, NSString, STBackgroundActivitiesStatusDomain, FBWorkspaceEventQueue, SBWindowSceneStatusBarAssertionManager, NSObject, NSMutableSet, NSMapTable, SBBackgroundActivityAssertionServiceManager;
@protocol OS_dispatch_queue;

@interface SBBackgroundActivityAttributionManager : SBBackgroundActivityAssertionManager <SBWindowSceneStatusBarAssertionManagerObserver, SBBackgroundActivityAssertionServiceManagerDelegate, BSDescriptionProviding> {
    STBackgroundActivitiesStatusDomain *_backgroundActivitiesDomain;
    STBackgroundActivitiesStatusDomainData *_queue_processedData;
}

@property (retain, nonatomic) SBWindowSceneStatusBarAssertionManager *appStatusBarAssertionManager;
@property (retain, nonatomic) NSMapTable *attributionsByBackgroundActivityIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (copy, nonatomic) NSMutableSet *backgroundActivityIdentifiers;
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager;
@property (readonly, nonatomic) SBBackgroundActivityAssertionServiceManager *assertionServiceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_implementationClass;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)_isModern;
- (void)_postStatusStringsByIdentifier:(id)a0;
- (void)updateForegroundApplicationSceneHandles:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_applicationForBackgroundActivityAttribution:(id)a0;
- (void)_mainQueue_getBackgroundActivityIdentifiersToSuppressAndStatusStringsByIdentifierForForegroundApplicationSceneHandles:(id)a0 withHandler:(id /* block */)a1;
- (void)_queue_updateWithData:(id)a0;
- (void)_registerHandlerAndHandleExistingState;
- (id)_statusStringsByIdentifierForActiveAttributionsByBackgroundActivityIdentifier:(id)a0 inactiveAttributionsByBackgroundActivityIdentifier:(id)a1;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedBackgroundActivityIdentifiers:(id)a0 removedBackgroundActivityIdentifiers:(id)a1;
- (void)assertionServiceDidChangeStatusStringsForAForegroundApp;
- (BOOL)handleTapForBackgroundActivityWithIdentifier:(id)a0;
- (void)invalidateBackgroundActivityAttributions:(id)a0;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;

@end
