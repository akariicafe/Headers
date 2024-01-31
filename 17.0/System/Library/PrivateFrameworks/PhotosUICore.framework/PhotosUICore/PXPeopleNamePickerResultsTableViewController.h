@class PHFace, NSMutableArray, PHPerson;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController

@property (readonly) PHPerson *person;
@property (readonly) PHFace *face;
@property (retain) NSMutableArray *items;
@property (readonly, nonatomic) BOOL hasResults;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)contactAtIndexPath:(id)a0;
- (id)initWithStyle:(long long)a0 person:(id)a1 face:(id)a2;
- (id)personAtIndexPath:(id)a0;
- (void)updateItemsForSearchString:(id)a0;

@end
