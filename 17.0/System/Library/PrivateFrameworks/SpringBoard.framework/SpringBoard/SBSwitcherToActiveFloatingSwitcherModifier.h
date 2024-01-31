@class SBSwitcherModifier, SBAppLayout;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_floatingDeckModifier;
}

- (id)visibleAppLayouts;
- (long long)switcherBackdropBlurType;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)wantsSwitcherBackdropBlur;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)wantsSwitcherDimmingView;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 floatingDeckModifier:(id)a3;

@end
