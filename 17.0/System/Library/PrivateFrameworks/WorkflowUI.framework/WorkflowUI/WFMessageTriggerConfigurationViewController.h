@class NSString;

@interface WFMessageTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate>

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
- (void)updateUI;
- (id)infoForSection:(long long)a0;
- (id)customSections;
- (id)displayForSelectedContacts:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (void)recipientViewControllerDidFinish:(id)a0 cancelled:(BOOL)a1;
- (void)showMessageContainsAlert;
- (id)tableViewCellClasses;

@end
