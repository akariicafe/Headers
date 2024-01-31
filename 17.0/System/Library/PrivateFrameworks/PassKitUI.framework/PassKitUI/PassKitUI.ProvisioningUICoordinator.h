@interface PassKitUI.ProvisioningUICoordinator : NSObject <PKPaymentSetupDisambiguationViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentCredentialProvisioningViewControllerCoordinator, PKPasscodeUpgradeFlowRenderer> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ credentialIndex;
    void /* unknown type, empty encoding */ previouslyAcceptedTerms;
    void /* unknown type, empty encoding */ cameraCaptureObjects;
    void /* unknown type, empty encoding */ composer;
    void /* unknown type, empty encoding */ fieldsModel;
    void /* unknown type, empty encoding */ skipRequirements;
    void /* unknown type, empty encoding */ provisioningError;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ termsUIController;
    void /* unknown type, empty encoding */ passcodeController;
}

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)topViewController;
- (void)disambiguationViewController:(id)a0 didSelectProduct:(id)a1;
- (void)disambiguationViewControllerSetUpLater:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)provisionedPass;
- (void)continueWithFieldModel:(id)a0;

@end
