@class NLEmbedding, NSData;

@interface NLModelImplE : NLModelImpl {
    NLEmbedding *_embedding;
    NSData *_embeddingData;
}

- (id)modelData;
- (unsigned long long)systemVersion;
- (void).cxx_destruct;
- (id)embedding;
- (id)embeddingData;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelsForTokens:(id)a0;

@end
