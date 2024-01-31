@class SISceneSegmentationAlgorithm, SISceneSegmentationNetworkConfiguration, OUCVPixelBufferRotate, SISceneSegmentationData;

@interface OUSemanticSegmentation : NSObject {
    OUCVPixelBufferRotate *cvRotate90;
    OUCVPixelBufferRotate *cvRotate90r;
    OUCVPixelBufferRotate *cvRotate180;
    OUCVPixelBufferRotate *cvRotate180r;
    OUCVPixelBufferRotate *cvRotate270;
    OUCVPixelBufferRotate *cvRotate270r;
    SISceneSegmentationAlgorithm *siSceneSegmentationAlgorithm;
    SISceneSegmentationNetworkConfiguration *semanticConfig;
    SISceneSegmentationData *semResultData;
    long long semanticModel;
    long long deviceOrientation;
    BOOL _initRotater;
    BOOL _initSegModel;
}

- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)generateSemanticOnWideCameraWithFrame:(id)a0;
- (BOOL)setupRotater:(id)a0;

@end
