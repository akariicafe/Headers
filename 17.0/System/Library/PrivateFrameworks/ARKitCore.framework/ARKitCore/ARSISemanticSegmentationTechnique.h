@class SISceneSegmentationAlgorithm, NSString, SISceneUnderstandingAlgorithm, ARImageRotationTechnique;

@interface ARSISemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } *_outputNormalPixelBufferPool;
    struct __CVPixelBufferPool { } *_outputUncertaintyPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledNormalsPixelBufferPool;
    ARImageRotationTechnique *_normalsRotationTechnique;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    ARImageRotationTechnique *_confidenceUncertaintyRotationTechnique;
    SISceneSegmentationAlgorithm *_sceneSegmentationAlgorithm;
    SISceneUnderstandingAlgorithm *_sceneUnderstandingAlgorithm;
    double _lastResultPushTimestamp;
    BOOL _isLegacyModel;
    int _numClasses;
}

@property (readonly, nonatomic) BOOL shouldUseSynchronizedUltraWide;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createUncertaintyMaskedSegmentationBuffer:(struct __CVBuffer { } *)a0 fromSegmentationBuffer:(struct __CVBuffer { } *)a1 uncertaintyBuffer:(struct __CVBuffer { } *)a2 maskValue:(unsigned char)a3;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_captureMLRunNetworkInputImageData:(double)a0 cameraType:(long long)a1 imageWidth:(unsigned long long)a2 imageHeight:(unsigned long long)a3;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (long long)_mapUIDeviceOrientation:(long long)a0;
- (void)_prepareOnce:(BOOL)a0;
- (id)_rotateImageData:(id)a0 withRotationTechnique:(id)a1 rotationNeeded:(long long)a2;
- (BOOL)_scaleOutputBuffersIfNeededForTargetResolution:(struct CGSize { double x0; double x1; })a0 segmentationPixelBuffer:(struct __CVBuffer **)a1 confidencePixelBuffer:(struct __CVBuffer **)a2 normalPixelBuffer:(struct __CVBuffer **)a3 uncertaintyPixelBuffer:(struct __CVBuffer **)a4;
- (BOOL)_scalePixelOutputBuffer:(struct __CVBuffer **)a0 toTargetResolution:(struct CGSize { double x0; double x1; })a1 description:(id)a2;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)changeEspressoConfig:(id)a0;
- (id)createResultDataFromOutputSegmentation:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1 outputNormalize:(struct __CVBuffer { } *)a2 outputUncertainty:(struct __CVBuffer { } *)a3 inputImageData:(id)a4 originalData:(id)a5 rotationNeeded:(long long)a6 regionOfInterest:(struct CGSize { double x0; double x1; })a7;
- (id)initLegacyAlgorithmUsingSynchronizedUltrawideWhenAvailable:(BOOL)a0;
- (id)initUsingSynchronizedUltrawideWhenAvailable:(BOOL)a0;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
