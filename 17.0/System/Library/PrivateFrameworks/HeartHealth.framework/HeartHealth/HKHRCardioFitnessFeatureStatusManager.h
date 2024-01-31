@class NSString, HKObserverSet, HKProxyProvider;

@interface HKHRCardioFitnessFeatureStatusManager : NSObject <HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet *_observers;
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)remoteInterface;
- (void)removeObserver:(id)a0;
- (void)client_didUpdateNotificationStatus:(id)a0;
- (void)resetOnboarding;
- (id)onboardingStatusWithError:(id *)a0;
- (id)initWithHealthStore:(id)a0;
- (void)setNotificationsEnabled:(BOOL)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)notificationStatusWithError:(id *)a0;
- (void)client_didUpdateOnboardingStatus:(id)a0;
- (void)_handleAutomaticProxyReconnection;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (id)initWithProxyProvider:(id)a0;

@end
