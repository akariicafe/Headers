@class HMHome, HFItem, HFNetworkRouterItemProvider, HUNetworkConfigurationItemListModule;

@interface HUNetworkRouterSettingsItemManager : HFItemManager

@property (retain, nonatomic) HFItem *homeProtectionItem;
@property (retain, nonatomic) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkRouterItemProvider *networkRouterItemProvider;

+ (id /* block */)_networkRouterItemComparator;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (BOOL)isItemNetworkRouterItem:(id)a0;
- (id)networkRouterItemForProfile:(id)a0;

@end
