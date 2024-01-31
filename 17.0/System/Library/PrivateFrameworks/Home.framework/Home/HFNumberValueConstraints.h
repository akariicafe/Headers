@class HFNumberRange, NSString, NAIdentity, NSNumber;

@interface HFNumberValueConstraints : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSNumber *minValue;
@property (readonly, copy, nonatomic) NSNumber *maxValue;
@property (readonly, copy, nonatomic) HFNumberRange *validRange;
@property (readonly, copy, nonatomic) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1 stepValue:(id)a2;
- (id)initWithValidRange:(id)a0 stepValue:(id)a1;
- (id)normalizedValueForValue:(id)a0;
- (id)percentageConstraints;
- (id)percentageConstraintsWithinRange:(id)a0;
- (id)_normalizeRangeValue:(id)a0 withinRange:(id)a1;
- (id)_normalizeStepValue:(id)a0 withinRange:(id)a1;
- (id)boundedValueForValue:(id)a0;
- (id)normalizedRangeForRange:(id)a0;
- (id)roundedValueForValue:(id)a0;

@end
