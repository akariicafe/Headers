@class NSArray, PKTableHeaderView, PKGroupsController, NSIndexPath, PKSecureElementPass;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialsExpressPassSelectionViewController : PKPaymentSetupTableViewController {
    NSArray *_passes;
    PKGroupsController *_groupsController;
    BOOL _hasSetDefault;
    PKTableHeaderView *_tableHeader;
    double _cachedHeaderViewWidth;
    NSIndexPath *_previouslySelectedIndexPath;
    PKSecureElementPass *_previouslySelectedPass;
    id<PKPaymentSetupViewControllerDelegate> _delegate;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_done;
- (void)_enableView:(BOOL)a0;
- (id)initWithPasses:(id)a0 groupsController:(id)a1 context:(long long)a2 delegate:(id)a3;

@end
