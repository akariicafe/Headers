@class NSDecimalNumber;

@interface PKPayLaterFinancingPlanGeneratorPaymentConfiguration : NSObject

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) long long relativeToInstallmentNumber;
@property (nonatomic) long long daysPriorToRelativeInstallmentNumber;
@property (nonatomic) unsigned long long fundingSource;
@property (nonatomic) BOOL payOffRestOfLoanBalance;
@property (nonatomic) long long installmentAmountMultiple;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) BOOL forDispute;

+ (id)paymentConfigurationWithPaymentType:(unsigned long long)a0 relativeToInstallmentNumber:(long long)a1 daysPriorToRelativeInstallmentNumber:(long long)a2 installmentAmountMultiple:(long long)a3;
+ (id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(long long)a0;
+ (id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(long long)a0 daysPriorToRelativeInstallmentNumber:(long long)a1;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)a0;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)a0 daysPriorToRelativeInstallmentNumber:(long long)a1;
+ (id)paymentConfigurationForDefaultInstallmentNumber:(long long)a0 daysPriorToRelativeInstallmentNumber:(long long)a1 installmentAmountMultiple:(long long)a2;
+ (id)paymentConfigurationForRemainingFinancingPlanBalancRelativeToInstallmentNumber:(long long)a0 daysPriorToRelativeInstallmentNumber:(long long)a1;
+ (id)paymentConfigurationWithAmount:(id)a0 relativeToInstallmentNumber:(long long)a1 daysPriorToRelativeInstallmentNumber:(long long)a2;
+ (id)paymentConfigurationWithPaymentType:(unsigned long long)a0 amount:(id)a1 relativeToInstallmentNumber:(long long)a2 daysPriorToRelativeInstallmentNumber:(long long)a3;
+ (id)paymentConfigurationWithPaymentType:(unsigned long long)a0 amount:(id)a1 relativeToInstallmentNumber:(long long)a2 daysPriorToRelativeInstallmentNumber:(long long)a3 fundingSource:(unsigned long long)a4;

- (void).cxx_destruct;

@end
