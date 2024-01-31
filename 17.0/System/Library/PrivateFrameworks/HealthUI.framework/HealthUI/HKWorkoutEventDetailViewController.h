@class NSMutableArray, HKWorkoutEvent;

@interface HKWorkoutEventDetailViewController : HKTableViewController

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKWorkoutEvent *event;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithEvent:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_loadSections;
- (void)_addSectionIfNotNil:(id)a0;

@end
