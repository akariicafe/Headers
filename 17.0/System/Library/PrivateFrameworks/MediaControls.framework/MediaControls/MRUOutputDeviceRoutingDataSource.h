@class AVRoutingSessionManager, NSString, MRAVOutputDevice, MRAVEndpoint, NSArray, MRAVRoutingDiscoverySessionConfiguration, MPAVEndpointRoute, NSObject, MRAVRoutingDiscoverySession, MPMRAVOutputContextWrapper, MPAVOutputDeviceRoute;
@protocol OS_dispatch_queue, MRUOutputDeviceRoutingDataSourceObserver;

@interface MRUOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    id _companionCallbackToken;
    BOOL _didFindCompanion;
    id _callbackToken;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    BOOL _didReceiveDiscoveryResults;
    unsigned int _targetSessionID;
    long long _discoveryMode;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL didReceiveDiscoveryResults;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (retain, nonatomic) MRAVOutputDevice *predictedDevice;
@property (retain, nonatomic) MPAVOutputDeviceRoute *hearingDeviceRoute;
@property (retain, nonatomic) NSString *hearingDeviceName;
@property (nonatomic) BOOL subscribed;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) BOOL detachesRoutesToGroup;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (copy, nonatomic) NSString *nowPlayingAppBundleID;
@property (copy, nonatomic) NSArray *visibleMediaApps;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) BOOL supportsRoutePrediction;
@property (weak, nonatomic) id<MRUOutputDeviceRoutingDataSourceObserver> hearingAidDelegate;

+ (id)_globalAudioSessionLock;

- (BOOL)devicePresenceDetected;
- (void)createGroupFromOutputDevices:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (BOOL)_shouldDetachOutputDevicesToGroup:(id)a0;
- (void)dealloc;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)_onDiscoverySessionQueue_generateDiscoverySession;
- (long long)discoveryMode;
- (id)_outputDeviceRouteWithUID:(id)a0;
- (void)_resetPredictedOutputDevice;
- (void)addRouteToGroup:(id)a0 completion:(id /* block */)a1;
- (id)getRoutesForCategory:(id)a0;
- (void)removeRouteFromGroup:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isRemovingPredictedDevice:(id)a0;
- (void)_endpointsDidChangeNotification:(id)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (id)routingSessionManager;
- (id)initWithEndpointRoute:(id)a0;
- (unsigned int)targetSessionID;
- (id)_stateDumpObject;
- (void)setDiscoveryMode:(long long)a0;
- (void)setTargetSessionID:(unsigned int)a0;
- (id)_initWithEndpointRoute:(id)a0;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)a0;
- (void)addRoutesToGroup:(id)a0 completion:(id /* block */)a1;
- (id)_detachableDevicesInOutputDevices:(id)a0;
- (void).cxx_destruct;
- (void)hearingAidReachabilityDidChange;
- (void)_outputDevicesDidChangeNotification:(id)a0;
- (void)_outputDevicesDidChange:(id)a0;
- (void)_onDiscoverySessionQueue_generateCompanionDiscoverySession;
- (void)removeRoutesFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)_personalRoutesDidChange;
- (void)_generateDiscoverySession;
- (BOOL)_shouldAddPredictedDeviceToOuputDevices:(id)a0;
- (id)outputDevicesForRoutes:(id)a0;
- (void)addHearingAidRouteIfNeededToRoutes:(id)a0;

@end
