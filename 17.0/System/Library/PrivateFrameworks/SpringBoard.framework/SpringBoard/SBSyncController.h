@class NSString, NSTimer, SBWindowSceneStatusBarSettingsAssertion, SBFAuthenticationAssertion;
@protocol SBIdleTimerCoordinating;

@interface SBSyncController : NSObject <DDRResetObserver, SBIdleTimerProviding> {
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _isAppSyncing;
    BOOL _inExtendedAppSyncCoalescePeriod;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isRestoring;
- (void)startObserving;
- (int)resetState;
- (void)stopObserving;
- (void)_didEndRestoring:(int)a0;
- (BOOL)isResetting;
- (void)dealloc;
- (int)restoreState;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)_wirelessSyncBegan:(id)a0;
- (void)_syncSessionDidBegin;
- (void)_delayedQuitApplications;
- (void)_syncSessionDidEnd;
- (void)_killApplicationsIfNecessary;
- (void)_setupRestoreTimer;
- (void)_invalidateRestoreTimer;
- (void)_notifyRestoreCanProceed;
- (void)_wirelessSyncEnded:(id)a0;
- (void)_rebootNow;
- (void)_setRestoreState:(int)a0;
- (BOOL)_isBackupAgentRunning;
- (void).cxx_destruct;
- (void)resetService:(id)a0 willBeginDataResetWithMode:(long long)a1;
- (void)_restoreTimerFired:(id)a0;
- (void)finishedTerminatingApplications;
- (void)resetService:(id)a0 didCompleteDataResetMode:(long long)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)_appInstallationNotification;
- (void)resetService:(id)a0 didBeginDataResetWithMode:(long long)a1;
- (void)beginRestoring;
- (id)_idleTimerBehavior;
- (BOOL)isInUse;
- (void)cancelRestoring;

@end
