@interface NewsFeed.DebugFormatLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ consolePaneDisplayController;
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ unfilteredEntries;
    void /* unknown type, empty encoding */ filterTerm;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nowBarButtonItem;
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ throttler;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doNow;

@end
