@class PKPaymentProvisioningController, NSString, PKPaymentSetupHeroView, NSArray, PKPaymentWebService, PKPaymentHeroImageController, PKPaymentSetupProduct, ACAccountStore;
@protocol PKPaymentSetupHeroViewControllerFlowDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate, PKLoadingUIProviding, PKPaymentSetupHideSetupLaterButtonProtocol> {
    ACAccountStore *_accountStore;
    BOOL _nextButtonPushed;
    PKPaymentSetupHeroView *_splashView;
    BOOL _hasFelicaSecureElement;
    BOOL _preflightComplete;
    PKPaymentSetupProduct *_product;
    NSArray *_featuredImages;
    NSString *_deviceRegion;
}

@property (weak, nonatomic) id<PKPaymentSetupHeroViewControllerFlowDelegate> flowDelegate;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentHeroImageController *heroImageController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic) BOOL checkSecurity;
@property (nonatomic) BOOL hidePrivacyView;
@property (nonatomic) BOOL showChinaPrivacyDisclosure;
@property (nonatomic) BOOL showSouthKoreaPrivacyDisclosure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_bodyText;
- (void)_configureDock;
- (void)_preflightWithCompletion:(id /* block */)a0;
- (BOOL)_readerModeIsSupported;
- (void)_setShowActivityIndicator:(BOOL)a0;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)_terminateSetupFlow;
- (void)_transferExistingCardTapped;
- (void)didTapFooterLink:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 product:(id)a3 allowsManualEntry:(BOOL)a4;
- (void)setFeaturedHeroImages:(id)a0;
- (void)setHideSetupLaterButton:(BOOL)a0;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
