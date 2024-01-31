@class ADMutableJasperPointCloud, ADDensifiedLiDARFocusAssistPipeline, ADDensifiedLiDARFocusAssistExecutorParameters;

@interface ADDensifiedLiDARFocusAssistExecutor : ADExecutor {
    BOOL _isPrepared;
    ADDensifiedLiDARFocusAssistPipeline *_pipeline;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorProcessingSession;
    struct __CVBuffer { } *_itmPreProcessedLidar;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmUnprocessedUncertainty;
    ADMutableJasperPointCloud *_itmPovChangedPointCloud;
}

@property (copy, nonatomic) ADDensifiedLiDARFocusAssistExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedOutputSize;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)prepare;
- (long long)prepareForColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)updateColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 lidarToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCameraCalibration:(id)a3 outputDepthMap:(struct __CVBuffer **)a4 outputConfidenceMap:(struct __CVBuffer **)a5 outputCalibration:(id *)a6;
- (id)getIntermediates;
- (id)initWithEngineType:(unsigned long long)a0;
- (long long)numberOfExecutionSteps;

@end
