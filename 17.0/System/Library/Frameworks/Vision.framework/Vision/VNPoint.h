@interface VNPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) VNPoint *zeroPoint;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) double x;
@property (readonly) double y;

+ (double)distanceBetweenPoint:(id)a0 point:(id)a1;
+ (id)pointByApplyingVector:(id)a0 toPoint:(id)a1;

- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)distanceToPoint:(id)a0;
- (id)initWithX:(double)a0 y:(double)a1;
- (id)transformedWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
