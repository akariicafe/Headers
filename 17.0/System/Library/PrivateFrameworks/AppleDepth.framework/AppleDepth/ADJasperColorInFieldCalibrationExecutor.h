@class ADCameraCalibration, ADStreamSyncMatch, ADEspressoBufferHandle, ADEspressoRunner, ADPointCloudAggregator, ADJasperColorInFieldCalibrationPipeline, ADStreamSync, ADJasperColorInFieldCalibrationExecutorParameters, ADJasperPointCloud;

@interface ADJasperColorInFieldCalibrationExecutor : ADExecutor {
    BOOL _isPrepared;
    ADEspressoRunner *_backendEspressoRunner;
    ADEspressoRunner *_frontendEspressoRunner;
    ADCameraCalibration *_mcamJCameraCalibration;
    ADPointCloudAggregator *_pcAggregator;
    ADJasperPointCloud *_aggregatedPointCloud;
    ADStreamSyncMatch *_lastSyncMatch;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    ADEspressoBufferHandle *_featuresOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendFeaturesInputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotZOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorXOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorYOutputEspressoBufferHandle;
    ADEspressoBufferHandle *_frontendRotErrorZOutputEspressoBufferHandle;
    unsigned long long _frontendFeaturesInputElementSize;
    unsigned long long _backendFeaturesOutputElementSize;
    void *_backendResultAggregated;
    unsigned long long _backendSingleResultSize;
    unsigned int _backendResultAggregationCounter;
    double _lastColorTimestamp;
    BOOL _preProcessInputColorFrameDone;
    ADStreamSync *_streamSync;
    struct { void /* unknown type, empty encoding */ columns[4]; } _prevJasperPose;
}

@property (readonly, nonatomic) ADJasperColorInFieldCalibrationPipeline *pipeline;
@property (copy, nonatomic) ADJasperColorInFieldCalibrationExecutorParameters *executorParameters;
@property (retain, nonatomic) ADCameraCalibration *colorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *jasperCameraCalibration;
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
- (long long)numberOfExecutionSteps;
- (long long)preprocessInputColorFrame:(struct __CVBuffer { } *)a0 colorPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 jasperPointClouds:(id)a2 jasperPoses:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 jasperCameraCalibration:(id)a4 colorCameraCalibration:(id)a5 timestamp:(double)a6;
- (long long)preprocessPushedInputs;
- (long long)pushColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 metadata:(id)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)pushJasperPointCloud:(id)a0 timestamp:(double)a1 metadata:(id)a2 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushJasperPointCloud:(id)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })rectifyColorCameraExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)updatePcAggregator;

@end
