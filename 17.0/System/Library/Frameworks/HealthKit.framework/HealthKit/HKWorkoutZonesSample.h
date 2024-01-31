@class NSArray;

@interface HKWorkoutZonesSample : HKSample

@property (readonly, copy, nonatomic) NSArray *zones;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)zonesSampleWithType:(id)a0 zones:(id)a1 device:(id)a2 metadata:(id)a3;

- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateStartAndEnd:(id)a0 end:(id)a1 error:(id *)a2;
- (void)_setZones:(id)a0;
- (BOOL)_validateFirstZone:(id)a0 error:(id *)a1;
- (BOOL)_validateLastZone:(id)a0 error:(id *)a1;
- (BOOL)_validateMiddleZones:(id)a0 previousEndQuantity:(id)a1 error:(id *)a2;
- (BOOL)_validateUnit:(id)a0 error:(id *)a1;

@end
