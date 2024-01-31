@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo

@property (nonatomic, setter=_setCropInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } cropInsets;

- (id)description;
- (id)clone;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 coordinateSystem:(id)a7;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 alpha:(double)a4 cornerRadius:(double)a5 cornerCurve:(id)a6 cornerMask:(unsigned long long)a7 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a8 zPosition:(double)a9 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10 coordinateSystem:(id)a11;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)a0 mixFactor:(double)a1 coordinateSystem:(id)a2;

@end
