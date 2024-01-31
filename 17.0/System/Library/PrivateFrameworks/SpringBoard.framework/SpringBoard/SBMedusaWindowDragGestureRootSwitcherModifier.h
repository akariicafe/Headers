@class SBAppLayout;

@interface SBMedusaWindowDragGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_selectedLeafAppLayout;
    SBAppLayout *_currentMainAppLayout;
    SBAppLayout *_currentFloatingAppLayout;
    long long _currentFloatingConfiguration;
    struct CGPoint { double x; double y; } _gestureVelocity;
}

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)initWithSelectedLeafAppLayout:(id)a0 currentMainAppLayout:(id)a1 currentFloatingAppLayout:(id)a2 currentFloatingConfiguration:(long long)a3;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
