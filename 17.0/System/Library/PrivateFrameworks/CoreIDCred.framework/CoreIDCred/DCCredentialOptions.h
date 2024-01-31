@interface DCCredentialOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long presentmentAuthPolicy;
@property (nonatomic) unsigned long long payloadProtectionPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
