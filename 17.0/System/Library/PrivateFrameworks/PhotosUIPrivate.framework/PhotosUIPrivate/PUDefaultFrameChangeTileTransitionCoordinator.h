@class NSSet, PUTilingView;

@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers;
@property (nonatomic) BOOL shouldCrossFadeTiles;
@property (weak, nonatomic) PUTilingView *tilingView;

- (void).cxx_destruct;
- (void)prepare;
- (BOOL)_isLayoutInfoVisible:(id)a0;
- (id)_layoutInfoForDisappearedInvisibleTile:(id)a0;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;

@end
