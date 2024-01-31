@class AMSURLTaskInfo, AMSDelegatePurchaseRequest, AMSURLResult, AMSBiometricsSignatureRequest, AMSPaymentSheetResult, AMSDelegatePaymentSheetTask;

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask

@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain, nonatomic) AMSURLResult *delegateAuthResult;
@property (retain, nonatomic) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (retain, nonatomic) AMSPaymentSheetResult *paymentSheetResult;
@property (retain, nonatomic) AMSDelegatePaymentSheetTask *paymentSheetTask;
@property (readonly, nonatomic) AMSDelegatePurchaseRequest *request;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)_finishWithDelegateAuthenticateResult:(id)a0 error:(id *)a1;
- (void)_parseBiometricsSignatureRequestFromTask:(id)a0;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)a0;
- (id)_performPaymentSheetTask;
- (id)_urlRequestParameters;
- (id)delegateAuthenticateUrl;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)performDelegatePurchase;

@end
