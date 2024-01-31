@class CTUserLabel, NSArray, NSString, NSIndexPath, CTCellularPlanItem;

@interface TSCellularPlanLabelPickerTableViewController : SSUITableViewController <UITextFieldDelegate>

@property (retain) NSIndexPath *chosenLabelIndexPath;
@property (retain) CTUserLabel *customLabel;
@property (retain) CTCellularPlanItem *associatedPlanItem;
@property (retain) CTUserLabel *initialLabel;
@property (readonly) CTUserLabel *chosenLabel;
@property (retain) NSArray *predefinedUserLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (id)customLabelIndexPath;
- (id)customLabelRowValue;

@end
