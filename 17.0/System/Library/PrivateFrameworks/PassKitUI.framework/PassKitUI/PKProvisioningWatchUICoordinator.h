@class _PKProvisioningWatchUICoordinator;
@protocol PKProvisioningWatchUICoordinatorDelegate;

@interface PKProvisioningWatchUICoordinator : NSObject {
    _PKProvisioningWatchUICoordinator *_coordinator;
}

@property (weak, nonatomic) id<PKProvisioningWatchUICoordinatorDelegate> delegate;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)cancel;
- (id)_initWithCoordinator:(id)a0;
- (void)continueWithFieldsModel:(id)a0;
- (id)initManualEntryCoordinatorWithSetupContext:(long long)a0 provisioningController:(id)a1 skipRequirements:(BOOL)a2;
- (id)initWithSetupContext:(long long)a0 provisioningController:(id)a1 credential:(id)a2;
- (void)preflightWithFieldsModel:(id)a0 completion:(id /* block */)a1;

@end
