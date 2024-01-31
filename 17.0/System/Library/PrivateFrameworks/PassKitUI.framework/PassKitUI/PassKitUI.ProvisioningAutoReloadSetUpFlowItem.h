@interface PassKitUI.ProvisioningAutoReloadSetUpFlowItem : NSObject <PKPaymentAutoReloadSetupControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
    void /* unknown type, empty encoding */ _isManualProvisioning;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)autoReloadSetupControllerDidCancel:(id)a0;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)a0 threshold:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
