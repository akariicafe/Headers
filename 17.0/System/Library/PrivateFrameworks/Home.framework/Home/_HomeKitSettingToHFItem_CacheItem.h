@class HFItem, NSString, HMSetting, NAIdentity, NSDictionary, HMSettingGroup, HMAccessorySelectionSettingItem, HFAccessorySettingsEntity;
@protocol HFHomeKitSettingsVendor;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) HMSetting *singleSetting;
@property (readonly, nonatomic) HMSettingGroup *settingGroup;
@property (readonly, nonatomic) HMAccessorySelectionSettingItem *optionItem;
@property (readonly, nonatomic) HFAccessorySettingsEntity *accessoryGroupEntity;
@property (readonly, nonatomic) HFItem *outputItem;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSDictionary *usageOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)a0 usageOptions:(id)a1 settingGroup:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldBeDisplayed;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 accessoryGroupEntity:(id)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 group:(id)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 setting:(id)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 usageOptions:(id)a1 setting:(id)a2 optionItem:(id)a3;

@end
