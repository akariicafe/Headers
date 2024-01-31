@class _PKProvisioningBackgroundCoordinator;

@interface PKProvisioningBackgroundCoordinator : NSObject {
    _PKProvisioningBackgroundCoordinator *_coordinator;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletion:(id /* block */)a0;
- (id)archivedState;
- (id)initWithSetupContext:(id)a0 credential:(id)a1 previouslyAcceptedTerms:(BOOL)a2;

@end
