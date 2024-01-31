@class NSString, OTConfigurationContext;

@interface OTClique : NSObject

@property (copy, nonatomic) NSString *cliqueMemberIdentifier;
@property (readonly, nonatomic) OTConfigurationContext *ctx;

+ (void)storeInheritanceKey:(id)a0 ik:(id)a1 reply:(id /* block */)a2;
+ (void)createCustodianRecoveryKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (void)generateInheritanceKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (void)createInheritanceKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (BOOL)platformSupportsSOS;
+ (void)checkCustodianRecoveryKey:(id)a0 custodianRecoveryKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (void)checkInheritanceKey:(id)a0 inheritanceKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (id)fetchEscrowRecordsInternal:(id)a0 error:(id *)a1;
+ (id)findOptimalBottleIDsWithContextData:(id)a0 error:(id *)a1;
+ (long long)getCDPStatus:(id)a0 error:(id *)a1;
+ (BOOL)isCloudServicesAvailable;
+ (id)newFriendsWithContextData:(id)a0 error:(id *)a1;
+ (id)newFriendsWithContextData:(id)a0 resetReason:(long long)a1 error:(id *)a2;
+ (id)performEscrowRecoveryWithContextData:(id)a0 escrowArguments:(id)a1 error:(id *)a2;
+ (void)preflightRecoverOctagonUsingCustodianRecoveryKey:(id)a0 custodianRecoveryKey:(id)a1 reply:(id /* block */)a2;
+ (void)preflightRecoverOctagonUsingInheritanceKey:(id)a0 inheritanceKey:(id)a1 reply:(id /* block */)a2;
+ (void)recoverOctagonUsingCustodianRecoveryKey:(id)a0 custodianRecoveryKey:(id)a1 reply:(id /* block */)a2;
+ (void)recoverOctagonUsingInheritanceKey:(id)a0 inheritanceKey:(id)a1 reply:(id /* block */)a2;
+ (id)recoverWithContextData:(id)a0 bottleID:(id)a1 escrowedEntropy:(id)a2 error:(id *)a3;
+ (void)removeCustodianRecoveryKey:(id)a0 custodianRecoveryKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (void)removeInheritanceKey:(id)a0 inheritanceKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (BOOL)resetAcountData:(id)a0 error:(id *)a1;
+ (id)resetProtectedData:(id)a0 error:(id *)a1;
+ (id)resetProtectedData:(id)a0 idmsTargetContext:(id)a1 idmsCuttlefishPassword:(id)a2 notifyIdMS:(BOOL)a3 error:(id *)a4;
+ (BOOL)setCDPEnabled:(id)a0 error:(id *)a1;
+ (void)setNewRecoveryKeyWithData:(id)a0 recoveryKey:(id)a1 reply:(id /* block */)a2;

- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (id)description;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)setupPairingChannelAsInitiator:(id)a0;
- (long long)_fetchCliqueStatus:(id)a0 error:(id *)a1;
- (BOOL)accountUserKeyAvailable;
- (long long)cachedCliqueStatus:(BOOL)a0 error:(id *)a1;
- (id)copyPeerPeerInfo:(id *)a0;
- (id)copyViewUnawarePeerInfo:(id *)a0;
- (BOOL)establish:(id *)a0;
- (long long)fetchCliqueStatus:(id *)a0;
- (long long)fetchCliqueStatus:(id)a0 error:(id *)a1;
- (void)fetchEscrowContents:(id /* block */)a0;
- (id)initWithContextData:(id)a0;
- (BOOL)joinAfterRestore:(id *)a0;
- (BOOL)leaveClique:(id *)a0;
- (id)makeOTControl:(id *)a0;
- (id)peerDeviceNamesByPeerID:(id *)a0;
- (BOOL)peersHaveViewsEnabled:(id)a0 error:(id *)a1;
- (void)performedCDPStateMachineRun:(id)a0 success:(BOOL)a1 error:(id)a2 reply:(id /* block */)a3;
- (void)performedFailureCDPStateMachineRun:(id)a0 error:(id)a1 reply:(id /* block */)a2;
- (void)performedSuccessfulCDPStateMachineRun:(id)a0 reply:(id /* block */)a1;
- (BOOL)removeFriendsInClique:(id)a0 error:(id *)a1;
- (BOOL)resetAndEstablish:(long long)a0 idmsTargetContext:(id)a1 idmsCuttlefishPassword:(id)a2 notifyIdMS:(BOOL)a3 accountSettings:(id)a4 error:(id *)a5;
- (BOOL)setOctagonUserControllableViewsSyncEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)setUserCredentialsAndDSID:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)setUserCredentialsWithLabel:(id)a0 password:(id)a1 dsid:(id)a2 error:(id *)a3;
- (id)setupPairingChannelAsAcceptor:(id)a0;
- (id)setupPairingChannelAsAcceptor:(id)a0 error:(id *)a1;
- (id)setupPairingChannelAsInitator:(id)a0 error:(id *)a1;
- (BOOL)tryUserCredentialsAndDSID:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)tryUserCredentialsWithLabel:(id)a0 password:(id)a1 dsid:(id)a2 error:(id *)a3;
- (BOOL)waitForOctagonUpgrade:(id *)a0;

@end
