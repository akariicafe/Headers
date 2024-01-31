@interface PassKitUI.ProvisioningCarKeyFlowItem : NSObject <PKSubcredentialProvisioningFlowControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)a0;
- (void)subcredentialProvisioningFlowController:(id)a0 didFinishWithPass:(id)a1 error:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
