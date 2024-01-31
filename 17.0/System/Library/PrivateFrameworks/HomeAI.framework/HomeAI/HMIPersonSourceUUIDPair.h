@class NSUUID, NSString;

@interface HMIPersonSourceUUIDPair : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *sourceUUID;
@property (readonly, copy) NSUUID *personUUID;
@property (readonly, copy) NSString *UUIDPairString;

+ (id)personSourceUUIDPairFromPersonLink:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonUUID:(id)a0 sourceUUID:(id)a1;
- (id)initWithUUIDPairString:(id)a0;

@end
