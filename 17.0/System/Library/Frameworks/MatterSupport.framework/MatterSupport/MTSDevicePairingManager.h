@class MTSXPCServerProxy, NSString, MTSSystemCommissionerPairing;

@interface MTSDevicePairingManager : NSObject <HMFLogging>

@property (readonly, copy) MTSSystemCommissionerPairing *systemCommissionerPairing;
@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)fetchPairingsWithCompletionHandler:(id /* block */)a0;
- (void)removeAllPairingsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSystemCommissionerPairing:(id)a0;
- (void)removePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSystemCommissionerPairing:(id)a0 serverProxy:(id)a1;
- (void)openCommissioningWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)readCommissioningWindowStatusWithCompletionHandler:(id /* block */)a0;

@end
