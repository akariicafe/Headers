@class NSString, DKCanonicalVersion, NSSet;

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) DKCanonicalVersion *version;
@property (readonly, nonatomic) NSSet *resources;

+ (id)componentIdentityWithDomain:(id)a0 version:(id)a1 resources:(id)a2;
+ (id)componentIdentityWithType:(id)a0 identifier:(id)a1 version:(id)a2 resources:(id)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNewerThan:(id)a0;
- (id)initWithDomain:(id)a0 version:(id)a1 resources:(id)a2;
- (id)initWithType:(id)a0 identifier:(id)a1 version:(id)a2 resources:(id)a3;
- (BOOL)isEqualToComponentIdentity:(id)a0;

@end
