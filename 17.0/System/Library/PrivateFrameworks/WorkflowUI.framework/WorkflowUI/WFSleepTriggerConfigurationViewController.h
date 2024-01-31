@class WFHealthFeatureAvailability, NSString;

@interface WFSleepTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver>

@property (readonly, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateUI;
- (void)healthFeatureAvailability:(id)a0 sleepOnboardingStatusDidChange:(unsigned long long)a1;
- (BOOL)shouldEnableNextButton;
- (id)infoForSection:(long long)a0;
- (id)customSections;
- (id)footerLinkViewForTableView:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)setupParameterSectionCell:(id)a0 atRow:(long long)a1;
- (id)tableViewCellClasses;

@end
