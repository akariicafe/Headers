@class NSString, LNEffectiveBundleIdentifier;

@interface LNAppEntityConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *appEntityIdentifier;
@property (readonly, nonatomic) NSString *appEntityMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)connectionWithError:(id *)a0;
- (id)initWithAppEntityIdentifier:(id)a0 appEntityMangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 appBundleIdentifier:(id)a3;

@end
