@class NSArray, NSMapTable, NSString, NSLocale;

@interface INStringLocalizer : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMapTable *bundlesByIdentifier;
@property (readonly, nonatomic) NSMapTable *bundlesByURL;
@property (readonly, nonatomic) NSMapTable *bundleLocalizations;
@property (readonly, nonatomic) NSMapTable *preferredBundleLocalizations;
@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)alternativeLocales;
+ (id)siriLocalizer;
+ (id)localizerForLanguage:(id)a0;

- (id)init;
- (struct __CFBundle { } *)bundleWithIdentifier:(id)a0 fileURL:(id)a1;
- (id)initWithLanguageCode:(id)a0;
- (void).cxx_destruct;
- (id)localizationsForBundle:(struct __CFBundle { } *)a0;
- (id)preferredLocalizationsForBundle:(struct __CFBundle { } *)a0;
- (BOOL)matchesBundleLocalizations:(struct __CFBundle { } *)a0;

@end
