@class NSObject, NSString, NSMutableDictionary, ACAccount, NSNumber, ICMonitoredAccountStore;
@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICMonitoredAccountStoreObserver, ICUserIdentityStoreBackend> {
    ICMonitoredAccountStore *_monitoredAccountStore;
    NSMutableDictionary *_identityPropertiesCache;
    ACAccount *_primaryICloudAccount;
    NSNumber *_activeAccountDSID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;

- (void)_applyLocalStoreAccountProperties:(id)a0 toAccount:(id)a1;
- (id)init;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)a0;
- (id)storeAccountForDSID:(id)a0 error:(id *)a1;
- (id)identityPropertiesForDSID:(id)a0 error:(id *)a1;
- (BOOL)replaceIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)localStoreAccountPropertiesWithError:(id *)a0;
- (void)monitoredAccountStore:(id)a0 didChangeCredentialsForAccount:(id)a1;
- (BOOL)disableLockerAccountDSID:(id)a0 error:(id *)a1;
- (void)_applyIdentityProperties:(id)a0 toAccount:(id)a1;
- (id)_newUserIdentityPropertiesForAccount:(id)a0;
- (id)_userIdentityPropertiesForAccount:(id)a0;
- (id)allStoreAccountsWithError:(id *)a0;
- (id)activeLockerAccountDSIDWithError:(id *)a0;
- (BOOL)updateActiveLockerAccountDSID:(id)a0 error:(id *)a1;
- (id)verificationContextForDSID:(id)a0 error:(id *)a1;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)a0;
- (id)allStoreAccountDSIDsWithError:(id *)a0;
- (void)_synchronize;
- (void)removeIdentityForDSID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)setLocalStoreAccountProperties:(id)a0 error:(id *)a1;
- (void)_notifyDelegateOfBackendChange;
- (id)verificationContextForAccountEstablishmentWithError:(id *)a0;
- (id)allManageableStoreAccountDSIDsWithError:(id *)a0;
- (void)synchronize;
- (BOOL)updateActiveAccountDSID:(id)a0 error:(id *)a1;
- (void)monitoredAccountStore:(id)a0 didRemoveAccount:(id)a1;
- (void)monitoredAccountStore:(id)a0 didUpdateAccount:(id)a1;
- (id)activeAccountDSIDWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)localStoreAccountWithError:(id *)a0;
- (void)monitoredAccountStore:(id)a0 didAddAccount:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;

@end
