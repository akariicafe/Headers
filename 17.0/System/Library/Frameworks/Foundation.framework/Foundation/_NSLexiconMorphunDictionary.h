@class NSString, NSLocale;

@interface _NSLexiconMorphunDictionary : NSObject {
    NSLocale *_appropriateLocale;
    struct MANAConfigurableAnalyzer { } *_analyzer;
    struct MTokenizer { } *_tokenizer;
    const struct MDDictionaryMetaData { } *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *languageCode;

- (void)dealloc;
- (id)initWithLanguage:(id)a0;
- (void)_iterateFormsOfWord:(id)a0 usingBlock:(id /* block */)a1;
- (id)allPossibleWordAttributesForWord:(id)a0;
- (id)preferredPronoun:(id)a0 forTermOfAddress:(id)a1 morphology:(id)a2 dependency:(id)a3;

@end
