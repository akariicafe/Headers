@class NSString, PKPaymentSummaryItem;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKPaymentSummaryItem *item;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

@end
