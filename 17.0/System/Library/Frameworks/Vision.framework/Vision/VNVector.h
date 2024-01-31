@class VNPoint;

@interface VNVector : NSObject <NSCopying, NSSecureCoding> {
    VNPoint *_vectorProjections;
}

@property (class, readonly) VNVector *zeroVector;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double r;
@property (readonly) double theta;
@property (readonly) double length;
@property (readonly) double squaredLength;

+ (id)unitVectorForVector:(id)a0;
+ (id)vectorByAddingVector:(id)a0 toVector:(id)a1;
+ (id)vectorBySubtractingVector:(id)a0 fromVector:(id)a1;
+ (double)dotProductOfVector:(id)a0 vector:(id)a1;
+ (id)vectorByMultiplyingVector:(id)a0 byScalar:(double)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithR:(double)a0 theta:(double)a1;
- (id)initWithVectorHead:(id)a0 tail:(id)a1;
- (id)initWithXComponent:(double)a0 yComponent:(double)a1;

@end
