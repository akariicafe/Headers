@class NSString, _PRPosterEnqueuedSnapshot, FBScene, BSAuditToken, BSAtomicFlag, BSContinuousMachTimer, RBSTarget, NSMutableArray, RBSProcessIdentity, PRPosterExtension, RBSAssertion;

@interface PRPosterSnapshotter : NSObject <FBSceneDelegate, BSInvalidatable> {
    NSMutableArray *_lock_enqueuedSnapshots;
    RBSAssertion *_assertionLock_selfRuntimeAssertion;
    RBSAssertion *_assertionLock_runtimeAssertion;
    RBSAssertion *_assertionLock_memoryAssertion;
    BSContinuousMachTimer *_lock_timeoutTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assertionLock;
    _PRPosterEnqueuedSnapshot *_mainQueue_activeSnapshot;
    FBScene *_lock_mainQueue_scene;
    BOOL _mainQueue_complicationRenderingCompleted;
    BOOL _mainQueue_shouldWaitForComplicationRendering;
    double _mainQueue_startTime;
    double _mainQueue_endTime;
    BSAuditToken *_auditToken;
    BSAtomicFlag *_invalidationFlag;
    BSAtomicFlag *_isSnapshottingFlag;
    RBSTarget *_target;
    RBSProcessIdentity *_processIdentity;
    NSString *_providerBundleIdentifier;
}

@property (readonly, nonatomic) PRPosterExtension *extension;
@property BOOL shouldAcquireRuntimeAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completionQueue;
+ (id)fileIOQueue;
+ (void)teardownScene:(id)a0 sceneWasDeactivated:(BOOL)a1 runtimeAssertion:(id)a2 memoryAssertion:(id)a3 selfRuntimeAssertion:(id)a4;

- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (id)init;
- (id)initWithExtension:(id)a0;
- (void)dealloc;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneDidActivate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sceneContentStateDidChange:(id)a0;
- (void)_teardownScene:(BOOL)a0;
- (void)_lock_mainQueue_executeSnapshot:(id)a0;
- (void)_mainQueue_captureSnapshotWithScene:(id)a0;
- (void)_mainQueue_executeNextSnapshotIfPossible;
- (void)_mainQueue_finishWithError:(id)a0 result:(id)a1;
- (void)_mainQueue_updateAssertions:(id)a0;
- (void)enqueueSnapshotRequest:(id)a0 completion:(id /* block */)a1;
- (void)fireSceneDeactivationErrorForTesting:(id)a0;
- (void)installRequestAsActive:(id)a0 completion:(id /* block */)a1;

@end
