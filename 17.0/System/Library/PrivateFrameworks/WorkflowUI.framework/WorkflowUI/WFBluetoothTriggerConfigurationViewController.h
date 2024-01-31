@class NSArray, NSString;

@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, WFTriggerMultiSelectCellDelegate, UITableViewDataSource, UITableViewDelegate>

@property (copy, nonatomic) NSArray *allDevices;
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
- (id)infoForSection:(long long)a0;
- (void)cell:(id)a0 didSelectOptionWithLeftViewSelected:(BOOL)a1 rightViewSelected:(BOOL)a2;
- (id)customSections;
- (void)fetchBluetoothDevices;
- (void)finishWithDevices:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;

@end
