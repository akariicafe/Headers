@class SBArcSwipeSwitcherModifier, NSArray, SBAppLayout;

@interface SBContinuousExposeArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_selectedAppLayout;
    SBArcSwipeSwitcherModifier *_arcSwipeModifier;
    NSArray *_initialVisibleAppLayouts;
}

- (void)didMoveToParentModifier:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_selectedAppLayout;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 selectedAppLayout:(id)a3 initialVisibleAppLayouts:(id)a4 pinSpaceCornerRadiiToDisplayCornerRadii:(BOOL)a5;

@end
