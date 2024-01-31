@class HMMTRAccessoryServerBrowser, NSString, HMMTRStorage, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRSystemCommissionerPairingManager : HMFObject <HMFLogging>

@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly, weak, nonatomic) HMMTRStorage *storage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cleanUpStaleSystemCommissionerPairingsWithNewlyPairedUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 setupPayload:(id)a4;
- (void)_fetchAllDevicePairingsForSystemCommissionerDevicePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)_openCommissioningWindowForSystemCommissionerPairingUUID:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (void)_readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanUpStaleSystemCommissionerPairingsWithNewlyPairedUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 setupPayload:(id)a4;
- (id)initWithQueue:(id)a0 accessoryServerBrowser:(id)a1;
- (void)removeDevicePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
