@interface PassKitUI.PaymentSetupWelcomeFlowItem : NSObject <PKPaymentSetupWelcomeViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)welcomeViewController:(id)a0 didSelectCategory:(id)a1 products:(id)a2;
- (void)welcomeViewControllerDidSelectCardsOnFile:(id)a0;
- (void)welcomeViewControllerDidSelectManualEntry:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
