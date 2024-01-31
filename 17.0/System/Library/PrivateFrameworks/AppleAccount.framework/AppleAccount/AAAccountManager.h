@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)addAccount:(id)a0;
- (void)reloadAccounts;
- (void)removeAccount:(id)a0;
- (id)accounts;
- (void)dealloc;
- (void)saveAllAccounts;
- (id)accountsEnabledForDataclass:(id)a0;
- (id)_accountStore;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)updateAccount:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (id)accountWithUsername:(id)a0;
- (void).cxx_destruct;
- (id)primaryAccount;
- (id)accountWithPersonID:(id)a0;

@end
