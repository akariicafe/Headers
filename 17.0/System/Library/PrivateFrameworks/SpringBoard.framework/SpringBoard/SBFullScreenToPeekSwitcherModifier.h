@class SBAppLayout;

@interface SBFullScreenToPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    long long _peekConfiguration;
    long long _animationPhase;
    BOOL _resizedEnoughToUnblur;
}

- (double)dockProgress;
- (void)didMoveToParentModifier:(id)a0;
- (double)homeScreenAlpha;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)dockWindowLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)homeScreenBackdropBlurProgress;
- (id)keyboardSuppressionMode;
- (unsigned long long)dockWindowLevelPriority;
- (double)homeScreenScale;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenDimmingAlpha;
- (id)transitionWillUpdate;
- (double)wallpaperScale;
- (BOOL)wantsDockWindowLevelAssertion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)isContainerStatusBarVisible;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)_firstPhaseScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isPeekingAppLayout:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 fromFloatingAppLayout:(id)a3 toFloatingAppLayout:(id)a4 peekConfiguration:(long long)a5;

@end
