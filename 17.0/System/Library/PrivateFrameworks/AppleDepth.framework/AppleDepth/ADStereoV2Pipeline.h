@class ADEspressoStereoV2InferenceDescriptor, ADStereoV2PipelineParameters, ADNetworkProvider;

@interface ADStereoV2Pipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoStereoV2InferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADStereoV2PipelineParameters *pipelineParameters;
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)inferenceDescriptor;
- (long long)adjustForEngine:(unsigned long long)a0;
- (long long)preProcessColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;

@end
