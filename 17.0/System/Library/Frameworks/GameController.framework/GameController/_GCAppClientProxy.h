@class _GCControllerManagerServer, NSString, NSArray, NSMapTable, NSObject;
@protocol _GCIPCObjectRegistry, GCControllerServiceRemoteClientInterface, _GCIPCServiceRegistry, OS_os_transaction, _GCIPCIncomingConnection;

@interface _GCAppClientProxy : NSObject <_GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCGameIntentXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface> {
    _GCControllerManagerServer *_server;
    _Atomic BOOL _invalid;
    id<_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    id<GCControllerServiceRemoteClientInterface> _controllerServiceClient;
    unsigned long long _controllerServiceClientPendingUpdates;
    NSMapTable *_publishedControllerDescriptions;
    NSObject<OS_os_transaction> *_keyboardMouseTransaction;
}

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry;
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry;
@property (copy) NSArray *invalidationHandlers;

+ (id)settingsSuiteName;
+ (id)clientProxyWithConnection:(id)a0 server:(id)a1;

- (void)connectToSystemGestureXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)batteryXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (id)redactedDescription;
- (void)connectToGameIntentXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)checkClipBufferingEnabledWithReply:(id /* block */)a0;
- (void)takeScreenshotWithReply:(id /* block */)a0;
- (void)pingWithReply:(id /* block */)a0;
- (void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)_invalidate;
- (void)checkEmulatedControllerEnabledWithReply:(id /* block */)a0;
- (void)motionXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)connectToLightXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)onVideoRecordingStart:(id /* block */)a0;
- (void)gameIntentXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (id)addInvalidationHandler:(id /* block */)a0;
- (void)enableFeature:(long long)a0;
- (id)description;
- (BOOL)readBooleanValueWithName:(id)a0;
- (void)connectToAdaptiveTriggersXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (id)_initWithConnection:(id)a0 server:(id)a1;
- (void)clientCanReceiveEventsDidChange:(BOOL)a0;
- (void)connectToPhotoVideoXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connectToMotionXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)connectToBatteryXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)connectToSettingsXPCProxyServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (id)debugDescription;
- (void)getTheLastGeneratedURLWithReply:(id /* block */)a0;
- (void)onVideoRecordingStopWithURL:(id)a0 reply:(id /* block */)a1;
- (void)connectToControllerServiceWithClient:(id)a0 reply:(id /* block */)a1;
- (void)systemGestureXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)adaptiveTriggersXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)settingsXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;
- (void)fetchControllerDescriptionsWithReply:(id /* block */)a0;
- (void)generateURLFor:(id)a0 withReply:(id /* block */)a1;
- (void)lightXPCProxyServiceClientEndpointConnect:(id)a0 reply:(id /* block */)a1;

@end
