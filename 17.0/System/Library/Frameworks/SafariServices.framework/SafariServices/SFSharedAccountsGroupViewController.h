@class SFTableViewDiffableDataSource, NSString, UITableViewCell, KCSharingGroup, _ASAccountSharingGroupMemberData, UITableView;
@protocol SFSharedAccountsGroupViewControllerDelegate;

@interface SFSharedAccountsGroupViewController : UITableViewController <SFSharedAccountsGroupMemberDetailViewControllerDelegate, SFSharedAccountsGroupMemberPickerViewControllerDelegate, SFTableViewDiffableDataSourceDelegate, MFMessageComposeViewControllerDelegate, SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate, UITableViewDelegate, UITextFieldDelegate, WBSOngoingSharingGroupProviderSubscriber> {
    UITableView *_tableView;
    SFTableViewDiffableDataSource *_diffableDataSource;
    UITableViewCell *_groupNameTableViewCell;
    unsigned long long _persona;
    KCSharingGroup *_group;
    _ASAccountSharingGroupMemberData *_groupMemberDataForCurrentUser;
    BOOL _isShowingActivityIndicator;
    BOOL _shouldStartAcceleratedAddMembersFlow;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupCreationViewControllerWithInitialParticipants:(id)a0 prepopulatedName:(id)a1;
+ (id)groupManagementViewControllerForGroup:(id)a0;
+ (id)groupManagementViewControllerForGroup:(id)a0 shouldStartAcceleratedAddMembersFlow:(BOOL)a1;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_cancelButtonPressed;
- (void)_doneButtonPressed;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)dataSource:(id)a0 footerTextForSection:(long long)a1;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)_groupOwnerCell;
- (id)_leaveGroupCell;
- (void)_moveContributedCredentialsBackToPersonalKeychainAndDeleteGroup;
- (id)_addGroupMembersCell;
- (void)_addGroupMembersToKCSharingGroup:(id)a0;
- (id)_cellForItemIdentifier:(id)a0;
- (void)_configureGroupMemberCell:(id)a0 withData:(id)a1;
- (void)_configureNavigationBar;
- (void)_configureNavigationBarForCreatePersona;
- (void)_configureNavigationBarForManagePersona;
- (void)_createButtonPressed;
- (void)_deleteGroup;
- (id)_deleteGroupCell;
- (void)_didSelectRowForGroupMemberData:(id)a0;
- (void)_editButtonPressed;
- (id)_groupNameTextFieldCell;
- (void)_groupNameTextFieldChanged;
- (void)_groupNameTextFieldDidBeginEditing;
- (id)_initWithPersona:(unsigned long long)a0 group:(id)a1;
- (long long)_itemTypeForIdentifier:(id)a0;
- (void)_leaveGroup;
- (void)_moveContributedCredentialsBackToPersonalKeychainAndLeaveGroup;
- (void)_presentDeleteGroupConfirmationAlert;
- (void)_presentErrorAlertWithString:(id)a0;
- (void)_presentGroupMemberPickerViewController;
- (void)_presentLeaveGroupConfirmationAlert;
- (void)_reloadDiffableDataSource;
- (void)_removeGroupMemberFromKCSharingGroup:(id)a0;
- (void)_saveButtonPressed;
- (void)_setIsRunningActivityForUserToWaitOn:(BOOL)a0;
- (void)_showGroupInviteMessageComposeSheetForGroup:(id)a0 invitedGroupMemberData:(id)a1;
- (void)_showGroupInviteMessagePreviewForGroup:(id)a0 invitedGroupMembers:(id)a1;
- (void)_startAcceleratedAddMembersFlowIfNeeded;
- (void)groupMemberDetailViewController:(id)a0 changedPermissionForGroupMember:(id)a1 toPermissionLevel:(long long)a2;
- (void)groupMemberDetailViewController:(id)a0 removedGroupMember:(id)a1;
- (void)groupMessageInvitePreviewViewControllerDidSelectCancel:(id)a0;
- (void)groupMessageInvitePreviewViewControllerDidSelectContinue:(id)a0;
- (void)groupProviderReceivedUpdates:(id)a0;
- (void)memberPickerViewController:(id)a0 addedRecipients:(id)a1;

@end
