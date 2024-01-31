@interface UIKBShapeOperator : NSObject

@property (nonatomic) double scale;

+ (id)operatorWithScale:(double)a0;

- (id)shapesByHorizontallyCenteringShapesPreservingLayout:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { double x0; double x1; })_scaleRange:(struct { double x0; double x1; })a0 factor:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 factor:(struct CGSize { double x0; double x1; })a1;
- (id)geometryByScalingShapeGeometry:(id)a0 factor:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })offsetForCenteringShapes:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectByScalingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 factor:(struct CGSize { double x0; double x1; })a1;
- (id)shapeByScalingShape:(id)a0 factor:(struct CGSize { double x0; double x1; })a1;
- (id)shapesByCenteringShapes:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)shapesByCenteringShapesPreservingLayout:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)shapesByCenteringShapesPreservingLayout:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontal:(BOOL)a2 vertical:(BOOL)a3;
- (id)shapesByElaboratingShapes:(id)a0 insideShape:(id)a1 count:(long long)a2;
- (id)shapesByInsettingShapes:(id)a0 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)shapesByRepositioningShapes:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)shapesByResizingShapes:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)shapesByScalingShapes:(id)a0 factor:(struct CGSize { double x0; double x1; })a1;
- (id)shapesByVerticallyCenteringShapesPreservingLayout:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
