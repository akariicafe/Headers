@interface NewsFeed.DebugJournalGroupViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ feedItemImages;
    void /* unknown type, empty encoding */ placeholderImage;
    void /* unknown type, empty encoding */ naImage;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doDismiss;

@end
