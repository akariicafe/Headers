@class NSString, NSDictionary, NSMutableSet, NSXPCConnection;
@protocol ACCExternalAccessoryXPCServerProtocol, ACCExternalAccessoryProviderProtocol;

@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCExternalAccessoryXPCServerProtocol> remoteObject;
@property (nonatomic) int clientCapabilities;
@property (retain, nonatomic) NSDictionary *eaClientRegistrationInfo;
@property (retain, nonatomic) NSMutableSet *currentlyConnectedAccessories;
@property (weak, nonatomic) id<ACCExternalAccessoryProviderProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessoryDictionaryForLogging:(id)a0;

- (void)resumeEASessionData:(id)a0;
- (void)ExternalAccessoryArrived:(id)a0;
- (id)initWithDelegate:(id)a0 capabilities:(int)a1;
- (void)sendGPRMCDataStatus:(BOOL)a0 ValueV:(BOOL)a1 ValueX:(BOOL)a2 forAccessoryUUID:(id)a3;
- (void)dealloc;
- (void)updateAccessoryInfo:(id)a0 forUUID:(id)a1;
- (id)_findAccessoryForPrimaryUUID:(id)a0;
- (void)destinationInformation:(id)a0 forUUID:(id)a1;
- (void)openSocketForAccessoryToApp:(id)a0;
- (void)sendDeviceIdentifierNotification:(id)a0 usbIdentifier:(id)a1 forUUID:(id)a2;
- (void)startLocationInformationForAccessoryUUID:(id)a0;
- (id)currentVehicleInfo:(id)a0;
- (void)connectToServer:(BOOL)a0;
- (void)vehicleStatusUpdate:(id)a0 forUUID:(id)a1;
- (void)_removeAccessoryForPrimaryUUID:(id)a0;
- (void)destinationSharingStatus:(BOOL)a0 forDestinationUUID:(id)a1 supportedParams:(id)a2 forUUID:(id)a3;
- (void)_constructClientRegistrationInfo;
- (void)sendNMEAFilterList:(id)a0 forAccessoryUUID:(id)a1;
- (void)requestAccessoryWifiCredentials:(id)a0;
- (void)stopDestinationSharingForUUID:(id)a0;
- (void)ExternalAccessoryLeft:(id)a0;
- (void)startDestinationSharingForUUID:(id)a0 options:(unsigned long long)a1;
- (void)stopLocationInformationForAccessoryUUID:(id)a0;
- (void)sendOutgoingExternalAccessoryData:(id)a0 forEASessionIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void)closeExternalAccessorySession:(id)a0;
- (void)handleIncomingExternalAccessoryData:(id)a0 forEASessionIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)accessoryCloseExternalAccessorySession:(id)a0;
- (void)openSocketForAppToAccessory:(id)a0;
- (void)enqueueLocationNMEASentence:(id)a0 forUUID:(id)a1 withTimestamps:(id)a2;
- (void)createExternalAccessorySessionForProtocol:(id)a0 accessoryUUID:(id)a1 withEASessionReply:(id /* block */)a2;
- (void)_removeAllAccessories;
- (void)sendWiredCarPlayAvailable:(id)a0 usbIdentifier:(id)a1 wirelessAvailable:(id)a2 bluetoothIdentifier:(id)a3 forUUID:(id)a4;

@end
