@interface PXCompositeEditorialLayoutTemplate : NSObject {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_rects;
    double *_rectWeights;
    BOOL _shouldIgnoreWeights;
}

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long numberOfRects;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) double tileAspectRatio;

- (id)init;
- (void)dealloc;
- (void)getComputedRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 contentSize:(out struct CGSize { double x0; double x1; } *)a1 forReferenceSize:(struct CGSize { double x0; double x1; })a2 interTileSpacing:(double)a3;
- (void)_enumerateRectsUsingBlock:(id /* block */)a0;
- (void)_initRectsStorageWithDescriptors:(id)a0;
- (double)costForFittingLayoutItemInputs:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofTotalItemCount:(long long)a2 normalizedWeights:(in double *)a3 useSaliency:(BOOL)a4;
- (id)initWithDescriptorDictionary:(id)a0;

@end
