@interface PassKitUI.ProvisioningCredentialFlowItem : NSObject <PKPaymentProvisioningViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ allowManualEntry;
    void /* unknown type, empty encoding */ previouslyAcceptedTerms;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ isShowingViewController;
    void /* unknown type, empty encoding */ _hasRemainingCredentialsToProvision;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)provisioningViewController:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void)provisioningViewControllerDidSelectManualEntry:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
