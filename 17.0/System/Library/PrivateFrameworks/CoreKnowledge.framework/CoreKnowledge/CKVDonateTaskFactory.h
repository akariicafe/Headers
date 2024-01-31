@class NSString, KMProviderBridgeFactory, NSObject;
@protocol OS_dispatch_queue, CKVDonatorProvider;

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonatorProvider> *_donatorProvider;
    double _timeout;
    KMProviderBridgeFactory *_factory;
}

@property BOOL useSimulatedProviderBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)enableSimulatedTasks:(BOOL)a0;
- (id)derivativeTaskForId:(unsigned short)a0 usingSettings:(id)a1 modifiedItemIds:(id)a2 deletedItemIds:(id)a3;
- (id)initWithQueue:(id)a0 serviceProvider:(id)a1 timeout:(double)a2;
- (void)setupBridgeListenersWithHandler:(id /* block */)a0;
- (id)taskForId:(unsigned short)a0 usingSettings:(id)a1;
- (id)verificationTaskForId:(unsigned short)a0;

@end
