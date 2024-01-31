@class NSString, NSNumber;

@interface HFSimpleIncrementalControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType;
@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;
@property (readonly, nonatomic) NSNumber *stepValue;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_metadata;
- (id)characteristicValuesForValue:(id)a0;
- (id)writeValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 displayResults:(id)a2;
- (id)valueForCharacteristicValues:(id)a0;

@end
