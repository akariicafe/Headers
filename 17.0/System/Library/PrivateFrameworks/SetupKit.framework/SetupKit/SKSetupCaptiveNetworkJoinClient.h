@class CUBonjourDevice, NSString, CUBonjourBrowser, NRDeviceMonitor, NRDeviceManager, NSObject, NRDeviceIdentifier;
@protocol OS_dispatch_source;

@interface SKSetupCaptiveNetworkJoinClient : SKSetupBase <NRDeviceMonitorDelegate> {
    BOOL _captiveNetworkLoginDone;
    BOOL _captiveNetworkProbingSuccess;
    BOOL _awdlAdvertiserPeerStarted;
    CUBonjourBrowser *_awdlBrowser;
    NSString *_awdlName;
    CUBonjourDevice *_awdlPeerDevice;
    NSObject<OS_dispatch_source> *_awdlTimer;
    NSString *_networkRelayPeerIPStr;
    NSString *_networkRelayProxyInterface;
    NSObject<OS_dispatch_source> *_networkRelayTimer;
    NRDeviceIdentifier *_nrDeviceIdentifier;
    NRDeviceManager *_nrDeviceManager;
    NRDeviceMonitor *_nrDeviceMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_run;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)deviceIsConnectedDidChange:(id)a0 isConnected:(BOOL)a1;
- (void)deviceLinkTypeDidChange:(id)a0 linkType:(unsigned char)a1 linkSubtype:(unsigned char)a2;
- (void)deviceProxyServiceInterfaceNameDidChange:(id)a0 interfaceName:(id)a1;
- (void)_postEvent:(id)a0;
- (void)_captiveProbeRequest;
- (void)_captiveProbeResponse:(id)a0;
- (void)_networkRelayEnsureStopped;
- (void)_runAWDLFoundDevice:(id)a0;
- (void)_runAWDLFoundTimerStart;
- (void)_runAWDLStart;
- (void)_runCaptiveNetworkLoginResponse:(id)a0;
- (void)_runCaptiveNetworkLoginStart;
- (BOOL)_runNetworkRelayPeerStart;
- (void)_runNetworkRelaySelfStart;

@end
