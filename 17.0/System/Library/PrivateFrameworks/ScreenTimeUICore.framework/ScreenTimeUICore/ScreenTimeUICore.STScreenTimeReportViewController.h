@interface ScreenTimeUICore.STScreenTimeReportViewController : UIViewController <STScreenTimeReportFiltering> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ now;
    void /* unknown type, empty encoding */ firstWeekday;
}

- (void)filterForBundleIdentifier:(id)a0;
- (void)filterForCategoryIdentifier:(id)a0;
- (void)filterForDateMode:(long long)a0 withinDateInterval:(id)a1;
- (void)filterForUserAltDSID:(id)a0 deviceIdentifier:(id)a1;
- (void)filterForWebDomain:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 userAltDSID:(id)a1 deviceIdentifier:(id)a2;

@end
