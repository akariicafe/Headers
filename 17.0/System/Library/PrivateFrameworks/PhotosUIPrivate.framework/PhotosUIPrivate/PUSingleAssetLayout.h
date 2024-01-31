@class NSString, PUAssetReference;

@interface PUSingleAssetLayout : PUTilingLayout

@property (retain, nonatomic) PUAssetReference *assetReference;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assetRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cropInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 scrollPosition:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void).cxx_destruct;
- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (void)_invalidateSingleAssetLayout;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
