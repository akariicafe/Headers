@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEventLogService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)locked_establishConnection;
- (BOOL)logEndWithId:(long long)a0 timestamp:(id)a1 dependencies:(id)a2 payloadType:(id)a3 payloadVariant:(id)a4 payload:(id)a5 error:(id *)a6;
- (BOOL)logInstantWithId:(long long)a0 timestamp:(id)a1 name:(id)a2 parent:(long long)a3 dependencies:(id)a4 payloadType:(id)a5 payloadVariant:(id)a6 payload:(id)a7 error:(id *)a8;
- (BOOL)logStartWithId:(long long)a0 timestamp:(id)a1 name:(id)a2 parent:(long long)a3 error:(id *)a4;

@end
