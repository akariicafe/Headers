@interface NLNLPLanguageModel : NLLanguageModel {
    long long _granularity;
}

- (long long)granularity;
- (double)conditionalProbabilityForEntry:(id)a0 context:(id)a1;
- (double)conditionalProbabilityForWord:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maxEntriesPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(id)a0 maxWordsPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)generatesPredictions;
- (id)initWithLocalization:(id)a0 options:(id)a1;
- (id)sessionWithOptions:(id)a0;

@end
