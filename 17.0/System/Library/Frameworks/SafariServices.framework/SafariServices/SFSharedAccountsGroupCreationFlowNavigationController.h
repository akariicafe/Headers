@class KCSharingGroup, NSString, WBSSavedAccount, NSArray, WBSPasswordWarningManager, PMDeviceSharingAvailability;
@protocol SFSharedAccountsGroupCreationFlowNavigationControllerDelegate;

@interface SFSharedAccountsGroupCreationFlowNavigationController : UINavigationController <_ASAccountSharingGroupOnBoardingViewControllerDelegate, MFMessageComposeViewControllerDelegate, SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate, SFSharedAccountsGroupViewControllerDelegate> {
    NSArray *_participants;
    KCSharingGroup *_group;
    long long _originType;
    WBSPasswordWarningManager *_passwordWarningManager;
    PMDeviceSharingAvailability *_deviceSharingAvailability;
    BOOL _isWaitingOnDeviceListToContinueFlow;
    BOOL _hasFetchedDeviceList;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupCreationFlowNavigationControllerDelegate> sharingDelegate;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToMoveToNewlyCreatedGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)_completeFlowWithGroup:(id)a0 error:(id)a1;
- (id)_composeSharedCredentialsGroupCreationViewController;
- (void)_fetchDeviceLists;
- (void)_presentDeviceListViewIfNecessary;
- (void)_presentErrorAlertForFailingToMoveAccountToGroup:(id)a0;
- (void)_presentSharedCredentialsGroupCreationViewController;
- (void)_showGroupInviteMessageComposeSheetForGroupWithInvitedGroupMemberData:(id)a0;
- (void)_showGroupInviteMessagePreviewIfNecessary;
- (void)_showMoveAccountsPickerIfNecessary;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectCancel:(id)a0;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectContinue:(id)a0;
- (void)createGroupViewController:(id)a0 completedWithGroup:(id)a1 error:(id)a2;
- (void)groupMessageInvitePreviewViewControllerDidSelectCancel:(id)a0;
- (void)groupMessageInvitePreviewViewControllerDidSelectContinue:(id)a0;
- (id)initWithOriginType:(long long)a0 initialParticipants:(id)a1 passwordWarningManager:(id)a2;
- (void)moveAccountsToGroupPickerTableViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)a0;

@end
