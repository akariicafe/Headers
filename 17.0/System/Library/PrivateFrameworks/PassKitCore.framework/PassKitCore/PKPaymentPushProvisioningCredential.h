@class NSString;

@interface PKPaymentPushProvisioningCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long securityOptions;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifierHash;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long feature;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
