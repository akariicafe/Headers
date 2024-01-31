@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout

- (struct CGPoint { double x0; double x1; })axisSnapPoint:(struct CGPoint { double x0; double x1; })a0 toXs:(struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })a1 toYs:(struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })a2 withThreshold:(double)a3;
- (BOOL)canEndpointsCoincide;
- (struct CGPoint { double x0; double x1; })controlPointForPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1 andOriginalA:(struct CGPoint { double x0; double x1; })a2 originalB:(struct CGPoint { double x0; double x1; })a3;
- (id)createConnectedPathFrom:(id)a0 to:(id)a1 withControlPoints:(struct CGPoint { double x0; double x1; }[3])a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orthoRectOfLayout:(id)a0 outset:(double)a1;

@end
