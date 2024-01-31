@interface PassKitUI.ProvisioningAutoReloadCompleteFlowItem : NSObject <PKPaymentAutoReloadSetupCompleteViewControllerDelegate> {
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ threshold;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)autoReloadSetupCompleteViewControllerDidComplete;
- (id)init;
- (void).cxx_destruct;

@end
