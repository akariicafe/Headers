@interface NSUnitAngle : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitAngle *degrees;
@property (class, readonly, copy) NSUnitAngle *arcMinutes;
@property (class, readonly, copy) NSUnitAngle *arcSeconds;
@property (class, readonly, copy) NSUnitAngle *radians;
@property (class, readonly, copy) NSUnitAngle *gradians;
@property (class, readonly, copy) NSUnitAngle *revolutions;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
