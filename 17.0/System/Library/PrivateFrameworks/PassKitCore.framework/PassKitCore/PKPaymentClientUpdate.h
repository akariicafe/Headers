@class NSArray, PKRecurringPaymentRequest, PKAutomaticReloadPaymentRequest, PKDeferredPaymentRequest, PKShippingMethods, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods;
@property (readonly, copy, nonatomic) NSArray *multiTokenContexts;
@property (readonly, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (readonly, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) unsigned long long selectedPaymentMethodType;

+ (id)paymentUpdateResponseWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentSummaryItems:(id)a0 shippingMethods:(id)a1 multiTokenContexts:(id)a2 recurringPaymentRequest:(id)a3 automaticReloadPaymentRequest:(id)a4 deferredPaymentRequest:(id)a5 status:(long long)a6 selectedAID:(id)a7 selectedPaymentMethodType:(unsigned long long)a8;

@end
