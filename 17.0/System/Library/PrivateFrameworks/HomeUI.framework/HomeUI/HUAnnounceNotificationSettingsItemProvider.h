@class HMHome, NSMutableSet, HMUser;

@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;

- (id)init;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)_notificationModes;
- (id)invalidationReasons;

@end
