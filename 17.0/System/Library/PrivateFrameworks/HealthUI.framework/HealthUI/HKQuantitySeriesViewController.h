@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;

@end
