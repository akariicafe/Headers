@class NSSet;

@interface HUDashboardTipModule : HFItemModule {
    void /* unknown type, empty encoding */ dashboardTipItemProvider;
    void /* unknown type, empty encoding */ tipObservationTask;
    void /* unknown type, empty encoding */ eligibleTip;
}

@property (nonatomic, readonly) NSSet *itemProviders;

- (void)setupTipsObserver;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 descriptionText:(id)a1;

@end
