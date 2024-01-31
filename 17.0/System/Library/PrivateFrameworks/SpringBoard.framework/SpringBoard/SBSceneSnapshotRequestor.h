@class NSString, NSMutableSet, NSHashTable;
@protocol SBSceneSnapshotRequestorDelegate;

@interface SBSceneSnapshotRequestor : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    NSHashTable *_preventSupplementalSnapshotsAssertions;
}

@property (readonly, weak, nonatomic) id<SBSceneSnapshotRequestorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)_debugName;
- (void)invalidate;
- (id)preventTakingSupplementalSnapshotsForBackgroundingScenesWithReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)succinctDescription;
- (id)_fbsSceneSnapshotRequestsFromSBSceneSnapshotRequests:(id)a0 forSceneHandle:(id)a1 settings:(id)a2 snapshotRequestContext:(id)a3;
- (id)_sbSceneSnapshotRequestsForSceneHandle:(id)a0 settings:(id)a1 snapshotRequestContext:(id)a2;
- (id)_sceneSnapshotRequestContext;
- (id)_sceneSnapshotRequestStrategy;
- (BOOL)handleSnapshotRequestAction:(id)a0 forSceneHandle:(id)a1;
- (void)invalidatePendingSnapshotsForSceneID:(id)a0;
- (void)requestSnapshotsForSceneHandle:(id)a0 updatingToNewSettings:(id)a1 withUpdateContext:(id)a2;

@end
