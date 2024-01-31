@class HMAccessory, NSMutableSet, NAFuture;

@interface HUMatterConnectedHomeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *connectedHomeItems;
@property (readonly, nonatomic) NAFuture *accessoryConnectedHomeToCHIPAccessoryPairingFuture;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NAFuture *connectedHomesFuture;
@property (readonly, nonatomic) NAFuture *connectedCHIPAccessoryPairingsFuture;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithAccessory:(id)a0;

@end
