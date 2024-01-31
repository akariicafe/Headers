@class NSXPCListener, NSString, NPKIDVRemoteDeviceServiceEventsCoordinator, NPKBiometricPassPreflightManager, NSMutableSet, NPKIDVRemoteDeviceConnectionCoordinator;

@interface NPKIDVRemoteDeviceSessionService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    NPKIDVRemoteDeviceServiceEventsCoordinator *_remoteDeviceEventCoordinator;
    NPKIDVRemoteDeviceConnectionCoordinator *_remoteDeviceConnectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
    NSMutableSet *_sessionServers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (void)dealloc;
- (void)_removeServer:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_addServer:(id)a0;
- (void).cxx_destruct;
- (id)initWithRemoteDeviceEventsCoordinator:(id)a0 connectionCoordinator:(id)a1 preflightManager:(id)a2;
- (void)teardownCurrentRemoteDeviceSessions;

@end
