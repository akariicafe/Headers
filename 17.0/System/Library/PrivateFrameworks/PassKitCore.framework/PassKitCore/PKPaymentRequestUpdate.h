@class NSArray, PKRecurringPaymentRequest, PKAutomaticReloadPaymentRequest, PKDeferredPaymentRequest, PKShippingMethods;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) PKShippingMethods *availableShippingMethods;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *paymentSummaryItems;
@property (copy, nonatomic) NSArray *shippingMethods;
@property (copy, nonatomic) NSArray *multiTokenContexts;
@property (retain, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (retain, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (retain, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentSummaryItems:(id)a0;

@end
