@class NSData, NSString, NSArray, TextProcessorInference, NSMutableDictionary, NSDictionary, DataSourceInference, NSMutableArray, TextProcessorTrain, DataSourceTrain, _EARLMTKaldiVocab, SimpleMmapBuffer;

@interface _EARLMTGlobalNNLM : NSObject {
    NSDictionary *_recipe;
    unsigned long long _numParam;
    unsigned long long _numWordsTrain;
    unsigned long long _numWordsEval;
    NSMutableArray *_data;
    TextProcessorInference *_textProcessorInference;
    DataSourceInference *_fofeInferenceSource;
    TextProcessorTrain *_textProcessorTrain;
    DataSourceTrain *_fofeTrainSource;
    NSString *_language;
    NSString *_assetPath;
    float *_weightsRawPtr;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _weights;
    SimpleMmapBuffer *_mmappedWeights;
    NSDictionary *_tensors;
    NSDictionary *_tensorsWeightMap;
    NSDictionary *_tensorInfo;
    BOOL _weightsAreUpdated;
    NSMutableDictionary *_partialUpdateOffsets;
    SimpleMmapBuffer *_mmappedPartialWeights;
}

@property (copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSData *delta;
@property (copy, nonatomic) NSMutableArray *trainData;
@property (copy, nonatomic) NSMutableArray *evalData;
@property (readonly, nonatomic) NSMutableDictionary *results;
@property (readonly, nonatomic) BOOL deltaIsPartial;
@property (readonly, nonatomic) _EARLMTKaldiVocab *vocab;

+ (void)initialize;
+ (id)attachmentURL:(id)a0 withName:(id)a1;
+ (id)compressedAttachmentURLFromRecipe:(id)a0 attachments:(id)a1;

- (id)train;
- (id)initWithRecipe:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)evaluate;
- (id)setup;
- (id)loadData;
- (id)_fetchTensorInfo:(id)a0;
- (id)computeDelta:(BOOL)a0;
- (id)evaluatePartialDelta;
- (id)findTensorsIndicesByKeyWord:(id)a0 tensorInfo:(id)a1;
- (id)getEvalTask:(id *)a0;
- (id)getTrainTask:(id *)a0;
- (id)initWithRecipe:(id)a0 assetPath:(id)a1;
- (id)loadWeight;
- (id)restoreFromLatestWeights:(id)a0;
- (id)saveWeight:(id)a0;

@end
