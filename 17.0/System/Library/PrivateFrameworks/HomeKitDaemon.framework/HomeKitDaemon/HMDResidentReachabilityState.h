@class NSUUID;

@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *residentDeviceIdentifier;
@property (readonly) BOOL isReachable;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResidentDeviceIdentifier:(id)a0 isReachable:(BOOL)a1;

@end
