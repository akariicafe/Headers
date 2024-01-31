@class NSNumber;

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;

@end
