@class ATXAmbientSuggestionProvider, NSString, SBIconListModel, SBHIconManager;

@interface AMUIProactiveUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {
    SBIconListModel *_listModel;
    SBHIconManager *_iconManager;
    ATXAmbientSuggestionProvider *_proactiveClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconStackChangedActiveWidget:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteDataSourceDidDisappear:(id)a1 forWidgetIcon:(id)a2;
- (void).cxx_destruct;
- (void)homeScreenUsageAggregator:(id)a0 didNoteDataSourceDidAppear:(id)a1 forWidgetIcon:(id)a2;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserTappedWidgetIcon:(id)a1 withURL:(id)a2;
- (void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)a0;
- (id)_proactiveWidgetForIconDataSource:(id)a0 ofIcon:(id)a1;
- (id)_proactiveWidgetForWidget:(id)a0 ofIcon:(id)a1;
- (id)_proactiveWidgetStackForWidgetIcon:(id)a0;
- (id)initWithListModel:(id)a0 iconManager:(id)a1 proactiveClient:(id)a2;
- (void)pushStackConfigurationsToProactive;

@end
