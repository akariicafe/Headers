@class NSDate, NSString, NSArray, PKInstallmentPlanMerchant, PKCreditInstallmentPlanPayment, PKInstallmentPlanSummary, PKCreditInstallmentPlanProduct, NSDecimalNumber, PKPaymentTransactionRewards;

@interface PKCreditInstallmentPlan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *totalAmount;
@property (retain, nonatomic) NSDecimalNumber *totalProductAmount;
@property (retain, nonatomic) NSDecimalNumber *totalInterestAmount;
@property (nonatomic) long long periodType;
@property (copy, nonatomic) NSString *transactionReferenceIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) PKInstallmentPlanSummary *summary;
@property (retain, nonatomic) PKInstallmentPlanMerchant *merchant;
@property (retain, nonatomic) PKCreditInstallmentPlanProduct *product;
@property (copy, nonatomic) NSArray *lineItems;
@property (copy, nonatomic) NSArray *payments;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (readonly, nonatomic) NSDecimalNumber *remainingAmount;
@property (readonly, nonatomic) NSDecimalNumber *totalBilled;
@property (readonly, nonatomic) PKCreditInstallmentPlanPayment *nextPaymentDue;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL userViewedIntroduction;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToInstallmentPlan:(id)a0;

@end
