@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKMHPromptedAssessmentsManager : NSObject <HKMHPromptedAssessmentsManagerClient, _HKXPCExportable, HKMHPromptedAssessmentsProviding> {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)remoteInterface;
- (void)unregisterObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (void)_startObservingWithActivationHandler:(id /* block */)a0;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (void)registerObserver:(id)a0 queue:(id)a1 activationHandler:(id /* block */)a2;
- (id)promptedAssessmentsWithError:(id *)a0;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (void)client_promptedAssessmentsManagerDidUpdatePromptedAssessments;

@end
