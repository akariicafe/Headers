@interface NUImageTransformScale : NUImageTransformAffine

@property (readonly) struct { long long numerator; long long denominator; } scale;

- (id)initWithScale:(struct { long long x0; long long x1; })a0;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)inverseTransform;
- (BOOL)isIdentityImageTransform;

@end
