@class NSLock, NSLocale;

@interface EMFStringStemmer : NSObject {
    struct sb_stemmer { } *_stemmer;
    NSLock *_stemmerLock;
}

@property (readonly, retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long encoding;

+ (unsigned char)supportsLocale:(id)a0;
+ (struct sb_stemmer { } *)_createSnowballStemmerForLocale:(id)a0;
+ (id)stemmerLanguageNameForLocale:(id)a0;
+ (id)supportedLanguageNames;

- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)stemToken:(id)a0;
- (id)stemTokens:(id)a0;

@end
