@class NSXPCConnection, STSUnifiedAccessHandler, STSRemoteTransceiverProxyListener, NSObject;
@protocol STSHelperLibraryDelegateProtocol;

@interface STSHelperLibrary : NSObject <STSHelperCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *xpc;
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *seProxyListener;
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *nfcReaderListener;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) STSUnifiedAccessHandler *unifiedAccessHandler;
@property (weak, nonatomic) NSObject<STSHelperLibraryDelegateProtocol> *delegate;
@property (readonly, nonatomic) unsigned long long handoverConfig;

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)processConnectionHandoverRequest:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (id)startISO18013WithConnectionHandoverConfiguration:(unsigned long long)a0 type:(unsigned long long)a1 delegate:(id)a2;
- (id)_stsHelperCallbackInterface;
- (id)_stsHelperInterface;
- (void)connectRemoteWithConnectionHandoverSelect:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)connectRemoteWithQRCodeHandoverData:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (id)connectToNotificationListener:(id)a0;
- (void)didInvalidateXPC:(BOOL)a0 connection:(id)a1;
- (void)generateConnectionHandoverRequestWithQueue:(id)a0 responseHandler:(id /* block */)a1;
- (void)generateQRCodeCHRequestAndStartACWithQueue:(id)a0 responseHandler:(id /* block */)a1;
- (void)processConnectionHandoverRequestData:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)processUnifiedAccessStepupAPDU:(id)a0 callbackQueue:(id)a1 responseHandler:(id /* block */)a2;
- (void)restartNFCReaderDiscovery;
- (BOOL)setupConnectWithXPCService;
- (id)signalUnifiedAccessStepUpWithEventDictionary:(id)a0;
- (id)startBTDeviceWithServiceUUID:(id)a0 peripheralAddress:(id)a1 centralRole:(BOOL)a2;
- (id)startBTReaderWithServiceUUID:(id)a0 peripheralAddress:(id)a1 centralRole:(BOOL)a2;
- (id)startReaderSEProxyListener:(id)a0 workQueue:(id)a1;
- (id)startSEProxyListener:(id)a0 parameters:(id)a1 workQueue:(id)a2;
- (id)startWifiPublisherWithServiceName:(id)a0 datapathPMK:(id)a1 datapathPMKID:(id)a2;
- (id)startWifiSubscriberWithServiceName:(id)a0 datapathPMK:(id)a1 datapathPMKID:(id)a2;
- (void)stopReaderSEProxyListener;
- (void)stopSEProxyListener;

@end
