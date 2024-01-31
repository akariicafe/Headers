@interface PassKitUI.ProvisioningMakeDefaultFlowItem : NSObject <PKPaymentPassMakeDefaultViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
}

- (void)paymentPassMakeDefaultViewControllerDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
