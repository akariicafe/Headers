@class NSString, NAIdentity, HMSettingLanguageValue;

@interface HFSiriLanguageOption : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) NSString *serializableVoiceName;
@property (retain, nonatomic) HMSettingLanguageValue *settingLanguageValue;
@property (readonly, copy, nonatomic) NSString *recognitionLanguage;
@property (readonly, copy, nonatomic) NSString *outputLanguage;
@property (readonly, nonatomic) long long outputGender;
@property (readonly, nonatomic, getter=isDefaultVoiceForRecognitionLanguage) BOOL defaultVoiceForRecognitionLanguage;
@property (readonly, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) NSString *voiceNameWithDefaultFallback;
@property (readonly, copy, nonatomic) NSString *localizedRecognitionLanguage;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceAccent;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (id)outputVoice;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRecognitionLanguage:(id)a0 outputVoice:(id)a1 defaultVoiceForRecognitionLanguage:(BOOL)a2;
- (id)allSerializedRepresentations;
- (id)initWithHomeKitSettingLanguageValue:(id)a0;
- (id)initWithRecognitionLanguage:(id)a0 outputLanguage:(id)a1 outputGender:(long long)a2 voiceName:(id)a3 defaultVoiceForRecognitionLanguage:(BOOL)a4;

@end
