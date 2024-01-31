@class AFSiriHeadphonesMonitor, NSString, AFSiriAudioRoute, AFBluetoothHeadphoneInEarDetectionState, NSObject, SASLockStateMonitor;
@protocol OS_dispatch_queue;

@interface SASHeadphonesAuthenticationManager : NSObject <AFSiriHeadphonesMonitorDelegate, SASLockStateMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authenticatedLock;
    NSObject<OS_dispatch_queue> *_queue;
    SASLockStateMonitor *_lockStateMonitor;
    AFSiriHeadphonesMonitor *_headphonesMonitor;
    BOOL _authenticated;
    double _authenticatedTime;
    BOOL _inEarStateEligible;
    BOOL _sessionStateEligible;
    BOOL _lockStateEligible;
    BOOL _routeEligible;
    unsigned long long _sessionState;
    AFSiriAudioRoute *_audioRoute;
    NSString *_inEarDetectionBTAddress;
    AFBluetoothHeadphoneInEarDetectionState *_inEarDetectionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startObserving;
- (id)init;
- (void)dealloc;
- (void)_fetchInitialState;
- (BOOL)isAuthenticated;
- (void)privateAudioSessionStateDidChange:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_initForTesting;
- (id)_headphonesMonitor;
- (void)didChangeLockState:(unsigned long long)a0;
- (void)currentAudioRouteDidChange:(id)a0;
- (void)inEarDetectionStateDidChangeForBTAddress:(id)a0 toState:(id)a1;
- (BOOL)_inEarDetectionStateEligibleForState:(id)a0;
- (void)_invalidateAuthenticationWithReason:(long long)a0;
- (id)_lockStateMonitor;
- (void)_logEligibilityForAuthenticatedState:(BOOL)a0 andTimedOut:(BOOL)a1;
- (void)_recomputeAuthentication;
- (BOOL)_wearingSessionEligible;
- (void)getHeadphonesAuthenticationStatusWithCompletion:(id /* block */)a0;

@end
