@class HMFVersion;

@interface HMDCompositeSettingVersionValue : HMDCompositeSettingValue <HMDCompositeSettingsVersionValueProviding>

@property (readonly, copy) HMFVersion *version;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithVersion:(id)a0 type:(long long)a1;

@end
