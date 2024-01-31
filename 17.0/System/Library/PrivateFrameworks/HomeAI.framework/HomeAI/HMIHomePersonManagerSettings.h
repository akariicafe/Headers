@interface HMIHomePersonManagerSettings : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
