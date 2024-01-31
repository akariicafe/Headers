@class SBLayoutStateTransitionContext;
@protocol SBSceneSnapshotReferenceFrameProviding;

@interface SBMutableSceneSnapshotRequestContext : SBSceneSnapshotRequestContext

@property (retain, nonatomic) id<SBSceneSnapshotReferenceFrameProviding> sceneDisplayReferenceFrameProvider;
@property (nonatomic) unsigned long long sceneDisplayWindowManagementStyle;
@property (retain, nonatomic) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext;
@property (retain, nonatomic) id<SBSceneSnapshotReferenceFrameProviding> embeddedDisplayReferenceFrameProvider;

@end
