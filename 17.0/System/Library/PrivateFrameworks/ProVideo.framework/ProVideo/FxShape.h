@interface FxShape : NSObject {
    struct FxShapePriv { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; } *_priv;
}

+ (id)shapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)infiniteShape;

- (void)dealloc;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent;
- (id)initWithInfiniteBounds;
- (id)intersectWithShape:(id)a0;
- (BOOL)isInfinite;

@end
