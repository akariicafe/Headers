@class NSIndexSet, PXLayoutMetrics, NSString;

@interface PXLayoutGenerator : NSObject <NSCopying>

@property (readonly, nonatomic) struct _PXCornerSpriteIndexes { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } cornerSpriteIndexes;
@property (copy, nonatomic) PXLayoutMetrics *metrics;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long keyItemIndex;
@property (copy, nonatomic) id /* block */ itemLayoutInfoBlock;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } estimatedSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSIndexSet *geometryKinds;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithMetrics:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (unsigned long long)numberOfGeometriesWithKind:(long long)a0;

@end
