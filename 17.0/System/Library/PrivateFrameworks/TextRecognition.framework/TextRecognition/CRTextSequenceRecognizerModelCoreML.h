@class MLModel, CRNeuralRecognizerConfiguration;

@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
}

@property (readonly, nonatomic) MLModel *model;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)configuration;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithMLConfiguration:(id)a0 error:(id *)a1;
- (id)inputBatchFromLineRegions:(id)a0 image:(id)a1 regionWidth:(double)a2 configuration:(id)a3 rectifier:(id)a4;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (id)predictionFromImg_input:(id)a0 error:(id *)a1;
- (BOOL)shouldSaturateInputBatchesForConfiguration:(id)a0;

@end
