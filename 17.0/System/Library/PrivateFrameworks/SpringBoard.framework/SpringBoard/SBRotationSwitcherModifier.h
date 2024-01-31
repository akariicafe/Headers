@class SBAppLayout;

@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long fromInterfaceOrientation;
@property (readonly, nonatomic) long long toInterfaceOrientation;
@property (nonatomic) BOOL shouldNotUseAnchorPointToPinLayoutRolesToSpace;

- (BOOL)requireStripContentsInViewHierarchy;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformRotationAnimationForOrientationChange;
- (id)keyboardSuppressionMode;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 fromInterfaceOrientation:(long long)a2 toInterfaceOrientation:(long long)a3;

@end
