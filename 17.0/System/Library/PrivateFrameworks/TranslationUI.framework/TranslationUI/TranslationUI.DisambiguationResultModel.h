@interface TranslationUI.DisambiguationResultModel : NSObject <_LTDisambiguableResultDelegate, _LTDisambiguableResultObserving> {
    void /* unknown type, empty encoding */ disambiguableResult;
    void /* unknown type, empty encoding */ globalAttributeProvider;
    void /* unknown type, empty encoding */ linkAttributeProvider;
    void /* unknown type, empty encoding */ userSelectionHandler;
    void /* unknown type, empty encoding */ sourceLocale;
    void /* unknown type, empty encoding */ targetLocale;
    void /* unknown type, empty encoding */ excludedTypes;
    void /* unknown type, empty encoding */ renderMode;
    void /* unknown type, empty encoding */ _sourceAttributedText;
    void /* unknown type, empty encoding */ _targetAttributedText;
    void /* unknown type, empty encoding */ displaySource;
}

- (void)disambiguableResult:(id)a0 didChangeResultForSentence:(id)a1 withSelection:(id)a2;
- (void)disambiguableResultDidUpdate:(id)a0;
- (id)excludedTypesForResult:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
