@interface _PXGAbsoluteSublayoutComposition : PXGSublayoutComposition {
    long long _sublayoutCount;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_sublayoutFrames;
    double *_sublayoutZPositions;
    double *_sublayoutReferenceDepths;
    struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } *_sublayoutSpriteTransforms;
}

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL shouldUpdateSublayoutsInStrictOrder;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)setFrames:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setOrigins:(const struct CGPoint { double x0; double x1; } *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setReferenceDepths:(const double *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSpriteTransforms:(const struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setZPositions:(const double *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)a0 usingSublayoutUpdateBlock:(id /* block */)a1;

@end
