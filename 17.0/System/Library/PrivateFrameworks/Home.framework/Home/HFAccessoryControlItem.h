@class HMAccessory;

@interface HFAccessoryControlItem : HFControlItem

@property (readonly, nonatomic) HMAccessory *accessory;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)normalizedValueForValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 parentAccessory:(id)a1 displayResults:(id)a2;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
