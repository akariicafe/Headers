@class HMAccessory;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;

@end
