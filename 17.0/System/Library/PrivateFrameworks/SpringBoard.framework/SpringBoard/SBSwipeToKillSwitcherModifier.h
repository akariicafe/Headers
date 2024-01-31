@class SBHighlightSwitcherModifier, SBAppLayout;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_appLayout;
    SBAppLayout *_leafAppLayout;
    BOOL _fadeOutSwipedItems;
    double _progress;
    struct CGPoint { double x; double y; } _translation;
    double _decelerationTargetProgress;
    BOOL _isDragging;
    BOOL _hasPrepared;
    BOOL _simulatingPostRemovalState;
    unsigned long long _interpolationDirection;
    SBHighlightSwitcherModifier *_highlightModifier;
}

- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)lighteningAlphaForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })contentViewOffsetForAccessoriesOfAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)handleRemovalEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })contentViewOffsetForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (void)_calculateInterpolationDirection;
- (BOOL)_dragHasBeenReleasedTowardKill;
- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)a0;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)a0;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 fadeOutSwipedItems:(BOOL)a2;

@end
