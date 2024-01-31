@class NSString, NSArray, PSSpecifier, ACAccountStore, ACUIAccountViewProvidersManager;
@protocol ACUIAddAccountDataSource;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {
    BOOL _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier *_gmailSpecifier;
    ACAccountStore *_accountStore;
}

@property (retain) NSString *filteredDataclass;
@property (retain) id<ACUIAddAccountDataSource> addAccountDataSource;
@property (readonly, nonatomic) ACUIAccountViewProvidersManager *viewProvidersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_debugStringForAction:(long long)a0;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_dismissAndBecomeFirstResponder;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)a0;
- (void)_addAccountSpecifierWasTapped:(id)a0;
- (void)_alertIfAccountTypePreventsMultiples:(id)a0 withCompletion:(id /* block */)a1;
- (void)_createCustomControlledAccountTapped:(id)a0;
- (void)_presentPrimaryAppleIDSignInController:(id)a0;
- (id)_specifierForAOLAccount;
- (id)_specifierForCustomControlledAccountWithName:(id)a0 accountTypeID:(id)a1;
- (id)_specifierForExchangeAccount;
- (id)_specifierForGmailAccount;
- (id)_specifierForOutlookAccount;
- (id)_specifierForPrimaryiCloudAccount;
- (id)_specifierForRegionalAccountType:(id)a0;
- (id)_specifierForYahooAccount;
- (id)_specifierForiCloudAccount;
- (id)_specifiersForRegionalMailAccounts;
- (id)giantSpecifierWithName:(id)a0 forAccountTypeID:(id)a1;
- (void)setupViewControllerDidDismiss:(id)a0;
- (BOOL)shouldAddSpecifierForAccountTypeID:(id)a0;
- (BOOL)shouldAddSpecifierForOtherAccountTypes;
- (void)signInControllerDidCancel;
- (void)signInControllerDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (id)specifierForOtherAccounts;

@end
