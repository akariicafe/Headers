@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingChangeDetector : _TtCs12_SwiftObject <HKMCOnboardingManagerObserver> {
    void /* unknown type, empty encoding */ onboardingManager;
    void /* unknown type, empty encoding */ observerQueue;
    void /* unknown type, empty encoding */ _isOnboardingCompleted;
}

- (void)onboardingManager:(id)a0 didUpdateFeatureSettingsForFeatureIdentifier:(id)a1;
- (void)onboardingManagerDidUpdateOnboardingCompletion:(id)a0;

@end
