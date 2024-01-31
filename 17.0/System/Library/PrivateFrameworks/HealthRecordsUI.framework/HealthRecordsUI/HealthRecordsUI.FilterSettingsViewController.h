@interface HealthRecordsUI.FilterSettingsViewController : HKTableViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ categories;
    void /* unknown type, empty encoding */ selectedCategories;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ selectedAccounts;
    void /* unknown type, empty encoding */ defaultCellIdentifier;
    void /* unknown type, empty encoding */ defaultHeaderIdentifier;
    void /* unknown type, empty encoding */ defaultSectionContentInset;
    void /* unknown type, empty encoding */ defaultSectionCornerRadius;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (id)initWithDelegate:(id)a0 selectedCategories:(id)a1 selectedAccounts:(id)a2;

@end
