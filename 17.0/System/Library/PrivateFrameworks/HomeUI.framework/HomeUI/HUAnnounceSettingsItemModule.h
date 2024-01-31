@class HMHome, NSString, HUAnnounceNotificationSettingsItemProvider, HFItemProvider, HFUserItemProvider;

@interface HUAnnounceSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate>

@property (retain, nonatomic) HUAnnounceNotificationSettingsItemProvider *notificationSettingsItemProvider;
@property (retain, nonatomic) HFItemProvider *announceDeviceItemProvider;
@property (retain, nonatomic) HFItemProvider *announceOtherDeviceItemProvider;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long settingsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_announceDeviceItemComparator;
+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (id)updateNotificationSettings:(id)a0;
- (id)itemProviders;
- (id)_updateNotificationSettings:(id)a0;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)enableAnnounceSetting:(BOOL)a0 forItem:(id)a1;
- (id)enablePermissionSetting:(BOOL)a0 forItem:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 settingsContext:(unsigned long long)a2;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;

@end
