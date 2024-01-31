@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface WiFiLogDumpTaker : NSObject {
    NSObject<OS_dispatch_queue> *event_queue;
    NSObject<OS_xpc_object> *xpc_connection;
}

@property (readonly, nonatomic) BOOL didLastCaptureFallback;

- (id)init;
- (void).cxx_destruct;
- (void)handleConnection:(id)a0;
- (id)XPCConnection:(const char *)a0;
- (void)takeWiFiCoreCaptureDumpWithReason:(const char *)a0 callback:(id /* block */)a1;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)a0 reason:(const char *)a1 callback:(id /* block */)a2;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)a0 reason:(const char *)a1 shouldTryFallback:(BOOL)a2 callback:(id /* block */)a3;
- (void)takeWiFiDiagnosticsDumpWithPathAndReason:(id /* block */)a0 :(const char *)a1 :(const char *)a2;

@end
