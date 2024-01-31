@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingFactorsViewController : MenstrualCyclesOnboardingTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ tableFooterView;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ scaleFactorConfiguration;
    void /* unknown type, empty encoding */ contentSizeKeyPath;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ mutableDataSource;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithTitle:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;

@end
