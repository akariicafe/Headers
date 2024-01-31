@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier

@property (nonatomic) long long currentFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;

- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)handleTransitionEvent:(id)a0;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithInitialFloatingConfiguration:(long long)a0 interfaceOrientation:(long long)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
