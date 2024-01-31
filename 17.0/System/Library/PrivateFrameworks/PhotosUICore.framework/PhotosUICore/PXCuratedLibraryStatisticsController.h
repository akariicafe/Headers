@interface PXCuratedLibraryStatisticsController : NSObject {
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_resuableLayoutGeometries;
    long long _reusableLayoutGeometriesCapacity;
}

@property (class, readonly, nonatomic) PXCuratedLibraryStatisticsController *defaultController;

- (void)dealloc;
- (struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)_layoutGeometryBufferWithCount:(long long)a0;
- (void)_enumerateDaysSectionsForViewModel:(id)a0 extendedTraitCollection:(id)a1 usingBlock:(id /* block */)a2;
- (void)collectStatisticsForViewModel:(id)a0 extendedTraitCollection:(id)a1 resultHandler:(id /* block */)a2;

@end
