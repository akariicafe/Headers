@interface HFAccessoryDiagnosticsControlItem : HFControlItem

+ (Class)valueClass;

- (id)characteristicValuesForValue:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
