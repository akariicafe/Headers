@class NSUUID, MIAppIdentity;

@interface MIAppReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *referenceUUID;
@property (readonly, nonatomic) MIAppIdentity *identity;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned int uid;

+ (BOOL)validateAppReference:(id)a0 withError:(id *)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReferenceUUID:(id)a0 identity:(id)a1 domain:(unsigned long long)a2 uid:(unsigned int)a3;

@end
