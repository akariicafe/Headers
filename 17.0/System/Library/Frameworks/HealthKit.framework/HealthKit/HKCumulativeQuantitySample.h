@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;

- (id)sum;

@end
