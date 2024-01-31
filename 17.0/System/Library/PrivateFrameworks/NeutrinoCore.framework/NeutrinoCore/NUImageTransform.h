@interface NUImageTransform : NUGeometryTransform

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)inverseTransform;
- (BOOL)isIdentityImageTransform;
- (id)transformByRotateX:(double)a0 y:(double)a1 z:(double)a2;
- (id)transformByRotateZ:(double)a0;
- (id)transformByScaleX:(double)a0 scaleY:(double)a1;
- (id)transformByTranslateX:(double)a0 translateY:(double)a1;

@end
