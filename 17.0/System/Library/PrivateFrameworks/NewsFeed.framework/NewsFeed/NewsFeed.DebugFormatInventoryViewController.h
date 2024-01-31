@interface NewsFeed.DebugFormatInventoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ packages;
    void /* unknown type, empty encoding */ columnOptions;
    void /* unknown type, empty encoding */ layoutOptions;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ groupViewController;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uploadBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_versionBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_createPackageBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updatedLabel;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ editor;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)doCompileUpload;
- (void)doCreatePackage;
- (void)doDismiss;
- (void)doShowVersioningModePicker:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
