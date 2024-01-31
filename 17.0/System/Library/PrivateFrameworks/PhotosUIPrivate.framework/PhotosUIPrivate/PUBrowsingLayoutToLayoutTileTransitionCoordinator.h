@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator

- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)newTileAnimationOptions;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;

@end
