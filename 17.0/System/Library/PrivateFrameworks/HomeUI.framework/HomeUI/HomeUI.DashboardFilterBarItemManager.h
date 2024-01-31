@interface HomeUI.DashboardFilterBarItemManager : HFItemManager <HFExecutionEnvironmentObserver> {
    void /* unknown type, empty encoding */ categoryItemProvider;
    void /* unknown type, empty encoding */ actionSetItemProvider;
    void /* unknown type, empty encoding */ energyHelper;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(id)a0;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
