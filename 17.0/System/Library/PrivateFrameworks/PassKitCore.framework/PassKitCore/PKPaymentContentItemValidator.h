@class PKPaymentContentItem, NSString;

@interface PKPaymentContentItemValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKPaymentContentItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

@end
