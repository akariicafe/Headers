@class PKPayment, NSString, NSDictionary, AMSBinaryPromise, NSMutableArray, AMSMetricsEvent;

@interface AMSCardAuthorizationTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain, nonatomic) AMSBinaryPromise *authorizationPromise;
@property (retain, nonatomic) PKPayment *payment;
@property (nonatomic) BOOL didBiometricsLockout;
@property (nonatomic) BOOL didCancelHomeButton;
@property (retain, nonatomic) NSMutableArray *userActions;
@property (nonatomic) long long confirmationStyle;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSDictionary *paymentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_metricsPost;
- (id)_metricsTimestamp;
- (id)_metricsUserActionDictionary;
- (id)_presentPaymentRequest:(id)a0;
- (id)initWithPaymentSession:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)performCardAuthorization;

@end
