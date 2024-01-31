@class HFAccessorySettingManagedConfigurationAdapter, NSMutableSet, HMSettingGroup;

@interface HUAccessorySettingsProfileItemProvider : HFItemProvider

@property (retain, nonatomic) HMSettingGroup *settingGroup;
@property (retain, nonatomic) NSMutableSet *accessorySettingsProfileItems;
@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (copy, nonatomic) id /* block */ filter;

- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithAdapter:(id)a0 settingGroup:(id)a1;
- (id)invalidationReasons;

@end
