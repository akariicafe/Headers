@class NSDecimalNumber, NSSet, PKCreditAccountMergeSummary, NSDate, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *availableCredit;
@property (copy, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *adjustedBalance;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalanceForInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPayment;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *installmentBalance;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (copy, nonatomic) NSDate *lastPaymentDate;
@property (nonatomic) BOOL autoPayEnabled;
@property (nonatomic) unsigned long long balanceStatus;
@property (retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary;
@property (copy, nonatomic) NSSet *accountUserActivity;
@property (retain, nonatomic) PKCreditAccountMergeSummary *mergeSummary;
@property (nonatomic) long long cyclesPastDue;
@property (copy, nonatomic) NSDecimalNumber *unpostedInterest;
@property (copy, nonatomic) NSDate *unpostedInterestTimestamp;
@property (nonatomic) BOOL requiresDebtCollectionNotices;
@property (nonatomic) BOOL inGrace;
@property (copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (copy, nonatomic) NSDecimalNumber *pastDueAmount;
@property (retain, nonatomic) PKCreditAccountStatement *currentStatement;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accountUserActivityForAccountUserAltDSID:(id)a0;
- (void)ingestExtendedAccountDetails:(id)a0;

@end
