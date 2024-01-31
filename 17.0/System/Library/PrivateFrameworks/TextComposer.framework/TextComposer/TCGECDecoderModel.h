@interface TCGECDecoderModel : NSObject <TCGECModel> {
    void *_embeddings;
    struct MontrealNeuralNetwork { } *_spanDetector;
    struct MontrealNeuralNetwork { } *_gecDecoder;
    unsigned long long _kNumFragments;
    unsigned long long _embeddingDimension;
    unsigned long long _spanCategories;
}

- (void)dealloc;
- (id)embeddingsForTokenizedSentence:(id)a0;
- (id)classifierPredictions:(float *)a0 tokenCount:(unsigned long long)a1;
- (id)decoderPredictions:(float *)a0 fragmentCount:(unsigned long long)a1;
- (void)enumerateIssuesForSentence:(id)a0 checkTermination:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)initWithModelPath:(id)a0 OTABundlePath:(id)a1 options:(id)a2;
- (BOOL)useANEWithOptions:(id)a0;

@end
