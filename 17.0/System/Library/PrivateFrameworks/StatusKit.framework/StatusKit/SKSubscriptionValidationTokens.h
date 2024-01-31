@class NSString;

@interface SKSubscriptionValidationTokens : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *subscriptionValidationToken;
@property (readonly, nonatomic) NSString *encryptionValidationToken;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1;
- (BOOL)isEqualToSubscriptionValidationTokens:(id)a0;

@end
