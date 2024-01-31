@class NSString;

@interface HFTemperatureUnitControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *temperatureUnitCharacteristicType;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 displayResults:(id)a2;
- (id)valueForCharacteristicValues:(id)a0;

@end
