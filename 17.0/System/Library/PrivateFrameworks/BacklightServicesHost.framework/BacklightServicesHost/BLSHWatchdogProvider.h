@class BLSHWatchdogAbortParameters, BSAbsoluteMachTimer;
@protocol BLSHWatchdogProviderDelegate, BSInvalidatable;

@interface BLSHWatchdogProvider : NSObject {
    BSAbsoluteMachTimer *_lock_fireRetryTimer;
    BLSHWatchdogAbortParameters *_lock_waitingAbortParams;
    BOOL _lock_waitingForTailspin;
    BOOL _lock_startedTailspin;
    BOOL _lock_waitingForWatchdogCompletion;
    id<BSInvalidatable> _lock_forceOverdueAbortTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHWatchdogProviderDelegate> _providerDelegate;
}

@property (class) BOOL ignoreWatchdogAborts;

@property (getter=isWatchdogEnabled) BOOL watchdogEnabled;

+ (BOOL)checkForWatchdogDidFire:(BOOL)a0;
+ (void)markWatchdogDidFire:(id)a0 abortReason:(id)a1;
+ (void)resetWatchdogDidFire;
+ (void)showWatchdogDidFireAlert:(id)a0;

- (void)_clearIsWaitingForWatchdogCompletion;
- (void)dealloc;
- (id)waitingPastFireForCompletionAndTailspinAbortParams;
- (void)_checkForReadyToAbortAfterWaitingPastFire;
- (void)_abortForWatchdogFire:(id)a0;
- (void)setWaitingwaitingPastFireForCompletionAndTailspin:(id)a0 waitForWatchdogCompletion:(BOOL)a1;
- (void)didDetectSignificantUserInteraction;
- (void)_startWritingTailspin;
- (BOOL)isWaitingwaitingPastFireForCompletionAndTailspin;
- (void)_giveUpWaitingForWatchdogCompletionAbortWhileWaitingPastFire:(id)a0;
- (BOOL)isTesting;
- (id)scheduleWatchdogWithDelegate:(id)a0 explanation:(id)a1 timeout:(double)a2;
- (void)clearWatchdogWithExplanation:(id)a0 reason:(unsigned long long)a1 timeout:(double)a2 elapsedTime:(double)a3;
- (void)registerHandlersForService:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)fireWatchdogWithTimer:(id)a0 delegate:(id)a1 timeout:(double)a2 elapsedTime:(double)a3;
- (void)_fireWatchdogWithTimer:(id)a0 delegate:(id)a1 timeout:(double)a2 elapsedTime:(double)a3 abortContext:(id)a4 explanation:(id)a5 remainingRetries:(unsigned long long)a6;

@end
