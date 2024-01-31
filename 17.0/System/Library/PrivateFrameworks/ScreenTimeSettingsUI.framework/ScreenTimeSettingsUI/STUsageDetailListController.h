@class STDatePickerBar, NSLayoutConstraint, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STSegmentedControlGroupSpecifierProvider, STTestGroupSpecifierProvider, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STAllowanceProgressGroupSpecifierProvider;

@interface STUsageDetailListController : STPINListViewController

@property (retain) STTestGroupSpecifierProvider *testProvider;
@property (retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider;
@property (retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider;
@property (retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider;
@property (retain) STMostUsedGroupSpecifierProvider *mostUsedProvider;
@property (retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider;
@property (retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider;
@property (retain) STNoUsageDataView *noUsageDataView;
@property (retain) STDatePickerBar *datePickerBar;
@property (getter=isDatePickerHidden) BOOL datePickerHidden;
@property (retain) NSLayoutConstraint *datePickerTopConstraint;
@property (retain) NSLayoutConstraint *datePickerBottomConstraint;

+ (id)_getDevicesDropDownMenuWithCoordinator:(id)a0 viewController:(id)a1;
+ (id)_getUIActionForDevice:(id)a0 deviceIndentifier:(id)a1 coordinator:(id)a2 weakSelf:(id)a3;
+ (void)_setSelectedDeviceIdentifier:(id)a0 coordinator:(id)a1;
+ (void)_setSelectedUsageReportType:(unsigned long long)a0 user:(id)a1;
+ (void)selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1 datePickerBar:(id)a2 coordinator:(id)a3;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setCoordinator:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_devicesDidChangeFrom:(id)a0 to:(id)a1;
- (void)_hasUsageDataDidChange:(BOOL)a0;
- (void)_reportCoreAnalyticsEventWithUser:(id)a0 currentDate:(id)a1 calendar:(id)a2;

@end
