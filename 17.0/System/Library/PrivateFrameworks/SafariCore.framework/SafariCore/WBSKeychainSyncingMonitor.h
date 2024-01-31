@class ACMonitoredAccountStore, NSString, OTClique, NSObject;
@protocol OS_dispatch_queue;

@interface WBSKeychainSyncingMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_syncStatusFetchingQueue;
    ACMonitoredAccountStore *_accountStore;
    OTClique *_keychainClique;
    NSString *_primaryAppleAccountAltDSID;
    unsigned long long _cachedKeychainSyncSettingValue;
}

@property (class, readonly, nonatomic) WBSKeychainSyncingMonitor *sharedMonitor;

@property (readonly, nonatomic) unsigned long long keychainSyncSettingValue;
@property (readonly, nonatomic) BOOL isCurrentAppleIDManaged;
@property (readonly, nonatomic) BOOL isUsingiCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (id)init;
- (void)accountCredentialChanged:(id)a0;
- (void).cxx_destruct;
- (void)accountWasModified:(id)a0;
- (void)_fetchKeychainSyncingStatus;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_updateAccountOnInternalQueue:(id)a0;
- (void)_updateKeychainClique;

@end
