@class HFUserItemProvider, NSSet, HFItem, NSArray, HFItemProvider, HMHome;

@interface HUSafetyAndSecuritySettingsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItem *homeUpgradeBannerItem;
@property (retain, nonatomic) NSSet *devices;
@property (retain, nonatomic) HFItemProvider *staticItemProvider;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider;
@property (retain, nonatomic) HFItem *listenForSoundsItem;
@property (retain, nonatomic) HFItem *notificationsItem;
@property (retain, nonatomic) NSArray *ownerHomes;

+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)enableUserPermissionSetting:(BOOL)a0 forItem:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;

@end
