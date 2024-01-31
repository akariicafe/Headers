@interface VisionHealthAppPlugin.VisionPrescriptionAddRecordConfirmationViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ addToHealthButton;
    void /* unknown type, empty encoding */ visionPrescription;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ profileStore;
    void /* unknown type, empty encoding */ sampleType;
    void /* unknown type, empty encoding */ samplePredicate;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dismissAnimated:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)dismissPreview;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)addRecord;

@end
