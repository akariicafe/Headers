@class SBSwitcherModifier;

@interface SBContinuousExposeSwitcherToAppModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier;

- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 multitaskingModifier:(id)a2;

@end
