@class NSString;

@interface HMDCompositeSettingLanguageValue : HMDCompositeSettingValue <HMDCompositeSettingsLanguageValueProviding>

@property (readonly, copy) NSString *inputLanguageCode;
@property (readonly, copy) NSString *outputVoiceLanguageCode;
@property (readonly, copy) NSString *outputVoiceGenderCode;
@property (readonly, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithInputLanguage:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2 voiceName:(id)a3;

@end
