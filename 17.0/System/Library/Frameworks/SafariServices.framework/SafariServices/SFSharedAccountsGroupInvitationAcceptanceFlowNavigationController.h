@class KCSharingGroup, NSString, WBSAutoFillQuirksManager, WBSPasswordWarningManager, PMDeviceSharingAvailability;

@interface SFSharedAccountsGroupInvitationAcceptanceFlowNavigationController : UINavigationController <_ASAccountSharingGroupOnBoardingViewControllerDelegate, SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupInvitationAcceptanceRemoveDuplicateCredentialsViewControllerDelegate> {
    KCSharingGroup *_group;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSPasswordWarningManager *_passwordWarningManager;
    PMDeviceSharingAvailability *_deviceSharingAvailability;
    BOOL _isWaitingOnDeviceListToContinueFlow;
    BOOL _hasFetchedDeviceList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_fetchDeviceLists;
- (void)_presentDeviceListViewIfNecessary;
- (void)_presentMoveAccountViewsIfNecessary;
- (void)_presentMoveAccountsOnboardingViewController;
- (void)_presentMoveAccountsViewController;
- (void)_presentRemoveDuplicateCredentialsOnboardingViewController;
- (void)_presentRemoveDuplicateCredentialsViewController;
- (BOOL)_shouldAskUserToDeleteDuplicateCredentials;
- (BOOL)_shouldAskUserToMoveAccounts;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectContinue:(id)a0;
- (void)accountSharingGroupOnBoardingViewControllerDidSelectNotNow:(id)a0;
- (id)initWithGroup:(id)a0 autoFillQuirksManager:(id)a1 passwordWarningManager:(id)a2;
- (void)moveAccountsToGroupPickerTableViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)a0;
- (void)removeDuplicateCredentialsViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)removeDuplicateCredentialsViewControllerDidSelectNotNow:(id)a0;

@end
