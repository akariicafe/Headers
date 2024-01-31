@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration

@property (readonly, nonatomic) BOOL requiresUnifiedAccessCapableDevice;
@property (nonatomic) BOOL skipNonceValidityChecks;
@property (readonly, nonatomic) unsigned long long primaryAction;
@property (readonly, nonatomic) NSArray *credentialsMetadata;
@property (readonly, nonatomic) NSString *provisioningPolicyIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)configurationForPassMetadata:(id)a0 primaryAction:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)_configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)a0;
- (BOOL)hasRequiredDataForProvisioning;
- (id)initWithPrimaryAction:(unsigned long long)a0 credentialsMetadata:(id)a1;
- (void)preflightWithCompletion:(id /* block */)a0;

@end
