@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep {
    BOOL _transliterateSentences;
    void **_icuTransliterator;
}

- (void)dealloc;
- (id)initWithTransliterateSentences:(BOOL)a0;
- (id)process:(id)a0 options:(id)a1;

@end
