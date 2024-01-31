@class NSString, CUNANSubscriber, NSObject, CUNANEndpoint;
@protocol OS_dispatch_queue;

@interface SKSetupClient : SKSetupBase <CUActivatable, CUAuthenticatableClient> {
    id /* block */ _activateCompletion;
    CUNANEndpoint *_nanEndpoint;
    CUNANSubscriber *_nanSubscriber;
}

@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authPromptHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_run;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_completeWithError:(id)a0;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)tryPassword:(id)a0;
- (void)_activateBLEWithCompletion:(id /* block */)a0;
- (void)_activateNANContinueWithError:(id)a0;
- (void)_activateNANWithCompletion:(id /* block */)a0;
- (void)_activateOOBWithCompletion:(id /* block */)a0;
- (void)_invalidateSteps;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_setupConnectionCommon:(id)a0;

@end
