@class NSString, NSBundle, NSMutableDictionary, NSArray, NSSet;

@interface BRLTTableEnumerator : NSObject

@property (class, readonly, nonatomic) NSBundle *systemTranslatorBundle;

@property (copy, nonatomic) NSString *translatorBundlePath;
@property (retain, nonatomic) NSMutableDictionary *languageAgnosticIdentifiersToTables;
@property (readonly, nonatomic) NSArray *translatorBundles;
@property (readonly, nonatomic) NSSet *supportedLocales;
@property (readonly, nonatomic) NSSet *supportedLanguageLocales;
@property (readonly, nonatomic) NSSet *languageAgnosticTableIdentifiers;

+ (id)localizedNameForLanguage:(id)a0;
+ (id)defaultTableForLocale:(id)a0;
+ (id)localizedNameForLanguageAgnosticTableIdentifier:(id)a0;
+ (id)localizedNameForServiceWithIdentifier:(id)a0;
+ (id)tableEnumeratorWithSystemBundlePath;

- (void).cxx_destruct;
- (id)languageAgnosticTablesInBundle:(id)a0;
- (id)initWithTranslatorBundlesPath:(id)a0;
- (id)languageAgnosticTablesForIdentifier:(id)a0 inBundle:(id)a1;
- (id)tablesForLocale:(id)a0 inBundle:(id)a1;

@end
