@class PKAccountPaymentFundingSource;

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource;

- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountPaymentFundingSource:(id)a0;

@end
