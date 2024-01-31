@class SBFullScreenAppLayoutSwitcherModifier, SBBannerUnfurlSourceContext, SBAppLayout;

@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBBannerUnfurlSourceContext *_bannerUnfurlSourceContext;
    SBAppLayout *_fromAppLayout;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
    SBAppLayout *_toAppLayout;
    BOOL _isScalingDown;
}

- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)_isAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (long long)backdropBlurType;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 bannerUnfurlSourceContext:(id)a3;

@end
