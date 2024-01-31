@interface NewsFeed.DebugFormatBindingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ formatService;
    void /* unknown type, empty encoding */ weatherService;
    void /* unknown type, empty encoding */ feedModelFactory;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ detailsViewController;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)doShowDetails;

@end
