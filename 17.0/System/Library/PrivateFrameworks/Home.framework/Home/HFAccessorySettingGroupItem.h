@class HMSettingGroup, NSString, NSDictionary, HMAccessorySelectionSetting, HFAccessorySettingsEntity;
@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingGroupItem : HFItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider>

@property (retain, nonatomic) NSDictionary *usageOptions;
@property (readonly, nonatomic) HMSettingGroup *settingGroup;
@property (readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting;
@property (readonly, nonatomic) HFAccessorySettingsEntity *entity;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, nonatomic) NSString *settingKeyPath;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1;
- (void)_decorateHiddenOrDisabled:(id)a0;
- (BOOL)_useManagedConfigurationForProfiles;
- (BOOL)_validateKeyPathDependencies;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 entity:(id)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 group:(id)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 selectionSetting:(id)a2;

@end
