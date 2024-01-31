@class NSString, NSArray, AAUISpinnerManager, AAUIContactsProvider, AAUIGrandSlamRemoteUIPresenter, AAUICustodianSetupFlowController, AKAppleIDAuthenticationController, NSObject, AAAccountRecoveryManagementViewModel, AIDAAccountManager, AACustodianController, ACAccount;
@protocol OS_dispatch_queue;

@interface AAUIAccountRecoveryViewController : PSListController <AAUIGrandSlamRemoteUIPresenterDelegate> {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myCustodians;
    NSArray *_myCustodianshipOwners;
    AAUICustodianSetupFlowController *_custodianSetupFlowController;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUISpinnerManager *_spinnerManager;
    AACustodianController *_custodianController;
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _recoveryKeyStateIsEnabled;
    ACAccount *_idmsAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)_appleAccount;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (BOOL)_canBeCustodian;
- (BOOL)_canHaveCustodian;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)_showViewController:(id)a0;
- (id)_accountRecoveryDetailsSpecifier;
- (id)_accountRecoveryDetailsSpecifierForIneligibleAccount;
- (id)_addRecoveryContactSpecifier;
- (void)_beginObservingNotifications;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_custodianshipOwnerWasTapped:(id)a0;
- (void)_fetchAllCustodianContacts;
- (void)_fetchRecoveryKeyUpdate;
- (void)_footerLearnMoreWasTapped;
- (id)_idmsAccount;
- (BOOL)_isEligibleForRecoveryKey;
- (void)_learnMoreWasTapped;
- (void)_myRecoveryContactWasTapped:(id)a0;
- (id)_myRecoveryOptionsSpecifiers;
- (void)_printableSummaryLearnMoreTapped;
- (id)_recoveryContactForGroupSpecifier;
- (id)_recoveryContactForSpecifiers;
- (id)_recoveryKeySpecifiers;
- (id)_recoveryKeyState;
- (id)_recoveryOptionsGroupSpecifier;
- (id)_recoveryOptionsGroupSpecifierForIneligibleAccount;
- (void)_rkFooterLearnMoreTapped;
- (void)_showAddCustodian;
- (void)_showRecoveryKey:(id)a0;
- (void)_startSpinnerInSpecifier:(id)a0;
- (void)_stopObservingNotifications;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncAccountRecoveryFactorsWithCompletion:(id /* block */)a0;
- (void)_syncTrustedContactsFromCloudKit;
- (id)initWithAccountManager:(id)a0 highlightRowIdentifier:(id)a1;

@end
