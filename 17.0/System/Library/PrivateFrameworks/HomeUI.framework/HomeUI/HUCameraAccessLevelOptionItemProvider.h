@class HMUser, NSMutableSet, HMHome;

@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithUser:(id)a0 home:(id)a1;
- (id)invalidationReasons;

@end
