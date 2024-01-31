@class NSMutableString;

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    void *_tagger;
    NSMutableString *_string;
}

+ (id)dominantLanguageForString:(id)a0;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dominantLanguage;
- (void)processString:(id)a0;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;

@end
