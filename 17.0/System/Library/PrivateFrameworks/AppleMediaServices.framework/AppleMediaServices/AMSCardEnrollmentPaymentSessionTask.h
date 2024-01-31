@interface AMSCardEnrollmentPaymentSessionTask : AMSTask

+ (id)_paymentServiceURLStringForMerchantURL:(id)a0;
+ (id)_performPaymentSessionWithBag:(id)a0 isForParentalVerification:(BOOL)a1;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)a0;
+ (void)paymentSessionWithBag:(id)a0 completion:(id /* block */)a1;
+ (id)performPaymentSessionEnrollmentWithBag:(id)a0;
+ (id)performPaymentSessionForVerificationWithBag:(id)a0;

@end
