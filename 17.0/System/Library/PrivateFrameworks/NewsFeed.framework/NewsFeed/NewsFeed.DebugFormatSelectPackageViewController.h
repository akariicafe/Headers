@interface NewsFeed.DebugFormatSelectPackageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ editorURL;
    void /* unknown type, empty encoding */ debugFormatService;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ templates;
    void /* unknown type, empty encoding */ selectedTemplate;
    void /* unknown type, empty encoding */ tableView;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doDismissView;
- (void)doEndEditing;

@end
