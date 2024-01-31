@class NSNumber;

@interface CMOdometry : CMLogItem

@property (readonly, nonatomic) NSNumber *deltaPositionX;
@property (readonly, nonatomic) NSNumber *deltaPositionY;
@property (readonly, nonatomic) NSNumber *deltaPositionZ;
@property (readonly, nonatomic) NSNumber *deltaVelocityX;
@property (readonly, nonatomic) NSNumber *deltaVelocityY;
@property (readonly, nonatomic) NSNumber *deltaVelocityZ;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeltaPositionX:(id)a0 deltaPositionY:(id)a1 deltaPositionZ:(id)a2 deltaVelocityX:(id)a3 deltaVelocityY:(id)a4 deltaVelocityZ:(id)a5 timestamp:(double)a6;

@end
