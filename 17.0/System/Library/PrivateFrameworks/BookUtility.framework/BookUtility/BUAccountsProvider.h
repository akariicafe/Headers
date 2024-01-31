@class NSMutableDictionary, NSString, ACAccount, NSNumber, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BUAccountsProvider : NSObject <BUAccountsProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _storeAccountCacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _appleAccountCacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tccObserverLock;
}

@property (class, readonly) BUAccountsProvider *sharedProvider;

@property (readonly, nonatomic) BOOL hasCloudKitEntitlement;
@property (retain, nonatomic) id<NSObject> appleAccountDidChangeNotificationRegisteredToken;
@property (retain, nonatomic) id<NSObject> storeAccountDidChangeNotificationRegisteredToken;
@property (nonatomic) int tccObserverToken;
@property (retain, nonatomic) ACAccount *primaryAppleAccount;
@property (retain, nonatomic) ACAccount *activeStoreAccount;
@property (retain, nonatomic) ACAccount *localStoreAccount;
@property (copy, nonatomic) NSNumber *cachedIsPrimaryAccountManagedAppleID;
@property (copy, nonatomic) NSNumber *cachedIsStoreAccountManagedAppleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSMutableDictionary *notifyBlocks;
@property (retain, nonatomic) NSMutableDictionary *observerHashTables;
@property (retain, nonatomic) NSMutableDictionary *accountIdentifiers;
@property (readonly, copy, nonatomic) NSString *currentStorefront;
@property (readonly, nonatomic) NSNumber *lastUsedStoreAccountID;
@property (readonly, copy, nonatomic) NSString *iCloudIdentity;
@property (readonly, copy, nonatomic) NSString *iCloudAccountName;
@property (readonly, nonatomic) BOOL isPrimaryAccountManagedAppleID;
@property (readonly, nonatomic) BOOL isStoreAccountManagedAppleID;
@property (readonly, nonatomic) BOOL isUserSignedInToiTunes;
@property (readonly, nonatomic) BOOL isUserSignedInToiCloud;
@property (readonly, nonatomic) BOOL isGlobalICloudDriveSyncOptedIn;
@property (readonly, nonatomic) BOOL hasRecommendationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)ubiquityIdentityDidChange;
- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)a0;
- (void)addObserver:(id)a0 accountTypes:(unsigned long long)a1;
- (void)removeObserver:(id)a0 accountTypes:(unsigned long long)a1;
- (long long)_removeObserver:(id)a0 forAccountType:(unsigned long long)a1;
- (long long)_addObserver:(id)a0 forAccountType:(unsigned long long)a1;
- (long long)_observerCountForAccountType:(unsigned long long)a0;
- (id)_observersForAccountType:(unsigned long long)a0;
- (void)_registerNotificationForAccountTypeIfNeeded:(unsigned long long)a0;
- (unsigned long long)_singleAccountTypeForNotification:(id)a0;
- (void)_unregisterNotificationForAccountType:(unsigned long long)a0;
- (void)clearLastUsedStoreAccountID;
- (BOOL)detectedUserSwitchWithId:(id)a0 outSignedIn:(BOOL *)a1 outSignedOut:(BOOL *)a2 outAccountNumberChanged:(BOOL *)a3;
- (id)l_activeStoreAccount;
- (id)l_primaryAppleAccount;
- (void)nq_resetAppleAccountCachedValues;
- (void)nq_resetStoreAccountCachedValues;
- (void)nq_setupNotifyBlockForAccountType:(unsigned long long)a0 currentAccountIdentifier:(id)a1;
- (void)nq_teardownNotifyBlockForAccountType:(unsigned long long)a0;
- (void)nq_updateAccountIdentifierAndNotifyObserversForAccountType:(unsigned long long)a0;
- (void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
- (void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
- (void)observeTCCAccessChangeNotificationIfNeeded;
- (void)updateLastUsedStoreAccountID;

@end
