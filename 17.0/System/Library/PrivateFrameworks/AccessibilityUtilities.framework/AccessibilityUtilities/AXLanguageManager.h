@class NSArray, AXDialectMap, NSString, NSLocale, NSCharacterSet, NSSet;

@interface AXLanguageManager : NSObject {
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    AXDialectMap *_dialectForCurrentRegion;
}

@property (retain, nonatomic) NSArray *langMaps;
@property (copy, nonatomic) NSLocale *userLocale;
@property (retain, nonatomic) NSCharacterSet *commonCharacters;
@property (weak, nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentRegion;
@property (nonatomic) BOOL _unitTest_didUpdateForLocaleChange;
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (readonly, weak, nonatomic) AXDialectMap *dialectForUserLocale;
@property (readonly, nonatomic) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;

+ (id)sharedInstance;
+ (id)commonPunctuationCharacters;
+ (id)dialectForAlternativeVoiceIdentifier:(id)a0;
+ (id)doNotTranslateWords;
+ (id)nameForAlternativeVoiceIdentifier:(id)a0;
+ (id)nonlocalizedNameForLanguage:(id)a0;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)a0;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)a0;
+ (BOOL)voiceOverSupportedInCurrentLanguage;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_addDialectMapsForLanguageCodes:(id)a0 toResults:(id)a1;
- (id)_dialectsThatCanSpeak:(id /* block */)a0 dialectIsSecondary:(id /* block */)a1 overridePreferredLanguages:(id)a2 preferOverrides:(BOOL)a3;
- (id)_exemplarCharacterSetFromLanguages:(id)a0;
- (void)_handleUserLocaleDidChange:(id)a0;
- (id)_loadLangMaps;
- (id)_preferredOverrideDialectsThatCanSpeak:(id /* block */)a0 dialectIsSecondary:(id /* block */)a1 overridePreferredLanguages:(id)a2 preferOverrides:(BOOL)a3;
- (id)_synthesisProviderDialectMapPerLanguage;
- (id)_systemPreferredDialectThatCanSpeak:(id /* block */)a0;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)basicDescription;
- (id)characterSetForRanges:(id)a0;
- (id)descriptionOfWord:(id)a0 forLanguage:(id)a1;
- (id)dialectForLanguageID:(id)a0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0 overridePreferredLanguages:(id)a1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0 overridePreferredLanguages:(id)a1 allowTransliteration:(BOOL)a2;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0 overridePreferredLanguages:(id)a1 allowTransliteration:(BOOL)a2 preferOverrides:(BOOL)a3;
- (id)dialectsThatCanSpeakString:(id)a0;
- (id)dialectsThatCanSpeakString:(id)a0 overridePreferredLanguages:(id)a1;
- (BOOL)didUpdateForLocaleChange;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (BOOL)isStringComposedByCommonCharacters:(id)a0;
- (id)outputLanguageIdentifierForLanguage:(id)a0;
- (void)updateCachedDialects;

@end
