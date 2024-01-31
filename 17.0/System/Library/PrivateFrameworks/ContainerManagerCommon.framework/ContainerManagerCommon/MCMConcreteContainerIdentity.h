@class NSUUID;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity

@property (readonly, nonatomic) NSUUID *uuid;

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 error:(unsigned long long *)a5;
+ (id)concreteContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 transient:(BOOL)a5 error:(unsigned long long *)a6;

- (id)initWithContainerIdentity:(id)a0 UUID:(id)a1 error:(unsigned long long *)a2;
- (BOOL)isEqualToConcreteContainerIdentity:(id)a0;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 transient:(BOOL)a5 error:(unsigned long long *)a6;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)containerIdentity;
- (id)init;
- (unsigned long long)hash;
- (struct container_object_s { } *)createLibsystemContainerWithContainerPathIdentifier:(id)a0 existed:(BOOL)a1 error:(unsigned long long *)a2;
- (id)plist;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)description;
- (id)initWithVersion1PlistDictionary:(id)a0 containerIdentity:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
