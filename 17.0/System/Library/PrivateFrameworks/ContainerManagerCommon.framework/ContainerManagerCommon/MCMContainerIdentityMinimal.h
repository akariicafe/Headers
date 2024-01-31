@class NSString, MCMUserIdentity;

@interface MCMContainerIdentityMinimal : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;

+ (id)minimalContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;

- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)identityByChangingUserIdentity:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)plist;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqualToContainerIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)minimalIdentity;
- (id)identityBySettingPlatform:(unsigned int)a0;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 error:(unsigned long long *)a4;

@end
