@class NSArray;

@interface WFContentItemsViewController : UITableViewController

@property (retain, nonatomic) NSArray *contentItems;
@property (nonatomic) BOOL allowsCoercion;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
