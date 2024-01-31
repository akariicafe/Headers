@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _count;
    union { double vec[4]; double *ptr; } _u;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double *_values;
@property (readonly) unsigned long long count;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double W;
@property (readonly) struct CGPoint { double x0; double x1; } CGPointValue;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } CGRectValue;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CGAffineTransformValue;
@property (readonly) NSString *stringRepresentation;

+ (id)vectorWithString:(id)a0;
+ (id)vectorWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)vectorWithValues:(const double *)a0 count:(unsigned long long)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
+ (id)vectorWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)vectorWithX:(double)a0 Y:(double)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2;
+ (id)vectorWithX:(double)a0;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (id)description;
- (double)valueAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)_dot:(id)a0;
- (float)_norm;
- (id)_orthonormalizeTo:(id)a0;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithX:(double)a0;
- (id)initWithX:(double)a0 Y:(double)a1;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;

@end
