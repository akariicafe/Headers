@interface MCMContainerIdentity : MCMContainerIdentityMinimal

@property (readonly, nonatomic) BOOL transient;

+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 error:(unsigned long long *)a4;
+ (id)containerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
+ (id)containerIdentityWithMinimalContainerIdentity:(id)a0 transient:(BOOL)a1;
+ (id)containerIdentityWithIdentifier:(id)a0 containerClass:(unsigned long long)a1 platform:(unsigned int)a2 error:(unsigned long long *)a3;

- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
- (id)nontransientContainerIdentity;
- (id)transientContainerIdentity;
- (id)containerIdentity;
- (id)identityByChangingUserIdentity:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)plist;
- (id)description;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)debugDescription;
- (BOOL)isEqualToContainerIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
