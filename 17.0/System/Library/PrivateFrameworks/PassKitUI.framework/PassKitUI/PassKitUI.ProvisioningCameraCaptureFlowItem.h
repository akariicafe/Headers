@interface PassKitUI.ProvisioningCameraCaptureFlowItem : NSObject <PKPaymentCameraCaptureViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ managingSection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)cameraCaptureViewController:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraCaptureViewControllerDidFail:(id)a0;
- (void)cameraCaptureViewControllerDidSelectManualEntry:(id)a0;
- (void)cameraCaptureViewControllerDidSelectSetupLater:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
