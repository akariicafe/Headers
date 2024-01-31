@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CMContinuityCaptureXPCServerDelegateCCD;

@interface CMContinuityCaptureXPCServerCCD : NSObject <NSXPCListenerDelegate, CMContinuityCaptureXPCClientActionCCD> {
    NSMutableArray *_connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSXPCListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    id<CMContinuityCaptureXPCServerDelegateCCD> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_enumerateConnectionsWithBlock:(id /* block */)a0;
- (void)updateClientsWithConfiguration:(id)a0;
- (void)disconnectSession;
- (void)pauseSessionForEvent:(long long)a0;
- (void)prepareForPullConversation:(id /* block */)a0;
- (void)requestContinuityCaptureUIConfiguration:(id /* block */)a0;
- (void)resumeStreamingForEvent:(long long)a0;
- (void)skipPlacementStep;
- (void)startListeningWithDelegate:(id)a0;
- (void)tearDownShieldUI;

@end
