@class PXSmallCollectionLayoutMetrics;

@interface PXSmallCollectionLayoutGenerator : PXLayoutGenerator {
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_geometries;
    struct _PXCornerSpriteIndexes { unsigned int topLeft; unsigned int topRight; unsigned int bottomLeft; unsigned int bottomRight; } _cornerSpriteIndexes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pageRect;
    BOOL _isPrepared;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (copy, nonatomic) PXSmallCollectionLayoutMetrics *metrics;

+ (long long)maximumNumberOfItemsSupportedForStyle:(unsigned long long)a0;

- (unsigned long long)itemCount;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)keyItemIndex;
- (id)initWithMetrics:(id)a0;
- (void)getGeometries:(out struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (void)_fillEquallyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfItems:(long long)a1 axis:(long long)a2 resultHandler:(id /* block */)a3;
- (void)_prepareEditorialStyle;
- (void)_prepareHighQualityAggregationStyle;
- (void)_prepareIfNeeded;
- (void)_prepareLowQualityAggregationStyle;
- (void)_sliceItemFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemAspectRatio:(double)a1 axis:(long long)a2 sliceHandler:(id /* block */)a3 remainderHandler:(id /* block */)a4;
- (struct _PXCornerSpriteIndexes { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })cornerSpriteIndexes;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (id)initWithNumberOfItems:(long long)a0 metrics:(id)a1;

@end
