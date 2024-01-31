@interface HealthRecordsUI.InternalStateViewController : UITableViewController {
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ profile;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
