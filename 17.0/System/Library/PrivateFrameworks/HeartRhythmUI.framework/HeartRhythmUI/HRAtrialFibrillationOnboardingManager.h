@class HKFeatureAvailabilityStore, NSNumber, NSString, _HRAtrialFibrillationOnboardingNavigationController, HKOnboardingManager;
@protocol HRAtrialFibrillationOnboardingManagerDelegate;

@interface HRAtrialFibrillationOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate>

@property (readonly, nonatomic) HKOnboardingManager *onboardingManager;
@property (readonly, nonatomic) _HRAtrialFibrillationOnboardingNavigationController *navigationController;
@property (weak, nonatomic) id<HRAtrialFibrillationOnboardingManagerDelegate> delegate;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *featureAvailabilityStore;
@property (readonly, nonatomic) long long provenance;
@property (retain, nonatomic) NSNumber *hasAtrialFibrillationDiagnosis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)availableOnboardingStepsForOnboardingManager:(id)a0;
- (void)didBeginOnboardingForOnboardingManager:(id)a0;
- (void)didCancelOnboardingForOnboardingManager:(id)a0;
- (void)didCompleteOnboardingForOnboardingManager:(id)a0;
- (void)dismissOnboarding;
- (id)onboardingManager:(id)a0 customViewControllerForPage:(id)a1;
- (id)onboardingManager:(id)a0 sequenceForStep:(long long)a1 onboardingType:(long long)a2;
- (void)onboardingManager:(id)a0 willMoveToPage:(id)a1;
- (id)onboardingNavigationController;
- (void)_setOnboardingCompletedForCountryCode:(id)a0;
- (void)_submitTipsDiscoverabilitySignal;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(BOOL)a0;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 provenance:(long long)a4 delegate:(id)a5;

@end
