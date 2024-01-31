@class NSObject, NSString, HKSPFeatureAvailabilityStore;
@protocol OS_dispatch_queue, WFHealthFeatureObserver;

@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver>

@property (retain, nonatomic) HKSPFeatureAvailabilityStore *store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long sleepOnboardingStatus;
@property (readonly, nonatomic) NSString *onboardingCompletedKey;
@property (weak, nonatomic) id<WFHealthFeatureObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)initWithSleepFeature:(unsigned long long)a0;
- (void)getSleepOnboardingStatus:(id /* block */)a0;

@end
