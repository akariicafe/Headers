@class HMHome, HFItemProvider;

@interface HUSafetyAndSecuritySettingsNotificationsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItemProvider *safetyAndSecurityDeviceItemProvider;

+ (id /* block */)_safetyAndSecurityDeviceItemComparator;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;

@end
