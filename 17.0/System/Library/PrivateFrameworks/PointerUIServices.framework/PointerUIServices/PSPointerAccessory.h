@class PSPointerShape;

@interface PSPointerAccessory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PSPointerShape *shape;
@property (nonatomic) double offset;
@property (nonatomic) double angle;
@property (nonatomic) BOOL orientationMatchesAngle;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
