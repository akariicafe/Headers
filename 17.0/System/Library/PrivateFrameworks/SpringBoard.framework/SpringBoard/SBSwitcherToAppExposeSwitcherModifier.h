@class NSSet, SBAppExposeGridSwitcherModifier;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    NSSet *_appLayoutsVisibleBeforeTransition;
}

- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_newAppExposeModifier;
- (double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 bundleIdentifier:(id)a1 appExposeModifier:(id)a2;

@end
