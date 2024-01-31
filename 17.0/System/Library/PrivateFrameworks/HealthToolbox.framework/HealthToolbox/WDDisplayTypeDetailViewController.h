@class UIFont, NSString, HKNavigationController, NSDate, NSSet, HKDisplayType, HKTimeScopeControl, WDProfile, HKInteractiveChartViewController, NSMutableArray, HKDisplayCategory, _UINavigationControllerPalette;

@interface WDDisplayTypeDetailViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder> {
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    BOOL _inLandscapeMode;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)_localeDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_setupObservers;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)_unitPreferencesDidUpdate:(id)a0;
- (id)_showAllDataVC:(id)a0;
- (id)_showAddDataVC:(id)a0;
- (void)_updateActivityForViewDidAppear;
- (void)_addActivityForAction:(long long)a0 newResponder:(id)a1;
- (void)_attachPaletteIfNecessary;
- (BOOL)_canSelectUnitsRow;
- (void)_changeTimeScope:(long long)a0;
- (void)_configureCell:(id)a0 forTableView:(id)a1;
- (void)_detachPaletteIfNecessary;
- (void)_displayTypeStringsChanged:(id)a0;
- (id)_selectedUnitCellText;
- (BOOL)_shouldShowUnitsRow;
- (void)_timeFrameForChartsChanged:(id)a0;
- (void)addSectionWithItem:(id)a0;
- (void)addSectionWithItems:(id)a0;
- (void)calculateSections;
- (id)initWithDisplayType:(id)a0 displayCategory:(id)a1 profile:(id)a2 displayDate:(id)a3;
- (void)sourceOrderUpdatedWithOrder:(id)a0 dataType:(id)a1;

@end
