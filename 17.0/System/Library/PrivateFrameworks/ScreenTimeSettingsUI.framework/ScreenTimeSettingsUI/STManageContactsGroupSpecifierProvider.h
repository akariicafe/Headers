@class PSSpecifier;

@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *manageContactsRequestSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)_communicationLimitsDidChange:(id)a0;
- (void)_showManageContactsRequestAlert:(id)a0;
- (void)_updateContactManagementState:(long long)a0;

@end
