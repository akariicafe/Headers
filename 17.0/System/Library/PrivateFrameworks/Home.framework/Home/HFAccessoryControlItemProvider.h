@class HMAccessory, HFAccessoryItem, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryControlItemProvider : HFItemProvider

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HFAccessoryItem *accessoryItem;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) NSSet *previousControlItems;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithAccessoryItem:(id)a0;
- (id)invalidationReasons;

@end
