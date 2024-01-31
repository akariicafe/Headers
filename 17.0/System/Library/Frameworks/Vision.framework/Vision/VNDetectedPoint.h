@interface VNDetectedPoint : VNPoint {
    float _confidence;
}

@property (readonly) float confidence;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 confidence:(float)a1;
- (id)transformedWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
