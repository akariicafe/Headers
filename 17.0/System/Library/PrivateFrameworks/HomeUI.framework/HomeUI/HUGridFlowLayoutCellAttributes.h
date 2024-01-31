@protocol HUBackgroundEffectViewGrouping;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedWallpaperRect;
@property (weak, nonatomic) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
