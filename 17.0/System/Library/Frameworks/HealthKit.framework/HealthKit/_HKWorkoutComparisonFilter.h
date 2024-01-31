@class HKQuantityType, _HKFilter;

@interface _HKWorkoutComparisonFilter : _HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) _HKFilter *subFilter;

+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)_quantityTypeFromKeyPath:(id)a0 prefix:(id)a1;

- (void).cxx_destruct;
- (BOOL)_acceptsWorkoutWithActivities:(id)a0;
- (BOOL)_acceptsWorkoutWithActivityType:(unsigned long long)a0;
- (BOOL)_acceptsWorkoutWithDuration:(double)a0;
- (BOOL)_acceptsWorkoutWithGoalType:(unsigned long long)a0;
- (BOOL)_acceptsWorkoutWithQuantity:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
