@interface HealthRecordsUI.SignedClinicalDataMultiRecordViewController : HKTableViewController {
    void /* unknown type, empty encoding */ medicalRecords;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ displayGroups;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUsingInsetStyling:(BOOL)a0;

@end
