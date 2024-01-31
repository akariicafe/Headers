@class HDFitnessMachineStateTimer, NSObject;
@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

@interface HDFitnessMachineStateTimers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate;

- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)beginRetryConnectionTimeout;
- (void)dealloc;
- (BOOL)isFieldDetectTimerValid;
- (void)cancelMfaTimeout;
- (void)cancelFieldDetectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)cancelMachineIdentityVerificationTimeout;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)cancelRetryConnectionTimeout;
- (void)beginDisconnectTimeout;
- (void)beginPauseTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginMfaTimeout;
- (void)beginTagReadTimeout;
- (BOOL)isRetryConnectionTimerValid;
- (void)cancelAllTimers;
- (BOOL)isDisconnectTimerValid;
- (void)cancelDisconnectTimeout;
- (void).cxx_destruct;
- (void)cancelTagReadTimeout;
- (BOOL)isTagReadTimerValid;
- (BOOL)isUserAcceptanceTimerValid;
- (void)beginUserAcceptanceTimeout;
- (BOOL)isPauseTimerValid;
- (BOOL)isMfaTimerValid;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)cancelPauseTimeout;

@end
