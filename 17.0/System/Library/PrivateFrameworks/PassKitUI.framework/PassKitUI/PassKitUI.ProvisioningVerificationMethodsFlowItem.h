@interface PassKitUI.ProvisioningVerificationMethodsFlowItem : NSObject <PKPaymentVerificationMethodsViewControllerFlowItemDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ verificationController;
    void /* unknown type, empty encoding */ managingSection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)showVerificationCompletionForVerificationMethodsViewController:(id)a0;
- (void)showExternalVerificationForVerificationMethodsViewController:(id)a0;
- (void)showVerificationMethodsForVerificationMethodsViewController:(id)a0;
- (void)verificationMethodsViewControllerDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
