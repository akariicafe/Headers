@class PKPaymentProvisioningController, NSString, PKWatchDeviceAppCarouselView, ASCLockupView, PKSecureElementPass, PKPaymentWebService;
@protocol PKWatchExtensionInstallViewControllerFlowDelegate;

@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate, PKLoadingUIProviding> {
    PKWatchDeviceAppCarouselView *_deviceImageView;
    ASCLockupView *_appStoreView;
}

@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (retain, nonatomic) PKPaymentWebService *webservice;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKWatchExtensionInstallViewControllerFlowDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWatchExtensionInstallViewControllerForSecureElementPass:(id)a0 webService:(id)a1;

- (void)loadView;
- (void).cxx_destruct;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_installNowPressed;
- (void)_proceedToNextScreen;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithSecureElementPass:(id)a0 provisioningController:(id)a1 webService:(id)a2 context:(long long)a3;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
