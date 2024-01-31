@class STScreenTimeReportController, PSSpecifier;

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly) PSSpecifier *usageSummarySpecifier;
@property (readonly) PSSpecifier *screenTimeReportSpecifier;
@property (readonly) PSSpecifier *seeAllActivitySpecifier;
@property (retain) STScreenTimeReportController *reportController;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)_showUsageDetailListController:(id)a0;
- (id)_createScreenTimeReportControllerWithSpecifier:(id)a0;
- (id)_createUsageDetailListControllerWithSpecifier:(id)a0;
- (void)_displayNameDidChangeFrom:(id)a0 to:(id)a1;
- (void)_hasDeviceActivityDataDidChange:(BOOL)a0;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)a0;
- (void)_refreshingDidChange:(BOOL)a0;
- (id)_rootViewModelCoordinator:(id)a0;
- (void)_screenTimeEnabledDidChange:(BOOL)a0;
- (void)_showScreenTimeReportViewController:(id)a0;
- (id)_usageDetailsCoordinator:(id)a0;
- (void)_usageReportDidChangeFrom:(id)a0 to:(id)a1;

@end
