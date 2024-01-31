@interface CLLocationPushServiceExtensionRemoteContext : CLLocationPushServiceExtensionContext <CLLocationPushServiceExtensionRemoteXPCInterface>

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)didReceiveLocationPushPayload:(id)a0 reply:(id /* block */)a1;
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionWillTerminate;

@end
