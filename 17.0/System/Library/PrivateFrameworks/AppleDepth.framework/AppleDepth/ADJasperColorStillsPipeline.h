@class ADJasperColorStillsPipelineParameters, ADNetworkProvider, ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor, ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor, ADImageDescriptor, ADEspressoStillImageInferenceDescriptor;

@interface ADJasperColorStillsPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADNetworkProvider *_correctionBackendNetworkProvider;
    ADNetworkProvider *_correctionFrontendNetworkProvider;
    ADEspressoStillImageInferenceDescriptor *_inferenceDesc;
    ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor *_correctionBackendInferenceDesc;
    ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor *_correctionFrontendInferenceDesc;
    ADImageDescriptor *_processedDepthDesc;
    BOOL _isDisparity;
    void /* unknown type, empty encoding */ _STDWeights;
    float _scaledEFL;
    float _STDThreshold;
}

@property (copy, nonatomic) ADJasperColorStillsPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)inferenceDescriptor;
- (long long)projectJasperPoints:(id)a0 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotateBy:(long long)a2 projectedPointsBuffer:(struct __CVBuffer { } *)a3;
- (id)correctionBackendInferenceDescriptor;
- (id)correctionFrontendInferenceDescriptor;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1 depthUnits:(unsigned long long)a2;
- (long long)postProcessJasperToColorCorrectionWithAngles:(float *)a0 errors:(float *)a1 originalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 correctedTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 colorCameraCalibration:(id)a4 colorImageScale:(float)a5 transformCorrectionResults:(id *)a6;
- (long long)postProcessJasperToColorTransformCorrection:(id)a0 originalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 correctedTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a2;
- (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1;
- (long long)processJasperToColorCorrectionIntermediateResultWithBackendEspressoFeaturesOutput:(const float *)a0 frontendEspressoFeaturesInput:(float *)a1 featuresDimensions:(id)a2;
- (id)processedDepthOutputDescriptor;
- (long long)projectJasperPointsForJasperToColorTransformCorrection:(id)a0 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotateBy:(long long)a2 projectedPointsBuffer:(struct __CVBuffer { } *)a3;

@end
