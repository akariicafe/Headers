@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _biometricEnrollmentChangedToken;
    BOOL _haveEnrolledBiometricIdentities;
    int _activeBiometricOperationChangedToken;
    int _activeBiometricOperationType;
    long long _lastBiometricMatchCompleteTime;
    NSDictionary *_mobileKeyBagOptions;
    int _deviceLockStateChangedToken;
    int _deviceLockState;
    long long _lastDeviceUnlockTime;
    BOOL _onLockScreen;
    BOOL _addingLayoutObserver;
    BOOL _observingLayoutChanges;
    BOOL _isPrewarming;
    NSObject<OS_dispatch_source> *_delayedPrewarmTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (void)initialize;
+ (void)stop;

- (void)dealloc;
- (void)layoutMonitor:(id)a0 didUpdateLayout:(id)a1;

@end
