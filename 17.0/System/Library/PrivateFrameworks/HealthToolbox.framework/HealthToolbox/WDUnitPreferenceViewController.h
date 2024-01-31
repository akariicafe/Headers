@class UIFont, NSSet, NSArray, HKDisplayType, HKUnitPreferenceController, UIBarButtonItem;

@interface WDUnitPreferenceViewController : HKTableViewController <HKAdaptiveModalPresented> {
    NSSet *_units;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    NSArray *_rows;
    long long _selectedRowIndex;
    long long _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (nonatomic) BOOL requiresChangeConfirmation;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_cancelButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_doneButtonTapped:(id)a0;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (id)_sortedUnitPreferenceRows;
- (void)_updateCurrentUnit:(id)a0;
- (id)initWithUnits:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
