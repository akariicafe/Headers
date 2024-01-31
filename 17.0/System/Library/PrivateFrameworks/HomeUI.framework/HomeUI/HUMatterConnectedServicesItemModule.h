@class HFItem, HUMatterConnectedEcosystemItemProvider, HMAccessory, HMHome;

@interface HUMatterConnectedServicesItemModule : HFItemModule

@property (readonly, nonatomic) HFItem *connectedServicesListItem;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 accessory:(id)a1;
- (id)initWithItemUpdater:(id)a0 accessory:(id)a1 home:(id)a2 itemProvider:(id)a3;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;

@end
