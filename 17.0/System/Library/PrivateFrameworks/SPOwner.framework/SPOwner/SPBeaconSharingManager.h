@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPBeaconSharingXPCProtocol;

@interface SPBeaconSharingManager : NSObject <SPBeaconSharingProtocol, SPBeaconSharingClientXPCProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) id<SPBeaconSharingXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ shareUpdateBlock;
@property (nonatomic) unsigned long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)a0;
- (void)acceptShare:(id)a0 completion:(id /* block */)a1;
- (void)allSharesIncludingHiddenWithCompletion:(id /* block */)a0;
- (void)allSharesWithCompletion:(id /* block */)a0;
- (void)checkDataIntegrityWithShareIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cleanupAllRecordsOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)declineShare:(id)a0 completion:(id /* block */)a1;
- (void)downloadKeysWithCircleIdentifier:(id)a0 fromBookmark:(BOOL)a1 completion:(id /* block */)a2;
- (void)forceBreakAllSharesOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)forceBreakAllSharesWithUser:(id)a0 completion:(id /* block */)a1;
- (void)forceDeclineShare:(id)a0 completion:(id /* block */)a1;
- (void)forceStopSharing:(id)a0 completion:(id /* block */)a1;
- (void)lookForOrphanedRecordsWithCompletion:(id /* block */)a0;
- (void)receivedUpdatedShares:(id)a0;
- (void)removeExpiredSharesWithCompletion:(id /* block */)a0;
- (void)removeShare:(id)a0 completion:(id /* block */)a1;
- (void)requestShare:(id)a0 completion:(id /* block */)a1;
- (void)share:(id)a0 recipients:(id)a1 completion:(id /* block */)a2;
- (void)sharingLimitsWithCompletion:(id /* block */)a0;
- (void)startRefreshingSharesWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)stopRefreshingSharesWithCompletion:(id /* block */)a0;
- (void)stopSharing:(id)a0 completion:(id /* block */)a1;
- (void)updatedCircleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)uploadKeysWithCircleIdentifier:(id)a0 isInitialUpload:(BOOL)a1 completion:(id /* block */)a2;

@end
