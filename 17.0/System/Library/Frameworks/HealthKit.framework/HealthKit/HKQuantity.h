@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_unit) HKUnit *unit;
@property (readonly, nonatomic, getter=_value) double value;

+ (id)_quantityWithBeatsPerMinute:(double)a0;
+ (id)hk_quantityWithMinutes:(id)a0;
+ (id)hk_quantityWithSeconds:(id)a0;
+ (id)quantityWithUnit:(id)a0 doubleValue:(double)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithUnit:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)asJSONObject;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_beatsPerMinute;
- (BOOL)_isZero;
- (double)_baselineRelativeDoubleValueForUnit:(id)a0;
- (id)_foundationMeasurement;
- (id)_initWithUnit:(id)a0 doubleValue:(double)a1;
- (id)_quantityByAddingQuantity:(id)a0;
- (double)_valueScaledForDisplay;
- (id)asJSONObjectForUnit:(id)a0;
- (double)doubleValueForUnit:(id)a0;
- (BOOL)hk_isGreaterThanQuantity:(id)a0;
- (BOOL)hk_isLessThanQuantity:(id)a0;
- (id)hk_minutesNumber;
- (id)hk_secondsNumber;

@end
