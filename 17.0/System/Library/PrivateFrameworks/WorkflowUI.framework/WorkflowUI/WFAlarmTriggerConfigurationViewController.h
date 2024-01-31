@class MTAlarmDataSource, NSString;

@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate>

@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource;
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
- (id)extraTextForCellInSection:(id)a0 item:(id)a1;
- (id)infoForSection:(long long)a0;
- (long long)accessoryTypeForCellInSection:(id)a0 item:(id)a1;
- (void)alarmChooserViewController:(id)a0 didFinishWithChosenAlarms:(id)a1;
- (void)alarmChooserViewControllerDidCancel:(id)a0;
- (id)customSections;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentAlarmChooserViewController;
- (id)tableViewCellClasses;
- (id)titleForCellInSection:(id)a0 item:(id)a1;

@end
