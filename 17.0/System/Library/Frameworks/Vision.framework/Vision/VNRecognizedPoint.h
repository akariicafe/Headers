@class NSString;

@interface VNRecognizedPoint : VNDetectedPoint

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 confidence:(float)a1 identifier:(id)a2;
- (id)transformedWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
