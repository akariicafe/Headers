@class NSArray, WBProfile;

@interface _SFProfileSelectionTableViewController : UITableViewController {
    long long _selectedRow;
}

@property (copy, nonatomic) NSArray *profiles;
@property (readonly, nonatomic) WBProfile *selectedProfile;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
