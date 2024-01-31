@class ADStreamSyncMatch, ADPearlColorInFieldCalibrationPipeline, ADEspressoBufferHandle, ADEspressoRunner, NSDictionary, ADStreamSync, ADPearlColorInFieldCalibrationExecutorParameters, ADCameraCalibration;

@interface ADPearlColorInFieldCalibrationExecutor : ADExecutor {
    BOOL _isPrepared;
    ADEspressoRunner *_backendEspressoRunner;
    ADEspressoRunner *_frontendEspressoRunner;
    ADCameraCalibration *_mcamPCameraCalibration;
    BOOL _preProcessInputColorFrameDone;
    ADStreamSyncMatch *_lastSyncMatch;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedPearl;
    ADEspressoBufferHandle *_featuresOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotationXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotationYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendErrorYOutputEspressoBufferHandle;
    unsigned long long _frontendFeaturesInputElementSize;
    unsigned long long _backendFeaturesOutputElementSize;
    void *_backendResultAggregated;
    unsigned long long _backendSingleResultSize;
    unsigned int _backendResultAggregationCounter;
    double _lastColorTimestamp;
    NSDictionary *_preprocessedColorMetadata;
    NSDictionary *_preprocessedPearlMetadata;
    ADStreamSync *_streamSync;
    struct { void /* unknown type, empty encoding */ columns[4]; } _prevPearlPose;
}

@property (readonly, nonatomic) ADPearlColorInFieldCalibrationPipeline *pipeline;
@property (copy, nonatomic) ADPearlColorInFieldCalibrationExecutorParameters *executorParameters;
@property (retain, nonatomic) ADCameraCalibration *colorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *pearlCameraCalibration;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } vmcamToWmcamExtrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } wmcamToMcamExtrinsics;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)prepare;
- (long long)allocateIntermediateBuffers;
- (long long)clearFeaturesAggregator;
- (void)deallocateEspressoBuffers;
- (long long)executePreprocessedInputsWithInterSessionData:(id)a0 outResult:(id)a1;
- (long long)executeWithInterSessionData:(id)a0 outResult:(id)a1;
- (long long)executeWithInterSessionData:(id)a0 result:(id)a1;
- (id)initForEngineType:(unsigned long long)a0;
- (id)initForEngineType:(unsigned long long)a0 andExecutorParameters:(id)a1;
- (BOOL)normalizedDX:(struct __CVBuffer { } *)a0 toDepth:(struct __CVBuffer { } *)a1 withMultiplier:(double)a2 andOffset:(double)a3;
- (long long)numberOfExecutionSteps;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 pearlDepth:(struct __CVBuffer { } *)a1 pearlPoses:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 pceCameraCalibration:(id)a3 pearlCameraCalibrationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 colorCameraCalibration:(id)a5 timestamp:(double)a6;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 pearlNormalizedDX:(struct __CVBuffer { } *)a1 pearlPoses:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 disparityNormalizationMultiplier:(double)a3 disparityNormalizationOffset:(double)a4 pceCameraCalibration:(id)a5 pearlCameraCalibrationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 colorCameraCalibration:(id)a7 timestamp:(double)a8;
- (long long)preprocessPushedInputs;
- (long long)pushColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 metadata:(id)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)pushPearlDepth:(struct __CVBuffer { } *)a0 timestamp:(double)a1 metadata:(id)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushPearlDepth:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })rectifyColorCameraExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
