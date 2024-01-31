@class NSString, NSDictionary, NSMutableDictionary;

@interface VTUIStringsHelper : NSObject {
    NSDictionary *_localizedStringTable;
    NSMutableDictionary *_languageLocalizedStringTables;
    NSString *_siriLanguageCode;
}

@property (readonly, nonatomic) NSString *heySiriTriggerPhrase;
@property (readonly, nonatomic) NSString *justSiriTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (id)init;
- (void)localeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setSiriLanguage:(id)a0;
- (id)_siriLanguageSubstitutedString:(id)a0;
- (id)_bundleStringTableForAllValidLanguages:(id)a0 inLocalizedStringsFileName:(id)a1;
- (id)_bundleStringTableForLanguages:(id)a0 inLocalizedStringsFileName:(id)a1;
- (id)localizedAudioStringForKey:(id)a0;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)siriLanguageStringForKey:(id)a0;
- (id)uiLocalizedStringForKey:(id)a0;
- (id)uiLocalizedStringForKey:(id)a0 languageCode:(id)a1;
- (id)uiLocalizedStringForKey:(id)a0 usesMultipleTriggers:(BOOL)a1 siriVoice:(id)a2;

@end
