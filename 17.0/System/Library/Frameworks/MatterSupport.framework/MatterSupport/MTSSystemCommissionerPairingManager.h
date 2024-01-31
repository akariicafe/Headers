@class NSString, MTSXPCServerProxy;

@interface MTSSystemCommissionerPairingManager : NSObject <HMFLogging>

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchPairingsWithCompletionHandler:(id /* block */)a0;
- (void)removePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithServerProxy:(id)a0;

@end
