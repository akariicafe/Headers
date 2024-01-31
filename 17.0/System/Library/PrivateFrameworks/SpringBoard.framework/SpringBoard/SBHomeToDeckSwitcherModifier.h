@interface SBHomeToDeckSwitcherModifier : SBHomeToSwitcherSwitcherModifier

- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (long long)wallpaperStyle;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)_opacitySettings;
- (id)appLayoutsToCacheSnapshots;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)appLayoutToScrollToDuringTransition;

@end
