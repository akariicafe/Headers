@class NSUUID, NSString, AAUIOBWelcomeController, UINavigationController, AAUIGrandSlamRemoteUIPresenter, AALocalContactInfo, NSDictionary, AACustodianController, AAUIChooseContactController, AIDAAccountManager, AAUIInviteMessageFlowController;
@protocol AAUICustodianSetupFlowControllerDelegate;

@interface AAUICustodianSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate> {
    AIDAAccountManager *_accountManager;
    AACustodianController *_custodianController;
    AAUIOBWelcomeController *_firstTimeSetupVC;
    NSDictionary *_authResults;
    AALocalContactInfo *_invitedContact;
    NSUUID *_custodianshipID;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUIInviteMessageFlowController *_inviteFlowController;
    AAUIChooseContactController *_chooseContactController;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL isWalrusEnabled;
@property (nonatomic) BOOL forceInlinePresentation;
@property (weak, nonatomic) id<AAUICustodianSetupFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)initWithAccountManager:(id)a0;
- (void)_showActivityIndicator;
- (void)remoteUIDidDismiss:(id)a0;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)_hideActivityIndicator;
- (void)startAddingDataRecoveryService:(id)a0;
- (void)_inviteContact:(id)a0;
- (void)_validateAccountWithCompletion:(id /* block */)a0;
- (void)_beginAddRecoveryContactFlow;
- (void)_cancelCustodianInvite;
- (void)_dismissCFUIfNeeded;
- (void)_displayAlertForNotReachableContact:(id)a0;
- (void)_fetchSuggestedContacts;
- (void)_loadRemoteUIPresenterRequest:(id)a0;
- (void)_removeRecoveryKeyAndDismissCFUIfNeeded;
- (void)_showAlertWithTitle:(id)a0 message:(id)a1;
- (void)_showChooseContact;
- (void)_showChooseContactWithCancel;
- (void)_showDataRecoveryServiceEnableUI;
- (void)_showDataRecoveryServiceEnableUIWithPresenter:(id)a0 modal:(BOOL)a1;
- (void)_showDeviceUpgradeUI;
- (void)_showFirstTimeSetup;
- (void)_showSuggestedContactSelector:(id)a0;
- (void)_startInviteMessageFlow;
- (void)_verifyAndInviteContact:(id)a0;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)accountContactSelector:(id)a0 didSelectContact:(id)a1;
- (void)accountContactSelectorShowOtherContacts:(id)a0;
- (void)chooseContactController:(id)a0 didSelectContact:(id)a1;
- (id)initWithAccountManager:(id)a0 navigationController:(id)a1;
- (void)inviteMessageFlowDidFinish:(id)a0;
- (void)inviteMessageFlowWasCancelled:(id)a0;

@end
