@interface TSDTransformGradient : TSDGradient <TSDMixing> {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransformBeforeUpgrade;
}

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic) struct CGSize { double width; double height; } baseNaturalSize;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })baseNaturalSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)gradientAngleInDegrees;
- (id)initWithGradient:(id)a0 inPath:(id)a1 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqualIgnoringTransform:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (struct CGPoint { double x0; double x1; })normalizedPointForSize:(struct CGSize { double x0; double x1; })a0 endPoint:(BOOL)a1;
- (void)p_drawQuartzShadingInContext:(struct CGContext { } *)a0 withGradientNaturalSize:(struct CGSize { double x0; double x1; })a1 baseNaturalSize:(struct CGSize { double x0; double x1; })a2 start:(struct CGPoint { double x0; double x1; })a3 end:(struct CGPoint { double x0; double x1; })a4;
- (struct CGPoint { double x0; double x1; })p_scalePoint:(struct CGPoint { double x0; double x1; })a0 fromShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })p_scalePoint:(struct CGPoint { double x0; double x1; })a0 toShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_setDefaultValues;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForSize:(struct CGSize { double x0; double x1; })a0;

@end
