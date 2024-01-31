@class NSString;

@interface DTXPCControlService : DTProcessControlService <DTXPCControlServiceRequests>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (id)launchSuspendedProcessWithDevicePath:(id)a0 bundleIdentifier:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;
- (void)observeServicesWithIdentifier:(id)a0 requestingProcess:(int)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(id)a0 programPath:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;
- (void)stopObservationsForIdentifier:(id)a0 requestingProcess:(int)a1;

@end
