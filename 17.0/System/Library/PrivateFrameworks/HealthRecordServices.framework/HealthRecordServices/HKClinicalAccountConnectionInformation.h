@class HKClinicalGateway, NSUUID, HKFHIRCredential, HKFHIRServerAuthenticationInformation, NSArray;

@interface HKClinicalAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway;
@property (readonly, copy, nonatomic) HKFHIRCredential *authorization;
@property (readonly, copy, nonatomic) HKFHIRServerAuthenticationInformation *authentication;
@property (readonly, copy, nonatomic) NSArray *authSchemaDefinitions;
@property (readonly, copy, nonatomic) NSArray *resourceSchemaDefinitions;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountIdentifier:(id)a0 gateway:(id)a1 authorization:(id)a2 authentication:(id)a3 authSchemaDefinitions:(id)a4 resourceSchemaDefinitions:(id)a5;

@end
