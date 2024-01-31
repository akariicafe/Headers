@class NSArray, NSString;

@interface WFWifiTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, WFTriggerMultiSelectCellDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSArray *allNetworks;
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
- (void)cell:(id)a0 didSelectOptionWithLeftViewSelected:(BOOL)a1 rightViewSelected:(BOOL)a2;
- (void)connectionSwitchChanged:(id)a0;
- (id)customSections;
- (id)fetchWiFiNetworks;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (id)tableViewCellClasses;
- (id)textForSummaryFooterView;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;

@end
