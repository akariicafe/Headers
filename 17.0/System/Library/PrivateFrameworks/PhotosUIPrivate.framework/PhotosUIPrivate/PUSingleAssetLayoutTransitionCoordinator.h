@protocol PUTilingCoordinateSystem;

@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator

@property (retain, nonatomic) id<PUTilingCoordinateSystem> fixedCoordinateSystem;

- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)a0;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;

@end
