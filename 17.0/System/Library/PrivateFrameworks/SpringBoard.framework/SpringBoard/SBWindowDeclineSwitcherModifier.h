@class SBAppLayout;

@interface SBWindowDeclineSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    long long _layoutRole;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenAppLayout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } _initialCornerRadii;
}

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)appLayoutContainingAppLayout:(id)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 layoutRole:(long long)a2;

@end
