@class NSString, CDPContext;

@interface CDPSOSCircleProxyImpl : NSObject <CDPDCircleProxy>

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)syncingStatusForAltDSID:(id)a0;

- (BOOL)canAuthenticate;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (void)reportFailure:(id)a0;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (BOOL)tryRegisteringCredentials;
- (id)pairingChannelAcceptor;
- (BOOL)registerCredentials;
- (id)initWithContext:(id)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)peerId;
- (id)requestToResetProtectedData:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (id)pairingChannelInitiator;
- (void).cxx_destruct;
- (BOOL)hasNonViewAwarePeers;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (BOOL)synchronizeCircleViews;
- (long long)cliqueStatus:(id *)a0;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (BOOL)registerCredentialsIfMissing;
- (void)waitForUpdate;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (void)reportSuccess;
- (id)peerDeviceNamesByPeerID;
- (BOOL)viewMemberForAutofillPasswords:(id *)a0;
- (int)_authenticatedCircleStatus:(id *)a0;
- (int)_circleStatus:(id *)a0;
- (BOOL)_performSOSCBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_viewMemberForView:(struct __CFString { } *)a0 error:(id *)a1;
- (id)generateVerifierWithRcoveryKey:(id)a0 error:(id *)a1;
- (unsigned long long)peerCount;
- (BOOL)requestToResetCircle:(id *)a0;
- (BOOL)requestToResetCloudKitDataForReason:(id)a0 error:(id *)a1;
- (BOOL)resetToOffering:(id *)a0;
- (BOOL)setViewsWithEnableSet:(id)a0 disableSet:(id)a1;
- (BOOL)viewMemberForPCSMaster:(id *)a0;

@end
