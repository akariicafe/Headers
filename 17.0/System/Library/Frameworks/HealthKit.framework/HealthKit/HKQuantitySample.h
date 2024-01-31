@class HKQuantityType, HKQuantity, HDCodableQuantitySample;

@interface HKQuantitySample : HKSample {
    HKQuantity *_quantity;
    long long _freezeState;
}

@property (nonatomic, getter=_frozen, setter=_setFrozen:) BOOL frozen;
@property (retain, nonatomic, setter=_setCodableQuantitySample:) HDCodableQuantitySample *codableQuantitySample;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly) long long count;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)_quantitySamplesEnforcingDurationWithType:(id)a0 quantity:(id)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)a0 quantity:(id)a1 startDate:(id)a2 device:(id)a3;
+ (id)quantitySampleWithType:(id)a0 quantity:(id)a1 startDate:(id)a2 endDate:(id)a3;
+ (id)quantitySampleWithType:(id)a0 quantity:(id)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)quantitySampleWithType:(id)a0 quantity:(id)a1 startDate:(id)a2 endDate:(id)a3 metadata:(id)a4;

- (id)_init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asJSONObject;
- (id)initWithCoder:(id)a0;
- (long long)_compareFreezeStateWithSample:(id)a0;
- (void)_setCount:(long long)a0;
- (void)_setFreezing;
- (void)_setQuantity:(id)a0;
- (BOOL)_shouldNotifyOnInsert;
- (id)_valueDescription;

@end
