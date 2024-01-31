@class HFItem, NSString, HFAccessoryControlItem, NSArray, NSSet, HFServiceItemProvider, HFItemProvider, NSMapTable, NSNumber;
@protocol HFServiceLikeItem;

@interface HUQuickControlGridCollectionItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate, HUQuickControlCollectionItemManaging>

@property (copy, nonatomic) HFAccessoryControlItem *accessoryControlItem;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceLikeItem;
@property (retain, nonatomic) NSSet *controlItems;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFItemProvider *controlItemProvider;
@property (retain, nonatomic) NSMapTable *controlItemToQuickControlContextTable;
@property (nonatomic) BOOL isRTL;
@property (retain, nonatomic) NSArray *mediaControlItems;
@property (retain, nonatomic) NSNumber *airPlayEnabledSettingNumberValue;
@property (nonatomic) BOOL isSpeakerAccessory;
@property (readonly, nonatomic) HFItemProvider *supplementaryItemProvider;
@property (readonly, nonatomic) HFItemProvider *overflowItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)preferredControlForControlItem:(id)a0 allControlItems:(id)a1 isSupplementary:(BOOL)a2;
+ (BOOL)isPrimaryOrBinaryStateControlItem:(id)a0;
+ (id /* block */)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)a0 quickControlContext:(id)a1 fromControlItems:(id)a2 primaryServiceType:(id)a3;

- (void)tearDown;
- (void).cxx_destruct;
- (id)configuration;
- (id)sourceItem;
- (void)_addMediaAlarmsAndTimers:(id)a0 toSections:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_catchAllLayoutForGridViewProfiles:(id)a0 supplementaryViewProfiles:(id)a1;
- (id)_composeIdentifierForService:(id)a0 section:(unsigned long long)a1;
- (id)_findAndRemoveMediaAlarmsAndTimerItemsFromSection:(id)a0;
- (id)_findAndRemoveMediaControlItemsFromSection:(id)a0;
- (id)_generateQuickControlGroupContextForControlItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_mediaAlarmsAndTimerItemsFromControlItems:(id)a0;
- (BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;
- (id)gridItemProvider;
- (id)headerAccessoryButtonTargetForSection:(unsigned long long)a0;
- (id)headerAccessoryButtonTitleForSection:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 controlItems:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)quickControlContextForItem:(id)a0;
- (id)titleForItem:(id)a0;
- (void)updateSettingValue:(id)a0 forKeyPath:(id)a1;

@end
