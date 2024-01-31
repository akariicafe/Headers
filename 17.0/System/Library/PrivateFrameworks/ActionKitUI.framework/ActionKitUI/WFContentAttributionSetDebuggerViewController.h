@class NSArray;

@interface WFContentAttributionSetDebuggerViewController : UITableViewController

@property (retain, nonatomic) NSArray *contentItems;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;

@end
