@class SIPeopleSegmentationData, SIImageInputData, ARImageRotationTechnique, SIPeopleSegmentationAlgorithm;

@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    SIPeopleSegmentationAlgorithm *_algorithm;
    SIImageInputData *_imageInputData;
    SIPeopleSegmentationData *_peopleSegmentationOutputLandscape;
    SIPeopleSegmentationData *_peopleSegmentationOutputPortrait;
    int frameCount;
}

@property (nonatomic) BOOL shouldOperateOnHighResolutionImages;

- (id)init;
- (void)dealloc;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_prepareOnce:(BOOL)a0;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
