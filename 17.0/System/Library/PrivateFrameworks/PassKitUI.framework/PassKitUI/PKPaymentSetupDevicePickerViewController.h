@class NSString, PKPaymentProvisioningController, PKPaymentSetupProduct, NSArray, UIImage, PKPaymentWebService;
@protocol PKPaymentSetupDevicePickerViewControllerFlowDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupDevicePickerViewController : PKDynamicCollectionViewController <PKViewControllerPreflightable, PKPaymentSetupDevicePickerListSectionControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentProvisioningController *_bridgeProvisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentSetupProduct *_product;
    PKPaymentSetupProduct *_nanoProduct;
    NSArray *_webServices;
    PKPaymentWebService *_webService;
    PKPaymentWebService *_nanoWebService;
    UIImage *_cardImage;
}

@property (weak, nonatomic) id<PKPaymentSetupDevicePickerViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)didSelectWebService:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3 webService:(id)a4 nanoWebService:(id)a5;

@end
