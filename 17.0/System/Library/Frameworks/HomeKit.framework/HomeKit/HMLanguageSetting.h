@class HMSettingLanguageValue;

@interface HMLanguageSetting : HMImmutableSetting

@property (readonly) HMSettingLanguageValue *languageValue;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 languageValue:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
