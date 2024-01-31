@class UINavigationController, NSString, AAUIInheritanceShareAccessKeyOptionsViewController, AAUIInviteMessageFlowController;

@interface AAUIMyPendingBeneficiaryActionHandler : AAUIMyBeneficiaryActionHandler <AAUIInheritanceSetupFlowDelegate, AAUIInviteMessageFlowControllerDelegate> {
    UINavigationController *_navigationController;
    AAUIInheritanceShareAccessKeyOptionsViewController *_shareAccessKeyOptionsViewController;
    AAUIInviteMessageFlowController *_inviteFlowController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_doneButton;
- (id)_appleAccount;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_checkMessageEligibility;
- (void)_dismissAndNavigateToDateOfBirthSettings;
- (void)_showAlertWithTitle:(id)a0 message:(id)a1;
- (void)_showIncompatibleDeviceAlert;
- (void)_showPrintPreview;
- (void)_showSetupCompleteWithShareTypePrint;
- (void)_startInviteMessageFlow;
- (void)doPrimaryAction:(id)a0 specifier:(id)a1;
- (void)inheritanceDidSelectSharingOption:(unsigned long long)a0;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)a0;
- (void)inviteMessageFlowDidFinish:(id)a0;
- (void)inviteMessageWasSent:(id)a0 completion:(id /* block */)a1;

@end
