@class DEDSharingInbound, NSMutableDictionary, SFService, NSMutableSet, NSObject, SFDeviceDiscovery;
@protocol DEDSharingInboundDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface DEDSharingConnection : NSObject

@property (retain) DEDSharingInbound *sharingInbound;
@property (weak) id<DEDSharingInboundDelegate> controller;
@property BOOL listenForClients;
@property BOOL started;
@property (retain) NSMutableDictionary *pongingDevices;
@property (retain) NSMutableDictionary *deviceSessions;
@property (retain) NSMutableDictionary *discoveredDevices;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore;
@property (retain, nonatomic) SFService *pingService;
@property (retain, nonatomic) SFDeviceDiscovery *pingDiscovery;
@property (retain) NSMutableSet *visiblePingUUIDs;
@property (retain, nonatomic) SFService *workerService;
@property (retain, nonatomic) SFDeviceDiscovery *pongDiscovery;
@property (copy) id /* block */ deviceStatusCallback;

+ (void)checkIn;

- (void)dealloc;
- (void)start;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)stopDiscovery;
- (void)stopSession:(id)a0;
- (void)startPingServiceWithCompletion:(id /* block */)a0;
- (void)stopPingService;
- (void)_configureService:(id)a0 withLabel:(id)a1 needsSetup:(BOOL)a2 actionType:(unsigned char)a3 completion:(id /* block */)a4;
- (id)_existingSharingSessionForDevice:(id)a0;
- (void)_handleIncomingPingingDevice:(id)a0;
- (void)_handleIncomingPongingDevice:(id)a0 fromInbound:(id)a1;
- (void)_saveDevice:(id)a0;
- (void)_verifyPairingForSession:(id)a0 holdForPIN:(BOOL)a1 completion:(id /* block */)a2;
- (void)addIncomingSFSession:(id)a0 forIdentifier:(id)a1;
- (id)blockingSharingSessionForDevice:(id)a0 fromInbound:(id)a1;
- (void)checkReadinessForSFDevice:(id)a0 session:(id)a1;
- (void)configureListenForClients:(BOOL)a0;
- (void)configureSharingInbound:(id)a0;
- (void)createSharingSessionForSFDevice:(id)a0 holdForPIN:(BOOL)a1 fromInbound:(id)a2 completion:(id /* block */)a3;
- (void)discoverDevicesFromInbound:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSystemInfoForDevice:(id)a0;
- (void)setDeviceDiscoveryCallback:(id /* block */)a0;
- (id)sharingOutboundForBugSessionIdentifier:(id)a0 device:(id)a1 fromInbound:(id)a2;
- (void)sharing_didStartBugSessionWithInfo:(id)a0 forCaller:(id)a1;
- (void)sharing_startBugSessionWithIdentifier:(id)a0 configuration:(id)a1 caller:(id)a2 target:(id)a3 fromInbound:(id)a4;
- (void)sharing_startPairSetupForDevice:(id)a0 fromInbound:(id)a1;
- (void)sharing_tryPIN:(id)a0 forDevice:(id)a1 fromInbound:(id)a2;
- (void)startPingDiscovery;
- (void)startPongAdvertisement;
- (void)startPongDiscoveryFromInbound:(id)a0;
- (void)startWorkerService;
- (void)stopPingDiscovery;
- (void)stopPongAdvertisement;
- (void)stopPongDiscovery;
- (void)trySessionWithFoundDevice:(id)a0 fromInbound:(id)a1;
- (void)updateControllerWithDevice:(id)a0 andStatus:(long long)a1;
- (void)updatePongAdvertisement;

@end
