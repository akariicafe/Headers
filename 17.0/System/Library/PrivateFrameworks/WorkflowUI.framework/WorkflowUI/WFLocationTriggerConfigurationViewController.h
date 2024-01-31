@class NSString, NSDateFormatter;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate>

@property (nonatomic) BOOL isLocationBasedAlertsEnabled;
@property (readonly, nonatomic) BOOL isArrive;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)infoForSection:(long long)a0;
- (void)checkLocationAuthorization;
- (id)customSections;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)locationPicker:(id)a0 didFinishWithValue:(id)a1;
- (void)locationPickerDidCancel:(id)a0;
- (void)presentNavigationControllerWithRootViewController:(id)a0;
- (id)tableViewCellClasses;
- (id)textForSummaryFooterView;
- (void)timeRangePickerViewController:(id)a0 didPickStartTime:(id)a1 endTime:(id)a2;
- (void)timeRangePickerViewControllerDidCancel:(id)a0;

@end
