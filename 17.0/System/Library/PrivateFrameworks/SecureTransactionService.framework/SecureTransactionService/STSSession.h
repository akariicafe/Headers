@class NFSecureElementProxyListener;

@interface STSSession : STSSessionBase <STSHelperLibraryDelegateProtocol>

@property (copy, nonatomic) id /* block */ sendRequestCompletion;
@property (retain, nonatomic) NFSecureElementProxyListener *seProxyListener;

+ (id)requestAssertionForKeyID:(id)a0 options:(id)a1 outError:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)stopTransaction;
- (id)releaseCredential:(id)a0 withAuthorization:(id)a1 iso18013Selection:(id)a2;
- (id)startHandoff;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)startWithDelegate:(id)a0;
- (id)enablePlasticCardMode:(BOOL)a0;
- (BOOL)supportsSecureRanging;
- (void)restartNFCReaderDiscovery;
- (id)canStartSession;
- (void)fireRequestHandoverConfirmation;
- (void)_activateInvalidationHandler:(id)a0;
- (void)_activateOnConnectCompletion;
- (void)_activateSendRequestCompletion:(id)a0 sessionTerminationRequested:(BOOL)a1 error:(id)a2;
- (id)_translateXPCClientNotificationStatus:(unsigned long long)a0;
- (id)createHandlerForCredential:(id)a0;
- (id)enableExpressModeForActiveCredential:(BOOL)a0;
- (id)felicaCredentialState:(id)a0 error:(id *)a1;
- (void)fireDidExpireTransaction:(BOOL)a0;
- (void)fireDidFailDeferredAuth:(BOOL)a0;
- (void)fireDidPerformAuxiliaryTransactions:(id)a0;
- (void)fireDidReceive18013Requests:(id)a0 readerAuthInfo:(id)a1;
- (void)fireDidReceiveActivityTimeout:(id)a0;
- (void)fireDidReceivePassthroughMessage:(id)a0;
- (void)fireDigitalCarKeyEventPayload:(id)a0;
- (void)fireExpressModeStateChangeWithInfo:(id)a0;
- (void)fireFieldDetectEvent:(BOOL)a0;
- (void)fireFieldNotificationEvent:(id)a0;
- (void)fireHasPendingServerRequest:(BOOL)a0;
- (void)fireSessionDidConsumeAuthorizationEvent;
- (void)fireSessionEndEvent:(id)a0;
- (void)fireTransactionEndEvent:(id)a0;
- (void)fireTransactionStartEvent:(id)a0;
- (void)generateHandoverRequestForQRCodeWithConfiguration:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)handoverSelected:(unsigned long long)a0;
- (void)iso18013DataRetrievalCompleted;
- (id)releaseCredential:(id)a0 withAuthorization:(id)a1;
- (void)relinquishSEProxy;
- (void)reqlinquishNFCReaderProxy;
- (id)rkeCancelFunction:(id)a0;
- (id)rkeGetVehicleReports:(id *)a0;
- (id)rkePauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
- (id)rkeResumeRangingForReaderIdentifier:(id)a0;
- (void)rkeSendFunction:(id)a0 action:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (id)rkeSendPassthroughMessage:(id)a0;
- (id)setAuxiliaryCredentials:(id)a0;
- (id)startWithDelegate:(id)a0 callback:(id /* block */)a1;
- (id)startWithNotificationTesterDelegate:(id)a0 outNotificationListener:(id *)a1;
- (void)testSendToAlternativeCarrier:(id)a0 completion:(id /* block */)a1;
- (id)transitCredentialState:(id)a0 error:(id *)a1;

@end
