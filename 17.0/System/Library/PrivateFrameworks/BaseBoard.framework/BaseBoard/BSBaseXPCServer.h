@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    NSString *_serviceName;
    int _notifyToken;
}

@property (nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection;

+ (BOOL)_registersWithNotifyd;

- (id)_connection;
- (void)_sendReply:(id)a0 messagePacker:(id /* block */)a1;
- (void)run;
- (void)dealloc;
- (id)_getStringFromMessage:(id)a0 key:(char *)a1;
- (id)_copyEndpoint;
- (void)_invalidate;
- (BOOL)queue_shouldAcceptNewConnection:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)queue_newClientForConnection:(id)a0;
- (void)queue_handleMessage:(id)a0 client:(id)a1;
- (id)_queue_clientForConnection:(id)a0;
- (id)_clients;
- (void)resumeServer;
- (void)registerServerSuspended;
- (void)queue_clientAdded:(id)a0;
- (Class)queue_classForNewClientConnection:(id)a0;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)_sendReplyForMessage:(id)a0 messagePacker:(id /* block */)a1;
- (id)queue;
- (void)queue_clientRemoved:(id)a0;
- (void)_sendMessageReply:(id)a0 messagePacker:(id /* block */)a1;

@end
