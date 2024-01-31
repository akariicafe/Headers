@interface CACVocabularyImportExportUtilities : NSObject

+ (id)exportToURL:(id)a0;
+ (unsigned long long)_importVocabularyEntries:(id)a0 didFindOverflow:(BOOL *)a1;
+ (id)_localeIdentifiersRepresentedByVocabularyEntries:(id)a0;
+ (id)_vocabularyEntriesFromSimpleTextListString:(id)a0 usingLocaleIdentifier:(id)a1;
+ (id)defaultExportURL;
+ (id)importFromURL:(id)a0;
+ (unsigned long long)maximumNumberOfAllowedEntries;

@end
