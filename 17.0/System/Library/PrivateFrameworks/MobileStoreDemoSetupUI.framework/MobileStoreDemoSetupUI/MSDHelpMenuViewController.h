@class NSMutableSet;

@interface MSDHelpMenuViewController : UITableViewController

@property (retain, nonatomic) NSMutableSet *helpMenuUserTapped;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
