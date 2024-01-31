@class UIView, NSString, UITableViewController, SLComposeServiceViewController, NSArray, UIImage, SLSheetTitleView, UITableView, UINavigationItem, UIViewController;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving> {
    NSArray *_configurationItems;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
}

@property (weak, nonatomic) SLComposeServiceViewController *delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImage *serviceIconImage;
@property (readonly, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *configurationItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)navigationItem;
- (double)_preferredTableViewHeight;
- (void)_updateCell:(id)a0 withConfigurationItem:(id)a1;
- (void)_updateCellForConfigurationItem:(id)a0;
- (void)configurationItemDidChange:(id)a0;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id /* block */)a0;
- (void)observeConfigurationItems:(id)a0;
- (void)presentAutoCompletionViewController:(id)a0 apparentContentHeight:(double)a1 contentViewChangeBlock:(id /* block */)a2;
- (void)resetConfigurationItems;
- (void)setPostButtonEnabled:(BOOL)a0;
- (void)setPostButtonTitle:(id)a0;
- (void)updateContentViewSize:(struct CGSize { double x0; double x1; })a0;

@end
