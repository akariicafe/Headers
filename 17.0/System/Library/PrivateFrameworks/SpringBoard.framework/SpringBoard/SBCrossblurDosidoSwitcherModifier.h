@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 direction:(unsigned long long)a3;
- (id)_opacitySettings;
- (id)appLayoutsToCacheSnapshots;
- (id)transitionWillUpdate;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;

@end
