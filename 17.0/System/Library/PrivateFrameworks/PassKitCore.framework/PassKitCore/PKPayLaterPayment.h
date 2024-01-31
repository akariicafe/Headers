@class NSString, PKPayLaterPaymentFundingSource, PKCurrencyAmount, NSDate;

@interface PKPayLaterPayment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *postedDate;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (retain, nonatomic) PKCurrencyAmount *interestPaid;
@property (retain, nonatomic) PKCurrencyAmount *principalPaid;
@property (retain, nonatomic) PKCurrencyAmount *fundingSourceRefundAmount;
@property (retain, nonatomic) PKPayLaterPaymentFundingSource *fundingSource;
@property (copy, nonatomic) NSString *associatedTransactionPaymentHash;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPayLaterPayment:(id)a0;

@end
