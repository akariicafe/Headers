@class SBAppLayout;

@interface SBFullScreenToSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_existingAppLayout;
    SBAppLayout *_incomingAppLayout;
    BOOL _blurExistingDisplayItem;
}

- (id)visibleAppLayouts;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (long long)wallpaperStyle;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenDimmingAlpha;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
