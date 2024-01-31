@class PKAccountPaymentFundingSource, PKCurrencyAmount;

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)initWithCurrencyAmount:(id)a0 fundingSource:(id)a1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;

@end
