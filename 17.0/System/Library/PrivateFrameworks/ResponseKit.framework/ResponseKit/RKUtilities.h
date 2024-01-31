@interface RKUtilities : NSObject

+ (id)addLikelySubtagsForLocaleIdentifier:(id)a0;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)a0;
+ (BOOL)RKRepairStringNeeded:(id)a0;
+ (id)getDeviceModel;
+ (BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)a0;
+ (BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)a0;
+ (BOOL)isLanguageSupportedBySmartPunctuation:(id)a0;
+ (BOOL)isLanguageSupportedForLemmatization:(id)a0;
+ (BOOL)isLanguageSupportedForPartOfSpeech:(id)a0;
+ (id)normalizeForPersonalization:(id)a0;
+ (BOOL)prefixInArray:(id)a0 withArray:(id)a1;
+ (id)removeEmoji:(id)a0;
+ (id)removeMultipleWhitespaces:(id)a0;
+ (id)stripDiacritics:(id)a0;
+ (id)stripEmojiSkinTones:(id)a0;
+ (id)stripPunctuations:(id)a0;
+ (BOOL)suffixInArray:(id)a0 withArray:(id)a1;
+ (BOOL)tokenInArray:(id)a0 withArray:(id)a1;

@end
