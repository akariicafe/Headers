@class PKAccountWebServicePhysicalCardActionRequest, NSString, NSArray, PKAccountService, PKPhysicalCard, PKPhysicalCardArtworkOption, CNPostalAddress, PKPaymentWebService, PKAccountUser, PKAccount, PKPaymentPass, PKAccountWebServiceRequestPhysicalCardRequest;
@protocol PKSetupFlowControllerProtocol;

@interface PKOrderPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    unsigned long long _orderReason;
    PKPhysicalCard *_physicalCardToReplace;
    NSArray *_priceOptions;
    PKAccountWebServiceRequestPhysicalCardRequest *_physicalCardRequest;
    PKAccountWebServicePhysicalCardActionRequest *_replacePhysicalCardRequest;
}

@property (readonly, nonatomic) unsigned long long featureIdentifier;
@property (readonly, nonatomic) long long paymentSetupContext;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSArray *artworkOptions;
@property (retain, nonatomic) PKPhysicalCardArtworkOption *selectedArtworkOption;
@property (retain, nonatomic) CNPostalAddress *shippingAddress;
@property (retain, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_paymentRequest;
- (id)_priceForRequestingPhysicalCard;
- (void)completeOrderPhysicalCardWithApplePayTrustSignature:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccountService:(id)a0 paymentWebService:(id)a1 paymentPass:(id)a2 account:(id)a3 accountUser:(id)a4 orderReason:(unsigned long long)a5 context:(long long)a6 currentPhysicalCard:(id)a7;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)startOrderPhysicalCardWithCompletion:(id /* block */)a0;
- (void)updateCustomizationOptionsWithCompletion:(id /* block */)a0;

@end
