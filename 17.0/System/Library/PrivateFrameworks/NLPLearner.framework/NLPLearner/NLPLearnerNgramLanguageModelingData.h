@interface NLPLearnerNgramLanguageModelingData : NLPLearnerLanguageModelingData

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (id)initWithLocale:(id)a0;
- (void)addPreprocessedExample:(void *)a0;

@end
