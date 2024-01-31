@class NSString, NSArray, HKHealthStore, HKAuthorizationStore, NSDictionary, HKCharacteristicType, WDDisplayTypeDescriptionTableFooterView, HKDisplayType, HKSourceListDataSource, HKDisplayTypeController;

@interface ProfileCharacteristicTypePermissionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver> {
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    NSString *_firstName;
    HKAuthorizationStore *_authorizationStore;
    HKCharacteristicType *_characteristicType;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
    BOOL _isLoaded;
    NSArray *_orderedSectionIdentifiers;
}

@property (retain, nonatomic) HKSourceListDataSource *sourceListDataSource;
@property (copy, nonatomic) NSDictionary *sourceToAuthRecord;

+ (id)orderedSectionIdentifiersForProfile:(long long)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_adjustFooterHeight;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)a0;
- (void)_gatherDataAndRefreshUI;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (long long)_profileSectionIdentifierForIndex:(long long)a0;
- (BOOL)_shouldDisplayNameInFooters;
- (id)_sourceForIndexPath:(id)a0;
- (id)initWithHealthStore:(id)a0 characteristicType:(id)a1 firstName:(id)a2;
- (void)sourceListDataSourceDidUpdate:(id)a0;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;

@end
