@class RemoteUIController, NSString, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, UIViewController;
@protocol PKPaymentSetupDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate;

@interface PKPaymentSetupPurchaseController : NSObject <RemoteUIControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    UIViewController<PKPaymentSetupPurchaseControllerDelegate, PKPaymentSetupDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> *_purchaseControllerDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    PKPaymentSetupProduct *_product;
}

@property (nonatomic) BOOL acceptedTerms;
@property (retain, nonatomic) RemoteUIController *termsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 purchaseControllerDelegate:(id)a3 product:(id)a4 provisioningMetadata:(id)a5;
- (id)paymentRequestForAmount:(id)a0;
- (id)paymentRequestForProduct:(id)a0 serviceProviderProduct:(id)a1 productItem:(id)a2;
- (void)presentAddCardAlert:(id)a0;
- (void)presentTermsAndConditionsWithCompletion:(id /* block */)a0;
- (void)presetPaymentRequest:(id)a0 forResultType:(long long)a1;

@end
