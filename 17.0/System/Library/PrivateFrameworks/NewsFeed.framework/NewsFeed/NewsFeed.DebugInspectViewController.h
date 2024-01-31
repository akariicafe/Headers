@interface NewsFeed.DebugInspectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ feedPersonalizer;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ factory;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ inspector;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ inventory;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ tagService;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)doDismiss;
- (void)doTapToRadar;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
