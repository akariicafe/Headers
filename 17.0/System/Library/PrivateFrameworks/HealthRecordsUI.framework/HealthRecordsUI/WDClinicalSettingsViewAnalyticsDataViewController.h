@class NSArray, _UIContentUnavailableView, HKHealthRecordsStore;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths;
@property (retain) _UIContentUnavailableView *noDataView;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)description;
- (void).cxx_destruct;
- (void)fetchClinicalOptInDataCollectionFilePaths;

@end
