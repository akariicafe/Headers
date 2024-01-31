@class SBAppLayout;

@interface SBHomeToFullScreenCenterZoomSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (id)_opacitySettings;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenScale;
- (id)transitionWillUpdate;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 toAppLayout:(id)a1;

@end
