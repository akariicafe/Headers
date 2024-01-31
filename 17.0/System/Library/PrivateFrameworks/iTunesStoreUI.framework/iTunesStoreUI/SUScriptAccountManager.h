@class NSArray, NSMutableArray, NSLock;

@interface SUScriptAccountManager : NSObject {
    NSMutableArray *_accounts;
    NSLock *_lock;
}

@property (readonly, retain) NSArray *accounts;

+ (id)beginAccountManagerSessionForObject:(id)a0;
+ (void)endAccountManagerSessionForObject:(id)a0;

- (id)init;
- (void)dealloc;
- (id)accountForDSID:(id)a0;
- (void)_accountsChangedNotification:(id)a0;
- (void)_dispatchEvent:(id)a0 forName:(id)a1;
- (void)_ntsReloadAccounts;

@end
