@class ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor, ADDensifiedLiDARFocusAssistPipelineParameters, ADNetworkProvider;

@interface ADDensifiedLiDARFocusAssistPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (long long)changePointCloudPOV:(id)a0 targetCamera:(id)a1 lidarToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 outputPointCloud:(id)a3;
- (id)initWithEspressoEngine:(unsigned long long)a0;
- (id)initWithEspressoEngine:(unsigned long long)a0 andParameters:(id)a1;
- (long long)postProcessUncertainty:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2;
- (long long)projectLidarPoints:(id)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 projectedPointsBuffer:(struct __CVBuffer { } *)a2;

@end
