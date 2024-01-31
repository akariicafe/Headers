@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) long long satelliteStatus;
@property (nonatomic) unsigned long long networkStatus;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)_registerForNotifications;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)registerForMessages;
- (void)unconfigure;
- (void)_registerForRemoteNotifications;
- (void)__handleAccessoryConnected;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)a0;
- (void)__updateSatelliteStatus:(id)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)_handleCharacteristicsChangedPayload:(id)a0;
- (void)_readAndProcessCharacteristics:(id)a0 withCompletion:(id /* block */)a1;
- (void)_readAndUpdateCharacteristic;
- (void)_updateNetworkStatus;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleAccessoryIsReachable:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleInitialState;
- (id)initWithRouterSatelliteService:(id)a0 msgDispatcher:(id)a1;
- (id)runtimeState;

@end
