@class NSArray, WFTriggerManager, WFDatabase, WFHomeManager, WFEditAutomationCoordinator, NSString;

@interface WFAutomationListViewController : UITableViewController <WFEditAutomationCoordinatorDelegate, WFAutomationListCellDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) NSArray *tableSections;
@property (copy, nonatomic) NSArray *sortedPersonalAutomations;
@property (retain, nonatomic) WFHomeManager *homeManager;
@property (retain, nonatomic) WFEditAutomationCoordinator *editAutomationCoordinator;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithDatabase:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)updateTableViewLayoutMargins;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)automationListCell:(id)a0 didUpdateNotificationsEnabled:(BOOL)a1;
- (void)buildTableSectionsWithConfiguredTriggers:(id)a0 homeTriggers:(id)a1;
- (void)editAutomationCoordinatorDidCancel:(id)a0;
- (void)editAutomationCoordinatorDidFinish:(id)a0;
- (void)flashAutomationForTriggerID:(id)a0;
- (BOOL)showEditViewForItem:(id)a0;
- (BOOL)showHomeAutomationEditorForTriggerItem:(id)a0;
- (BOOL)showPersonalAutomationEditorForConfiguredTrigger:(id)a0;
- (void)updateUIWithConfiguredTriggers:(id)a0 homeTriggers:(id)a1;

@end
