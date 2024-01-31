@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)ensureConnected:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)a0;

@end
