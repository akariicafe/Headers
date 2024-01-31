@class HMHome, NSMutableSet;

@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *groupItems;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
