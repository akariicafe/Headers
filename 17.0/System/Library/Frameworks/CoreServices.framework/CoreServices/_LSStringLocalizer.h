@class NSArray, NSString, _LSBundleProvider, _LSLazyPropertyList, _LSStringsFileContent;

@interface _LSStringLocalizer : NSObject {
    _LSStringsFileContent *_stringsContent;
    _LSLazyPropertyList *_unlocalizedInfoPlistStrings;
    NSArray *_bundleLocalizations;
    NSArray *_bundleLocalizationsWithDefaultPrefLocs;
}

@property (class, copy) NSArray *preferredLocalizationsForXCTests;
@property (class, readonly) _LSStringLocalizer *coreTypesLocalizer;
@property (class, readonly) NSString *missingLocalizationPlaceholder;

@property (readonly, retain) _LSBundleProvider *bundleProvider;

+ (void)findKeysToLocalizeInInfoDictionary:(id)a0 forArrayKey:(struct __CFString { } *)a1 stringKey:(struct __CFString { } *)a2 localizedKeys:(id)a3;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { } *)a0 infoDictionary:(id)a1 domains:(unsigned int)a2 delegatesMightBeMainBundle:(BOOL)a3 legacyLocalizationList:(BOOL)a4;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { } *)a0 infoDictionary:(id)a1 domains:(unsigned int)a2 legacyLocalizationList:(BOOL)a3;
+ (void)gatherLocalizedStringsForLSBundleProvider:(id)a0 infoDictionary:(id)a1 domains:(unsigned int)a2 delegatesMightBeMainBundle:(BOOL)a3 legacyLocalizationList:(BOOL)a4;
+ (id)localizedStringForCanonicalString:(id)a0 preferredLocalizations:(id)a1 context:(struct LSContext { id x0; } *)a2;
+ (id)localizedStringsForCanonicalString:(id)a0 context:(struct LSContext { id x0; } *)a1;
+ (id)newFrameworkBundleLocalizer;
+ (id)preferredLocalizationsForXCTests;
+ (void)setPreferredLocalizationsForXCTests:(id)a0;
+ (BOOL)useLegacyLocalizationListForPlatform:(unsigned int)a0 sdkVersion:(unsigned int)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)enumerateLocalizedStringsForKeys:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateLocalizedStringsUsingBlock:(id /* block */)a0;
- (id)initWithBundleProvider:(id)a0 stringsFile:(id)a1 legacyLocalizationList:(BOOL)a2;
- (id)initWithBundleURL:(id)a0 stringsFile:(id)a1;
- (id)initWithBundleURL:(id)a0 stringsFile:(id)a1 checkMainBundle:(BOOL)a2 legacyLocalizationList:(BOOL)a3;
- (id)initWithBundleURL:(id)a0 stringsFile:(id)a1 legacyLocalizationList:(BOOL)a2;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0 stringsFile:(id)a1;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0 stringsFile:(id)a1 legacyLocalizationList:(BOOL)a2;
- (id)initWithDatabase:(id)a0 bundleUnit:(unsigned int)a1 delegate:(unsigned int)a2;
- (id)initWithDatabase:(id)a0 pluginUnit:(unsigned int)a1;
- (id)localizedStringDictionaryWithString:(id)a0 defaultValue:(id)a1;
- (id)localizedStringWithString:(id)a0 inBundle:(struct __CFBundle { } *)a1 localeCode:(id)a2;
- (id)localizedStringWithString:(id)a0 inBundle:(struct __CFBundle { } *)a1 preferredLocalizations:(id)a2;
- (id)localizedStringWithString:(id)a0 preferredLocalizations:(id)a1;
- (id)localizedStringsWithStrings:(id)a0 preferredLocalizations:(id)a1;

@end
