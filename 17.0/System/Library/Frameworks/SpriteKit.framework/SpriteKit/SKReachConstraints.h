@interface SKReachConstraints : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLowerAngleLimit:(double)a0 upperAngleLimit:(double)a1;

@end
