@interface PassKitUI.ProvisioningInAppHeroFlowItem : NSObject <PKExplanationViewDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ _hasSeenHeroScreen;
    void /* unknown type, empty encoding */ _privacyDisclosures;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
