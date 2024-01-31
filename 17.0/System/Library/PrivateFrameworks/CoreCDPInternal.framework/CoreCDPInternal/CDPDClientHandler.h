@class NSString, CDPWalrusDaemonService, NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    NSXPCConnection *_connection;
    unsigned long long _entitlements;
    unsigned long long _clientType;
    id _notificationObject;
    CDPWalrusDaemonService *_walrusDaemonService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)generateNewRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)handleCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)_updateSOSCompatibilityMode:(BOOL)a0 context:(id)a1;
- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 context:(id)a2 uiProvider:(id)a3 completion:(id /* block */)a4;
- (void)_removeObserver;
- (oneway void)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)setKeyChainSyncCompatibilityState:(unsigned long long)a0 withAltDSID:(id)a1;
- (void)repairCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)a0;
- (BOOL)_allowRecoveryKey;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 errorProviuder:(id)a3 resultParser:(id)a4 secureBackUpController:(id)a5 completion:(id /* block */)a6;
- (oneway void)fetchEscrowRecordDevicesWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)shouldPerformSilentEscrowRecordRepairWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (void)deleteRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)isOTEnabledForContext:(id)a0 completion:(id /* block */)a1;
- (void)authenticateAndGenerateNewRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)generateEscrowRecordStatusReportForContext:(id)a0 usingCache:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)_allowUtilityAccess;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)generateRandomRecoveryKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)shouldPerformRepairForContext:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)sendEvent:(id)a0;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)a0 context:(id)a1;
- (void)hasLocalSecretWithCompletion:(id /* block */)a0;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)isWalrusRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (BOOL)_allowStateMachineAccess;
- (BOOL)_allowDataRecovery;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (oneway void)startSilentEscrowRecordRepairWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 entitlements:(unsigned long long)a1 clientType:(unsigned long long)a2;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (void)postFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 completion:(id /* block */)a3;
- (oneway void)broadcastWalrusStateChange;
- (oneway void)performSilentEscrowRecordRepairWithContext:(id)a0 completion:(id /* block */)a1;
- (void)synchronizeUserVisibleKeychainSyncEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)deviceEscrowRecordRecoverableWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_allowFollowUps;
- (void)finishOfflineLocalSecretChangeWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)attemptToEscrowPreRecord:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (void)shouldPerformAuthenticatedRepairForContext:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)recoverSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)clearFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)authenticateAndDeleteRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;

@end
