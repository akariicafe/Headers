@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, STSXPCClientNotificationListenerDelegate;

@interface STSXPCClientNotificationListener : NSObject <NSXPCListenerDelegate, STSXPCClientNotificationListenerProtocol>

@property (retain, nonatomic) NSXPCListener *xpc;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } xpcUpdateLock;
@property (retain, nonatomic) NSMutableArray *delayWork;
@property (readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
@property (readonly, weak, nonatomic) NSObject<STSXPCClientNotificationListenerDelegate> *delegate;
@property (readonly, nonatomic) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)startHandoff;
- (void)invalidateXPCConnection;
- (id)setRequestHandoverConfirmation:(BOOL)a0;
- (void)sendConnectionHandoverCompleted;
- (id)_asynchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (void)_executeWhenXPCAvailable:(id /* block */)a0;
- (id)_generateFromCredRequest:(id)a0;
- (id)_stsHandoverNotificationListenerCallbackProtocol;
- (id)_stsHandoverNotificationListenerProtocol;
- (id)_synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (unsigned long long)_translateFromCarrierConnectionStatus:(unsigned long long)a0;
- (void)activateISO18013CredentialWithIdentifier:(id)a0 elementSelection:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (oneway void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (oneway void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)alternativerCarrierSend:(id)a0 completion:(id /* block */)a1;
- (oneway void)dummyStart;
- (oneway void)iso18013ReaderReceive:(id)a0 sessionDataStatus:(id)a1 status:(id)a2;
- (oneway void)processCredentialRequestList:(id)a0 readerAuthInfo:(id)a1;
- (oneway void)receivedRawDataFromAlternativeCarrier:(id)a0 dataPending:(BOOL)a1;
- (void)sendConnectionHandoverStarted;
- (void)sendISO18013SessionData:(id)a0 status:(id)a1 completion:(id /* block */)a2;
- (void)sendISO18013SessionEstablishment:(id)a0 completion:(id /* block */)a1;
- (oneway void)sessionTranscriptGenerated:(id)a0;
- (void)testGetRemoteTransceiverProxyXPCEndpointWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (oneway void)transactionStarted:(unsigned long long)a0;

@end
