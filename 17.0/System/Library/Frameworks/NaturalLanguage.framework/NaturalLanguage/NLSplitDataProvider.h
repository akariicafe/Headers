@class NSArray, NLDataProvider;

@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (void).cxx_destruct;
- (id)configuration;
- (id)labelMap;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (id)documentFrequencyMap;
- (id)initWithDataProvider:(id)a0 indexes:(id)a1;
- (id)instanceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)vocabularyMap;

@end
