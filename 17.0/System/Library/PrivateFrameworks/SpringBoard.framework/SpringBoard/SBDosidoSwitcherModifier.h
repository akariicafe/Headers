@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

@property (nonatomic) BOOL shouldSuppressScaleAnimation;

- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (id)appLayoutsToCacheSnapshots;
- (id)transitionWillUpdate;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (long long)homeScreenBackdropBlurType;

@end
