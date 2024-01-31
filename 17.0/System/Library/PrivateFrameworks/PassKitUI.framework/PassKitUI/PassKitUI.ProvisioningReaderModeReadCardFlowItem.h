@interface PassKitUI.ProvisioningReaderModeReadCardFlowItem : NSObject <PKProvisioningReaderModeViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ fieldsModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ provisioningResult;
}

- (id)provisionedPass;
- (void)viewControllerDidFailIngestion:(id)a0;
- (void)provisionWithFieldModel:(id)a0 paymentCredential:(id)a1;
- (void)viewControllerDidCancel:(id)a0;
- (void)viewControllerDidComplete:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
