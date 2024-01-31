@class NSString, LNEffectiveBundleIdentifier;

@interface LNEntityQueryConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *entityQueryIdentifier;
@property (readonly, nonatomic) NSString *entityQueryMangledTypeName;
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
- (id)initWithEntityQueryIdentifier:(id)a0 entityQueryMangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 appBundleIdentifier:(id)a3;

@end
