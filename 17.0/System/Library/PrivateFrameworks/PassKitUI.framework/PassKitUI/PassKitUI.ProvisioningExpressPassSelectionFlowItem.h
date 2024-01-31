@interface PassKitUI.ProvisioningExpressPassSelectionFlowItem : NSObject <PKPaymentSetupViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ groupedPassesWithPrimaryPass;
    void /* unknown type, empty encoding */ groupsController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
}

- (void)viewController:(id)a0 didFinishWithPasses:(id)a1 error:(id)a2;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
