@class NSXPCListener, NSString, NSMutableSet, ANAnnounceReachabilityManager;

@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) ANAnnounceReachabilityManager *reachabilityManager;
@property (retain) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanForExit;
- (void)_addConnection:(id)a0;
- (id)init;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)announceReachabilityForRoomUUID:(id)a0 inHomeUUID:(id)a1 reply:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoom:(id)a1 inHome:(id)a2;
- (void).cxx_destruct;
- (void)announceReachabilityForRoomName:(id)a0 inHomeName:(id)a1 reply:(id /* block */)a2;
- (void)announceReachabilityForHomeUUID:(id)a0 reply:(id /* block */)a1;
- (void)_removeConnection:(id)a0;
- (void)announceReachabilityForHomeName:(id)a0 reply:(id /* block */)a1;
- (void)_sendCurrentReachabilityToConnection:(id)a0;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHome:(id)a1;

@end
