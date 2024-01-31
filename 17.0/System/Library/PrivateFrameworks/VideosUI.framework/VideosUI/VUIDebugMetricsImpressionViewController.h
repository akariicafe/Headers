@class NSArray;

@interface VUIDebugMetricsImpressionViewController : UITableViewController

@property (retain, nonatomic) NSArray *array;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)object;
- (void).cxx_destruct;
- (void)setObject:(id)a0;

@end
