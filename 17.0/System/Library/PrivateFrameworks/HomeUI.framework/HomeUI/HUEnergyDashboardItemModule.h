@interface HUEnergyDashboardItemModule : HFItemModule {
    void /* unknown type, empty encoding */ dashboardContext;
    void /* unknown type, empty encoding */ home;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 dashboardContext:(id)a1 home:(id)a2;

@end
