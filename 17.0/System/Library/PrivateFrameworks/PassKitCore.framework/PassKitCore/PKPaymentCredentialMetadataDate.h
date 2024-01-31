@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat;

- (id)displayString;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
