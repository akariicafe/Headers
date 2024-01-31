@class NSLocale;

@interface AXMLocSupport : NSObject

@property (retain, nonatomic) NSLocale *en_USLocale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)baseLanguageForLocale:(id)a0;
- (BOOL)localeBaseLanguageIsEnglish:(id)a0;
- (id)localeForLanguageCode:(id)a0;
- (id)localeMatchingBaseLanguageOfLocale:(id)a0 fromLocales:(id)a1;

@end
