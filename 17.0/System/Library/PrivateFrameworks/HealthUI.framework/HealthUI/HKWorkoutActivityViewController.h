@class HKUnitPreferenceController, HKDisplayTypeController, NSMutableArray, HKWorkoutActivity;

@interface HKWorkoutActivityViewController : HKTableViewController

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKWorkoutActivity *activity;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_loadSections;
- (void)_addSectionIfNotNil:(id)a0;
- (id)initWithActivity:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;

@end
