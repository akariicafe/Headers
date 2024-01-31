@class HFItem, HFItemManager, NSString, HFTriggerBuilder, HFTriggerDurationSummaryItem, NSSet;

@interface HUTriggerDurationItemModule : HFItemModule <HFItemHiding> {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HFTriggerDurationSummaryItem *durationSummaryItem;
@property (retain, nonatomic) HFItem *durationPickerItem;
@property (weak, nonatomic) HFItemManager *itemManager;
@property (nonatomic) BOOL durationPickerShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)_buildItemProviders;
- (id)_itemsToHideInSet:(id)a0;
- (BOOL)_shouldShowDurationItems;
- (id)_staticItems;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 itemUpdater:(id)a1;

@end
