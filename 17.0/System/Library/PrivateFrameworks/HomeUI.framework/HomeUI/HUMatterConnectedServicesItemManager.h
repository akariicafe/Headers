@class HFItem, NSString, HUMatterConnectedEcosystemItemProvider, HMAccessory, HUMatterHomeConnectedEcosystemItemProvider;

@interface HUMatterConnectedServicesItemManager : HFItemManager

@property (retain, nonatomic) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider;
@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) NSString *accessorySystemCommisionerUUID;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HUMatterHomeConnectedEcosystemItemProvider *connectedHomeEcosystemItemProvider;

+ (id /* block */)connectedServicesItemComparator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)connectedAccessoryEcosystemItemProvider;
- (void)connectedServicesSectionFooterLink:(id)a0 isForAccessory:(BOOL)a1;
- (id)fetchSystemCommissionerPairingUUID;
- (id)initWithConnectedServicesItemProvider:(id)a0 delegate:(id)a1;

@end
