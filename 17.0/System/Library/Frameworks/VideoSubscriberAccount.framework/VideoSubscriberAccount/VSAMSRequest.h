@class NSString, NSDictionary, VSAuditToken;

@interface VSAMSRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *methodName;
@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
