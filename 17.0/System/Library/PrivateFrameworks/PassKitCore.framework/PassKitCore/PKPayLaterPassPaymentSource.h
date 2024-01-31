@class PKPaymentApplication, PKPaymentPass;

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;

- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;

@end
