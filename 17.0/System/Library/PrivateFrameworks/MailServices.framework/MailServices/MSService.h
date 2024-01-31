@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSService : NSObject {
    int _canceled;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_responseListener;
    NSObject<OS_xpc_object> *_responseHandler;
}

@property (readonly, getter=isCanceled) BOOL canceled;

- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)cancel;
- (void)setupResponseConnectionOnQueue:(id)a0;
- (void)responseConnection:(id)a0 handleError:(id)a1;
- (void)_callServicesMethod:(id)a0 arguments:(id)a1 callback:(id /* block */)a2;
- (void)_callServicesMethod:(id)a0 arguments:(id)a1 replyHandler:(id /* block */)a2;
- (id)_createMessageForService:(id)a0 arguments:(id)a1 index:(long long *)a2;
- (id)_createServiceOnQueue:(id)a0;
- (id)_handleMessageSendFailure:(id)a0 message:(id)a1 messageIndex:(long long)a2 context:(inout id *)a3;
- (void)_registerConnection:(id)a0 onQueue:(id)a1;
- (void)_simulateServicesMethod:(id)a0 arguments:(id)a1 callback:(id /* block */)a2;
- (void)responseConnection:(id)a0 handleResponse:(id)a1;

@end
