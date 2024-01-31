@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {
    struct shared_ptr<vision::mod::ImageAnalyzer> { struct ImageAnalyzer *__ptr_; struct __shared_weak_count *__cntrl_; } _imageAnalyzer;
    struct _Geometry2D_size2D_ { float height; float width; } _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelPathForConfiguration:(id)a0 error:(id *)a1;
+ (BOOL)providesSceneLabelsForConfiguration:(id)a0;
+ (BOOL)providesSegmentationLabelsForConfiguration:(id)a0;
+ (id)sceneLabelsFilePathForConfiguration:(id)a0 error:(id *)a1;
+ (id)segmentationLabelsFilePathForConfiguration:(id)a0 error:(id *)a1;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })inputImageSize;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void *)a0 identifierAcceptingBlock:(id /* block */)a1 operationPointsProvider:(id)a2 originatingRequestSpecifier:(id)a3 qosClass:(unsigned int)a4 error:(id *)a5;
- (id)supportedClassificationIdentifiersAcceptedByBlock:(id /* block */)a0 error:(id *)a1;

@end
