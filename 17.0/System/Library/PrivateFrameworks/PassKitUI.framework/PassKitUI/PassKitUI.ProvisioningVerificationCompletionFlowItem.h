@interface PassKitUI.ProvisioningVerificationCompletionFlowItem : NSObject <PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ verificationController;
    void /* unknown type, empty encoding */ managingSection;
    void /* unknown type, empty encoding */ allowVerificationMethodSelection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)showVerificationMethodsForVerificationCompletionViewController:(id)a0;
- (void)verificationCompletionViewControllerDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
