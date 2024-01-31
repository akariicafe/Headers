@class HFServiceGroupItemProvider, NSNumber, NSSet, HFServiceItemProvider, HFAccessoryItemProvider, HMHome;
@protocol HUNaturalLightingSetupModuleDelegate;

@interface HUNaturalLightingSetupModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider;
@property (weak, nonatomic) id<HUNaturalLightingSetupModuleDelegate> delegate;
@property (copy, nonatomic) id /* block */ filter;
@property (retain, nonatomic) NSNumber *defaultSelectedValue;

+ (BOOL)showNaturalLightingContainingHomeKitObject:(id)a0;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)selectedItems;
- (id)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)commitSelectedItems;
- (id)initWithHome:(id)a0 itemUpdater:(id)a1;
- (void)toggleSelectedForItem:(id)a0;

@end
