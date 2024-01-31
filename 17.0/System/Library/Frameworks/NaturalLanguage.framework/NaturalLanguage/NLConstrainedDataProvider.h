@class NSArray, NSDictionary, NLDataProvider;

@interface NLConstrainedDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    struct _NLConstraintParameters { BOOL splitSentences; unsigned long long minSplitTokens; unsigned long long maxSplitTokens; unsigned long long maxTokens; unsigned long long maxLabels; unsigned long long maxVocabularySize; } _parameters;
    NSArray *_locators;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (void).cxx_destruct;
- (id)configuration;
- (id)labelMap;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (id)documentFrequencyMap;
- (id)initWithDataProvider:(id)a0 parameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1 modelTrainer:(id)a2;
- (id)instanceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)vocabularyMap;

@end
