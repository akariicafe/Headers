@class AVExternalStorageDeviceDiscoverySession, NSArray, NSObject;
@protocol OS_dispatch_queue, CAMExternalStorageMonitorDelegate;

@interface CAMExternalStorageMonitor : NSObject

@property (retain, nonatomic) AVExternalStorageDeviceDiscoverySession *_externalStorageDiscoverySession;
@property (retain, nonatomic) id _monitoringContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (nonatomic) BOOL _isObservingKVO;
@property (nonatomic) BOOL _hasPendingChangesSinceLastDelegateCall;
@property (weak, nonatomic) id<CAMExternalStorageMonitorDelegate> delegate;
@property (nonatomic) unsigned long long monitoringState;
@property (readonly, nonatomic) NSArray *connectedStorageDevices;
@property (readonly, nonatomic) BOOL hasExternalStorageNotRecommendedForCapture;

+ (id)_stringFromMonitoringState:(unsigned long long)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_endMonitoring;
- (void)_logMonitoringChangeFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)_resumeMonitoring;

@end
