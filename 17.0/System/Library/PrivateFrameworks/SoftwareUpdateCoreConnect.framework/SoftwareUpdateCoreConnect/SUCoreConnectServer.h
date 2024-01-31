@class NSMutableDictionary, NSString, SUCoreLog, NSMutableSet, SUCoreConnectServerPolicy, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConnectServer : NSObject <NSXPCListenerDelegate, SUCoreConnectServerProtocol>

@property (readonly, retain, nonatomic) SUCoreConnectServerPolicy *connectionPolicy;
@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionsAccessQueue;
@property (readonly, retain, nonatomic) NSMutableDictionary *connections;
@property (readonly, retain, nonatomic) NSMutableSet *observerConnections;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionSendMessageQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isConnectionEntitled:(id)a0;
- (id)_connectionsForClientID:(id)a0;
- (void)setupListenerAndResumeConnection;
- (id)_getAllObserverConnections;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerPolicy:(id)a0;
- (void)connectServerSendClientMessage:(id)a0;
- (void)connectProtocolFromClientSendServerMessage:(id)a0;
- (void).cxx_destruct;
- (void)_informObserversOfCompletionReplyWithMessage:(id)a0 error:(id)a1;
- (id)_clientIDForConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)_setConnection:(id)a0 forClientID:(id)a1;
- (void)connectProtocolFromClientSendServerMessage:(id)a0 proxyObject:(id)a1 withReply:(id /* block */)a2;

@end
