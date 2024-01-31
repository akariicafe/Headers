@class NSArray;

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) NSArray *managedAccounts;
@property (nonatomic) BOOL isReloadingManagedAccounts;

- (void)_accountCellWasTappedWithSpecifier:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)reloadNotificationPosted:(id)a0;
- (id)initWithAccountManager:(id)a0;
- (void)_reloadManagedAccounts;

@end
