@interface PassKitUI.ProvisioningDeviceFullFlowItem : NSObject <PKPaymentSelectPassesViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ didComplete;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ dismissalConfiguration;
}

- (void)selectPassesViewController:(id)a0 didSelectPasses:(id)a1 completion:(id /* block */)a2;
- (void)selectPassesViewControllerDidTapBackButton:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
