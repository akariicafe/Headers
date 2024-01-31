@class NSData, NSString, NSError, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, AMSPromise, UIViewController, AMSMutablePromise;
@protocol AMSBagProtocol;

@interface AMSUIParentalVerificationApplePayTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, NSURLSessionDelegate, AMSURLProtocolDelegate, NSURLSessionTaskDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *accountParameters;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics;
@property (retain, nonatomic) ACAccount *originalAccount;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AMSUIParentalVerificationApplePayTask *strongSelf;
@property (retain, nonatomic) AMSPromise *resultPromise;
@property (retain, nonatomic) AMSMutablePromise *delegatePromise;
@property (retain, nonatomic) NSData *paymentData;
@property (retain, nonatomic) NSError *paymentError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paymentRequestFromPaymentSession:(id)a0 currencyCode:(id)a1 countryCode:(id)a2 networks:(id)a3;

- (void).cxx_destruct;
- (id)performTask;
- (id)_presentPaymentRequest:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)_promiseToFetchPaymentCardTokenURL:(id)a0 requestBody:(id)a1;
- (id)_promiseToLoadPVTURLWithBody:(id)a0;
- (id)_promiseToRequestWalletDataUsingSession:(id)a0;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end
