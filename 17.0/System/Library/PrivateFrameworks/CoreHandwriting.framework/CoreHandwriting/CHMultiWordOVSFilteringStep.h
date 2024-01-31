@class CHStringOVSChecker;

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep {
    CHStringOVSChecker *_ovsStringChecker;
}

- (void).cxx_destruct;
- (id)initWithOVSStringChecker:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
