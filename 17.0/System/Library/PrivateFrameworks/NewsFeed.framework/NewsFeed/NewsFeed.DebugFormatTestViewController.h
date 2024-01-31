@interface NewsFeed.DebugFormatTestViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ packages;
    void /* unknown type, empty encoding */ columnOptions;
    void /* unknown type, empty encoding */ layoutOptions;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ runner;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ toolbarLabel;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)runTests;
- (void)showTOCWithSender:(id)a0;
- (void)stopTests;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
