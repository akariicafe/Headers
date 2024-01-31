@interface AXAlternativeVoices : NSObject

+ (id)sharedInstance;

- (BOOL)isNeuralSiriVoiceIdentifier:(id)a0;
- (BOOL)isOldSiriVoiceIdentifier:(id)a0;
- (BOOL)isSiriVoiceIdentifier:(id)a0;
- (id)nameForVoiceIdentifier:(id)a0;

@end
