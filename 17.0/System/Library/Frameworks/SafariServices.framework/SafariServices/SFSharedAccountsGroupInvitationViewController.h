@class KCSharingGroup, NSString, NSArray, OBTrayButton;
@protocol SFSharedAccountsGroupInvitationViewControllerDelegate;

@interface SFSharedAccountsGroupInvitationViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_groupMembersData;
    OBTrayButton *_acceptButton;
    OBTrayButton *_declineButton;
    unsigned long long _persona;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupInvitationViewControllerDelegate> delegate;
@property (readonly, nonatomic) KCSharingGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)initWithGroup:(id)a0;
- (void)_acceptButtonSelected;
- (void)_addJoinAndCancelButtonsToButtonTray;
- (void)_addLoadingIndicatorAndMakeButtonsInactive;
- (void)_cancelButtonSelected;
- (void)_declineButtonSelected;
- (void)_setBackgroundColorOnTableViewHeaderFooterView:(id)a0;

@end
