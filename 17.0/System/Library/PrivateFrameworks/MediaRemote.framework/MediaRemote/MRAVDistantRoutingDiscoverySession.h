@class NSArray, NSString, NSXPCConnection, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    NSDate *_discoveryModeDate;
    BOOL _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
    NSDate *_hostedRoutingConnectionDate;
    NSArray *_notificationTokens;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (retain, nonatomic) NSArray *distantEndpoints;
@property (retain, nonatomic) NSArray *distantOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;

- (BOOL)devicePresenceDetected;
- (id)routingContextUID;
- (void)setRoutingContextUID:(id)a0;
- (void)dealloc;
- (id)availableOutputDevices;
- (id)_hostedRoutingConnection;
- (unsigned int)discoveryMode;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (void)_registerForPerRoutingContextNotifications;
- (BOOL)_shouldAddLocalEndpoint;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)availableEndpointsDidChange:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (void).cxx_destruct;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;
- (void)availableOutputDevicesDidChange:(id)a0;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;

@end
