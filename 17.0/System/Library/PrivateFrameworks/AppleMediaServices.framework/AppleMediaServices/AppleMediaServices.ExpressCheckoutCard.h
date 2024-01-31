@interface AppleMediaServices.ExpressCheckoutCard : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fpanSuffix;
    void /* unknown type, empty encoding */ paymentNetwork;
    void /* unknown type, empty encoding */ passSerialNumber;
    void /* unknown type, empty encoding */ passTypeIdentifier;
    void /* unknown type, empty encoding */ applePayBrandName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
