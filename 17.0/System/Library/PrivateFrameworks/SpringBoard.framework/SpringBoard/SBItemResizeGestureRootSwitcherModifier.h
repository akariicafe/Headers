@interface SBItemResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier

@property (readonly, nonatomic) long long selectedLayoutRole;

- (id)appLayoutsToResignActive;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0 selectedLayoutRole:(long long)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
