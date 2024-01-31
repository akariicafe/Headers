@class NSString, NSDate;

@interface WFAccount : MTLModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSDate *createdAt;
@property (readonly, copy, nonatomic) NSDate *updatedAt;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)accounts;
+ (id)serviceID;
+ (id)accountCache;
+ (id)serviceName;
+ (BOOL)saveAccount:(id)a0;
+ (BOOL)deleteAccount:(id)a0;
+ (id)_accounts;
+ (id)localizedServiceName;
+ (unsigned long long)numberOfAccounts;
+ (id)addAccountObserver:(id /* block */)a0;
+ (void)removeAccountObserver:(id)a0;
+ (unsigned long long)_numberOfAccounts;
+ (void)addAccountObserver:(id /* block */)a0 forService:(id)a1;
+ (BOOL)allowsMultipleAccounts;
+ (void)handleChangeForService:(id)a0;
+ (id)migrate:(id)a0;
+ (void)notifyAccountsChanged;
+ (id)pendingIgnoredNotifications;
+ (void)setShouldIgnoreNotificationForService:(id)a0;
+ (BOOL)shouldIgnoreNotificationForService:(id)a0;
+ (void)useAccountObservers:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void)invalidateWithCompletionHandler:(id /* block */)a0;

@end
