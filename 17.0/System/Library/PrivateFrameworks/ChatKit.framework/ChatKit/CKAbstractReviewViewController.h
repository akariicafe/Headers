@class UITableView, NSString, UIView, UIBarButtonItem;

@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *deleteBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)_handleCancel;
- (void)_handleDelete;
- (void)_updateNavigationItemState;

@end
