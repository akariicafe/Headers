@class NSString, NSDictionary, CUWiFiDevice, NSObject, EasyConfigDevice;
@protocol OS_dispatch_queue;

@interface CUWACSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    int _saveOriginalWiFiState;
    NSDictionary *_originalWiFiInfo;
    int _joinSoftAPState;
    double _joinSoftAPStartTime;
    EasyConfigDevice *_easyConfigDevice;
    int _easyConfigPreConfigState;
    struct { double startTime; unsigned char userChangedFriendlyName; unsigned char playPasswordSet; unsigned char adminPasswordSet; unsigned char destinationNetworkRecommendationUsed; double secondsToGetLinkUpOnSWAP; int wifiJoinSWAPError; unsigned char hitJoiningTargetSWAPTimeout; int rssiOfSWAP; unsigned int snrOfSWAP; unsigned int channelOfSWAP; } _easyConfigPreConfigMetrics;
    int _restoreOriginalWiFiState;
    double _restoreStartTime;
    int _easyConfigPostConfigState;
    struct { double secondsToGetLinkUpOnDestination; int wifiJoinDestinationAPError; unsigned char destinationNetworkPSKInKeychain; unsigned char hitJoiningDestinationAPTimeout; int rssiOfDestinationAP; unsigned int snrOfDestinationAP; unsigned int channelOfDestinationAP; } _easyConfigPostConfigMetrics;
    int _finishState;
}

@property (copy, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForSetupCodeHandler;
@property (retain, nonatomic) CUWiFiDevice *wacDevice;

- (void)_cleanup;
- (void)_run;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_progress:(unsigned int)a0 info:(id)a1;
- (int)_runEasyConfigPostConfig;
- (int)_runEasyConfigPreConfig;
- (void)_runEasyConfigPreConfigStart;
- (void)_runEasyConfigProgress:(int)a0 info:(id)a1;
- (int)_runFinish;
- (void)_runFinishRestored:(int)a0;
- (int)_runJoinSoftAP;
- (void)_runJoinSoftAPFinished:(int)a0;
- (void)_runJoinSoftAPStart;
- (int)_runRestoreOriginalWiFi;
- (void)_runRestoreOriginalWiFiFinished:(int)a0;
- (void)_runRestoreOriginalWiFiStart;
- (int)_runSaveOriginalWiFi;
- (void)trySetupCode:(id)a0;

@end
