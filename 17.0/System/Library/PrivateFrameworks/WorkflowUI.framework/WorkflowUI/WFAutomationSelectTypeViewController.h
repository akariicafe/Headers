@class NSArray, WFTriggerManager, NSString, WFHomeManager, UISearchController;
@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, WFHomeManagerEventObserver, UISearchResultsUpdating>

@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) NSArray *tableContent;
@property (readonly, nonatomic) WFHomeManager *homeManager;
@property (readonly, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) NSArray *availableFocusModes;
@property (weak, nonatomic) id<WFAutomationSelectTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allKnownTriggersSortedAsInUI;
+ (unsigned long long)automationTypeForHomeManager:(id)a0;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)currentSections;
- (id)allTriggerTypeGroups;
- (id)buildTableContent;
- (void)chooseHomeAutomation:(id)a0;
- (id)initWithTriggerManager:(id)a0;
- (id)triggerForIndexPath:(id)a0;

@end
