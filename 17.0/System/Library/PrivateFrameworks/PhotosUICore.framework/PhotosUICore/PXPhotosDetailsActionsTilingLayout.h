@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout {
    long long _dataSourceIdentifier;
}

@property (readonly, nonatomic) long long _numberOfSeparators;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) long long numberOfItems;
@property (nonatomic) double rowHeight;
@property (nonatomic) double separatorHeight;
@property (nonatomic) BOOL shouldShowSeparators;
@property (nonatomic) BOOL shouldInsetAllSeparators;

- (void)prepareLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (double)_contentWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSeparatorAtIndex:(long long)a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(out unsigned long long *)a1 userData:(out id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (id)initWithNumberOfItems:(long long)a0;

@end
