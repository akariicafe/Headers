@class NSString;

@interface WFSoundRecognitionTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTableViewFooterLinkViewDelegate>

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
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)handleDidBecomeActive;
- (BOOL)shouldEnableNextButton;
- (id)infoForSection:(long long)a0;
- (id)customSections;
- (void)footerLinkView:(id)a0 didTapURL:(id)a1;
- (id)footerLinkViewForTableView:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;

@end
