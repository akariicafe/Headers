@class NSString, HKObserverSet, HKHealthStore, HKKeyValueDomain, HKFeatureAvailabilityStore, NSObject, HKQuantity, HKMenstrualCyclesStore;
@protocol OS_dispatch_queue;

@interface HKMCOnboardingManager : NSObject <HKFeatureAvailabilityProvidingObserver> {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKMenstrualCyclesStore *_menstrualCyclesStore;
    HKKeyValueDomain *_legacyOnboardingKeyValueDomain;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) HKFeatureAvailabilityStore *featureAvailabilityStore;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *deviationsFeatureAvailabilityStore;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *heartRateInputFeatureAvailabilityStore;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *wristTemperatureInputFeatureAvailabilityStore;
@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)initWithHealthStore:(id)a0 queue:(id)a1;
- (BOOL)isAnyOnboardingVersionCompleted;
- (id)_featureAvailabilityStoreForFeatureWithIdentifier:(id)a0;
- (id)_onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_resetOnboardingCharacteristicsWithError:(id *)a0;
- (BOOL)_resetOnboardingKeyValueDomainWithError:(id *)a0;
- (void)_saveUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;
- (void)_setCurrentOnboardingVersionCompletedWithInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)_setLegacyOnboardingCompletedVersion:(long long)a0 error:(id *)a1;
- (void)_triggerHealthKitSync;
- (void)isAnyOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)onboardingRecordWithError:(id *)a0;
- (void)resetOnboarding:(id /* block */)a0;
- (void)setOnboardingCompletedWithInfo:(id)a0 completion:(id /* block */)a1;

@end
