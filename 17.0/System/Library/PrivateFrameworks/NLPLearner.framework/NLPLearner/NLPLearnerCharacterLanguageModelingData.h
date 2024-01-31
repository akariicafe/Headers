@class CVNLPTokenIDConverter;

@interface NLPLearnerCharacterLanguageModelingData : NLPLearnerLanguageModelingData {
    CVNLPTokenIDConverter *_tokenConverter;
}

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (void)addResource:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadFromCoreDuet:(id)a0 limitSamplesTo:(unsigned long long)a1;

@end
