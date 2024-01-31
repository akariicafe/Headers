@class NSArray, WBSKeychainCredentialNotificationMonitor, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSGeneratedPasswordStore : NSObject {
    NSMutableArray *_cachedGeneratedPasswords;
    NSObject<OS_dispatch_queue> *_queue;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    BOOL _shouldIgnoreKeychainUpdates;
}

@property (class, readonly, nonatomic) WBSGeneratedPasswordStore *sharedStore;

@property (readonly, nonatomic) NSDate *currentExpirationDate;
@property (readonly, nonatomic) NSArray *allUnexpiredGeneratedPasswords;

- (id)init;
- (void)_reset;
- (void)preWarm;
- (void).cxx_destruct;
- (void)addGeneratedPassword:(id)a0 forProtectionSpace:(id)a1 inPrivateBrowsingSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)generatedPasswordsForProtectionSpace:(id)a0 options:(unsigned long long)a1;
- (void)removeGeneratedPassword:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateGeneratedPassword:(id)a0 withPassword:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadIfNeeded;
- (id)_generatedPasswordsFilteringExpiredPasswords:(id)a0 olderThanDate:(id)a1;
- (void)_purgeExpiredPasswordsOnInternalQueue:(id)a0;
- (void)_removeAllGeneratedPasswordsOnInternalQueue;
- (void)synchronouslyRemoveGeneratedPasswordsNewerThanDate:(id)a0;

@end
