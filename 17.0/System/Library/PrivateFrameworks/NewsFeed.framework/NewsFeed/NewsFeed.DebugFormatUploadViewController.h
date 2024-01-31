@interface NewsFeed.DebugFormatUploadViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ diffViewController;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextBarButtonItem;
}

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)doSettings;
- (void)doNext;
- (void)doSelectUnselectAllWithSender:(id)a0;
- (void)doTocWithSender:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
