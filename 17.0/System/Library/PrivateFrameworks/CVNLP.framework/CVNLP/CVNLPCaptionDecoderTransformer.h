@class NSDictionary, NSArray;

@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder

@property (nonatomic) unsigned long long startID;
@property (nonatomic) unsigned long long endID;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (nonatomic) unsigned long long maxCaptionLen;
@property (nonatomic) unsigned long long vocabSize;
@property (nonatomic) unsigned long long outputVocabSize;
@property (retain, nonatomic) NSDictionary *vocab;
@property (retain, nonatomic) NSArray *decoderBlocks;
@property (nonatomic) unsigned long long beamSize;
@property (nonatomic) struct CVNLPBeamSearch { } *beamSearch;
@property (nonatomic) struct CVNLPBeamSearch { } *filterBeamSearch;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_loadVocabFile:(id)a0;
- (void)_createBeamSearch:(id)a0 runTimeParams:(id)a1;
- (void)_loadNetwork:(id)a0 options:(id)a1 runTimeParams:(id)a2;
- (id)computeCaptionForImageWithInputs:(id)a0 genderOption:(int)a1;
- (id)computeCaptionForImageWithInputsImpl:(id)a0 genderOption:(int)a1;
- (id)initWithOptions:(id)a0 runTimeParams:(id)a1;
- (id)performanceResults;

@end
