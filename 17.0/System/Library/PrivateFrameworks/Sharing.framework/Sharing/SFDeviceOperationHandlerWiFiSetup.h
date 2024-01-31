@class NSError, CUBonjourAdvertiser, CUNetInterfaceMonitor, NSString, NSData, NSDictionary, SFSession, CUReachabilityMonitor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {
    CUBonjourAdvertiser *_bonjourAdvertiser;
    BOOL _invalidateCalled;
    CUNetInterfaceMonitor *_interfaceMonitor;
    NSObject<OS_dispatch_source> *_ip4Timeout;
    BOOL _ip4WaitDone;
    CUReachabilityMonitor *_reachabilityMonitor;
    id /* block */ _responseHandler;
    NSDictionary *_scanResult;
    int _state;
    BOOL _stepDone;
    NSError *_stepError;
    BOOL _reachabilityEnabled;
    BOOL _ensureIP4Configured;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    int _wifiChannel;
    BOOL _wifiDirected;
    id _wifiEAPConfig;
    id _wifiEAPTrustExceptions;
    BOOL _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
    BOOL _wifiSkipReachbility;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFSession *sfSession;

- (void)_run;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_completeError:(id)a0;
- (void)_handleRequestBonjourTestDone:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequestBonjourTestStart:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleWiFiSetupRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_runIP4AvailableStart;
- (void)_runJoinStart:(int)a0;
- (void)_runReachabilityStart;
- (void)_runScanResults:(id)a0 error:(id)a1 channel:(int)a2;
- (void)_runScanStart:(int)a0;

@end
