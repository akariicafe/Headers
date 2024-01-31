@class SFDeviceOperationCNJSetup, NSString, TRSession, NSMutableArray, TROperationQueue, SFDevice, SFSession, NSObject, UIViewController, SFDeviceOperationWiFiSetup, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    unsigned long long _peerFeatureFlags;
    NSString *_peerSSID;
    unsigned long long _peerProblemFlags;
    int _pairVerifyState;
    unsigned long long _pairVerifyType;
    BOOL _sessionSecured;
    int _getProblemsState;
    unsigned long long _problemFlags;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    BOOL _wifiIsCaptive;
    SFDeviceOperationCNJSetup *_captiveJoin;
    int _captiveJoinState;
    double _captiveJoinSecs;
    BOOL _doCaptiveJoin;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;
@property (nonatomic) BOOL disableSilentAuth;

- (void)_cleanup;
- (void)_run;
- (id)init;
- (void)dealloc;
- (void)_reportError:(id)a0;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (int)_runFinish;
- (int)_runCaptiveJoin;
- (int)_runGetProblems;
- (int)_runCDPSetup;
- (int)_runHomeKitSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFiEarly;
- (int)_runPreflightWiFiFull;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runWiFiSetup;

@end
