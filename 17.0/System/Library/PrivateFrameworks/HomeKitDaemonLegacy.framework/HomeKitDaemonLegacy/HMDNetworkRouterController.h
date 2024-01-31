@class NSObject, NSString, HMDHAPAccessory, HMDService;
@protocol OS_dispatch_queue;

@interface HMDNetworkRouterController : NSObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHAPAccessory *accessory;
@property (weak, nonatomic) HMDService *routerService;
@property (readonly) NSString *wiFiSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_writeClientConfigurationControlRequest:(id)a0 operationName:(id)a1 completion:(id /* block */)a2;
- (void)_writeTLVWithValueInResponse:(id)a0 characteristicType:(id)a1 operationName:(id)a2 completion:(id /* block */)a3;
- (void)_writeValue:(id)a0 forCharacteristic:(id)a1 completion:(id /* block */)a2;
- (void)_writeValueIfDifferent:(id)a0 characteristicType:(id)a1 operationName:(id)a2 completion:(id /* block */)a3;
- (void)addClientConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)getAccessViolationList:(id /* block */)a0;
- (void)getClientStatusWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getClientStatusWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccessory:(id)a0 service:(id)a1 workQueue:(id)a2;
- (void)readClientConfigurationWithClientIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeClientConfigurationWithClientIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetAccessViolationForClientIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateClientConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)writeManagedNetworkEnable:(BOOL)a0 completion:(id /* block */)a1;

@end
