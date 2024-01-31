@class PKPayLaterFinancingOption, PKPayLaterProductAssessmentCollection;

@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;

+ (long long)dataType;

- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (id)billingAddress;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)paymentContactFormatErrors;
- (BOOL)requiresBillingAddress;

@end
