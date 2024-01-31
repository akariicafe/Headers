@class RPClient, NSMapTable, NSArray, NSString, RPCompanionLinkClient;

@interface _DDUIRapportPairingTransport : NSObject <DDUIEndpointPairingBrowsingTransport, DDUIEndpointPairingListeningTransport>

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) RPClient *rpClient;
@property (retain, nonatomic) NSMapTable *transportSessionByUUID;
@property (nonatomic) unsigned int wantedDeviceTypes;
@property (nonatomic) BOOL listeningForResponses;
@property (retain, nonatomic) NSArray *previousAvailableDevices;
@property (copy, nonatomic) id /* block */ availableDevicesChangedHandler;
@property (readonly, nonatomic) NSArray *availableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMode:(unsigned long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)createListenerMappingForDevice:(id)a0 forServiceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_setupListeningForResponseMessagesIfNeeded;
- (void)activateForDeviceTypes:(unsigned int)a0 withCompletion:(id /* block */)a1;
- (id)initWithMode:(unsigned long long)a0 companionLinkClient:(id)a1;
- (id)sessionForDevice:(id)a0 bundleID:(id)a1 serviceIdentifier:(id)a2 error:(id *)a3;
- (void)setupListeningForSessionsWithHandler:(id /* block */)a0;
- (void)shouldReauthenticateDevice:(id)a0 forServiceIdentifier:(id)a1 completion:(id /* block */)a2;

@end
