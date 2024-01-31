@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}

- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenAlpha;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenScale;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)_isIndexActive:(unsigned long long)a0;
- (BOOL)_isEffectivelyFullScreen;
- (double)_unselectedCardScale;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 activeAppLayouts:(id)a2 gridModifier:(id)a3;

@end
