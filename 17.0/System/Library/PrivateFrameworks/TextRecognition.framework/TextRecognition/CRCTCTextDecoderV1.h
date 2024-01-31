@class CRTextSequenceRecognizerModel, NSString, CRNeuralRecognizerConfiguration, CRRegex, CRCtcBeamSearch;

@interface CRCTCTextDecoderV1 : NSObject <CRTextDecoding>

@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (retain, nonatomic) CRCtcBeamSearch *beamSearch;
@property (retain, nonatomic) CRRegex *regExpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)correctLMDecodingWithRegex:(id)a0 noLMDecoding:(id)a1;
- (BOOL)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)lmDecodeFeaturesWithInfo:(id)a0 activationMaps:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (void)maxDecodeFeaturesWithInfo:(id)a0 activationMaps:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)shouldDecodeWithLM;

@end
