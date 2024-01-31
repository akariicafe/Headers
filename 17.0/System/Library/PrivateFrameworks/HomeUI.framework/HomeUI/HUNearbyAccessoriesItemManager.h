@class HMAccessory, NSDictionary;

@interface HUNearbyAccessoriesItemManager : HFItemManager

@property (retain, nonatomic) HMAccessory *primaryAccessory;
@property (nonatomic) BOOL supportsQuickControls;
@property (retain, nonatomic) NSDictionary *customNearbyAccessories;

+ (id)itemProvidersForPrimaryAccessory:(id)a0 inHome:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (BOOL)shouldHideItem:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_isAPreferredServiceType:(id)a0;
- (BOOL)_isServiceItemAssociatedWithPrimaryAccessory:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (BOOL)hasCustomNearbyAccessories;
- (BOOL)hasEmptyNearbyAccessories;
- (id)initWithDelegate:(id)a0 sourceProfileItem:(id)a1 supportsQuickControls:(BOOL)a2;
- (id)userFilteredIdentifiers;

@end
