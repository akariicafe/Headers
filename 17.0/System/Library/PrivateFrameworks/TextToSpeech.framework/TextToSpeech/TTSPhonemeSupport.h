@interface TTSPhonemeSupport : NSObject

+ (id)supportedIPAPhonemeLanguages;
+ (id)phonemesFromIPA:(id)a0 language:(id)a1;
+ (id)_getPhonemeMapForSynth:(id)a0 language:(id)a1;
+ (id)_phonemesFromIPA:(id)a0 language:(id)a1 synth:(id)a2;
+ (id)applebetPhonemesFromIPA:(id)a0;
+ (id)applebetPhonemesFromLH:(id)a0;
+ (id)eloquencePhonemesFromIPA:(id)a0 language:(id)a1;
+ (id)lhPhonemesFromIPA:(id)a0 language:(id)a1;

@end
