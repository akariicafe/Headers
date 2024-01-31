@class ADEspressoRunner, NSString, ADJasperColorStillsPipeline, ADJasperPointCloud, ADJasperColorStillsExecutorParameters, ADEspressoBufferHandle;

@interface ADJasperColorStillsExecutor : ADExecutor {
    BOOL _isPrepared;
    ADJasperColorStillsPipeline *_pipeline;
    NSString *_correctionLogString;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmPreProcessedJasperForCorrection;
    ADJasperPointCloud *_aggregatedPointCloud;
    ADJasperPointCloud *_aggregatedPointCloudBeforeCorrection;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmUnscaledProcessedDepth;
    ADEspressoRunner *_correctionBackendEspressoRunner;
    ADEspressoRunner *_correctionFrontendEspressoRunner;
    ADEspressoBufferHandle *_calibFeaturesOutputBuffer;
    float *_calibFeaturesOutput;
    float *_calibFeaturesInput;
    float *_calibAnglesOutput;
    float *_calibErrorsOutput;
}

@property (copy, nonatomic) ADJasperColorStillsExecutorParameters *executorParameters;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloudArray:(id)a1 pointCloud2ColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCameraCalibration:(id)a3 outDepthMap:(struct __CVBuffer **)a4;
- (long long)prepareForEngineType:(unsigned long long)a0 inputROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initForDevice:(id)a0;
- (long long)prepareForEngineType:(unsigned long long)a0 inputSize:(struct CGSize { double x0; double x1; })a1;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloudArray:(id)a1 jasper2ColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCameraCalibration:(id)a3 outDepthMap:(struct __CVBuffer **)a4;
- (id)getIntermediates;
- (long long)numberOfExecutionSteps;

@end
