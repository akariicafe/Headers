@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>

@property (getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long options;

- (id)signature;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;

@end
