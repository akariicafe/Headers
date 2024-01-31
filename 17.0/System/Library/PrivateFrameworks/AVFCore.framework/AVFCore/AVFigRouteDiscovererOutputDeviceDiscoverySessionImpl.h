@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, NSString, AVOutputDeviceDiscoverySession, AVAudioSession, AVWeakReference;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    id /* block */ _routeDiscovererCreator;
    AVWeakReference *_weakObserver;
}

@property (readonly, nonatomic) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)_availableRoutesChanged;
- (void)_serverDied;
- (void)_availableGroupsChanged;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_routePresentChanged;
- (void)_endpointDescriptorChanged;

@end
