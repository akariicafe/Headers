@class AABeneficiaryInfo, NSString, AAUIOBWelcomeController, UINavigationController, AAUIContactsProvider, AALocalContactInfo, AAUIInheritanceShareAccessKeyOptionsViewController, ACAccount, AAUIInviteMessageFlowController;

@interface AAUIInheritanceSetupFlowController : NSObject <AAUIInheritanceSetupFlowDelegate, CNContactPickerDelegate, AAUIAccountContactSelectorDelegate, AAUIInviteMessageFlowControllerDelegate, UIPrintInteractionControllerDelegate> {
    ACAccount *_appleAccount;
    AALocalContactInfo *_selectedContact;
    AAUIContactsProvider *_contactsProvider;
    AABeneficiaryInfo *_selectedBeneficiary;
    NSString *_setupAuthToken;
    AAUIOBWelcomeController *_firstTimeSetupVC;
    AAUIOBWelcomeController *_shareDataVC;
    AAUIInviteMessageFlowController *_inviteFlowController;
    AAUIInheritanceShareAccessKeyOptionsViewController *_shareAccessKeyOptionsViewController;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_doneButton;
- (id)initWithAccount:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)_validateAccountWithCompletion:(id /* block */)a0;
- (void)_beginAddBeneficiaryFlow;
- (void)_dismissAndNavigateToDateOfBirthSettings;
- (void)_fetchSuggestedContacts;
- (void)_setupBeneficiary;
- (void)_shareDataDidContinue;
- (void)_showAlertWithTitle:(id)a0 message:(id)a1;
- (void)_showContactSelector:(id)a0;
- (void)_showDefaultContactPicker;
- (void)_showDefaultContactPickerWithCancel;
- (void)_showIntro;
- (void)_showPrintPreview;
- (void)_showSetupCompleteWithShareTypePrint;
- (void)_showShareAccessKey;
- (void)_showShareData;
- (void)_startInviteMessageFlow;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)accountContactSelector:(id)a0 didSelectContact:(id)a1;
- (void)accountContactSelectorShowOtherContacts:(id)a0;
- (void)inheritanceDidSelectSharingOption:(unsigned long long)a0;
- (id)initWithAccount:(id)a0 navigationController:(id)a1;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)a0;
- (void)inviteMessageFlowDidFinish:(id)a0;
- (void)inviteMessageFlowWasCancelled:(id)a0;
- (void)inviteMessageWasSent:(id)a0 completion:(id /* block */)a1;

@end
