@class UIView;

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController {
    UIView *_interactionDisabledView;
}

@property (copy, nonatomic) id /* block */ dismissalHandler;

+ (void)shouldShowAddToWatchOfferForPass:(id)a0 inContext:(long long)a1 externalProvisioningDeviceSerialNumbers:(id)a2 completion:(id /* block */)a3;
+ (void)shouldShowAddToWatchOfferForPass:(id)a0 inContext:(long long)a1 withCompletion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_handleBridgeProvisioningError:(id)a0;
- (void)_handleDismissal:(BOOL)a0;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch;
- (id)initWithPaymentPass:(id)a0 context:(long long)a1 dismissalHandler:(id /* block */)a2;

@end
