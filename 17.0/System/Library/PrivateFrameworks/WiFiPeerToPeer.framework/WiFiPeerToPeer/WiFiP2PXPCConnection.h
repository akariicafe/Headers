@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiP2PXPCConnectionDelegate;

@interface WiFiP2PXPCConnection : NSObject {
    unsigned long long _endpointType;
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryTimeout;
    NSXPCConnection *_connection;
    id _remoteObject;
    int _notifyToken;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSMutableArray *_queuedRequests;
}

@property (weak) id<WiFiP2PXPCConnectionDelegate> delegate;

+ (BOOL)directRequestOnEndpointType:(unsigned long long)a0 error:(id *)a1 requesting:(id /* block */)a2;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 exportedObject:(id)a1 withExportedInterface:(id)a2 error:(id *)a3 querying:(id /* block */)a4;
+ (id)wifiPeerToPeerWorkloop;
+ (id)endpointForEndpointType:(unsigned long long)a0;
+ (id)frameworkBundle;
+ (long long)defaultRetryTimeout;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 error:(id *)a1 querying:(id /* block */)a2;
+ (BOOL)supportsWiFiP2P;
+ (id)weakExportedObjectProxy:(id)a0;
+ (id)convertError:(long long)a0;
+ (id)localization;
+ (const char *)wifiPeerToPeerAvailableNotification;

- (void)attemptConnection;
- (void)dealloc;
- (void)start;
- (void)cleanUpRemovingNotifyToken:(BOOL)a0;
- (void)invalidate;
- (id)initWithEndpointType:(unsigned long long)a0 queue:(id)a1 retryTimeout:(long long)a2;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientCompletionHandler:(id /* block */)a1;
- (void)reconnectOnAvailableNotification;
- (void)stop;
- (void)handleError:(long long)a0;
- (void).cxx_destruct;
- (void)handleConnectionInvalidated;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientErrorHandler:(id /* block */)a1;
- (void)withRemoteObjectProxy:(id /* block */)a0;

@end
