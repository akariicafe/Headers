@class NSString, NPKIDVRemoteDeviceServiceEventsCoordinator, NPKBiometricPassPreflightManager, NPKIDVRemoteDeviceSessionService, NPKIDVRemoteDeviceConnectionCoordinator;
@protocol NPKIDVRemoteDevicesManagerDataSource;

@interface NPKIDVRemoteDevicesManager : NSObject <NPKIDVRemoteDeviceConnectionCoordinatorObserver, NPKBiometricPassPreflightManagerDataSource> {
    NPKIDVRemoteDeviceServiceEventsCoordinator *_eventsCoordinator;
    NPKIDVRemoteDeviceSessionService *_remoteDeviceService;
    NPKIDVRemoteDeviceConnectionCoordinator *_connectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
}

@property (readonly, weak, nonatomic) id<NPKIDVRemoteDevicesManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)remoteDeviceConnectionCoordinator:(id)a0 didReceivePrearmStatusUpdate:(long long)a1;
- (void)_handleDeviceDidUnpair:(id)a0;
- (void)_registerForDeviceEvents;
- (void)_teardownConnections;
- (void)biometricPassPreflightManager:(id)a0 provisionedCredentialCountsForType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)biometricPassPreflightManagerPairedDeviceOSVersion:(id)a0;
- (void)deviceDidBecomeActive:(id)a0;
- (void)deviceDidBecomeInactive;

@end
