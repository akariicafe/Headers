@class NSString;

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;

@end
