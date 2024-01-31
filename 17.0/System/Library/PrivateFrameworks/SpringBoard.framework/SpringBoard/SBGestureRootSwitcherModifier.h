@class SBSwitcherModifier, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_transitionModifierBeforeHandlingEvent;
    SBSwitcherModifier *_gestureModifierBeforeHandlingEvent;
}

@property (readonly, nonatomic) SBAppLayout *selectedAppLayout;
@property (readonly, nonatomic) long long currentEnvironmentMode;
@property (readonly, nonatomic) SBSwitcherModifier *gestureModifier;
@property (readonly, nonatomic) SBSwitcherModifier *transitionModifier;
@property (readonly, nonatomic) BOOL canTransitionWithoutGestureModifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleRemovalEvent:(id)a0;
- (id)handleEvent:(id)a0;
- (long long)gestureType;
- (BOOL)completesWhenChildrenComplete;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)initWithStartingEnvironmentMode:(long long)a0;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end
