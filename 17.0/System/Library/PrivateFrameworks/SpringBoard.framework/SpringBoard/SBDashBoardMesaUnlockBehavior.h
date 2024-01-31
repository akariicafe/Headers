@class SBMesaUnlockTrigger, SBHomeHardwareButton, NSString, CSLockScreenMesaSettings;
@protocol SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardMesaUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior> {
    long long _failedMesaUnlockAttempts;
}

@property (retain, nonatomic, getter=_getHomeHardwareButton, setter=_setHomeHardwareButton:) SBHomeHardwareButton *homeHardwareButton;
@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger;
@property (readonly, nonatomic, getter=_mesaSettings) CSLockScreenMesaSettings *mesaSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)setAuthenticated:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)screenOn;
- (id)succinctDescription;
- (id)_failureSettingsForFailAttempt:(long long)a0;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)a0;
- (id)_feedbackForFailureSettings:(id)a0;
- (id)_feedbackForPasscodeEvent;
- (void)_handleMesaFailure;
- (id)_homeHardwareButton;
- (id)initWithMesaSettings:(id)a0 andUnlockTrigger:(id)a1;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)a0;
- (void)significantUserInteractionDidOccur;

@end
