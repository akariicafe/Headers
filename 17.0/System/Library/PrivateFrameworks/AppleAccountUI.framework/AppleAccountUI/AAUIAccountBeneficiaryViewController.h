@class ACAccount, AAUIContactsProvider, NSArray, AAAccountBeneficiaryManagementViewModel, AIDAAccountManager, NSObject, AAUIInheritanceSetupFlowController;
@protocol OS_dispatch_queue;

@interface AAUIAccountBeneficiaryViewController : PSListController {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myBeneficiaries;
    NSArray *_myBenefactors;
    AAUIInheritanceSetupFlowController *_inheritanceSetupFlowController;
    AAAccountBeneficiaryManagementViewModel *_viewModel;
    ACAccount *_idmsAccount;
}

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (BOOL)_canBeBeneficiary;
- (BOOL)_canHaveBeneficiary;
- (void)_showViewController:(id)a0;
- (id)_addBeneficiarySpecifier;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_fetchAllBeneficiaryContacts;
- (id)_idmsAccount;
- (void)_learnMoreWasTapped;
- (void)_myBenefactorWasTapped:(id)a0;
- (id)_myBenefactorsGroupSpecifier;
- (id)_myBenefactorsSpecifiers;
- (id)_myBeneficiariesGroupSpecifier;
- (id)_myBeneficiariesSpecifiers;
- (void)_myBeneficiaryWasTapped:(id)a0;
- (id)_noBenefactorSpecifier;
- (void)_showAddBeneficiary;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;
- (id)initWithAccountManager:(id)a0 highlightRowIdentifier:(id)a1;

@end
