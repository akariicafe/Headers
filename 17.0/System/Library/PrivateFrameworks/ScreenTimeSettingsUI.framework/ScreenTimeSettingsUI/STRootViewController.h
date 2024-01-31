@class STNoUsageReportedGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider, STEnableScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (readonly) STNoUsageReportedGroupSpecifierProvider *noUsageReportedGroupSpecifierProvider;
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic) BOOL shouldRefreshUsageData;
@property (readonly, nonatomic) BOOL presentedAsModal;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setSpecifier:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)doneButtonAction:(id)a0;
- (void)_startObservingCoordinator;
- (void)_stopObservingCoordinator;
- (void)_toggleNewUsageAction:(id)a0;
- (id)initWithRootViewModelCoordinator:(id)a0;
- (id)initWithRootViewModelCoordinator:(id)a0 presentedAsModal:(BOOL)a1;

@end
