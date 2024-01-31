@class PKTableHeaderView, PKLinkedApplication, PKPaymentSetupProduct;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController {
    PKPaymentSetupProduct *_product;
    PKLinkedApplication *_linkedApplication;
    PKTableHeaderView *_headerView;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    BOOL _isBridge;
    BOOL _isBuddy;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_subtitle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneButtonTapped:(id)a0;
- (id)initWithSetupContext:(long long)a0 setupDelegate:(id)a1 product:(id)a2 linkedApplication:(id)a3;

@end
