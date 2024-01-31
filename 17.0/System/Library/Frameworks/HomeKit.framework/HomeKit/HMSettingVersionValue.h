@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(id)a0 type:(long long)a1;
- (id)payloadCopy;

@end
