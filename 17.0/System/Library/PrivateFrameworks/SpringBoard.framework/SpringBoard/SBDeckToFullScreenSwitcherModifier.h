@class SBSwitcherModifier, SBAppLayout;

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_deckModifier;
    BOOL _wantsMinificationFilter;
}

- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutToScrollToBeforeTransitioning;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_appLayoutToScrollToDuringTransition;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 fullScreenAppLayout:(id)a2 deckModifier:(id)a3;
- (long long)homeScreenBackdropBlurType;

@end
