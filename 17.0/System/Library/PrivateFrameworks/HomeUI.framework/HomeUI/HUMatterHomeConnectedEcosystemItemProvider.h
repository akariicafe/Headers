@class HMHome, NSMutableSet, NAFuture;

@interface HUMatterHomeConnectedEcosystemItemProvider : HUMatterConnectedEcosystemItemProvider

@property (retain, nonatomic) NSMutableSet *connectedEcosystemItems;
@property (readonly, nonatomic) NAFuture *ecosystemAccessoryUUIDMapFuture;
@property (readonly, nonatomic) HMHome *home;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;

@end
