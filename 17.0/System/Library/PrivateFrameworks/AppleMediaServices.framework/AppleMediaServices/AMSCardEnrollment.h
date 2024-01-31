@class NSURL;

@interface AMSCardEnrollment : NSObject

@property (class, readonly, copy, nonatomic) NSURL *paymentServicesMerchantURL;

+ (BOOL)shouldUseAutoEnrollmentWithBag:(id)a0;
+ (BOOL)isAURUMWithBag:(id)a0;
+ (id)_cardEligibilityStatusForCountryCode:(id)a0;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayClassicWithAccount:(id)a0 options:(id)a1 countryCode:(id)a2 paymentNetworks:(id)a3;
+ (id)_shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1;
+ (BOOL)_shouldAttemptAutoEnrollmentWithCountryCode:(id)a0;
+ (BOOL)beginCardEnrollmentAttemptWithBag:(id)a0 account:(id)a1;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)a0 buyParams:(id)a1 purchaseResult:(id)a2;
+ (BOOL)isApplePayWalletRefreshedForBag:(id)a0;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 account:(id)a2 options:(id)a3;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (BOOL)shouldCheckForWalletBiometricsForBag:(id)a0;
+ (BOOL)shouldUseApplePayClassicWithBag:(id)a0;
+ (void)updateAutoEnrollmentIdentifier;

@end
