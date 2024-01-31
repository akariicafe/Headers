@class NSString, SBLiftToWakeController, SBUIBiometricResource, CSLockScreenSettings;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;

- (void)dealloc;
- (void)_setLiftToWakeController:(id)a0;
- (void).cxx_destruct;
- (id)_liftToWakeController;
- (void)_accessibilityOptionsChanged:(id)a0;
- (Class)_currentUnlockTriggerClass;
- (void)_evaluateTriggerClass;
- (Class)_expectedTriggerClassIncludingAccessibility:(BOOL)a0;
- (BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
- (id)_unlockTriggerWithClass:(Class)a0;
- (id)initWithLiftToWakeController:(id)a0 biometricResource:(id)a1 lockScreenPrototypeSettings:(id)a2;
- (void)liftToWakeControllerEnablementDidChange:(id)a0;
- (id)newBehaviorForCurrentConfiguration;

@end
