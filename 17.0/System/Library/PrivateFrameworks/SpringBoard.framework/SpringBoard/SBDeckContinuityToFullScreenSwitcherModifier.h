@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}

- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 deckModifier:(id)a2 fullscreenModifier:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForContinuityAppLayout;
- (BOOL)_isInsertingIndex:(unsigned long long)a0;

@end
