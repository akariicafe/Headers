@class NSString;

@interface HFEnergyCategoryStatusItem : HFAccessoryCategoryStatusItem

@property (retain, nonatomic) NSString *energyAdviceDisplayDescription;

+ (id)statusItemClasses;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)accessoryTypeGroup;
- (void)updateEnergyAdviceDisplayDescription:(id)a0;
- (BOOL)hidesWithNoAccessories;

@end
