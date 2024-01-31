@class NSObject, NSRunLoop, WFClient, NSThread, NSString, CWFScanResult, WFLinkQuality;
@protocol OS_dispatch_queue;

@interface WFWiFiStateMonitor : NSObject

@property (nonatomic) long long state;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (copy, nonatomic) WFLinkQuality *linkQuality;
@property (retain, nonatomic) CWFScanResult *currentNetwork;
@property BOOL monitoring;
@property BOOL associatedToCarPlayOnly;
@property (retain, nonatomic) WFClient *client;
@property NSRunLoop *callbackRunLoop;
@property (retain, nonatomic) NSThread *callbackThread;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy) id /* block */ handler;
@property (copy, nonatomic) NSString *identifier;

- (void)stopMonitoring;
- (id)init;
- (void)dealloc;
- (void)_powerStateDidChange:(id)a0;
- (void)_updateState;
- (void)_linkDidChange:(id)a0;
- (void)_updateState:(id /* block */)a0;
- (void)_carPlayNetworkTypeDidChange:(id)a0;
- (void)_runManagerCallbackThread;
- (void)_spawnManagerCallbackThread;
- (void)_linkQualityDidChange:(id)a0;
- (id)description;
- (void)_outrankStateDidChange:(id)a0;
- (id)initWithClient:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)_asyncGetCurrentNetwork:(id /* block */)a0;
- (void)_hostAPStateChanged:(id)a0;
- (void)_clientConnectionRestarted:(id)a0;
- (void)_autoJoinStateChanged:(id)a0;
- (void)_interfaceBecameAvailable:(id)a0;
- (void)_registerInterfaceObserversForInterface:(id)a0;
- (void)_notifyStateChanged:(long long)a0 newState:(long long)a1;

@end
