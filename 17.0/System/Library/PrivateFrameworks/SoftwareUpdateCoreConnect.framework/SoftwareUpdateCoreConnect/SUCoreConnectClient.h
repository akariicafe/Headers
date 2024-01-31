@class NSXPCConnection, SUCoreLog, SUCoreConnectClientPolicy, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) SUCoreConnectClientPolicy *policy;
@property (retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientConnectionStateAccessQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientMessageQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientReplyCompletionQueue;

+ (id)_sharedClientLogger;

- (void)connectClientSendServerMessage:(id)a0;
- (void)dealloc;
- (void)forceCloseConnection;
- (void)_droppedConnection:(id)a0;
- (void)connectToServerWithCompletion:(id /* block */)a0;
- (void)connectProtocolFromServerSendClientMessage:(id)a0;
- (void)connectClientSendServerMessage:(id)a0 proxyObject:(id)a1 withReply:(id /* block */)a2;
- (void)_internalConnectToServerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)connectProtocolFromServerRequestClientID:(id /* block */)a0;
- (void)_invalidateConnection:(id)a0;
- (void)connectProtocolFromServerSendClientMessage:(id)a0 reply:(id /* block */)a1;
- (id)initWithClientPolicy:(id)a0;

@end
