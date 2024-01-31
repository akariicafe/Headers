@class CRNeuralTextRecognizer;

@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (retain) CRNeuralTextRecognizer *neuralRecognizer;

- (void).cxx_destruct;
- (void)cancel;
- (id)decodingStats;
- (id)identifierForTextRegion:(id)a0;
- (id)inferenceStats;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)recognizerForIdentifier:(id)a0;

@end
