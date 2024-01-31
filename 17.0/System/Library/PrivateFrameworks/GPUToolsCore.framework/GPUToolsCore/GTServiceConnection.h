@class NSString, NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTServiceConnection : NSObject <GTXPCConnection> {
    id<GTXPCConnection> _connection;
    unsigned long long _servicePort;
}

@property (readonly) NSString *deviceUDID;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)dispatchMessage:(id)a0;
- (id)initWithConnection:(id)a0 device:(id)a1 port:(unsigned long long)a2;
- (id)sendMessageWithReplySync:(id)a0 error:(id *)a1;
- (void)_setRoutingPropertiesForMessage:(id)a0;
- (void)_setRoutingPropertiesForMessage:(id)a0 withReplyStreamId:(unsigned long long)a1;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;
- (void)sendMessage:(id)a0 withReplyStreamId:(unsigned long long)a1;
- (void)sendMessage:(id)a0 withReplyStreamId:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)sendMessageAndWaitForDelivery:(id)a0;
- (id)sendMessageWithReplySync:(id)a0 replyStreamId:(unsigned long long)a1 error:(id *)a2;

@end
