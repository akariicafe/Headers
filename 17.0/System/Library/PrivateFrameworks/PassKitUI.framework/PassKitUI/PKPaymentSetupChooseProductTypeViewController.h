@class PKPaymentProvisioningController, UIImageView, UILabel, PKPaymentProvisioningMethodMetadata, PKDigitalIssuanceServiceProviderItem, PKPaymentSetupProduct, PKDigitalIssuanceServiceProviderProduct, PKPaymentSetupChooseProductListSectionController, PKPaymentSetupCardImageHeaderView, NSString, PKPaymentAuthorizationCoordinator, PKAnimatedNavigationBarTitleView, PKServiceProviderPurchase, PKPaymentSetupPurchaseController, UIImage;
@protocol PKPaymentSetupChooseProductTypeViewControllerFlowDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupChooseProductTypeViewController : PKDynamicCollectionViewController <PKViewControllerPreflightable, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentSetupChooseProductListSectionControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate> {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UIImage *_cardImage;
    double _headerHeight;
    BOOL _viewDidAppear;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    PKPaymentSetupChooseProductListSectionController *_listSectionController;
    NSString *_selectedItemIdentifier;
    PKDigitalIssuanceServiceProviderProduct *_postPaidProduct;
    PKDigitalIssuanceServiceProviderItem *_postPaidItem;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    PKServiceProviderPurchase *_purchase;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController;
@property (weak, nonatomic) id<PKPaymentSetupChooseProductTypeViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_showSpinner:(BOOL)a0;
- (BOOL)acceptedTerms;
- (void)didSelectPKPaymentSetupChooseProductListItem:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3;
- (void)paymentSetupDidFinish:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)showSpinner:(BOOL)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
