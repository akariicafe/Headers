@class NSString, CSCoverSheetViewController;
@protocol SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehavior;

@interface SBDashBoardBiometricUnlockController : NSObject <SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior> {
    CSCoverSheetViewController *_coverSheetViewController;
    id<SBBiometricUnlockBehaviorConfiguration> _biometricUnlockBehaviorConfiguration;
    id<SBBiometricUnlockBehavior> _biometricUnlockBehavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsUnlock:(id)a1 withFeedback:(id)a2;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsFeedback:(id)a1;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)setAuthenticated:(BOOL)a0;
- (void)dealloc;
- (void)startRestToOpenCoachingWithCompletion:(id /* block */)a0;
- (void)fillRestToOpenWithDuration:(double)a0;
- (id)succinctDescriptionBuilder;
- (id)_mesaUnlockBehavior;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithCoverSheetViewController:(id)a0;
- (int)lockScreenWakeSource;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)conformsToCSEventHandling;
- (void)resetRestToOpen;
- (void).cxx_destruct;
- (void)noteLockButtonDown;
- (id)succinctDescription;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)hasVisibleContentToReveal;
- (BOOL)isRestToOpenAvailable;
- (BOOL)handleEvent:(id)a0;
- (BOOL)isLockScreenShowingDefaultContent;

@end
