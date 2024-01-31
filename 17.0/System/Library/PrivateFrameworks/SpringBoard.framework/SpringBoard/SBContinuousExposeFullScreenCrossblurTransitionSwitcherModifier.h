@class NSString, SBAppLayout;

@interface SBContinuousExposeFullScreenCrossblurTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _animationPhase;
    NSString *_timerReason;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toAppLayoutInitialFrame;
    double _toAppLayoutInitialScale;
    struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } _toAppLayoutInitialCornerRadius;
}

- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldAllowGroupOpacityForAppLayout:(id)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_updateLayoutWithAnimationUpdateMode:(long long)a0 appendResponse:(id)a1;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1 fromAppLayout:(id)a2;

@end
