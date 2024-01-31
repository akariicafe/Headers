@class NSString, COClusterRealm;

@interface COClusterConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) unsigned long long requiredServices;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) COClusterRealm *realm;
@property (readonly, nonatomic) NSString *globalServiceName;

+ (id)_prefixFromDomain:(id)a0;
+ (BOOL)_validateServices:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)configurationForExplicitClusterIdentifier:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)configurationWithDomain:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2 realm:(id)a3;
+ (id)configurationWithDomain:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2 realm:(id)a3 globalServiceName:(id)a4;
+ (id)domainPermittedCharacterSet;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithPrefix:(id)a0 requiredServices:(unsigned long long)a1 options:(unsigned long long)a2 realm:(id)a3 globalServiceName:(id)a4;
- (BOOL)isEqualToClusterConfiguration:(id)a0;

@end
