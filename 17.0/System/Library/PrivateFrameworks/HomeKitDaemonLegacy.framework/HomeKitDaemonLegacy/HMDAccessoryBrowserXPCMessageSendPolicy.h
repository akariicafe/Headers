@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) unsigned long long requiredEntitlements;

- (unsigned long long)hash;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canSendWithPolicyParameters:(id)a0;
- (id)initWithRequiredEntitlements:(unsigned long long)a0;

@end
