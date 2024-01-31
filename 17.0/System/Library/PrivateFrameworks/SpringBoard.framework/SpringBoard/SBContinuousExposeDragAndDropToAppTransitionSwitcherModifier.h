@interface SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier : SBTransitionSwitcherModifier

- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;

@end
