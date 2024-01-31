@class NSMutableDictionary;

@interface HFAccessoryBatteryStatusItem : HFStatusItem

@property (retain, nonatomic) NSMutableDictionary *batteryLevelItems;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;

@end
