@class HAP2SerializedOperationQueue, HAP2PropertyLock, NSString, NSObject, HAP2AccessoryServerTransportBaseOperationClose;
@protocol OS_dispatch_queue, HAP2AccessoryServerTransportCommon;

@interface HAP2AccessoryServerTransportBase : HAP2LoggingObject <HAP2AccessoryServerTransportCommon> {
    unsigned long long _internalState;
    HAP2AccessoryServerTransportBaseOperationClose *_queuedCloseOperation;
}

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double maxRequestTimeout;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransportCommon> underlyingTransport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)closeWithError:(id)a0 completion:(id /* block */)a1;
- (void)didChangeStateWithError:(id)a0;
- (void)didDisconnectWithError:(id)a0;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doSendRequest:(id)a0 completion:(id /* block */)a1;
- (void)doUpdateMaxRequestTimeout:(double)a0;
- (id)endpointForCharacteristic:(id)a0;
- (id)endpointForCharacteristics:(id)a0;
- (id)initWithOperationQueue:(id)a0 delegateQueue:(id)a1;
- (BOOL)mergeWithNewTransport:(id)a0;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)a0;
- (void)openWithCompletion:(id /* block */)a0;
- (unsigned long long)protocolFeaturesForVersion:(id)a0;
- (void)updateMaxRequestTimeout:(double)a0;
- (id)wellKnownEndpoint:(unsigned long long)a0;

@end
