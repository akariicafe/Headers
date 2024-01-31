@class CHStringOVSChecker;

@interface CHSemanticTokenizerStep : CHPostprocessingStep {
    void *_wordLanguageModel;
    CHStringOVSChecker *_ovsStringChecker;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWordLanguageModel:(void *)a0 ovsStringChecker:(id)a1;
- (id)process:(id)a0 options:(id)a1;

@end
