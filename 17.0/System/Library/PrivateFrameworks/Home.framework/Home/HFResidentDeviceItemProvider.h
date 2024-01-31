@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
