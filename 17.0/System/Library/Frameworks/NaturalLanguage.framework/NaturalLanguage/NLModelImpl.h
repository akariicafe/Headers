@class NLGazetteer, NSDictionary, NLModelConfiguration, NSData, NLEmbedding;

@interface NLModelImpl : NSObject

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long systemVersion;
@property (readonly, copy) NSDictionary *labelMap;
@property (readonly, copy) NSDictionary *vocabularyMap;
@property (readonly, copy) NSDictionary *documentFrequencyMap;
@property (readonly, copy) NSData *customEmbeddingData;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly, copy) NSDictionary *trainingInfo;
@property (readonly, copy) NLGazetteer *gazetteer;
@property (readonly, copy) NLEmbedding *embedding;
@property (readonly, copy) NSData *embeddingData;

- (id)modelData;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelArraysForTokenArrays:(id)a0;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelsForTokens:(id)a0;

@end
