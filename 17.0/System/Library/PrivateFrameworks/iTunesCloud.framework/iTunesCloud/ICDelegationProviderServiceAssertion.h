@class NSString, NSUUID, NSDate;

@interface ICDelegationProviderServiceAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
