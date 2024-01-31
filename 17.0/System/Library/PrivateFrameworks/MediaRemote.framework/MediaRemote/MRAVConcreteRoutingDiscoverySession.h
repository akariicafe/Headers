@class NSArray, NSSet, AVOutputDeviceDiscoverySession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
}

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;

- (BOOL)devicePresenceDetected;
- (id)routingContextUID;
- (void)_scheduleReload;
- (void)setRoutingContextUID:(id)a0;
- (unsigned int)targetAudioSessionID;
- (id)availableOutputDevices;
- (void)_onQueue_reload;
- (void)_deviceInfoDidChange:(id)a0;
- (unsigned int)discoveryMode;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (void)setOnlyDiscoversBluetoothDevices:(BOOL)a0;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (BOOL)onlyDiscoversBluetoothDevices;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)description;
- (void)setAvailableOutputDevices:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)_onQueue_setTargetAudioSessionID:(unsigned int)a0;
- (id)_onQueue_reloadAvailableOutputDevices;

@end
