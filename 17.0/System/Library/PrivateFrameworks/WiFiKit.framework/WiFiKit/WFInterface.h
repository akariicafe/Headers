@class WFNetworkScanRecord, NSString, NSArray, WFClient, NSSet, NSOperationQueue, NSThread, NSRunLoop, NSObject, CWFInterface, WFIPMonitor;
@protocol OS_dispatch_queue;

@interface WFInterface : NSObject

@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork;
@property (retain, nonatomic) WFNetworkScanRecord *coreWiFiCurrentNetwork;
@property (copy, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *currentNetworkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkProcessingQueue;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) NSOperationQueue *joinQueue;
@property (retain, nonatomic) NSArray *deviceScanChannels;
@property (nonatomic) int ipState;
@property (nonatomic) BOOL ipv4SelfAssigned;
@property (nonatomic) BOOL hasNoGatewayIP;
@property (nonatomic) BOOL currentNetworkIsDirected;
@property (retain, nonatomic) NSThread *callbackThread;
@property (retain, nonatomic) NSRunLoop *callbackRunLoop;
@property BOOL monitoringEvents;
@property BOOL scanning;
@property (weak, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) CWFInterface *cInterface;
@property (retain, nonatomic) CWFInterface *irInterface;
@property (nonatomic) BOOL associatedOnIRInterface;

- (id)IPv4ARPResolvedIPAddress;
- (id)IPv4SubnetMasks;
- (id)IPv6Addresses;
- (BOOL)hasValidIPAddress;
- (id)IPv4Addresses;
- (void)asyncCurrentNetwork:(id /* block */)a0;
- (void)asyncAssociateToNetwork:(id)a0 password:(id)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)_stopMonitoringWiFiEvents;
- (id)initWithDevice:(struct __WiFiDeviceClient { } *)a0 coreWiFiInterface:(id)a1;
- (BOOL)isReadyForConnectionVelocityTest;
- (id)_currentInterface;
- (void)notifyNoNetworksFound;
- (void)_linkChangedWithInfo:(id)a0;
- (void)_linkQualityChanged:(id)a0;
- (id)IPv6RouterAddress;
- (void)createNANInterface;
- (void)_startMonitoringWiFiEvents;
- (void)asyncScanRequest:(id)a0 reply:(id /* block */)a1;
- (id)_debugLQMString:(id)a0;
- (void)_initCurrentNetwork;
- (void)disassociateFromCarPlayUserConfiguredNetwork;
- (id)initWithDevice:(struct __WiFiDeviceClient { } *)a0;
- (void).cxx_destruct;
- (void)asyncCurrentScanResult:(id /* block */)a0;
- (void)_currentNetworkDidChangeWithReason:(unsigned long long)a0 currentNetwork:(id)a1 previousNetwork:(id)a2;
- (void)_hostAPStateDidChange:(id)a0;
- (void)_carPlayNetworkTypeChangedCallback:(int)a0;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 forceUpdateNetwork:(BOOL)a1 callback:(id /* block */)a2 userInfo:(id)a3;
- (void)_wifiManagerRestarted:(id)a0;
- (void)asyncHS20Supported:(id /* block */)a0;
- (void)asyncAssociateToNetwork:(id)a0 profile:(id)a1 reply:(id /* block */)a2;
- (void)_resetCurrentNetworkStates;
- (id)IPv4RouterAddress;
- (void)disassociateFromCurrentNetwork;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 callback:(id /* block */)a1;

@end
