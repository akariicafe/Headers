@interface PassKitUI.PaymentSetupProductDevicePickerFlowItem : NSObject <PKPaymentSetupDevicePickerViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ selectedProduct;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)devicePickerViewController:(id)a0 didSelectProvisioningController:(id)a1 product:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
