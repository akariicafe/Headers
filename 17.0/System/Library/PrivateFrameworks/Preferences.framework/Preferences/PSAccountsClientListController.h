@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
    int accountUpdateThrottle;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSpecifiers:(id)a0;
- (id)specifierForID:(id)a0;
- (BOOL)_isAccountModificationDisabledByRestrictions;
- (id)_visibleAccountTypeIDs;
- (id)requestedAccountDataclass;
- (void)updateAccountSpecifier;

@end
