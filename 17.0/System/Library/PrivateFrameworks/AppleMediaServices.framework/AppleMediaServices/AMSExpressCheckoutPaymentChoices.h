@class NSDictionary;

@interface AMSExpressCheckoutPaymentChoices : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ useApplePayButtonTitle;
    void /* unknown type, empty encoding */ useApplePayButtonEnum;
    void /* unknown type, empty encoding */ useDifferentPaymentMethodButtonTitle;
    void /* unknown type, empty encoding */ eligibleCards;
    void /* unknown type, empty encoding */ managePaymentsParams;
    void /* unknown type, empty encoding */ metrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDictionary *metrics;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) long long cardsCount;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
