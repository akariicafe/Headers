@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {
    struct CGSize { double width; double height; } _itemSize;
    double _interItemSpacing;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    BOOL _isPrepared;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_geometries;
    unsigned long long _geometriesCount;
    struct CGSize { double width; double height; } _actualSize;
    double _lastFullRowBottomEdge;
    struct _PXCornerSpriteIndexes { unsigned int topLeft; unsigned int topRight; unsigned int bottomLeft; unsigned int bottomRight; } _cornerSpriteIndexes;
}

@property (readonly, nonatomic) double lastFullRowBottomEdge;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)invalidate;
- (id)initWithMetrics:(id)a0;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)a0;
- (void)_prepareIfNeeded;
- (struct _PXCornerSpriteIndexes { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })cornerSpriteIndexes;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })geometriesRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
