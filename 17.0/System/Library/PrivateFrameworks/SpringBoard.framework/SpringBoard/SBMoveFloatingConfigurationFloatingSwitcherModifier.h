@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (id)appLayoutsToResignActive;
- (id)visibleAppLayouts;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 fromFloatingConfiguration:(long long)a1 toFloatingConfiguration:(long long)a2;

@end
