@class NSObject, NSString, PKPaymentSetupProduct;
@protocol OS_dispatch_group;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {
    BOOL _termsAccepted;
    NSObject<OS_dispatch_group> *_nextScreenGroup;
    NSString *_titleText;
    NSString *_subtitleText;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)readerModeProvisioningIsSupported;

- (id)footerView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_downloadCardArtIfNecessary:(id /* block */)a0;
- (void)_prepareForProvisioningViewController;
- (void)_pushReaderModeProvisioningWithCompletion:(id /* block */)a0;
- (void)_registerLocalDeviceWithCompletion:(id /* block */)a0;
- (void)_showTerms;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 product:(id)a2;
- (id)visibleFieldIdentifiers;

@end
