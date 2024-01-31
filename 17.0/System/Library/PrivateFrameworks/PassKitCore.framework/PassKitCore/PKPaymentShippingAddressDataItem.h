@class NSString, NSAttributedString, CNContact;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;
@property (readonly, nonatomic) BOOL isShippingEditable;

+ (long long)dataType;

- (id)validate;
- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (id)firstModelError;
- (BOOL)isShippingServiceableWithError:(id *)a0;
- (unsigned long long)rawShippingType;
- (id)_shippingName;
- (id)createIncompleteShippingAddressError;
- (id)createRequiredShippingAddressError;
- (id)createShippingAddressErrorFromError:(id)a0;
- (id)createShippingAddressErrorWithDescription:(id)a0 failureReason:(id)a1;
- (id)createUnavailableShippingAddressError;
- (BOOL)hasShippingAddress;
- (id)incompleteShippingAddressErrorDescription;
- (id)incompleteShippingAddressErrorFailureReason;
- (BOOL)isClientError:(id)a0;
- (id)paymentContactFormatErrors;
- (id)requiredShippingAddressErrorDescription;
- (id)requiredShippingAddressErrorFailureReason;
- (id)unavailableShippingAddressErrorDescription;
- (id)unavailableShippingAddressErrorFailureReason;

@end
