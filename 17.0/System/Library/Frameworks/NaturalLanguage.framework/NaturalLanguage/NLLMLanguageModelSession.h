@class NLTokenizer;

@interface NLLMLanguageModelSession : NLTokenIDBasedLanguageModelSession {
    void *_model;
    NLTokenizer *_tokenizer;
}

- (void)reset;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)adaptToToken:(id)a0 context:(id)a1;
- (void)adaptToTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;
- (BOOL)addTokenForString:(id)a0 tokenID:(unsigned int *)a1;
- (void)applyExponentialDecay;
- (long long)blocklistStatusForString:(id)a0 matchType:(long long)a1;
- (long long)blocklistStatusForTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1 matchType:(long long)a2;
- (id)conditionalProbabilityForString:(id)a0 context:(id)a1;
- (id)conditionalProbabilityForToken:(id)a0 context:(id)a1;
- (id)conditionalProbabilityForTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;
- (void)enumeratePredictionsForContext:(id)a0 maximumPredictions:(unsigned long long)a1 maximumTokensPerPrediction:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1 maximumPredictions:(unsigned long long)a2 maximumTokensPerPrediction:(unsigned long long)a3 withBlock:(id /* block */)a4;
- (void)flushDynamicData;
- (BOOL)getFirstDynamicTokenID:(unsigned int *)a0 lastDynamicTokenID:(unsigned int *)a1;
- (id)initWithLanguageModel:(id)a0 options:(id)a1;
- (void)pruneToSize:(unsigned long long)a0;
- (void)recordWithDifferentialPrivacy:(id)a0;
- (BOOL)shouldAdaptToTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1;
- (void)unadaptToToken:(id)a0 context:(id)a1;
- (void)unadaptToTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;
- (float)usageCountForTokenID:(unsigned int)a0;

@end
