@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } untransformedContentFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double minimumVisibleHeight;

- (id)clone;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6 untransformedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a8 minimumVisibleHeight:(double)a9;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;

@end
