@class NSString, NSMutableSet, BSServiceConnectionListener;

@interface SBSmartCoverService : NSObject <BSServiceConnectionListenerDelegate, SBSSmartCoverServiceServerInterface> {
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_observingConnections;
    long long _lastSmartCoverState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)smartCoverStateDidChange:(long long)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithInitialState:(long long)a0;
- (void).cxx_destruct;
- (oneway void)setWantsSmartCoverStateChanges:(id)a0;

@end
