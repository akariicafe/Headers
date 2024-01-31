@interface RTDistanceInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double startDistance;
@property (readonly) double endDistance;
@property (readonly) double intervalLength;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(double)a0 length:(double)a1;
- (id)initWithStartDistance:(double)a0 endDistance:(double)a1;

@end
