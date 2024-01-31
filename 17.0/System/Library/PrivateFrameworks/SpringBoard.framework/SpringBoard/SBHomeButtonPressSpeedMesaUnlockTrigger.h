@class BSAbsoluteMachTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BSAbsoluteMachTimer *_slowPressTimer;
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}

@property (nonatomic) double slowPressDuration;

- (void)_invalidateTimer;
- (void)_timerFired;
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (id)description;
- (void).cxx_destruct;
- (void)_startTimer;
- (BOOL)_isTimerRunning;
- (void)_evaluateUnlock;
- (BOOL)_isPrimed;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)menuButtonDown;
- (void)menuButtonUp;

@end
