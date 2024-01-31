@class NSString, SBSuspendedUnderLockManager;

@interface SBNonInteractiveDisplaySceneManager : SBSceneManager <SBSuspendedUnderLockManagerDelegate> {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)suspendedUnderLockManager:(id)a0 sceneHandleForScene:(id)a1;
- (BOOL)isSuspendedUnderLock;
- (void)dealloc;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;
- (id)runningApplicationScenes:(id)a0;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)a0;
- (void)_externalCoverSheetVisibilityDidDismiss:(id)a0;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventSuspendUnderLockForScene:(id)a1;
- (id)suspendedUnderLockManagerVisibleScenes:(id)a0;
- (void)setSuspendedUnderLock:(BOOL)a0;
- (id)externalApplicationSceneHandles;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2 snapshotBehavior:(unsigned long long)a3;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventUnderLockForScene:(id)a1;
- (void)_externalCoverSheetVisibilityDidPresent:(id)a0;

@end
