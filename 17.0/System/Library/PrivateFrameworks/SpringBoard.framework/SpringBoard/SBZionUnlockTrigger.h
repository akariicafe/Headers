@class BSAbsoluteMachTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    BOOL _hasVisibleContentToReveal;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSAbsoluteMachTimer *_restToOpenTimer;
    BSAbsoluteMachTimer *_minTouchIDTimer;
}

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (id)description;
- (void).cxx_destruct;
- (void)screenOn;
- (void)fingerOn;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (BOOL)_isRestToOpenAvailable;
- (void)_startRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)a0;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)a0;
- (void)lockButtonDown;

@end
