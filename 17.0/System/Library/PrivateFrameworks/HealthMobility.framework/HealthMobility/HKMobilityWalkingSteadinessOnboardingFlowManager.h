@class NSString, HKHealthStore, HKMobilityWalkingSteadinessFeatureStatusManager, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding, HKRegulatoryDomainProvider, HKFeatureStatusProviding;

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKFeatureStatusProviding> classificationsFeatureStatusProvider;
@property (retain, nonatomic) id<HKFeatureAvailabilityProviding> notificationsFeatureAvailabilityStore;
@property (retain, nonatomic) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) id<HKRegulatoryDomainProvider> mobileCountryCodeManager;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long countryCodeProvenance;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)a0;
- (void)fetchUserCanContinueOnboardingForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 completion:(id /* block */)a2;
- (void)markOnboardingCompleteForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 shouldTurnOnNotifications:(BOOL)a2 completion:(id /* block */)a3;
- (id)_findAnyOnboardingCompletionWithError:(id *)a0;
- (id)initWithHealthStore:(id)a0 classificationsFeatureStatusProvider:(id)a1 notificationsFeatureAvailabilityStore:(id)a2 featureStatusManager:(id)a3;

@end
