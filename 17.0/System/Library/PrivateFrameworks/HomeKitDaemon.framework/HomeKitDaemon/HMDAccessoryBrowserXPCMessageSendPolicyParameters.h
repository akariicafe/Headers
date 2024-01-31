@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters

@property (nonatomic, getter=isBrowsing) BOOL browsing;

- (id)signature;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntitlements:(unsigned long long)a0 browsing:(BOOL)a1;

@end
