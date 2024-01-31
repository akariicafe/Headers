@class NSString, ICDelegateAccountStore, ICUserIdentityStoreCoding, ICLocalStoreAccountProperties, ICValueHistory, NSObject, ICDelegateAccountStoreOptions;
@protocol OS_dispatch_queue, ICUserIdentityStoreBackend;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id<ICUserIdentityStoreBackend> _backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    unsigned long long _lastKnownActiveAccountTimestamp;
    unsigned long long _lastKnownActiveLockerAccountTimestamp;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly, nonatomic) ICUserIdentityStore *nullIdentityStore;
@property (class, readonly, nonatomic) ICUserIdentityStore *defaultIdentityStore;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identityStoreStyle;
@property (readonly, nonatomic) id<ICUserIdentityStoreBackend> _unsafeBackend;
@property (readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_claimSingleWriterStatus;
+ (id)testingIdentityStoreWithSingleWriterService:(id)a0;
+ (id)testingIdentityStoreWithDatabasePath:(id)a0;

- (void)removePropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_openDelegateAccountStoreForUserIdentity:(id)a0 error:(id *)a1;
- (id)_initCommon;
- (void)dealloc;
- (void)updatePropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)removeDelegateTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithStyle:(long long)a0 delegateAccountStoreOptions:(id)a1;
- (void)insertPropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_reloadForExternalChange;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)a0;
- (BOOL)_saveIdentityProperties:(id)a0 andPostAccountChangeNotification:(BOOL)a1 forUserIdentity:(id)a2 error:(id *)a3;
- (void)_registerForDelegateAccountStoreNotifications:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)insertPropertiesForUserIdentity:(id)a0 andPostAccountChangeNotification:(BOOL)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)a0;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)a0;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (id)userIdentitiesForManageableAccountsWithError:(id *)a0;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)a0;
- (void)userIdentityStoreBackendDidChange:(id)a0;
- (id)_existingIdentityPropertiesForUserIdentity:(id)a0 error:(id *)a1;
- (void)disableLockerAccountWithDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)_openDelegateAccountStoreWithError:(id *)a0;
- (void)getDelegationUUIDsForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)removeDelegateTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_importValuesFromCodingHelper:(id)a0;
- (id)DSIDForUserIdentity:(id)a0 outError:(id *)a1;
- (void)_assertNonNullIdentityStoreForSelector:(SEL)a0;
- (void)enumerateDelegateTokensWithType:(long long)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)updatePropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_dsidForUserIdentity:(id)a0 error:(id *)a1;
- (id)getPropertiesForUserIdentity:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)setActiveLockerAccountWithDSID:(id)a0 completionHandler:(id /* block */)a1;
- (id)getVerificationContextForUserIdentity:(id)a0 error:(id *)a1;
- (void)setActiveAccountWithDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)insertPropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1;
- (void)synchronize;
- (void)_delegateAccountStoreDidChangeNotification:(id)a0;
- (id)getPropertiesForActiveICloudAccountReturningError:(id *)a0;
- (id)_icValidStoreAccountsFromACAccounts:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)a0;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)a0;
- (void)_dispatchDidChangeNotification:(BOOL)a0 didDelegateAccountStoreChange:(BOOL)a1;
- (BOOL)insertPropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (void)_initializeLocalStoreAccountProperties;
- (id)initWithCoder:(id)a0;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)a0;
- (BOOL)_allowsDelegationForUserIdentity:(id)a0;
- (id)_dsidForTimestamp:(unsigned long long)a0 history:(id)a1;
- (void)getPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;

@end
