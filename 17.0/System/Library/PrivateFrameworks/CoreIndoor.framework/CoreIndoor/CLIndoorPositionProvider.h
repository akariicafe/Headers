@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (retain, nonatomic) ServiceState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingLocation;
- (id)initWithConnection:(id)a0;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (id)endpointName;
- (void).cxx_destruct;
- (id)remoteObjectProtocol;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReinitializeRemoteState;
- (void)setDelegate:(id)a0;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (void)withinQueueInvalidateState;
- (id)initWithApiKey:(id)a0;
- (void)clVisionNotificationAvailable:(id)a0;
- (void)clpOutdoorEstimatorLogEntryNotificationAvailable:(id)a0;
- (void)gpsEstimateAvailable:(id)a0;
- (void)gpsSignalQualityAvailable:(id)a0;
- (id)initWithApiKey:(id)a0 onServer:(id)a1;
- (void)outdoorLocationAvailable:(id)a0;
- (void)playbackDatarun:(id)a0;
- (void)setApiKey:(id)a0;
- (void)setApiKey:(id)a0 onServer:(id)a1;
- (void)startUpdatingLocationAtLocation:(id)a0;
- (void)withinQueueSetDelegate:(id)a0;

@end
