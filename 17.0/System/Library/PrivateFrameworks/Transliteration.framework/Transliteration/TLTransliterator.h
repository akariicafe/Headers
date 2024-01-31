@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { struct __compressed_pair<TLCompositeTransliterator *, std::default_delete<TLCompositeTransliterator>> { struct TLCompositeTransliterator *__value_; } __ptr_; } _compositeTransliterator;
}

- (id)initWithLocale:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)generateCandidatesForInputWord:(id)a0 candidateContext:(id)a1 maxCandidatesCount:(long long)a2;
- (void)flushDynamicLearningCache;
- (void)learnCandidate:(id)a0 candidateContext:(id)a1;
- (void)resetDynamicLearningCache;
- (void)unlearnCandidate:(id)a0 candidateContext:(id)a1;

@end
