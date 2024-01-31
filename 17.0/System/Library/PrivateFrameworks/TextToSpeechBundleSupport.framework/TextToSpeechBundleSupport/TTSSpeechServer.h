@class TTSSpeechServerInstance, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {
    NSMutableDictionary *_serverInstances;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue;
@property (retain, nonatomic) TTSSpeechServerInstance *speechInitializationInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regexRules;

- (id)init;
- (id)speechMarkupStringForType:(long long)a0 voice:(id)a1 string:(id)a2;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)genericMarkerMarkupForVoice:(id)a0 name:(id)a1;
- (id)supportedIPAPhonemeLanguages;
- (void)setServiceQueue:(id)a0 forSynthesizerInstanceID:(unsigned long long)a1;
- (BOOL)canInitializeSpeech:(id)a0;
- (id)enclosedStringWithPhonemes:(id)a0 originalString:(id)a1;
- (struct __CFArray { } *)loadedVoiceResources;
- (BOOL)isNashvilleService;
- (oneway void)startSpeechRequest:(id)a0;
- (id)combinedProsodyMarkupForVoice:(id)a0 string:(id)a1 rate:(id)a2 pitch:(id)a3 volume:(id)a4;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)synthesizerInstanceDestroyed:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)audioFileSettingsForVoice:(id)a0;
- (BOOL)isVoiceValid:(id)a0;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (void)initializeSpeechServerInstance:(unsigned long long)a0;
- (oneway void)continueSpeechRequest:(id)a0;
- (BOOL)isSiriService;
- (BOOL)employSpeechMarkupForType:(long long)a0 language:(id)a1;
- (id)phonemesFromIPA:(id)a0 language:(id)a1;
- (id)embeddedPitchMarkupForVoice:(id)a0 string:(id)a1 pitch:(double)a2;
- (id)embeddedRateMarkupForVoice:(id)a0 string:(id)a1 rate:(double)a2;
- (id)embeddedVolumeMarkupForVoice:(id)a0 string:(id)a1 volume:(double)a2;
- (BOOL)isSiriNeuralVoice:(id)a0;
- (id)lhPhonemesFromIPA:(id)a0 language:(id)a1;
- (id)_behavesBadlyWithSpellMarkupForVoice:(id)a0 string:(id)a1 markupType:(long long)a2;
- (id)_ttsCopyVoiceInfo:(id)a0 type:(long long)a1 queryingMobileAssets:(BOOL)a2;
- (id)getNewSpeechServerInstance;
- (id)getVocalizerWithLanguage:(id)a0 defaultLanguage:(id)a1 reinitIfNecessary:(BOOL)a2 forceReinit:(BOOL)a3 voiceType:(long long)a4 gender:(long long)a5 footprint:(long long)a6 voiceName:(id)a7 voiceIdentifier:(id)a8 error:(id *)a9;
- (BOOL)requiresLHPPhonemes;

@end
