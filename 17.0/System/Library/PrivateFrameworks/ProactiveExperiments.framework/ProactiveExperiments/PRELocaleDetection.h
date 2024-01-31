@class NSDictionary, _PASLRUCache;

@interface PRELocaleDetection : NSObject {
    NSDictionary *_preferredLocales;
    _PASLRUCache *_lastConfidentLocaleForSender;
    unsigned long long _languageLimit;
}

+ (id)sharedInstance;
+ (id)languageTagForLocaleIdentifier:(id)a0;
+ (BOOL)isLanguageMismatchedForIdentifier:(id)a0 withIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_bestLocaleForLanguageTag:(id)a0;
- (id)_getPreferredLocales;
- (id)_userLanguageDetectedFromString:(id)a0 preferredLocales:(id)a1;
- (id)_userLocaleDetectedFromString:(id)a0;
- (id)initWithLanguageLimit:(unsigned long long)a0 withPreferredLocales:(id)a1;
- (BOOL)isLanguageMismatchedForMessage:(id)a0 withLocaleIdentifier:(id)a1;
- (id)localeForIncomingMessages:(id)a0 outgoingMessages:(id)a1 defaultLocale:(id)a2 defaultLocaleLastChangedDate:(id)a3 sender:(id)a4;
- (id)localeForMessage:(id)a0 outgoingMessageHistory:(id)a1 defaultLocale:(id)a2 defaultLocaleLastChangedDate:(id)a3 sender:(id)a4;

@end
