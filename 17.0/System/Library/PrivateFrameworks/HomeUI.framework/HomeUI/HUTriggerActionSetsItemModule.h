@class HUTriggerActionFlow, HUShortcutItem, NSSet, HFTriggerBuilder, HFStaticItem, NSString;

@interface HUTriggerActionSetsItemModule : HFItemModule <HFItemHiding> {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HFStaticItem *actionSetsGridItem;
@property (retain, nonatomic) HFStaticItem *serviceActionsGridItem;
@property (retain, nonatomic) HFStaticItem *prioritizedServiceActionsGridItem;
@property (retain, nonatomic) HUShortcutItem *shortcutItem;
@property (readonly, nonatomic) BOOL shouldShowPrioritizedActions;
@property (readonly, nonatomic) HUTriggerActionFlow *flow;
@property (copy, nonatomic) NSSet *prioritizedAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)_buildItemProviders;
- (id)_itemsToHideForStandardTriggerInSet:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_staticItems;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 itemUpdater:(id)a2;
- (BOOL)prioritizedAccessoriesContainsMediaProfiles:(id)a0;
- (BOOL)prioritizedAccessoriesContainsServices:(id)a0;

@end
