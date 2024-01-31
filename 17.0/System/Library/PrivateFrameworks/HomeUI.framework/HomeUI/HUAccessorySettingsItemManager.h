@class HUAccessorySettingsItemModule, HFAccessorySettingGroupItem;

@interface HUAccessorySettingsItemManager : HFItemManager

@property (retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule;
@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 accessoryGroupItem:(id)a1;

@end
