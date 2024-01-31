@class HMAccessory, HMHome, HFItemProvider;

@interface HUMatterConnectedServicesListItem : HFItem

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItemProvider *itemProvider;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithAccessory:(id)a0 home:(id)a1 itemProvider:(id)a2;

@end
