@class HKUnit, HKSampleType;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSampleType *underlyingSampleType;
@property (readonly, nonatomic) long long overriddenAggregationStyle;
@property (readonly, copy, nonatomic) HKUnit *overriddenCanonicalUnit;

+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2;
+ (id)syntheticQuantityTypeWithConfigurationProviding:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)dataObjectClass;
- (long long)aggregationStyle;
- (id)initWithCoder:(id)a0;
- (id)canonicalUnit;

@end
