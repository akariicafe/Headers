@interface CHReorderSCTCConfusionStep : CHPostprocessingStep {
    void **_icuTransliterator;
    long long _maxResultCount;
}

- (void)dealloc;
- (id)initWithMaxResultCount:(long long)a0;
- (id)process:(id)a0 options:(id)a1;

@end
