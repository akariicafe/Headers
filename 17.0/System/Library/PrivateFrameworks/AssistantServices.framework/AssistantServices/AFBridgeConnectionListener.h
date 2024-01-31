@class NSXPCListener, NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol AFBridgeConnectionListenerDelegate, OS_dispatch_queue;

@interface AFBridgeConnectionListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    NSXPCConnection *_connection;
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    id _bridgeProxy;
}

@property (retain, nonatomic) NSString *bridgeName;
@property (weak) id<AFBridgeConnectionListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithBridgeName:(id)a0 machService:(id)a1 withServiceInterface:(id)a2 withDelegateInterface:(id)a3;
- (void)notifyClientWithBlock:(id /* block */)a0;
- (void)resumeConnectionWithBridgeProxy:(id)a0;

@end
