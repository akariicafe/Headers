@class NSString;

@interface PKPaymentCredentialMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *value;

+ (Class)classForValueType:(id)a0;
+ (id)paymentCredentialMetadataWithConfiguration:(id)a0;

- (id)displayString;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
