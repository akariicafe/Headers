@interface FxVector : NSObject {
    unsigned long long _count;
    union { double vec[4]; double *ptr; } _u;
}

+ (id)vectorWithString:(id)a0;
+ (id)vectorWithValues:(const double *)a0 count:(unsigned long long)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
+ (id)vectorWithX:(double)a0 Y:(double)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2;
+ (id)vectorWithX:(double)a0;
+ (id)vectorWithCIVector:(id)a0;

- (id)init;
- (id)stringRepresentation;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)count;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (double)valueAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)W;
- (double)Y;
- (double)Z;
- (double)X;
- (id)initWithX:(double)a0;
- (id)initWithX:(double)a0 Y:(double)a1;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
- (id)ciVector;
- (id)initWithCIVector:(id)a0;

@end
