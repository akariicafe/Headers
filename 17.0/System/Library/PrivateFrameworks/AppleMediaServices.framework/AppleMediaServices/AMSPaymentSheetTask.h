@class _PaymentSheetState, NSDictionary, AMSFinancePaymentSheetResponse, NSString, AMSPurchaseInfo, PKPaymentAuthorizationController, AMSPaymentSheetRequest, NSObject, AMSPromise, AKAppleIDAuthenticationContext, NSMutableArray, AMSPaymentSheetAssetCache;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain, nonatomic) AMSPaymentSheetAssetCache *assetCache;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) PKPaymentAuthorizationController *paymentAuthorizationController;
@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (readonly, nonatomic) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue;
@property (readonly, nonatomic) AMSPaymentSheetRequest *request;
@property (retain, nonatomic) _PaymentSheetState *state;
@property (retain, nonatomic) NSMutableArray *userActions;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *metricsDictionary;
@property (copy, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldCompanionAuthFallbackToPasswordForError:(id)a0;

- (id)perform;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)_paymentRequest;
- (float)_challengeSigningDelay;
- (void)_dismissPaymentAuthorizationController:(id)a0;
- (id)_metricsEvent;
- (BOOL)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)a0 purchaseResult:(id)a1 error:(id *)a2;
- (BOOL)_presentPaymentSheetWithPaymentRequest:(id)a0 error:(id *)a1;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)a0;

@end
