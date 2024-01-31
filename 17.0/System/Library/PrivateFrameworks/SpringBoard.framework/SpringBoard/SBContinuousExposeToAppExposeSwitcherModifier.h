@class NSString, SBAppExposeContinuousExposeSwitcherModifier, NSSet;

@interface SBContinuousExposeToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeContinuousExposeSwitcherModifier *_appExposeModifier;
    NSString *_timerReason;
    NSSet *_appLayoutsVisibleBeforeTransition;
}

@property (readonly, copy, nonatomic) NSString *appExposeBundleID;
@property (readonly, nonatomic) unsigned long long direction;

- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 appExposeBundleID:(id)a1 direction:(unsigned long long)a2 appExposeModifier:(id)a3;

@end
