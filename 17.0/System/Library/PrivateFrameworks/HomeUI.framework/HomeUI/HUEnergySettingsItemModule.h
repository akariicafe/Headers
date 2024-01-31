@class HMHome, HFItemProvider, HFItem;

@interface HUEnergySettingsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItem *gridForecastItem;
@property (retain, nonatomic) HFItemProvider *staticItemProvider;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;

@end
