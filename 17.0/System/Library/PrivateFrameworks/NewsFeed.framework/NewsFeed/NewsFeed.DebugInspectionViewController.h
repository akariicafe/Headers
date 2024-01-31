@interface NewsFeed.DebugInspectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ inspector;
    void /* unknown type, empty encoding */ feedItem;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ cloudContext;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)doDismiss;
- (void)doTapToRadar;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
