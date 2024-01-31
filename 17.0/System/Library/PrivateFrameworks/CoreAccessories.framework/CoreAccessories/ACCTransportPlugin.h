@class NSString, NSMutableSet, NSMutableDictionary;
@protocol ACCTransportPluginManagerProtocol;

@interface ACCTransportPlugin : NSObject

@property (weak, nonatomic) id<ACCTransportPluginManagerProtocol> delegate;
@property (retain, nonatomic) NSMutableSet *activeConnectionUUIDs;
@property (readonly, nonatomic) NSString *pluginName;
@property (readonly, nonatomic) NSString *pluginClassAndName;
@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void)dealloc;
- (BOOL)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setHandler:(id /* block */)a0 forEndpointProperty:(id)a1;
- (id)allConnectionUUIDs;
- (id)allEndpointsUUIDs;
- (void)authStatusDidChangeHandler:(id)a0;
- (int)authStatusForConnectionWithUUID:(id)a0 authType:(int)a1;
- (id)certificateCapabilitiesForConnectionWithUUID:(id)a0;
- (id)certificateDataForConnectionWithUUID:(id)a0;
- (id)certificateSerialForConnectionWithUUID:(id)a0;
- (id)certificateSerialStringForConnectionWithUUID:(id)a0;
- (void)connectionPropertiesDidChangeHandler:(id)a0;
- (int)connectionTypeForConnectionWithUUID:(id)a0;
- (id)connectionUUIDForEndpointWithUUID:(id)a0;
- (id)createConnectionWithType:(int)a0 andIdentifier:(id)a1;
- (id)createEndpointWithTransportType:(int)a0 andProtocol:(int)a1 andIdentifier:(id)a2 forConnectionWithUUID:(id)a3 publishConnection:(BOOL)a4;
- (BOOL)destroyConnectionWithUUID:(id)a0;
- (BOOL)destroyEndpointWithUUID:(id)a0;
- (void)endpointPropertiesDidChangeHandler:(id)a0;
- (id)endpointUUIDsForConnectionWithUUID:(id)a0;
- (id)identifierForConnectionWithUUID:(id)a0;
- (id)identifierForEndpointWithUUID:(id)a0;
- (BOOL)processIncomingData:(id)a0 forEndpointWithUUID:(id)a1;
- (id)propertiesForConnectionWithUUID:(id)a0;
- (id)propertiesForEndpointWithUUID:(id)a0;
- (int)protocolForEndpointWithUUID:(id)a0;
- (BOOL)publishConnectionWithUUID:(id)a0;
- (BOOL)routeOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (BOOL)setAccessoryInfo:(id)a0 forEndpointWithUUID:(id)a1;
- (BOOL)setAuthenticationStatus:(int)a0 andCertificateData:(id)a1 authCTA:(BOOL)a2 forConnectionWithUUID:(id)a3;
- (void)setHandler:(id /* block */)a0 forConnectionProperty:(id)a1;
- (BOOL)setProperties:(id)a0 forConnectionWithUUID:(id)a1;
- (BOOL)setProperties:(id)a0 forEndpointWithUUID:(id)a1;
- (BOOL)setSupervisedTransportsRestricted:(BOOL)a0 forConnectionWithUUID:(id)a1;
- (void)startSafeConnectionTransaction;
- (void)stopSafeConnectionTransaction;
- (int)transportTypeForEndpointWithUUID:(id)a0;

@end
