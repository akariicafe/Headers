@interface PassKitUI.ProvisioningHeroFlowItem : NSObject <PKPaymentSetupHeroViewControllerFlowDelegate, PKExplanationViewDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ allowSecondaryManualEntry;
    void /* unknown type, empty encoding */ _hasSeenHeroScreen;
    void /* unknown type, empty encoding */ _privacyDisclosures;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)heroViewControllerDidRequestTransferBalance:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
