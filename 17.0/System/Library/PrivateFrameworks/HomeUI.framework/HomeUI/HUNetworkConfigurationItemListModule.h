@class HMHome, HFNetworkConfigurationGroupItemProvider;

@interface HUNetworkConfigurationItemListModule : HFItemModule

@property (retain, nonatomic) HFNetworkConfigurationGroupItemProvider *networkConfigurationGroupItemProvider;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (BOOL)isItemNetworkConfigurationGroupItem:(id)a0;
- (id)networkConfigurationGroupItemForProfile:(id)a0;

@end
