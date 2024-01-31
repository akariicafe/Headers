@class SBLayoutStateTransitionContext;
@protocol SBSceneSnapshotReferenceFrameProviding;

@interface SBSceneSnapshotRequestContext : NSObject

@property (retain, nonatomic) id<SBSceneSnapshotReferenceFrameProviding> sceneDisplayReferenceFrameProvider;
@property (nonatomic) unsigned long long sceneDisplayWindowManagementStyle;
@property (retain, nonatomic) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext;
@property (retain, nonatomic) id<SBSceneSnapshotReferenceFrameProviding> embeddedDisplayReferenceFrameProvider;

- (void).cxx_destruct;

@end
