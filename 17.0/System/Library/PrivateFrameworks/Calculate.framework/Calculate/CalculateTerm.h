@class NSArray, NSString, CalculateResult, CalculateUnit, NSNumber;

@interface CalculateTerm : NSObject

@property (weak, nonatomic) CalculateResult *result;
@property (nonatomic) struct { unsigned long long w[2]; } decimalValue;
@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSArray *units;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSString *formattedUnit;
@property (readonly, nonatomic) CalculateUnit *primaryUnit;

+ (id)termWithValue:(id)a0 units:(id)a1 result:(id)a2;

- (id)init;
- (id)numberFormatter;
- (long long)compare:(id)a0;
- (id)locale;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCurrency;
- (id)resultContainingNumberFormatter;
- (double)_valueWithoutIrrelevantDecimals;
- (void)_setDecimalValue:(struct { unsigned long long x0[2]; })a0;
- (id)emptyNumeratorString;
- (id)formattedUnitReplacingFirstNumerator:(id)a0;
- (void)getMaximumFractionDigits:(unsigned long long *)a0 minimumFractionDigits:(unsigned long long *)a1;
- (void)getMaximumFractionDigits:(unsigned long long *)a0 minimumFractionDigits:(unsigned long long *)a1 forValue:(struct { unsigned long long x0[2]; })a2;

@end
