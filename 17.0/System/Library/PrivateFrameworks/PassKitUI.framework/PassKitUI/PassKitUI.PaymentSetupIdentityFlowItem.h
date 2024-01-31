@interface PassKitUI.PaymentSetupIdentityFlowItem : NSObject <CIDVUIProofingFlowManagerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)proofingFlowManager:(id)a0 completedProofingWithError:(id)a1;
- (void)proofingFlowManager:(id)a0 didChangeActiveConfigurations:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
