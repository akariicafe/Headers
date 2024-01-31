@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long versionNumber;
@property (readonly, retain) NSString *policyHash;

- (unsigned long long)hash;
- (id)initWithVersion:(unsigned long long)a0 hash:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
