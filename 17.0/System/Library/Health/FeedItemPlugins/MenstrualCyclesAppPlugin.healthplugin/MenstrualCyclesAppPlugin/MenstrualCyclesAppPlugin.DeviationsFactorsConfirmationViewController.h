@interface MenstrualCyclesAppPlugin.DeviationsFactorsConfirmationViewController : OBTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ scaleFactorConfiguration;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)nextButtonTapped;

@end
