@class HAP2SerializedOperationQueue, HAP2PropertyLock, NSMutableDictionary, NSOperationQueue, NSString;
@protocol HAP2AccessoryServerDiscovery, HAP2AccessoryServerControllerFactory, HAP2AccessoryServerPairingFactory, HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransportFactory, HAP2AccessoryServerEncodingFactory, HAP2AccessoryServerBrowserPrivate;

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject <HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator>

@property (readonly, weak, nonatomic) id<HAP2AccessoryServerBrowserPrivate> browser;
@property (readonly, nonatomic) id<HAP2AccessoryServerDiscovery> discovery;
@property (readonly, nonatomic) id<HAP2AccessoryServerPairingFactory> pairingFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransportFactory> transportFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerEncodingFactory> encodingFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerControllerFactory> controllerFactory;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) NSOperationQueue *localOperationQueue;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (nonatomic, getter=isStartDiscoveringPending) BOOL startDiscoveringPending;
@property (nonatomic, getter=isStopDiscoveringPending) BOOL stopDiscoveringPending;
@property (readonly, nonatomic) NSMutableDictionary *discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAP2AccessoryServerCoordinatorDelegate> delegate;

- (void)stopDiscovering;
- (void).cxx_destruct;
- (void)_startDiscovering;
- (void)_stopDiscovering;
- (void)startDiscovering;
- (void)discovery:(id)a0 didDiscoverAccessory:(id)a1;
- (id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)a0;
- (id)_createPairedAccessoryServerWithAccessoryInfo:(id)a0 transport:(id)a1 operationQueue:(id)a2;
- (id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)a0 transport:(id)a1 operationQueue:(id)a2;
- (void)_didDeterminePairingStateForAccessory:(id)a0 isPaired:(BOOL)a1 completion:(id /* block */)a2;
- (void)_didDiscoverAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_didDiscoverPairedAccessory:(id)a0 transport:(id)a1 operationQueue:(id)a2 completion:(id /* block */)a3;
- (void)_didDiscoverUnpairedAccessory:(id)a0 transport:(id)a1 operationQueue:(id)a2 completion:(id /* block */)a3;
- (void)_didLoseAccessory:(id)a0 error:(id)a1;
- (void)_didStartDiscoveringWithError:(id)a0;
- (void)_didStopDiscoveringWithError:(id)a0;
- (void)discovery:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;
- (void)discovery:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)discovery:(id)a0 didStopDiscoveringWithError:(id)a1;
- (id)initWithDiscovery:(id)a0 pairingFactory:(id)a1 transportFactory:(id)a2 secureTransportFactory:(id)a3 encodingFactory:(id)a4 controllerFactory:(id)a5;
- (void)resurfaceDiscoveryInfoForDeviceID:(id)a0;
- (void)setBrowser:(id)a0 operationQueue:(id)a1;

@end
