@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem

@property (readonly, nonatomic) unsigned long long valveControlMode;

+ (id)na_identity;

- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 auxiliaryTargetValueTuples:(id)a1 additionalCharacteristicOptions:(id)a2 displayResults:(id)a3;
- (id)initWithValueSource:(id)a0 valveControlMode:(unsigned long long)a1 displayResults:(id)a2;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)servicePredicateForCharacteristicType:(id)a0 withUsage:(unsigned long long)a1;

@end
