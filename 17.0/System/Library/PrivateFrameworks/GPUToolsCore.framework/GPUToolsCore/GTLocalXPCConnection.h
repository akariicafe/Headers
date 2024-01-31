@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_queue;

@interface GTLocalXPCConnection : NSObject <GTXPCConnection> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSMutableDictionary *_dispatchers;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)sendMessageWithReplySync:(id)a0;
- (void)dispatchMessage:(id)a0;
- (id)sendMessageWithReplySync:(id)a0 error:(id *)a1;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (id)initWithTransactionScopedXPCConnection:(id)a0 messageQueue:(id)a1;
- (id)initWithXPCConnection:(id)a0 messageQueue:(id)a1;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;
- (void)sendMessageAndWaitForDelivery:(id)a0;

@end
