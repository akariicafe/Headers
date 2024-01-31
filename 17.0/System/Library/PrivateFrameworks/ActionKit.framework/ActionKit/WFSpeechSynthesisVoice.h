@class AVSpeechSynthesisVoice, NSString;

@interface WFSpeechSynthesisVoice : NSObject

@property (retain, nonatomic) AVSpeechSynthesisVoice *avVoice;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *vsVoiceName;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL isSiriVoice;

+ (id)availableLanguageCodes;
+ (id)voiceForIdentifier:(id)a0;
+ (id)currentLanguageCode;
+ (id)defaultVoiceForLanguageCode:(id)a0;
+ (id)voiceFromAVVoice:(id)a0;
+ (id)voicesForLanguageCode:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
