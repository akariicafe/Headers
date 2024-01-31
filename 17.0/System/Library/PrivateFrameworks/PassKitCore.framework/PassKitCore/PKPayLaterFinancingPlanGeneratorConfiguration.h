@class NSDecimalNumber, NSString, NSArray;

@interface PKPayLaterFinancingPlanGeneratorConfiguration : NSObject

@property (nonatomic) unsigned long long productType;
@property (nonatomic) BOOL autoPayment;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) long long installmentCount;
@property (nonatomic) long long daysSinceTransactionStart;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *totalPrincipal;
@property (nonatomic) unsigned long long merchant;
@property (nonatomic) unsigned long long fundingSource;
@property (nonatomic) unsigned long long scheduleSummaryReason;
@property (nonatomic) BOOL ignoreFuturePayments;
@property (copy, nonatomic) NSArray *payments;

+ (id)configurationForBNPLWithTotalPrincipal:(id)a0 daysSinceTransactionStart:(long long)a1 payments:(id)a2;
+ (id)configurationWithProductType:(unsigned long long)a0 apr:(id)a1 totalPrincipal:(id)a2 installmentCount:(long long)a3 daysSinceTransactionStart:(long long)a4 merchant:(unsigned long long)a5 fundingSource:(unsigned long long)a6 payments:(id)a7;
+ (id)configurationWithProductType:(unsigned long long)a0 apr:(id)a1 totalPrincipal:(id)a2 installmentCount:(long long)a3 daysSinceTransactionStart:(long long)a4 payments:(id)a5;

- (void).cxx_destruct;

@end
