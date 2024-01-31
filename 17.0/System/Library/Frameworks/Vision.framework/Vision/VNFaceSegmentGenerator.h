@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceSegmenterDNN> { struct FaceSegmenterDNN *__ptr_; struct __shared_weak_count *__cntrl_; } _faceSegmenterDNN;
}

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (float)_faceSegmenterMaximumInputImageAspectRatio;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)a0 error:(id *)a1;
- (BOOL)_getFaceSegmenterInputImageSize:(struct CGSize { double x0; double x1; } *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;

@end
