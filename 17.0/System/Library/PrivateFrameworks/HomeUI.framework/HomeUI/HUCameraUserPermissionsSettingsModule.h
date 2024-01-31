@class HMUser, NSString, NSArray, HMHome, NSSet, HFItem, HFStaticItemProvider, HUCameraAccessLevelOptionItemProvider, UIViewController;

@interface HUCameraUserPermissionsSettingsModule : HUExpandableItemModule <HUCameraSettingsModule> {
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
}

@property (retain, nonatomic) HUCameraAccessLevelOptionItemProvider *accessLevelSettingItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (retain, nonatomic) NSArray *optionItems;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long userAccessLevelSetting;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)didSelectItem:(id)a0;
- (id)showOptionsItem;
- (void)_buildItemProvider;
- (void)_dispatchUpdateForHome:(id)a0 user:(id)a1;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 user:(id)a1 home:(id)a2;
- (BOOL)isItemHeader:(id)a0;
- (id)updateUserAccessLevelSetting:(unsigned long long)a0;

@end
