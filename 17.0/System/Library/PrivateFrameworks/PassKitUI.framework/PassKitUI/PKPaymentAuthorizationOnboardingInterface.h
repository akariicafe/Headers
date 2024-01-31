@class PKPaymentAuthorizationInterfaceConfiguration, PKPaymentProvisioningController, NSString, PKAppleCardWelcomeExperiment, NSError, PKNavigationController, PKPaymentAuthorizationContext;
@protocol PKPaymentAuthorizationOnboardingInterfaceDelegate;

@interface PKPaymentAuthorizationOnboardingInterface : NSObject <PKLoadingViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentAuthorizationInterface> {
    long long _onboardingContext;
    PKPaymentAuthorizationContext *_authorizationContext;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    unsigned long long _feature;
    PKAppleCardWelcomeExperiment *_applyWelcomeCardExperiment;
}

@property (retain, nonatomic) PKNavigationController *primaryViewController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (retain, nonatomic) NSError *setupError;
@property (weak, nonatomic) id<PKPaymentAuthorizationOnboardingInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadingViewControllerDidCancel:(id)a0;
- (void)_bindFeatureApplication:(id)a0 completion:(id /* block */)a1;
- (id)_createBindRequestForFeatureApplication:(id)a0;
- (id)_createPrimaryViewController;
- (void)_getAugmentedProduct:(id /* block */)a0;
- (void)_getProduct:(id /* block */)a0;
- (void)_loadFeatureOnboardingViewControllerForProduct:(id)a0 completion:(id /* block */)a1;
- (id)_setupErrorUserInfoWithBindToken:(id)a0;
- (id)applyWelcomeCardExperiment;
- (id)initWithOnboardingContext:(long long)a0 authorizationContext:(id)a1 configuration:(id)a2;
- (void)viewController:(id)a0 canProceedWithInstallment:(BOOL)a1 featureApplication:(id)a2 completion:(id /* block */)a3;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)willAppear;

@end
