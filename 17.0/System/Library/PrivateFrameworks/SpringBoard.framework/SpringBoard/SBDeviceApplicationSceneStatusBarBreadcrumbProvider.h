@class NSString, SBDeviceApplicationSceneHandle, NSHashTable, SBBreadcrumbActionContext, SiriBreadcrumbSource;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver> {
    SiriBreadcrumbSource *_siriSource;
    SBBreadcrumbActionContext *_currentBreadcrumbActionContext;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL hasBreadcrumb;
@property (readonly, copy, nonatomic) NSString *breadcrumbTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_breadcrumbBundleIdForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
+ (id)_breadcrumbSceneIdForAppWithBundleID:(id)a0 activatingSceneEntity:(id)a1 withTransitionContext:(id)a2;
+ (id)_breadcrumbTitleForAppWithBundleID:(id)a0 sceneHandle:(id)a1 activatingSceneEntity:(id)a2 withTransitionContext:(id)a3;
+ (BOOL)_canAddBreadcrumbActionToActivatingSceneEntity:(id)a0 sceneHandle:(id)a1 withTransitionContext:(id)a2;
+ (id)_destinationContextsForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
+ (BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)a0 sceneHandle:(id)a1 withTransitionContext:(id)a2;

- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;
- (id)breadcrumbActionsForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (BOOL)_showTransientOvelayInPlace;
- (void)removeObserver:(id)a0;
- (void)_setCurrentBreadcrumbActionContext:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_activateBreadcrumbApplication:(id)a0 withSceneIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_presentSpotlightFromBreadcrumb;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_installedApplicationsDidChange:(id)a0;
- (void)captureContextForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (long long)_openStrategyForAppLinkState:(id)a0;
- (void).cxx_destruct;
- (void)_handleBreadcrumbAction;
- (id)succinctDescription;
- (void)addObserver:(id)a0;
- (void)noteDidUpdateDisplayProperties;
- (BOOL)activateBreadcrumbIfPossible;
- (id)initWithSceneHandle:(id)a0;
- (void)_presentAssistantFromBreadcrumb;

@end
