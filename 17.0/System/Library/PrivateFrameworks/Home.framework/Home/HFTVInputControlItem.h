@class NSArray;

@interface HFTVInputControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSArray *inputs;

+ (Class)valueClass;
+ (id /* block */)_inputSourceValueComparatorForTelevisionProfile:(id)a0;
+ (id)inputCharacteristicTypes;
+ (id)readOnlyOptionalInputCharacteristicTypes;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)writeValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)readValueAndPopulateStandardResults;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;

@end
