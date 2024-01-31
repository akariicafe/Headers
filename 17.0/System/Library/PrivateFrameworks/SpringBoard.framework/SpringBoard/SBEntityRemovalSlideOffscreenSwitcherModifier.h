@class NSUUID, SBSwitcherModifier, SBAppLayout, SBEntityRemovalToHomeSwitcherModifier, SBEntityRemovalDosidoSlideOutAnimationSettings;

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _isSecondStage;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    unsigned long long _direction;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
    SBEntityRemovalDosidoSlideOutAnimationSettings *_animationSettings;
}

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2 animationSettings:(id)a3 multitaskingModifier:(id)a4;

@end
