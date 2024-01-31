@class HMSettingGroup, NSMutableDictionary, NSDictionary, NSMutableSet, NATreeNode;
@protocol HFHomeKitSettingsVendor;

@interface HFAccessorySettingsItemProvider : HFItemProvider

@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) NSMutableDictionary *settingToItemCache;
@property (retain, nonatomic) NSMutableSet *settingItems;
@property (readonly, nonatomic) NATreeNode *parentNode;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (retain, nonatomic) HMSettingGroup *settingGroup;

+ (id)buildItemTuplesForHomeKitSettings:(id)a0 usageOptions:(id)a1 settingGroup:(id)a2 underNode:(id)a3 cache:(id)a4;

- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHomeKitSettingsVendor:(id)a0 settingGroup:(id)a1 usageOptions:(id)a2;
- (id)invalidationReasons;

@end
