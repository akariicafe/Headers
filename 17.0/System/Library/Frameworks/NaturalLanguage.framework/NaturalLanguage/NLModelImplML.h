@class MLModel, NLModelConfiguration, NSString;

@interface NLModelImplML : NLModelImpl {
    MLModel *_mlModel;
    NLModelConfiguration *_configuration;
    NSString *_inputName;
    NSString *_outputName;
}

- (id)modelData;
- (void).cxx_destruct;
- (id)configuration;
- (id)initWithMLModel:(id)a0 configuration:(id)a1;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelsForTokens:(id)a0;

@end
