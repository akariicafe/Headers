@class NSString, NSDictionary, CRNeuralRecognizerConfiguration, NSURL, NSNumber;

@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel>

@property (nonatomic) int *codemapArray;
@property (nonatomic) unsigned long long codemapSize;
@property (nonatomic) long long ctcBlankLabelIndex;
@property (retain, nonatomic) NSDictionary *outputShape;
@property (retain, nonatomic) NSNumber *outputWidthDownscale;
@property (retain, nonatomic) NSNumber *outputWidthOffset;
@property (retain, nonatomic) NSNumber *outputFormatVersion;
@property (readonly) CRNeuralRecognizerConfiguration *configuration;
@property (readonly) NSURL *modelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultURLOfModelInThisBundle;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })characterBoxesOffsets;
- (id)inputBatchFromLineRegions:(id)a0 image:(id)a1 regionWidth:(double)a2 configuration:(id)a3 rectifier:(id)a4;
- (id)populateInputBatchData:(float *)a0 lineRegions:(id)a1 image:(id)a2 batchSize:(long long)a3 width:(double)a4 configuration:(id)a5 rectifier:(id)a6;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (void)releaseIntermediateBuffers;
- (BOOL)supportCharacterBoxes;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })wordBoxesOffsets;

@end
