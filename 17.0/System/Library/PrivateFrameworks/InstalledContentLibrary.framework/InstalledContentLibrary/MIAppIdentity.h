@class NSString;

@interface MIAppIdentity : NSObject <MIAppIdentityPersonaResolver, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *personaUniqueString;
@property (nonatomic) BOOL isResolved;

+ (BOOL)validateAppIdentity:(id)a0 withError:(id *)a1;

- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)resolvePersonaWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleID:(id)a0 persona:(id)a1;
- (id)_eligiblePersonaForBundle:(id)a0 error:(id *)a1;

@end
