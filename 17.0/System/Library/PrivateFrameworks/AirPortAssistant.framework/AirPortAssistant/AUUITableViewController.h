@class TableViewManager, UITableView;
@protocol TableViewManagerDelegate;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) TableViewManager *tableManager;
@property (nonatomic) id<TableViewManagerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)setTableView:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)initAUUITableViewControllerCommon;

@end
