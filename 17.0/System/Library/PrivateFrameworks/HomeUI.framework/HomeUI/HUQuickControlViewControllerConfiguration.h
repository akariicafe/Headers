@class HMHome;
@protocol HUQuickControlItemUpdating, HFCharacteristicValueSource;

@interface HUQuickControlViewControllerConfiguration : NSObject

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) id<HUQuickControlItemUpdating> itemUpdater;
@property (nonatomic) BOOL copyItems;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)initWithMediaRoutingIdentifier:(id)a0;

@end
