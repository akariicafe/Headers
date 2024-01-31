@interface SleepHealthUI.SleepOnboardingFlowTableViewController : SleepHealthUI.SleepTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
