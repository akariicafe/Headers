@class SBSwitcherModifier, SBAppLayout;
@protocol SBMixedGridSwitcherProviding;

@interface SBHomeGestureToMixedGridSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> *_mixedGridModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    struct CGPoint { double x; double y; } _liftOffTranslation;
}

- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_appLayoutToScrollTo;
- (id)_dismissForEmptySwitcherResponseName;
- (id)_firstFloatingAppLayout:(id)a0;
- (id)_newMixedGridModifier;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)a0;
- (id)initWithTransitionID:(id)a0 mixedGridModifier:(id)a1 selectedAppLayout:(id)a2 startingEnvironmentMode:(long long)a3 liftOfVelocity:(struct CGPoint { double x0; double x1; })a4 liftOffTranslation:(struct CGPoint { double x0; double x1; })a5 floatingAppLayout:(id)a6 floatingConfiguration:(long long)a7;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
