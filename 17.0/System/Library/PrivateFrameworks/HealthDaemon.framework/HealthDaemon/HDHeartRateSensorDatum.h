@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum

@property (readonly, nonatomic) HKQuantity *heartRate;
@property (readonly, nonatomic) long long heartRateContext;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 heartRate:(id)a2 heartRateContext:(long long)a3 resumeContext:(id)a4;

@end
