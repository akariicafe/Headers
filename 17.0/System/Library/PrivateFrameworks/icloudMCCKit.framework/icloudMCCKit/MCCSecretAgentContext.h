@class NSString, NSDictionary;

@interface MCCSecretAgentContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *commonName;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *organization;
@property (copy, nonatomic) NSString *organizationUnit;
@property (copy, nonatomic) NSDictionary *csrAltName;
@property (copy, nonatomic) NSString *keyType;
@property (nonatomic) long long keyValue;
@property (copy, nonatomic) NSString *certType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
