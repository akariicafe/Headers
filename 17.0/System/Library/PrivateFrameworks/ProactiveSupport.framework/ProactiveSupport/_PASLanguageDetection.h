@interface _PASLanguageDetection : NSObject

+ (id)defaultLanguage;
+ (id)dominantLanguageTagFromLanguageTags:(id)a0;
+ (id)userLanguages;
+ (int)languageIdForLanguageString:(id)a0;
+ (id)detectLanguageFromTextHeuristically:(id)a0;
+ (id)detectLanguageFromLanguageTags:(id)a0;
+ (id)dominantLanguageTagFromText:(id)a0;
+ (id)detectLanguageFromTextIfMultilingual:(id)a0;
+ (id)detectLanguageFromTextWithMaxLength:(id)a0 maxLength:(unsigned long long)a1 minimumProbability:(double)a2;
+ (id)detectLanguageFromText:(id)a0;
+ (id)languageForLocaleIdentifier:(id)a0;
+ (id)detectLanguageFromTextHeuristicallyWithLanguages:(id)a0 languages:(id)a1 defaultLanguage:(id)a2;

@end
