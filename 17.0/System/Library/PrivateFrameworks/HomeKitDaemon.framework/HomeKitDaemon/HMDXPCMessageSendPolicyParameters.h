@class NSString;

@interface HMDXPCMessageSendPolicyParameters : HMFObject

@property (readonly, nonatomic) unsigned long long entitlements;
@property (readonly, copy) NSString *signature;

- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
