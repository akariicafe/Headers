@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)initialize;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (id)patternsForIdentifier:(id)a0;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)_reinstateDeath;
+ (void)forceLanguagesTo:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (void)changeLanguageOrPatternData;
+ (void)clearAllRegexCaches;
+ (id)patternsForClass:(Class)a0;

- (id)init;
- (void)dealloc;
- (id)rawValueForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (void)_becomeImmuneToDeath;
- (id)rawValueOrDataForKey:(id)a0;
- (void).cxx_destruct;
- (void)_clearRegexCache;
- (void)resetIfNeeded;
- (id)rawValuesForKey:(id)a0;

@end
