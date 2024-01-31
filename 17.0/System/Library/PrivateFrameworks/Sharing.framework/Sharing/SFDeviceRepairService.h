@class SFDeviceOperationHandlerWiFiSetup, SFService, SFDeviceOperationHandlerCDPSetup, SFSession, NSObject, HMDeviceSetupOperationHandler, SFDeviceOperationHandlerCNJSetup, ACAccountStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceRepairService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    struct __WiFiManagerClient { } *_wifiManager;
    ACAccountStore *_accountStore;
    BOOL _prefCDPEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;
    unsigned long long _startTicks;
    unsigned long long _startProblemFlags;
    NSObject<OS_dispatch_source> *_repairMetricsTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_sfServiceStart;
- (void)_handleSessionStarted:(id)a0;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 companionDevice:(id)a2 anisetteDataProvider:(id)a3 completion:(id /* block */)a4;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)_authenticateWithServiceType:(unsigned long long)a0 authResults:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateWithServiceTypes:(id)a0 authResults:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateiCloudWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_authenticateiTunesWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleGetProblemsRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleTRCompanionAuthenticationRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTRProxyAuthenticationRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTRProxyDeviceRequest:(id)a0 responseHandler:(id /* block */)a1;
- (unsigned long long)_lastProblemRecorded;
- (long long)_nextServiceTypeForTRAccountServices:(id)a0;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)a0;
- (void)_recordNewProblem:(unsigned long long)a0;
- (void)_repairMetricsDailyPush;
- (void)_repairMetricsNewProblemFlags:(unsigned long long)a0;
- (void)_saveRemoteVerifiedAccount:(id)a0 completion:(id /* block */)a1;
- (id)_whenLastProblemWasRecorded;

@end
