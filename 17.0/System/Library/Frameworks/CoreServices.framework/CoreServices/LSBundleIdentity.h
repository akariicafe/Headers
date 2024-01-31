@class NSString;

@interface LSBundleIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)bundleIdentityForIdentityString:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentityString:(id)a0 personaUniqueString:(id)a1 personaType:(unsigned long long)a2;

@end
