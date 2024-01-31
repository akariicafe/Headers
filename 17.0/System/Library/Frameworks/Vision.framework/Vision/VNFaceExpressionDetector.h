@interface VNFaceExpressionDetector : VNDetector {
    struct shared_ptr<vision::mod::LandmarkAttributes> { struct LandmarkAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } m_FaceAttributesImpl;
    BOOL _modelFilesWereMemmapped;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)a0;
+ (id)createExpressionDetectionDictionaryFromScores:(id)a0;
+ (int)expressionTypeFromString:(id)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
