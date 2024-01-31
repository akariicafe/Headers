@class SBMainDisplayLayoutStateManager, SBMainDisplayLayoutState, NSString, SBSuspendedUnderLockManager, UIApplicationSceneClientSettingsDiffInspector, SBWindowScene;

@interface SBSystemShellExternalDisplaySceneManager : SBSceneManager <SBLayoutStateSceneIdentityProviderDataSource, SBSuspendedUnderLockManagerDelegate> {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}

@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (readonly, nonatomic) SBWindowScene *_windowScene;
@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reconnectSceneRemnant:(id)a0 forProcess:(id)a1 sceneManager:(id)a2;
- (id)suspendedUnderLockManager:(id)a0 sceneHandleForScene:(id)a1;
- (void)_scene:(id)a0 interceptUpdateWithNewSettings:(id)a1;
- (id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)a0;
- (id)layoutStateManager;
- (void)dealloc;
- (BOOL)_shouldFenceTransitionForScene:(id)a0 updatedClientSettingsDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;
- (id)runningApplicationScenes:(id)a0;
- (id)newSceneIdentifierForBundleIdentifier:(id)a0 supportsMultiwindow:(BOOL)a1;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)a0;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventSuspendUnderLockForScene:(id)a1;
- (void)_noteDidCommitUpdateForScene:(id)a0;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2;
- (id)suspendedUnderLockManagerVisibleScenes:(id)a0;
- (void)_doObserverCalloutWithBlock:(id /* block */)a0;
- (void)_scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)externalApplicationSceneHandles;
- (void).cxx_destruct;
- (void)_scene:(id)a0 willUpdateWithSettings:(id)a1 transitionContext:(id)a2;
- (id)transientApplicationSceneHandlesForApplication:(id)a0;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2 snapshotBehavior:(unsigned long long)a3;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventUnderLockForScene:(id)a1;
- (id)_appSceneClientSettingsDiffInspector;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (BOOL)_shouldTrackScenesForDeactivation;

@end
