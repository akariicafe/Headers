@class SFTableViewDiffableDataSource, NSString, KCSharingGroup, UIEditMenuInteraction, _ASAccountSharingGroupMemberData;
@protocol SFSharedAccountsGroupMemberDetailViewControllerDelegate;

@interface SFSharedAccountsGroupMemberDetailViewController : UITableViewController <UIEditMenuInteractionDelegate, SFTableViewDiffableDataSourceDelegate, UITableViewDelegate, WBSOngoingSharingGroupProviderSubscriber> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    _ASAccountSharingGroupMemberData *_groupMemberData;
    _ASAccountSharingGroupMemberData *_currentUserGroupMemberData;
    KCSharingGroup *_group;
    unsigned long long _persona;
    UIEditMenuInteraction *_editMenuInteraction;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupMemberDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)dataSource:(id)a0 footerTextForSection:(long long)a1;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (void)_presentContactViewController;
- (BOOL)_canChangeGroupMemberPermissionLevel;
- (id)_cellForItemIdentifier:(id)a0;
- (void)_changeGroupMemberPermissionToPermissionLevel:(long long)a0;
- (void)_configureCanMakeChangesCell:(id)a0;
- (id)_configureMemberDetailsCell:(id)a0;
- (id)_configureMemberHeaderCell:(id)a0;
- (void)_configureRemoveMemberCell:(id)a0;
- (void)_configureViewOnlyCell:(id)a0;
- (id)_indexPathForEditMenuInteraction:(id)a0 withConfiguration:(id)a1;
- (void)_presentAlertTellingUserThatRemovedGroupMemberMightStillHaveAccessToAccounts;
- (void)_presentFailedToUpdatePermissionLevelAlertWithError:(id)a0;
- (void)_presentRemoveMemberConfirmationAlert;
- (void)_reloadDiffableDataSource;
- (void)_removeGroupMember;
- (BOOL)_shouldPreventGroupMemberPermissionFromChangingToReadOnly;
- (BOOL)_shouldShowContactDetails;
- (void)_showPendingRequestUI:(BOOL)a0;
- (void)_updatePermissionOnExistingGroupForGroupMemberToPermissionLevel:(long long)a0;
- (void)groupProviderReceivedUpdates:(id)a0;
- (id)initWithGroupMemberData:(id)a0 group:(id)a1 groupMemberDataForCurrentUser:(id)a2 persona:(unsigned long long)a3;

@end
