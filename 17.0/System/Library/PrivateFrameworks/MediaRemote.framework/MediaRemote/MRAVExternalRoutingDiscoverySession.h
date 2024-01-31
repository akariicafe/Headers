@class MRAVEndpoint, MRExternalDevice, MRAVRoutingDiscoverySessionConfiguration;

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id _externalDeviceDiscoveryToken;
}

@property (retain, nonatomic) MRAVEndpoint *destination;
@property (retain, nonatomic) MRExternalDevice *externalDevice;

- (BOOL)devicePresenceDetected;
- (void)dealloc;
- (id)availableOutputDevices;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)destinationOutputDeviceUID;

@end
