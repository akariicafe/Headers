@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    BOOL _haveRegisteredForAccountsChanged;
}

@property (retain, nonatomic) DAAccount *daAccount;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_accountsChanged:(id)a0;
- (void)loadView;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)a0;
- (id)_navTitle;
- (void)reloadAccount;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (BOOL)shouldVerifyBeforeAccountSave;
- (void)_listenForAccountsChangedNotifications;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;

@end
