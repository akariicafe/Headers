@class ACMonitoredAccountStore, NSString, WBSAutoFillQuirksManager, OTClique, NSObject;
@protocol OS_dispatch_queue;

@interface ASFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    OTClique *_keychainClique;
    NSString *_primaryAppleAccountAltDSID;
    WBSAutoFillQuirksManager *_quirksManager;
}

@property (class, readonly, nonatomic) ASFeatureManager *sharedManager;

@property (readonly, nonatomic, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, nonatomic, getter=canKeychainSyncBeEnabled) BOOL canKeychainSyncBeEnabled;
@property (readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
@property (readonly, nonatomic, getter=isDeviceConfiguredToAllowPasskeys) BOOL deviceConfiguredToAllowPasskeys;
@property (readonly, nonatomic) BOOL hasPrimaryAppleAccount;
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
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
- (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_updateAccountOnInternalQueue:(id)a0;
- (void)_updateKeychainClique;
- (BOOL)shouldUseFallbackUIForRelyingParty:(id)a0;
- (id)_fetchCurrentManagedConfiguration;
- (BOOL)_shouldApplyPasskeyQuirks;
- (BOOL)canRequestEnterpriseAttestationForRelyingParty:(id)a0;
- (BOOL)isClientEntitledForInternalTestingWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
