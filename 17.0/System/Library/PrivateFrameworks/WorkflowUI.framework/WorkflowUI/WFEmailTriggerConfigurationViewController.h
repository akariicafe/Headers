@class NSArray, UIViewController, NSString;

@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate, WFTriggerTableViewControllerDelegate>

@property (retain, nonatomic) NSArray *allAccounts;
@property (nonatomic) BOOL showingAccounts;
@property (nonatomic) BOOL showingRecipients;
@property (weak, nonatomic) UIViewController *senderFieldViewController;
@property (weak, nonatomic) UIViewController *recipientFieldViewController;
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
- (void)updateUI;
- (id)supportedAccountTypeIdentifiers;
- (id)infoForSection:(long long)a0;
- (id)accountFromAccountIdentifier:(id)a0;
- (id)customSections;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (void)recipientViewControllerDidFinish:(id)a0 cancelled:(BOOL)a1;
- (void)setUpAccounts;
- (void)showSubjectContainsAlert;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;

@end
