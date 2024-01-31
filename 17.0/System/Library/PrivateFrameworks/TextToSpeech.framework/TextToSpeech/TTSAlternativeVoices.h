@interface TTSAlternativeVoices : NSObject

+ (BOOL)isNeuralAXSiriVoiceIdentifier:(id)a0;
+ (BOOL)isNeuralSiriVoiceIdentifier:(id)a0;
+ (BOOL)isOldSiriVoiceIdentifier:(id)a0;
+ (BOOL)isSiriVoiceIdentifier:(id)a0;
+ (BOOL)isVocalizerVoiceIdentifier:(id)a0;
+ (id)nameForVoiceIdentifier:(id)a0;
+ (BOOL)isCombinedVocalizerVoiceIdentifier:(id)a0;
+ (BOOL)isCompactVocalizerVoiceIdentifier:(id)a0;
+ (BOOL)isPersonalVoiceIdentifier:(id)a0;

@end
