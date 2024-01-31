@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phone;
@property (readonly, nonatomic) NSString *name;

+ (long long)dataType;

- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (id)errorsForContactFields:(id)a0;
- (id)paymentContactFormatErrors;
- (id)requiredContactFields;

@end
