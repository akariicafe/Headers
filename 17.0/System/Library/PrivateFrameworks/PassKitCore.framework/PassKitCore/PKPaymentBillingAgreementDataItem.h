@class NSString;

@interface PKPaymentBillingAgreementDataItem : PKPaymentDataItem

@property (readonly, copy, nonatomic) NSString *billingAgreement;

+ (long long)dataType;

- (long long)context;
- (BOOL)isValidWithError:(id *)a0;

@end
