@class SBAppLayout;

@interface SBGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
}

- (id)appLayoutToScrollToBeforeTransitioning;
- (void).cxx_destruct;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 gridModifier:(id)a3;

@end
