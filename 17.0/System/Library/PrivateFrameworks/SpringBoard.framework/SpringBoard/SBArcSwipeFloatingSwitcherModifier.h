@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
    unsigned long long _direction;
    BOOL _hasReshuffledZOrder;
}

- (id)appLayoutsToResignActive;
- (id)visibleAppLayouts;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)transitionWillUpdate;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 floatingConfiguration:(long long)a3 direction:(unsigned long long)a4 needsOvershoot:(BOOL)a5;

@end
