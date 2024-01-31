@class SBAppLayout;

@interface SBHomeGestureToStashedFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;
- (void).cxx_destruct;
- (double)_tongueScale;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toFloatingConfiguration:(long long)a2;

@end
