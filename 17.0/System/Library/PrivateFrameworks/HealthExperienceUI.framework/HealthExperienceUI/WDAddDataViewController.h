@class NSDate, NSString, HKManualEntryValidationController, HKHealthStore, HKDisplayType, HKUnitPreferenceController, WDAddDataManualEntryTableData, HKDateCache;

@interface WDAddDataViewController : HKTableViewController <UIAdaptivePresentationControllerDelegate> {
    HKDisplayType *_displayType;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitController;
    HKDateCache *_dateCache;
    HKManualEntryValidationController *_validationController;
    WDAddDataManualEntryTableData *_model;
}

@property (copy, nonatomic) NSDate *initialStartDate;
@property (nonatomic) BOOL savingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updatePreferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)reloadContent;
- (void)addButtonTapped:(id)a0;
- (id)defaultMetadata;
- (void)_dataValidated;
- (void)_showValidationConfirmAlertWithErrorString:(id)a0;
- (void)_showValidationErrorAlertWithErrorString:(id)a0;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)reloadManualEntryItems;
- (void)reloadManualEntryItemsAndReloadTableView:(BOOL)a0;
- (void)saveHKObjectWithCompletion:(id /* block */)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (void)validateMaximumAllowedDurationFor:(id)a0 endDate:(id)a1 competion:(id /* block */)a2;

@end
