@class NSMutableSet, NSMutableArray;

@interface _SBUISystemApertureElementSourceAnimationContext : NSObject {
    NSMutableSet *_sceneResizeActions;
    NSMutableArray *_pendingCoordinatedAnimations;
}

@property (readonly, nonatomic) BOOL hasPendingCoordinatedAnimations;
@property (readonly, nonatomic) BOOL hasTransientLocalResizeAction;
@property (readonly, nonatomic) BOOL canSkipRemoteSceneResizeActions;

- (void).cxx_destruct;
- (void)addPendingAnimation:(id /* block */)a0;
- (void)addSceneResizeAction:(id)a0;
- (void)disableSkippingSceneResizeActions;
- (void)noteIsExpectingRemoteSceneResizeAction;
- (void)performPendingCoordinatedAnimations;
- (void)removeSceneResizeAction:(id)a0;

@end
