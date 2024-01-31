@class SBSwitcherModifier, SBContinuousExposePeekTransitionModifier, SBAppLayout;

@interface SBContinuousExposePeekSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_contentModifier;
    SBContinuousExposePeekTransitionModifier *_dismissalTransitionModifier;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long configuration;

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isSwitcherWindowVisible;
- (id)handleTransitionEvent:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (id)handleEvent:(id)a0;
- (id)debugPotentialChildModifiers;
- (id)initWithAppLayout:(id)a0 configuration:(long long)a1;

@end
