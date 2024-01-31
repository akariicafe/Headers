@class NSString;

@interface HMSettingLanguageValue : HMImmutableSettingValue

@property (readonly, copy) NSString *inputLanguageCode;
@property (readonly, copy) NSString *outputVoiceLanguageCode;
@property (readonly, copy) NSString *outputVoiceGenderCode;
@property (readonly, copy) NSString *voiceName;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithInputLanguageCode:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2;
- (id)initWithInputLanguageCode:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2 voiceName:(id)a3;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
