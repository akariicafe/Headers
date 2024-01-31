@interface PassKitUI.ProvisioningPushProvAddPassFlowItem : NSObject <PKShareableCredentialProvisioningViewControllerCoordinator> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ managingSection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)cancel;
- (void)startProvisioningWithConfiguration:(id)a0;
- (void)continueProvisioning;
- (void)shareableViewController:(id)a0 didFailWithError:(id)a1;
- (void)startProvisioningWithCredentials:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
