@class ADNetworkProvider, ADEspressoMonocularInferenceDescriptor, ADMonocularPipelineParameters, ADImageDescriptor;

@interface ADMonocularPipeline : NSObject {
    long long _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularInferenceDescriptor *_inferenceDesc;
    ADImageDescriptor *_processedDepthDesc;
}

@property (copy, nonatomic) ADMonocularPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)a0 andParameters:(id)a1;
- (id)initWithInputPrioritization:(long long)a0;
- (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1;
- (id)processedDepthOutputDescriptor;

@end
