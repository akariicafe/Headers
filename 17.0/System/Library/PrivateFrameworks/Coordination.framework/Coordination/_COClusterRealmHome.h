@class NSUUID;

@interface _COClusterRealmHome : COClusterRealm

@property (readonly, copy, nonatomic) NSUUID *specificHomeUUID;

+ (BOOL)supportsSecureCoding;
+ (id)realmWithHomeKitHomeIdentifier:(id)a0;
+ (id)realmForCurrent;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)activate:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifierForGroupResult:(id)a0;
- (id)_initWithPredicate:(id)a0 forHome:(id)a1;

@end
