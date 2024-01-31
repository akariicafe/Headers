@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVAudioSession, AVOutputDeviceDiscoverySessionInternal;

@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

@property (readonly) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (nonatomic) BOOL onlyDiscoversBluetoothDevices;
@property (nonatomic) long long discoveryMode;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (id)init;
- (void)dealloc;
- (id)impl;
- (void)setDiscoveryMode:(long long)a0 forClientIdentifiers:(id)a1;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (id)availableOutputDeviceGroups;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)a0;
- (void)outputDeviceDiscoverySessionImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)a0;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)a0;

@end
