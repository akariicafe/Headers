@class NSData, NSString, NSArray, NSURL, NSDate, PKPeerPaymentQuoteDynamicFraudContent, PKCurrencyAmount, PKPeerPaymentRecipient, NSDecimalNumber;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKCurrencyAmount *calculatedTotalAmount;
@property (readonly, nonatomic) double validityDuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *disclosureText;
@property (readonly, copy, nonatomic) NSURL *disclosureURL;
@property (readonly, copy, nonatomic) NSDecimalNumber *currentBalance;
@property (readonly, copy, nonatomic) NSString *currentBalanceCurrency;
@property (readonly, copy, nonatomic) NSData *appleHash;
@property (readonly, copy, nonatomic) NSData *externalHash;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalReceiveAmount;
@property (readonly, copy, nonatomic) NSString *totalReceiveAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalFees;
@property (readonly, copy, nonatomic) NSString *totalFeesCurrency;
@property (readonly, copy, nonatomic) NSDate *validUntil;
@property (readonly, nonatomic) unsigned long long riskLevel;
@property (readonly, copy, nonatomic) PKPeerPaymentQuoteDynamicFraudContent *dynamicFraudContent;
@property (copy, nonatomic) NSString *recurringPaymentIdentifier;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *nextPaymentDate;
@property (nonatomic) unsigned long long frequency;
@property (copy, nonatomic) NSDecimalNumber *threshold;
@property (retain, nonatomic) PKPeerPaymentRecipient *recipient;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)a0;
- (id)firstQuoteItemOfType:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (BOOL)isRecurringPayment;
- (BOOL)preservesCurrentBalance;

@end
