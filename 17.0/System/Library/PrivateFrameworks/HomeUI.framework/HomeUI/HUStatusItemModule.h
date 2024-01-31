@class HUDashboardContext, HFItem, HFStatusItemProvider, NSTimer, NSString;

@interface HUStatusItemModule : HFItemModule <HFItemHiding>

@property (retain, nonatomic) HUDashboardContext *context;
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider;
@property (retain, nonatomic) HFItem *placeholderItem;
@property (retain, nonatomic) NSTimer *invalidationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_invalidateItemsIfNecessary;
- (id)_itemsToHideInSet:(id)a0;
- (void)_updateInvalidationTimer;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;
- (void)itemUpdaterDidFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)statusItems;
- (void)updateNeedsInvalidation:(BOOL)a0 forStatusItem:(id)a1;

@end
