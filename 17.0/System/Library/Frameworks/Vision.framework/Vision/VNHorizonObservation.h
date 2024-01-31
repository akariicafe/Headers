@interface VNHorizonObservation : VNObservation

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) double angle;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)angleInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForImageWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)vn_cloneObject;

@end
