@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface SSCellularPlanCarrierAppsViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, UITableViewDataSource, UITableViewDelegate, ASCLockupViewDelegate, TSSetupFlowItem> {
    id _carrierApps;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)userInteractionEnabled;
- (void).cxx_destruct;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_userDidTapCancel;
- (id)initWithCarrierApps:(id)a0 country:(id)a1;

@end
