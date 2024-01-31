@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch

@property (retain, nonatomic) NSArray *fuzzyPinyinPairs;
@property (nonatomic) BOOL fuzzyPinyinEnabled;
@property (nonatomic) BOOL tenKeyPinyinEnabled;
@property (nonatomic) int shuangpinType;

+ (id)pinyinCharacterSetWithTones;

- (void)dealloc;
- (void).cxx_destruct;
- (int)mecabraInputMethodType;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (id)uncachedCandidatesForOperation:(id)a0;
- (BOOL)shareVocabulary;
- (unsigned char)nameReadingPairGenerationMode;
- (void)updateMecabraState;
- (void)clearCacheForInputString:(id)a0 keyboardInput:(id)a1 unambiguousSyllableCount:(unsigned long long)a2 selectedDisambiguationCandidateIndex:(unsigned long long)a3;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)a0 firstSyllableLocked:(BOOL)a1 reanalysisMode:(BOOL)a2 hardwareKeyboardMode:(BOOL)a3 predictionEnabled:(BOOL)a4;
- (void)setCustomDialectLanguageModel:(id)a0;
- (void)updateFuzzyPinyinSettings;
- (void)updateShuangpinTypeWithReanalysisMode:(BOOL)a0;

@end
