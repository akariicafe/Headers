@class ENFileSessionDaemon, ENXPCServiceListener, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceConnection : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ENFileSessionDaemon *_fileSession;
    ENXPCServiceListener *_serviceListener;
    int _pid;
    NSObject<OS_xpc_object> *_xpcConnection;
}

+ (id)connectionWithXPCConnection:(id)a0 serviceListener:(id)a1 dispatchQueue:(id)a2;

- (void)xpcConnectionEvent:(id)a0;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)xpcFileSessionActivate:(id)a0 archive:(BOOL)a1;
- (void)xpcSendMessage:(id)a0;
- (void)xpcConnectionRequest:(id)a0;
- (void)xpcFileSessionInvalidate:(id)a0;
- (void)xpcFileSessionReadTEKBatch:(id)a0;
- (void)xpcSendReplyError:(id)a0 request:(id)a1;

@end
