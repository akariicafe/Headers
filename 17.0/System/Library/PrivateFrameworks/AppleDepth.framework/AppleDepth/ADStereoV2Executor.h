@class ADStereoV2ExecutorParameters, ADStereoV2Pipeline, ADEspressoBufferHandle;

@interface ADStereoV2Executor : ADExecutor {
    BOOL _isPrepared;
    ADStereoV2Pipeline *_pipeline;
    ADEspressoBufferHandle *_temporalSmoothingCurrentFeaturesRatioMinBuffer;
    ADEspressoBufferHandle *_temporalSmoothingPreviousFeaturesRatioMinBuffer;
    struct __CVBuffer { } *_refColor;
    struct __CVBuffer { } *_itmChunkyRefColor;
    struct __CVBuffer { } *_itmCroppedScaledRefColor;
    struct __CVBuffer { } *_itmRotatedRefColor;
    struct __CVBuffer { } *_auxColor;
    struct __CVBuffer { } *_itmChunkyAuxColor;
    struct __CVBuffer { } *_itmCroppedScaledAuxColor;
    struct __CVBuffer { } *_itmRotatedAuxColor;
    struct __CVBuffer { } *_itmPrevDepthFeatures;
    struct __CVBuffer { } *_itmPrevColorFeatures;
    struct __CVBuffer { } *_disparity;
    struct __CVBuffer { } *_itmDepthFeaturesOutput;
    struct __CVBuffer { } *_itmColorFeaturesOutput;
}

@property (copy, nonatomic) ADStereoV2ExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct __CVBuffer { } *prevColorFeatures;
@property (readonly, nonatomic) struct __CVBuffer { } *prevDepthFeatures;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 outDisparityMap:(struct __CVBuffer **)a2;
- (id)getIntermediates;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0;

@end
