@class NSArray, NSSet, NSMutableArray, BSAbsoluteMachTimer;

@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    long long _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    double _latestDispatchedPressTimestamp;
    long long _latestDispatchedPressPhase;
    long long _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSAbsoluteMachTimer *_waitingGestureStateExpirationTimer;
    BOOL _isDispatchingPresses;
    BSAbsoluteMachTimer *_waitingForPreemptionTimer;
    double _precedencePressesTime;
    double _waitForPreemptionTimeInterval;
}

@property (retain, nonatomic) NSArray *pressTypesWithPrecedence;

- (id)_gestureStateInfoForPressInfo:(id)a0;
- (id)_allowedPressTypes;
- (BOOL)_didGestureBegin;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)processPresses:(id)a0;
- (double)latestPressTimestamp;
- (void)_addDelayedPress:(id)a0;
- (long long)latestPressType;
- (long long)latestPressPhase;
- (void)_processDelayablePresses:(id)a0;
- (void)_stopWaitingGestureStateExpiration;
- (long long)requiredPressTypesCount;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)a0 andPhase:(long long)a1 result:(long long *)a2;
- (void)_resetDelayedPresses;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_resetState;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (void)_processPrecedencePresses:(id)a0;
- (void)_updatePublicPressInfo:(id)a0;
- (BOOL)_isDispatchingDelayedPresses;
- (long long)_delayedPressesCount;
- (void).cxx_destruct;
- (void)_applyGestureStateInfo:(id)a0;
- (id)name;
- (void)_waitGestureStateExpirationWithFireInterval:(double)a0 timerExpiredActionBlock:(id /* block */)a1;
- (void)_cancelGesture;
- (BOOL)_isGestureFailedOrCancelled;
- (double)waitForPreemptionTimeInterval;
- (void)_startDispatchingDelayedPresses;
- (void)setWaitForPreemptionTimeInterval:(double)a0;
- (void)_resetPublishedPressInfo;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_reallyStartDispatchingDelayedPresses;
- (void)setAllowedPressTypes:(id)a0;
- (BOOL)_shouldStopDispatching;

@end
