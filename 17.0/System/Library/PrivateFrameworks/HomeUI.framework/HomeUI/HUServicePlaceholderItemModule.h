@class HUDashboardContext, NSString, HFStaticItemProvider;

@interface HUServicePlaceholderItemModule : HFItemModule <HFItemHiding>

@property (retain, nonatomic) HUDashboardContext *context;
@property (retain, nonatomic) HFStaticItemProvider *placeholderItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)a0;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;

@end
